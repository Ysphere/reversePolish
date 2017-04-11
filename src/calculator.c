#include <stdio.h>
#include <curses.h>
#include <stdlib.h> 
#include <string.h>
#define max 5 /*we may only have 5 variable in our stack*/

void pop(int stack[], int *top, int * num);
void push(int stack[], int *top, int num);

int main()
{
	
	int stack[max],data;
	int option =1;
	char s[100];
	int top = -1; 
	int i = 0;
	int length = 0;

while(option != 0) {
	printf("Enter your equation press 1\n"); /*Menu*/
	printf("quit press 0\n");
	scanf("%d", &option);

	if(option == 1) {
		scanf("%s",s);
		length = strlen(s);

		for(i = 0; i<length; i++) {
			if(s[i] >=49 && s[i] <=57) {
				data = s[i] - '0';
				push(stack, &top, data);
			}
			else if(s[i] == 43){ /* plus*/
				int a,b,c;
				pop(stack, &top, &data);
				a = data;
				pop(stack, &top, &data); /*we pop two numbers and store them in a,b*/
				b = data;
				c = a+b;
				push(stack, &top, c); /* number that's added will be put back to the stack*/

			}
			else if(s[i] == 42){ /* multiplication*/
				int e,f,g;
				pop(stack, &top, &data);
				e = data;
				pop(stack, &top, &data);
				f = data;
				g = e*f;
				push(stack, &top, g);
			}

			else if(s[i] == 45){ /* minus*/
				int h,j,k;
				pop(stack, &top, &data);
				h = data;
				pop(stack, &top, &data);
				j = data;
				k = j-h;
				push(stack, &top, k);
			}

			else if(s[i] == 47){ /* division*/
				int x,y,z;
				pop(stack, &top, &data);
				x = data;
				pop(stack, &top, &data);
				y = data;
				z = y-x;
				push(stack, &top, z);
			}
		}

		pop(stack, &top, &data);
		printf("result = %d\n", data); /*final result*/
		/*
		pop(stack, &top, &data);
		printf("stack = %d\n", data);

		pop(stack, &top, &data);
		printf("stack = %d\n", data);

		pop(stack, &top, &data);
		printf("stack = %d\n", data);
		*/

	}else if(option == 0) {
		break;
	}

}
		
return 0;

}


