include_directories( ${CMAKE_CURRENT_BINARY_DIR}/.. ${CMAKE_CURRENT_SOURCE_DIR}/.. )

add_llvm_library(LLVMDCPU16Info
  DCPU16TargetInfo.cpp
  )

add_llvm_library_dependencies(LLVMDCPU16Info
  LLVMMC
  LLVMSupport
  LLVMTarget
  )

add_dependencies()
