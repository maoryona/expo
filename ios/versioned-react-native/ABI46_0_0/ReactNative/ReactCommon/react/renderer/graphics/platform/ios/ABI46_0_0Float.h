/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include <CoreGraphics/CoreGraphics.h>
#include <limits>

namespace ABI46_0_0facebook {
namespace ABI46_0_0React {

/*
 * Exact type of float numbers which ideally should match a type behing
 * platform- and chip-architecture-specific float type.
 */
using Float = CGFloat;

} // namespace ABI46_0_0React
} // namespace ABI46_0_0facebook
