/** 
 *  \file num_to_ascii.h 
 *  Declaration of some functions to convert numbers to ascii strings.
 */

#ifndef NUM_TO_ASCII_H
#define NUM_TO_ASCII_H

/**
 *  Converts an unsigned int to ascii, stores the result in str. Base 10.  
 *  @param num[in] The number to convert to ascii
 *  @param str[out] The location for the result. Make sure enough memory is
 *  allocated to contain the full integer as a string + terminating NUL.
 */
void uitoa(unsigned num, char* str);

#endif

