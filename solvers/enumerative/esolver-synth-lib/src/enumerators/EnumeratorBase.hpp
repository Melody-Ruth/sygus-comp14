// EnumeratorBase.hpp ---
//
// Filename: EnumeratorBase.hpp
// Author: Abhishek Udupa
// Created: Wed Jan 15 14:51:49 2014 (-0500)
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


#if !defined __ESOLVER_ENUMERATOR_BASE_HPP
#define __ESOLVER_ENUMERATOR_BASE_HPP

#include "../common/ESolverForwardDecls.hpp"
#include "../utils/UIDGenerator.hpp"

namespace ESolver {

    /* Abstract base class for all expression enumerators */
    class EnumeratorBase
    {
    protected:
        ESolver* Solver;
        static UIDGenerator ExpansionTypeUIDGenerator;

    public:
        EnumeratorBase(ESolver* Solver);
        virtual ~EnumeratorBase();
        ESolver* GetSolver() const;
        void Reset();

        // virtual methods to be implemented by sublasses
        virtual void EnumerateOfCost(uint32 Cost) = 0;

        // Callback for reset event for subclasses
        virtual void OnReset();
    };

} /* End namespace */

#endif /* __ESOLVER_ENUMERATOR_BASE_HPP */


//
// EnumeratorBase.hpp ends here
