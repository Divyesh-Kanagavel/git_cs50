#include <stdio.h>
#include <string.h>

void l_search_name(const char* arr[], int length, char* name){
for(int i=0;i<length;i++){
if(strcmp(arr[i], name) == 0){
printf("Found\n");
return;
}
}

printf("Not found\n");


}



int main(){

const char* names[4] = {"Divyesh", "Harsha", "Kanagavel", "Shantha"};

char* name = "Divyesh";
l_search_name(names, 4, name);
return 0;
}
