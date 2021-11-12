#include <stdio.h>
#include <stdbool.h>

const int length = 5;

bool linear_search(int length, int arr[], int num){
for(int i=0;i<length;i++){
if(arr[i] == num){
printf("The number found at index, %i\n", i);
return 1;
}
else{
printf("Number not found\n");
return 0;
}
}
}



int main(){

int array[5] = {4,2,3,0,2};
int find_num = 6;

linear_search(5, array, find_num);
return 0;
}

