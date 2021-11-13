#include<stdio.h>
#include<string.h>


int main()
{

FILE* file = fopen("phonebook.csv","a");

if(file==NULL)
return 1;

char name[10];
char number[10];


printf("Enter a name: ");
scanf("%s",name);
printf("\n");

printf("Enter a number: ");
scanf("%s",number);
printf("\n");


fprintf(file, "%s,%s\n",name,number);
fclose(file);

return 0;
}


