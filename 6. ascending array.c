#include <stdio.h>

int main(void){

int array[5], temp;
array[0] = 9;
array[1] = 2;
array[2] = 7;
array[3] = 1;
array[4] = 5;
for(int i=1 ; i< 5; i++){
    if(array[i-1]>array[i]){
        temp = array[i];
        array[i]=array[i-1];
        array[i-1]=temp;
        i=1;
        }
    }
printf("%d", array);
return 0;
}
//i dont think this one works