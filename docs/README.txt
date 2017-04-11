****************************************************
Yuhang Xu	student number: 0926193
CIS*2520	assignment: A2
Due date : Oct.16.2016
****************************************************

************
Compilation
************
gcc src/calculator.c src/stack.c  -Iinclude -Wall -std=c99

./a.out 
***********************

************
Makefile
************
make

./make 
***********************

*****************
explanation
*****************

I made a menu for this program. enter 1 to enter the revered polish equation, 0 to exit program.

enter 1 will jump to next line. which you are able to enter the equation.

sample output is like:
Enter your equation press 1
quit press 0
1
12+53-*
result = 6
Enter your equation press 1
quit press 0

 Reference ：http://www.cprograms.in/Stack/push-pop-stack.html
*****************
limitation
*****************
The format of reversed polished equation must be correct,
else it will print out random number from stack;

there should not be any spaces between letters.

Bad error handling