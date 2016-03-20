#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void modify(char *p1){
	
	char *p2 = p1;
	
	while (*p1 != '\0'){
		*p2 = *p1;	
		
		if(*p2 != 'a'){
			p2++;
		
		}

		p1++;
	}
	*p2 = '\0';
}

int main(){
	
	char *str = (char *) malloc(50*sizeof(char));

	strcpy(str, "anaconda");

	printf("\n %s", str);
	
	modify(str);

	printf("\n %s \n", str);
}
