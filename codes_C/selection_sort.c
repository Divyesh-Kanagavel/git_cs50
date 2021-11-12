#include <stdio.h>

int main(){

int array[5] = {3,1,6,4,9};
int temp = 0,smallest_index=0;
for(int i=0;i<4;i++){
smallest_index = i;
for(int j=i+1;j<5;j++){
if(array[j] < array[smallest_index]){

smallest_index = j;
}
}
temp = array[i];
array[i] = array[smallest_index];
array[smallest_index] = temp;
}

printf("The sorted array: ");
for(int i=0;i<5;i++) 
{
printf("%i ",array[i]);
}
printf("\n");

return 0;
}



