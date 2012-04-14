#ifndef DCPU16REGISTERINFO_H
#define DCPU16REGISTERINFO_H

#include "llvm/Target/TargetRegisterInfo.h"

#define GET_REGINFO_HEADER
#include "DCPU16GenRegisterInfo.inc"

namespace llvm {

class TargetInstrInfo;
class DCPU16TargetMachine;

struct DCPU16RegisterInfo : public DCPU16GenRegisterInfo {

};

}

#endif
