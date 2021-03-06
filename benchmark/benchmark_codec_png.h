// Copyright 2019 Google LLC
//
// Use of this source code is governed by an MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT.

#ifndef PIK_BENCHMARK_BENCHMARK_CODEC_PNG_H_
#define PIK_BENCHMARK_BENCHMARK_CODEC_PNG_H_

#include <string>

#include "benchmark/benchmark_xl.h"

namespace pik {
ImageCodec* CreateNewPNGCodec(
    const BenchmarkArgs& args, const CodecContext& context);

// Registers the pik-specific command line options.
Status AddCommandLineOptionsPNGCodec(BenchmarkArgs* args);
}  // namespace pik

#endif  // PIK_BENCHMARK_BENCHMARK_CODEC_PNG_H_
