#include "DCPU16.h"
#include "llvm/Module.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

Target llvm::TheDCPU16Target;

extern "C" void LLVMInitializeDCPU16TargetInfo() { 
  RegisterTarget<Triple::UnknownArch> X(TheDCPU16Target, "dcpu16", "DCPU16");
}
