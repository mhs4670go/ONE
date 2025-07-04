/*
 * Copyright (c) 2025 Samsung Electronics Co., Ltd. All Rights Reserved
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __CIRCLE_MLIR_PASS_OPS_GREATER_OP_H__
#define __CIRCLE_MLIR_PASS_OPS_GREATER_OP_H__

#include <circle-mlir/dialect/CircleDialect.h>

#include "ConvertHelper.h"

#include <mlir/Transforms/DialectConversion.h>

#include <src/Dialect/ONNX/ONNXOps.hpp>

#include <cassert>

namespace mlir
{
namespace Circle
{

class ConvGreater : public mlir::OpConversionPattern<mlir::ONNXGreaterOp>
{
public:
  using mlir::OpConversionPattern<mlir::ONNXGreaterOp>::OpConversionPattern;
  using OpAdaptor = typename mlir::ONNXGreaterOp::Adaptor;

  mlir::LogicalResult matchAndRewrite(mlir::ONNXGreaterOp op, OpAdaptor adaptor,
                                      mlir::ConversionPatternRewriter &rewriter) const override
  {
    assert(op.verify().succeeded());

    mlir::Value input = adaptor.getA();
    mlir::Value B = adaptor.getB();

    mlir::RankedTensorType intype = mlir::dyn_cast_or_null<mlir::RankedTensorType>(input.getType());
    mlir::RankedTensorType outtype = mlir::dyn_cast_or_null<mlir::RankedTensorType>(op.getType());

    rewriter.replaceOpWithNewOp<GreaterOp>(op, op.getType(), input, B);

    return mlir::success();
  }
};

} // namespace Circle
} // namespace mlir

#endif // __CIRCLE_MLIR_PASS_OPS_GREATER_OP_H__
