#include <stdio.h>


void merge(int array[], int left, int mid, int right){
int left_array_length = mid+1-left;
int right_array_length = right-mid;

int left_array[left_array_length];
int right_array[right_array_length];

for(int i=0;i<left_array_length; i++)
left_array[i] = array[left+i];

for(int j=0;j<right_array_length;j++)
right_array[j] = array[mid+j+1];


int left_array_index = 0;
int right_array_index = 0;
int array_index= left;



while((left_array_index < left_array_length) && (right_array_index < right_array_length)){
if(left_array[left_array_index]<=right_array[right_array_index]){
array[array_index] = left_array[left_array_index];
left_array_index++;
}
else{
array[array_index] = right_array[right_array_index];
right_array_index++;
}
array_index++;
}

while(left_array_index<left_array_length){
array[array_index] = left_array[left_array_index];
array_index++;
left_array_index++;
}

while(right_array_index < right_array_length){
array[array_index] = right_array[right_array_index];
array_index++;
right_array_index++;
}





}



void merge_sort(int arr[], int begin, int end)
{
if (begin>=end)
return;

int mid = begin + (end-begin)/2;

merge_sort(arr,begin,mid);
merge_sort(arr,mid+1,end);
merge(arr,begin,mid,end);
}





int main(){
int array[5] = {3,6,1,0,9};
merge_sort(array,0,4);

printf("The sorted array: ");
for(int i=0;i<5;i++){
printf("%i ",array[i]);
}

printf("\n");

return 0;
}
