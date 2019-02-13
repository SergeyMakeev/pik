// Copyright 2018 Google Inc. All Rights Reserved.
//
// Use of this source code is governed by an MIT-style
// license that can be found in the LICENSE file or at
// https://opensource.org/licenses/MIT.

#ifndef ADAPTIVE_RECONSTRUCTION_H_
#define ADAPTIVE_RECONSTRUCTION_H_

// "In-loop" filter: edge-preserving filter + adaptive clamping to DCT interval.

#include "adaptive_reconstruction_fwd.h"
#include "epf.h"
#include "data_parallel.h"
#include "image.h"
#include "multipass_handler.h"
#include "quantizer.h"

namespace pik {

// Edge-preserving smoothing plus clamping the result to the quantized interval
// (which requires `quantizer` to reconstruct the values that
// were actually quantized). `in` is the image to filter:  opsin AFTER gaborish.
// `non_smoothed` is BEFORE gaborish.
Image3F AdaptiveReconstruction(const Image3F& in, const Image3F& non_smoothed,
                               const Quantizer& quantizer,
                               const ImageI& raw_quant_field,
                               const ImageB& sigma_lut_ids,
                               const AcStrategyImage& ac_strategy,
                               const EpfParams& params, ThreadPool* pool,
                               AdaptiveReconstructionAux* aux = nullptr);

}  // namespace pik

#endif  // ADAPTIVE_RECONSTRUCTION_H_
