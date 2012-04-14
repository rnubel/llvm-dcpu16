LEVEL = ../../..
LIBRARYNAME = LLVMDCPU16CodeGen
TARGET = DCPU16

# Make sure that tblgen is run, first thing.
BUILT_SOURCES = DCPU16GenRegisterInfo.inc

DIRS = TargetInfo #MCTargetDesc

include $(LEVEL)/Makefile.common

