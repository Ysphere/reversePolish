/**
 * Yuhang Xu (OCT 17 2016)
 * yuhang@uoguelph.ca
 * CIS*2520
 * Prof: F.Wang
 */

#include <stdio.h>
#include <curses.h>
#include <stdlib.h> 
#include <string.h>
#define max 5

#ifndef __YX_YXU_OPERATION__
#define __YX_YXU_OPERATION__

/*number get push into the stack*/
void push(int stack[], int *top, int num);

/*number come out the stack*/
void pop(int stack[], int *top, int * num);

#endif //__YX_YXUOPERATION__