#include <stdio.h>

int main(void){
int total = 0, array[5];
array[0] = 4;
array[1] = 2;
array[2] = 7;
array[3] = 3;
array[4] = 8;
for(int i=0; i< 5; i++){
    total = total + array[i];
    }
printf("sum of array was %d", total);
return 0;
}
