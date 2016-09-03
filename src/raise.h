/**
 * \file Contains a declaration of a dummy 'raise' function so that libGCC
 * doesn't whine all the time.
 */
#ifndef RAISE_H
#define RAISE_H

/** 
 * Define raise, libgcc doesn't seem to have it. 
 * @param sig[in] The signal to raise. Note that this function does not have
 * any effect, so if you're wondering what to put here you're doing it wrong.
 */
int raise(int sig);

#endif

