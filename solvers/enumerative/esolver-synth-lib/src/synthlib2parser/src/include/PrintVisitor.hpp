// PrintVisitor.hpp --- 
// 
// Filename: PrintVisitor.hpp
// Author: Abhishek Udupa
// Created: Sat Jan 18 16:42:05 2014 (-0500)
// 
// 
// Copyright (c) 2013, Abhishek Udupa, University of Pennsylvania
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. All advertising materials mentioning features or use of this software
//    must display the following acknowledgement:
//    This product includes software developed by The University of Pennsylvania
// 4. Neither the name of the University of Pennsylvania nor the
//    names of its contributors may be used to endorse or promote products
//    derived from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER ''AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// 

// Code:


#if !defined __SYNTHLIB2_PARSER_PRINT_VISITOR_HPP
#define __SYNTHLIB2_PARSER_PRINT_VISITOR_HPP

#include "SynthLib2ParserFwd.hpp"
#include "SynthLib2ParserIFace.hpp"

namespace SynthLib2Parser {

    class PrintVisitor : public ASTVisitorBase
    {
    private:
        u32 IndentLevel;
        inline string GetIndent();
        ostream& Out;

    public:
        PrintVisitor(ostream& Out);
        virtual ~PrintVisitor();

        virtual void VisitProgram(const Program* Prog) override;

        virtual void VisitFunDefCmd(const FunDefCmd* Cmd) override;
        virtual void VisitFunDeclCmd(const FunDeclCmd* Cmd) override;
        virtual void VisitSynthFunCmd(const SynthFunCmd* Cmd) override;
        virtual void VisitSortDefCmd(const SortDefCmd* Cmd) override;
        virtual void VisitSetOptsCmd(const SetOptsCmd* Cmd) override;
        virtual void VisitVarDeclCmd(const VarDeclCmd* Cmd) override;
        virtual void VisitConstraintCmd(const ConstraintCmd* Cmd) override;
        virtual void VisitSetLogicCmd(const SetLogicCmd* Cmd) override;
        virtual void VisitCheckSynthCmd(const CheckSynthCmd* Cmd) override;
        virtual void VisitArgSortPair(const ArgSortPair* ASPair) override;

        virtual void VisitIntSortExpr(const IntSortExpr* Sort) override;
        virtual void VisitBVSortExpr(const BVSortExpr* Sort) override;
        virtual void VisitNamedSortExpr(const NamedSortExpr* Sort) override;
        virtual void VisitArraySortExpr(const ArraySortExpr* Sort) override;
        virtual void VisitRealSortExpr(const RealSortExpr* Sort) override;
        virtual void VisitFunSortExpr(const FunSortExpr* Sort) override;
        virtual void VisitBoolSortExpr(const BoolSortExpr* Sort) override;
        virtual void VisitEnumSortExpr(const EnumSortExpr* Sort) override;

        virtual void VisitLetBindingTerm(const LetBindingTerm* Binding) override;
        
        virtual void VisitFunTerm(const FunTerm* TheTerm) override;
        virtual void VisitLiteralTerm(const LiteralTerm* TheTerm) override;
        virtual void VisitSymbolTerm(const SymbolTerm* TheTerm) override;
        virtual void VisitLetTerm(const LetTerm* TheTerm) override;

        virtual void VisitLetBindingGTerm(const LetBindingGTerm* Binding) override;

        virtual void VisitFunGTerm(const FunGTerm* TheTerm) override;
        virtual void VisitLiteralGTerm(const LiteralGTerm* TheTerm) override;
        virtual void VisitSymbolGTerm(const SymbolGTerm* TheTerm) override;
        virtual void VisitLetGTerm(const LetGTerm* TheTerm) override;
        virtual void VisitConstantGTerm(const ConstantGTerm* TheTerm) override;
        virtual void VisitVariableGTerm(const VariableGTerm* TheTerm) override;

        virtual void VisitNTDef(const NTDef* Def) override;
        virtual void VisitLiteral(const Literal* TheLiteral) override;
    };

} /* end namespace */

#endif /* __SYNTHLIB2_PARSER_PRINT_VISITOR_HPP */


// 
// PrintVisitor.hpp ends here
