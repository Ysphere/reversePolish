#include <stdio.h>
#include <curses.h>
#include <stdlib.h> 
#include <string.h>
#define max 5

void push(int stack[], int *top, int num){
   if(*top < max ){
      *top = *top + 1;
      stack[*top] = num;
   }else{ /*If the stack has 5 value in side, the program will exit*/
      printf("The stack reached its Max\n");
      printf("Program error\n");
      exit(0);
   }
}

void pop(int stack[], int *top, int * num)
{
   if(*top >= 0 ) /*pop out the value that's stored if there is one*/
   {
      *num = stack[*top];
      *top = *top - 1;
   }
   else /*if we have nothing in our stack*/
   {
      printf("empty stack\n");
      exit(0);
   }
}