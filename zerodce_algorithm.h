/*
 * zerodce_algorithm.h
 *
 *  Created on: 2021¦~10¤ë30¤é
 *      Author: walter
 */

#ifndef INCLUDE_ZERODCE_ALGORITHM_H_
#define INCLUDE_ZERODCE_ALGORITHM_H_
#include "zerodce_memAlloc.h"
#include "sharedVar.h"

void qNorm();
void qDownSample();
void qConv1st();
void qConv2nd();
void qConv3rd();
void qUpSample();
void qEnhance();

void qDCENet();

#endif /* INCLUDE_ZERODCE_ALGORITHM_H_ */
