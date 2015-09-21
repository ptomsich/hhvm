/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-2013 Facebook, Inc. (http://www.facebook.com)     |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef incl_HPHP_JIT_VASM_LOWER_H_
#define incl_HPHP_JIT_VASM_LOWER_H_

#include "hphp/runtime/vm/jit/vasm.h"

namespace HPHP { namespace jit {

///////////////////////////////////////////////////////////////////////////////

struct Vunit;

///////////////////////////////////////////////////////////////////////////////

/*
 * Architecture-independent lowering pass.
 */
void vlower(Vunit& unit);

/*
 * Lower a single instruction.
 *
 * Replaces the instruction at `unit.blocks[b].code[i]` with an appropriate
 * sequence of zero or more instructions.
 */
void vlower(Vunit& unit, Vlabel b, size_t i);

///////////////////////////////////////////////////////////////////////////////

}}

#endif