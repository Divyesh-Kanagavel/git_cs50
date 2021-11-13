#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
char *t = "Divyesh";

char* s = malloc(strlen(t)+1);

for(int i=0,n=strlen(t); i<n+1;i++){
s[i] = t[i];
}


printf("%c", t[0]);

free(s);
return 0;
}
