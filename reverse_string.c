#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void reverse(char *str){
/* Function to reverse
*  the string in place*/

        char *p1;
        char *p2;
        char temp;
        int i;
        for(i=0;i<strlen(str)/2;i++){
                temp =str[i];
                str[i]= str[strlen(str)-i-1];
                str[strlen(str)-i-1] = temp;
        }
                
}

int main(int argc,char *argv[]){
        char *str = (char*) malloc(strlen(argv[1])*sizeof(char)+1);
        
        
        strcpy(str,argv[1]);
        
        printf("the string is: %s \n", str);
        reverse(str);
        printf("the reversed string is: %s \n", str);
        return 0;

}
