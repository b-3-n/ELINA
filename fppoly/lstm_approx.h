/*
 *
 *  This source file is part of ELINA (ETH LIbrary for Numerical Analysis).
 *  ELINA is Copyright © 2019 Department of Computer Science, ETH Zurich
 *  This software is distributed under GNU Lesser General Public License Version 3.0.
 *  For more information, see the ELINA project website at:
 *  http://elina.ethz.ch
 *
 *  THE SOFTWARE IS PROVIDED "AS-IS" WITHOUT ANY WARRANTY OF ANY KIND, EITHER
 *  EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO ANY WARRANTY
 *  THAT THE SOFTWARE WILL CONFORM TO SPECIFICATIONS OR BE ERROR-FREE AND ANY
 *  IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
 *  TITLE, OR NON-INFRINGEMENT.  IN NO EVENT SHALL ETH ZURICH BE LIABLE FOR ANY     
 *  DAMAGES, INCLUDING BUT NOT LIMITED TO DIRECT, INDIRECT,
 *  SPECIAL OR CONSEQUENTIAL DAMAGES, ARISING OUT OF, RESULTING FROM, OR IN
 *  ANY WAY CONNECTED WITH THIS SOFTWARE (WHETHER OR NOT BASED UPON WARRANTY,
 *  CONTRACT, TORT OR OTHERWISE).
 *
 */



#ifndef __LSTM_APPROX_H_INCLUDED__
#define __LSTM_APPROX_H_INCLUDED__

#ifdef __cplusplus
extern "C" {
#endif

#include "backsubstitute.h"

expr_t * lexpr_replace_maxpool_or_lstm_bounds(fppoly_internal_t * pr, expr_t * expr, neuron_t ** neurons);

expr_t * uexpr_replace_maxpool_or_lstm_bounds(fppoly_internal_t * pr, expr_t * expr, neuron_t ** neurons);

expr_t * lexpr_unroll_lstm_layer(fppoly_internal_t *pr, expr_t * expr, neuron_t ** neurons);

void create_lstm_layer(elina_manager_t *man, elina_abstract0_t *abs, size_t h, size_t *predecessors);

void handle_lstm_layer(elina_manager_t *man, elina_abstract0_t *abs, double **weights,  double *bias, size_t d, size_t h, size_t * predecessors, bool use_area_heuristic);

#ifdef __cplusplus
 }
#endif

#endif
