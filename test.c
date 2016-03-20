#include <stdio.h>

void main(){

	union Data{
		int i;

	}data;
	
	data.i = 15;
	printf("%d \n",data.i);
	printf("Hello");
	char x;
	char *a = &x;
	printf("the size of x is %d nd the size of ptr is %d \n", sizeof(x), sizeof(a+1));

}
