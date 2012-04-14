#include "DCPU16.h"
#include "DCPU16TargetMachine.h"
#include "llvm/PassManager.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

extern "C" void LLVMInitializeDCPU16Target() {
  // Register the target.
  RegisterTargetMachine<DCPU16TargetMachine> X(TheDCPU16Target);
}

DCPU16TargetMachine::DCPU16TargetMachine(const Target &T, StringRef TT, 
                                         StringRef CPU, StringRef FS,
                                         Reloc::Model RM, CodeModel::Model CM
                                         )
  : LLVMTargetMachine(T, TT, CPU, FS, RM, CM) {
}

bool DCPU16TargetMachine::addPassesToEmitFile(PassManagerBase &PM,
                                 formatted_raw_ostream &Out,
                                 CodeGenFileType FileType,
                                 CodeGenOpt::Level OptLevel,
                                 bool DisableVerify) {
  return false;
}


