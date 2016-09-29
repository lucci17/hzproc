/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Created by: Hang Zhang
 * ECE Department, Rutgers University
 * Email: zhang.hang@rutgers.edu
 * Copyright (c) 2016
 *
 * Feel free to reuse and distribute this software for research or 
 * non-profit purpose, subject to the following conditions:
 *  1. The code must retain the above copyright notice, this list of
 *     conditions.
 *  2. Original authors' names are not deleted.
 *  3. The authors' names are not used to endorse or promote products
 *      derived from this software 
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 */
#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "lib/HZPROC/HZPROC.c"
#else

#define HZPROC_assertSameGPU(...) THAssertMsg(THCTensor_(checkGPU)(__VA_ARGS__), \
  "Some of weight/gradient/input tensors are located on different GPUs. Please move them to a single one.")

#include "HZMapping.cu"
#include "HZAffineMap.cu"
#include "HZCropping.cu"
#include "HZFlipping.cu"

#endif // THC_GENERIC_FILE
