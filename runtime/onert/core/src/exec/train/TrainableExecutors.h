/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __ONERT_EXEC_TRAIN_TRAINABLE_EXECUTORS_H__
#define __ONERT_EXEC_TRAIN_TRAINABLE_EXECUTORS_H__

#include "TrainableExecutor.h"
#include "exec/IExecutors.h"
#include "ir/NNPkg.h"

namespace onert::exec::train
{

/**
 * @brief Class to gather executor set for trainable model NN package
 */
class TrainableExecutors : public IExecutors
{
public:
  /**
   * @brief Construct a new TrainableExecutors object
   */
  TrainableExecutors(void) = default;
  TrainableExecutors(const TrainableExecutors &) = delete;
  TrainableExecutors(TrainableExecutors &&) = default;

  /**
   * @brief Destroy the TrainableExecutors object
   */
  ~TrainableExecutors() = default;

public:
  TrainableExecutors &operator=(const TrainableExecutors &) = delete;
  TrainableExecutors &operator=(TrainableExecutors &&) = default;

public:
  void emplace(const ir::ModelIndex &model_index, const ir::SubgraphIndex &subg_index,
               std::unique_ptr<IExecutor> exec) override;

  TrainableExecutor *at(const ir::ModelIndex &model_index,
                        const ir::SubgraphIndex &subg_index) const override;

  TrainableExecutor *entryExecutor() const { return at(ir::ModelIndex{0}, ir::SubgraphIndex{0}); }

  uint32_t inputSize() const override;

  uint32_t outputSize() const override;

  const ir::OperandInfo &inputInfo(const ir::IOIndex &index) const override;

  const ir::OperandInfo &outputInfo(const ir::IOIndex &index) const override;

  const void *outputBuffer(const ir::IOIndex &index) const final;

  const backend::IPortableTensor *outputTensor(const ir::IOIndex &index) const final;

  void execute(const ExecutionContext &ctx) override;

  /**
   * @brief Train
   *
   * @param ctx           Execution context
   * @param training_step The number of iterations of an training process.
   *                      In other words, the number of gradient update.
   */
  void train(const ExecutionContext &ctx, uint32_t training_step);

  float getLoss(const ir::IOIndex &index) const;

  void iterateTrainableTensors(
    const std::function<void(const ir::OperandIndex &, const backend::train::ITrainableTensor *)>
      &fn) const;

private:
  // If you want to use I/O buffer on step, tensorpool should be alive until one step is finished
  // So this method get tensorpool from outside.
  // tensorpool is not defined as a member variable to avoid memory access conflict between threads.
  void forward(const ExecutionContext &ctx,
               std::vector<std::unique_ptr<backend::builtin::UserTensor>> &tensorpool,
               bool training);

private:
  // TODO Append model index to ModelIndex
  std::unordered_map<ir::SubgraphIndex, std::unique_ptr<TrainableExecutor>> _executors;
};

} // namespace onert::exec::train

#endif // __ONERT_EXEC_TRAIN_TRAINABLE_EXECUTORS_H__
