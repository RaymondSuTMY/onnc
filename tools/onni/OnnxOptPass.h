//===- OnnxOptPass.h ------------------------------------------------------===//
//
//                             The ONNC Project
//
// See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#ifndef ONNC_ONNX_OPT_PASS_H
#define ONNC_ONNX_OPT_PASS_H
#include <onnc/Core/CustomPass.h>

namespace onnc {

class TargetBackend;

// XXX: Experimental

/** \class OnnxOptPass
 *  \brief [ONNX IR] Call ONNX optimizer
 */
class OnnxOptPass : public CustomPass<OnnxOptPass>
{
public:
  OnnxOptPass() = default;

  ReturnType runOnModule(Module& pModule) override;
};

OnnxOptPass *CreateOnnxOptPass();

} // namespace of onnc

#endif
