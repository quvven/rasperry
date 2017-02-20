//===--- AutoGenerated.h - The LLVM Compiler Driver -------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open
// Source License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
//  Interface to the autogenerated driver code.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_INCLUDE_COMPILER_DRIVER_AUTOGENERATED_H
#define LLVM_INCLUDE_COMPILER_DRIVER_AUTOGENERATED_H

namespace llvmc {
  class LanguageMap;
  class CompilationGraph;

  namespace autogenerated {

    int PreprocessOptions();
    int PopulateLanguageMap(LanguageMap& langMap);
    int PopulateCompilationGraph(CompilationGraph& graph);

    inline int RunInitialization (LanguageMap& M, CompilationGraph& G) {
      if (int ret = PreprocessOptions())
        return ret;
      if (int ret = PopulateLanguageMap(M))
        return ret;
      if (int ret = PopulateCompilationGraph(G))
        return ret;

      return 0;
    }
  }
}

#endif // LLVM_INCLUDE_COMPILER_DRIVER_AUTOGENERATED_H
