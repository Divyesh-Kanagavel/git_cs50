#include<stdio.h>

int main(){
int array[5] = {5,1,9,7,3};
int swaps=1;
int temp = 0;
while(swaps){
swaps=0;

for(int i=0;i<4;i++){
if(array[i+1]<array[i]){
temp = array[i];
array[i] = array[i+1];
array[i+1] = temp;
swaps+=1;
}
}
}

printf("Sorted array: ");
for(int i=0;i<5;i++){
printf("%i ",array[i]);
}
printf("\n");

return 0;
}

