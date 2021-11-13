#include <stdio.h>
#include <string.h>


int main(){

char t[10];
char s[10];
printf("Enter a string: ");
scanf("%s",t);




printf("Enter another string: ");
scanf("%s", s);

if(strcmp(s,t)==0)
printf("Same!\n");
else
printf("Different!\n");

return 0;
}


