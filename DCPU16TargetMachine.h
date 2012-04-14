#ifndef DCPU16TARGETMACHINE_H
#define DCPU16TARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetData.h"
#include "llvm/Target/TargetFrameLowering.h"

namespace llvm {
  
class DCPU16TargetMachine : public LLVMTargetMachine {
public:
  DCPU16TargetMachine(const Target &T, StringRef TT,
                   StringRef CPU, StringRef FS,
                   Reloc::Model RM, CodeModel::Model CM);
  virtual const TargetData *getTargetData() const { return 0; }

  virtual bool addPassesToEmitFile(PassManagerBase &PM,
                                   formatted_raw_ostream &Out,
                                   CodeGenFileType FileType,
                                   CodeGenOpt::Level OptLevel,
                                   bool DisableVerify);


};

}

#endif
