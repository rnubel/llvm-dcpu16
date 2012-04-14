//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Register Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern MCRegisterClass DCPU16MCRegisterClasses[];

namespace DCPU16 {
enum {
  NoRegister,
  A = 1,
  B = 2,
  C = 3,
  I = 4,
  J = 5,
  O = 6,
  PC = 7,
  SP = 8,
  X = 9,
  Y = 10,
  Z = 11,
  NUM_TARGET_REGS 	// 12
};
}

// Register classes
namespace DCPU16 {
enum {
  IntRegsRegClassID = 0
  };
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// MC Register Information
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

struct DCPU16GenMCRegisterInfo : public MCRegisterInfo {
  explicit DCPU16GenMCRegisterInfo(const MCRegisterDesc *D);
};

namespace {
  const unsigned A_Overlaps[] = { DCPU16::A, 0 };
  const unsigned B_Overlaps[] = { DCPU16::B, 0 };
  const unsigned C_Overlaps[] = { DCPU16::C, 0 };
  const unsigned I_Overlaps[] = { DCPU16::I, 0 };
  const unsigned J_Overlaps[] = { DCPU16::J, 0 };
  const unsigned O_Overlaps[] = { DCPU16::O, 0 };
  const unsigned PC_Overlaps[] = { DCPU16::PC, 0 };
  const unsigned SP_Overlaps[] = { DCPU16::SP, 0 };
  const unsigned X_Overlaps[] = { DCPU16::X, 0 };
  const unsigned Y_Overlaps[] = { DCPU16::Y, 0 };
  const unsigned Z_Overlaps[] = { DCPU16::Z, 0 };
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };
}

MCRegisterDesc DCPU16RegDesc[] = { // Descriptors
  { "NOREG",	0,	0,	0 },
  { "A",	A_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "B",	B_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "C",	C_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "I",	I_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "J",	J_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "O",	O_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "PC",	PC_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "SP",	SP_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "X",	X_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "Y",	Y_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  { "Z",	Z_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
};

namespace {     // Register classes...
  // IntRegs Register Class...
  static const unsigned IntRegs[] = {
    DCPU16::O, DCPU16::A, DCPU16::B, DCPU16::C, DCPU16::X, DCPU16::Y, DCPU16::Z, DCPU16::I, DCPU16::J, DCPU16::PC, DCPU16::SP, 
  };

  // IntRegs Bit set.
  static const unsigned char IntRegsBits[] = {
    0xfe, 0x0f, 
  };

}

MCRegisterClass DCPU16MCRegisterClasses[] = {
  MCRegisterClass(DCPU16::IntRegsRegClassID, "IntRegs", 2, 2, 1, 1, IntRegs, IntRegs + 11, IntRegsBits, sizeof(IntRegsBits)),
};

static inline void InitDCPU16MCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(DCPU16RegDesc, 12, RA, DCPU16MCRegisterClasses, 1);

}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Header Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"
#include <string>

namespace llvm {

struct DCPU16GenRegisterInfo : public TargetRegisterInfo {
  explicit DCPU16GenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
  unsigned getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const;
  unsigned composeSubRegIndices(unsigned, unsigned) const;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const;
};

namespace DCPU16 { // Register classes
  struct IntRegsClass : public TargetRegisterClass {
    IntRegsClass();
  };
  extern IntRegsClass	IntRegsRegClass;
  static TargetRegisterClass * const IntRegsRegisterClass = &IntRegsRegClass;
} // end of namespace DCPU16

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Register and Register Classes Information
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern MCRegisterClass DCPU16MCRegisterClasses[];
namespace {     // Register classes...
  // IntRegsVTs Register Class Value Types...
  static const EVT IntRegsVTs[] = {
    MVT::i16, MVT::Other
  };

}  // end anonymous namespace

namespace DCPU16 {   // Register class instances
  IntRegsClass	IntRegsRegClass;

  static const TargetRegisterClass* const NullRegClasses[] = { NULL };

  static const unsigned IntRegsSubclassMask[] = { 0x00000001, };

IntRegsClass::IntRegsClass()  : TargetRegisterClass(&DCPU16MCRegisterClasses[IntRegsRegClassID], IntRegsVTs, IntRegsSubclassMask, NullRegClasses, NullRegClasses) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &DCPU16::IntRegsRegClass,
  };
}

  static const TargetRegisterInfoDesc DCPU16RegInfoDesc[] = { // Extra Descriptors
    { 0, 0 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
    { 0, 1 },
  };

  static const char *const DCPU16SubRegIndexTable[] = { "" };


unsigned DCPU16GenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned DCPU16GenRegisterInfo::getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned DCPU16GenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *DCPU16GenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  assert(Idx == 0 && "Target has no sub-registers");
  return RC;
}

extern MCRegisterDesc DCPU16RegDesc[];
DCPU16GenRegisterInfo::DCPU16GenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(DCPU16RegInfoDesc, RegisterClasses, RegisterClasses+1,
                 DCPU16SubRegIndexTable) {
  InitMCRegisterInfo(DCPU16RegDesc, 12, RA, DCPU16MCRegisterClasses, 1);

}

} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

