/*
 * Copyright (c) 2024 Samsung Electronics Co., Ltd. All Rights Reserved
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

#ifndef ONERT_MICRO_TRAIN_TESTS_MODELS_NUMBERS_CLASSIFICATION_MODEL_H
#define ONERT_MICRO_TRAIN_TESTS_MODELS_NUMBERS_CLASSIFICATION_MODEL_H

#include <vector>
#include <cstring>

namespace onert_micro
{
namespace train
{
namespace test
{
namespace models
{
unsigned char numbers_classification_model[] = {
  0x18, 0x00, 0x00, 0x00, 0x43, 0x49, 0x52, 0x30, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x08, 0x00, 0x10, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0xec, 0x01, 0x00, 0x00, 0x18, 0x07, 0x00, 0x00, 0x74, 0x07, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0xd8, 0x01, 0x00, 0x00, 0xd0, 0x01, 0x00, 0x00, 0xb4, 0x01, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00,
  0x20, 0x01, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0xa8, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00,
  0x98, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xea, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x33,
  0x2e, 0x31, 0x00, 0x00, 0x4a, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x31, 0x2e, 0x35, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xd8, 0xf9, 0xff, 0xff, 0xdc, 0xf9, 0xff, 0xff, 0xe0, 0xf9, 0xff, 0xff, 0xe4, 0xf9, 0xff, 0xff,
  0xe8, 0xf9, 0xff, 0xff, 0x7a, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
  0x9e, 0xa4, 0x82, 0x3e, 0x14, 0x12, 0x7d, 0xbe, 0xd8, 0x20, 0x49, 0x3e, 0x7a, 0x2e, 0x8c, 0x3e,
  0x58, 0x5a, 0x11, 0xbe, 0xc0, 0xa4, 0xa2, 0x3e, 0x70, 0xcd, 0xd0, 0x3e, 0xba, 0x4e, 0xcb, 0xbe,
  0xe8, 0x97, 0x10, 0x3f, 0x7c, 0x0b, 0x0d, 0xbf, 0xf8, 0x4e, 0x9c, 0x3e, 0x6a, 0x60, 0x7b, 0xbe,
  0x14, 0xc6, 0xee, 0x3e, 0xa8, 0xba, 0x71, 0x3e, 0x30, 0x6a, 0x1e, 0x3f, 0x88, 0xb7, 0xe3, 0x3e,
  0x90, 0xc1, 0x9b, 0xbe, 0x3c, 0xbd, 0x43, 0x3e, 0x36, 0x3a, 0x95, 0x3e, 0x30, 0xf2, 0x8b, 0x3e,
  0x02, 0xc3, 0x16, 0x3f, 0x80, 0x27, 0xc6, 0x3e, 0x87, 0x30, 0x1e, 0xbf, 0x20, 0xff, 0xc6, 0x3e,
  0xe6, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x0c, 0x00, 0x00, 0x00, 0xfa, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00,
  0xd2, 0x7a, 0xac, 0xbe, 0x73, 0x88, 0xbe, 0xbe, 0xd0, 0x74, 0x75, 0xbe, 0x40, 0x74, 0xc8, 0x3d,
  0x16, 0xea, 0x9d, 0x3e, 0xe4, 0xc9, 0x10, 0x3e, 0x78, 0xeb, 0x8a, 0xbe, 0x07, 0x2e, 0xae, 0xbe,
  0xee, 0x46, 0x8a, 0xbe, 0x64, 0xf2, 0xb8, 0x3e, 0x44, 0xc5, 0x88, 0x3e, 0x6d, 0x83, 0x78, 0xbe,
  0xc8, 0x14, 0x6c, 0xbd, 0x64, 0x5f, 0xdd, 0xbd, 0x08, 0xbb, 0x6e, 0x3e, 0x8c, 0x54, 0xa4, 0xbe,
  0xa0, 0xe6, 0x83, 0x3e, 0x36, 0x1d, 0x87, 0x3e, 0x54, 0xd3, 0x44, 0x3e, 0xd8, 0x45, 0xa1, 0x3d,
  0x94, 0x21, 0x7d, 0x3e, 0x52, 0x5f, 0xcb, 0xbe, 0xec, 0x35, 0x8b, 0x3e, 0xd9, 0x2d, 0x41, 0xbe,
  0x4c, 0x30, 0xcb, 0xbd, 0x30, 0x5a, 0xe1, 0xbc, 0x7a, 0x6b, 0xd0, 0x3e, 0x72, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0xfc, 0xfa, 0xff, 0xff, 0x00, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x98, 0x01, 0x00, 0x00, 0x9c, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x30, 0x01, 0x00, 0x00,
  0xcc, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x52, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0xb8, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0a, 0x00,
  0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x1a, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x05, 0x20, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x17, 0x00, 0x10, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x18, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x14, 0x00, 0x13, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x07, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x18, 0x03, 0x00, 0x00,
  0xb0, 0x02, 0x00, 0x00, 0x5c, 0x02, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0xb4, 0x01, 0x00, 0x00,
  0x44, 0x01, 0x00, 0x00, 0xe8, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x1e, 0xfd, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x10, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00,
  0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f,
  0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x62, 0xfd, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x54, 0xfd, 0xff, 0xff,
  0x1e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38,
  0x30, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x38, 0x38, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75,
  0x6c, 0x32, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xaa, 0xfd, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x30, 0x00, 0x00, 0x00, 0x9c, 0xfd, 0xff, 0xff, 0x20, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65,
  0x6e, 0x5f, 0x38, 0x30, 0x2f, 0x52, 0x65, 0x73, 0x68, 0x61, 0x70, 0x65, 0x00, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0xf6, 0xfd, 0xff, 0xff,
  0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
  0xe8, 0xfd, 0xff, 0xff, 0x26, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x6d, 0x61, 0x78, 0x5f, 0x70, 0x6f, 0x6f, 0x6c, 0x69, 0x6e,
  0x67, 0x32, 0x64, 0x5f, 0x38, 0x34, 0x2f, 0x4d, 0x61, 0x78, 0x50, 0x6f, 0x6f, 0x6c, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x4e, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x06, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x40, 0xfe, 0xff, 0xff, 0x3b, 0x00, 0x00, 0x00,
  0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x63, 0x6f,
  0x6e, 0x76, 0x32, 0x64, 0x5f, 0x38, 0x34, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71,
  0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x32,
  0x64, 0x5f, 0x38, 0x34, 0x2f, 0x43, 0x6f, 0x6e, 0x76, 0x32, 0x44, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0xba, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0xac, 0xfe, 0xff, 0xff, 0x1e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f,
  0x38, 0x38, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x31, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00,
  0x13, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x2c, 0x00, 0x00, 0x00,
  0x08, 0xff, 0xff, 0xff, 0x1e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69,
  0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x66, 0x6c, 0x61, 0x74, 0x74, 0x65, 0x6e, 0x5f, 0x38, 0x30,
  0x2f, 0x43, 0x6f, 0x6e, 0x73, 0x74, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x5a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x4c, 0xff, 0xff, 0xff, 0x1e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x32, 0x64,
  0x5f, 0x38, 0x34, 0x2f, 0x43, 0x6f, 0x6e, 0x76, 0x32, 0x44, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0xaa, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x9c, 0xff, 0xff, 0xff, 0x2e, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75,
  0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x5f, 0x38, 0x30, 0x2f, 0x63, 0x6f, 0x6e, 0x76, 0x32, 0x64,
  0x5f, 0x38, 0x34, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64,
  0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x10, 0x00, 0x00, 0x00, 0x0c, 0x00,
  0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61,
  0x75, 0x6c, 0x74, 0x5f, 0x78, 0x3a, 0x30, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0b, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
  0x50, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xd0, 0xff, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19,
  0xdc, 0xff, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0xe8, 0xff, 0xff, 0xff,
  0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0xf4, 0xff, 0xff, 0xff, 0x11, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x11, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x11, 0x00, 0x00, 0x00,
  0x4f, 0x4e, 0x45, 0x2d, 0x74, 0x66, 0x6c, 0x69, 0x74, 0x65, 0x32, 0x63, 0x69, 0x72, 0x63, 0x6c,
  0x65, 0x00, 0x00, 0x00};
unsigned int numbers_classification_model_size = 1972;

} // namespace models
} // namespace test
} // namespace train
} // namespace onert_micro

#endif // ONERT_MICRO_TRAIN_TESTS_MODELS_NUMBERS_CLASSIFICATION_MODEL_H
