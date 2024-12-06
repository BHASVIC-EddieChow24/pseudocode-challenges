#include <stdio.h>

int main(void){
    int max, array[5];
    array[0] = 9;
    array[1] = 2;
    array[2] = 7;
    array[3] = 3;
    array[4] = 3;
    for(int i= 0; i< 5; i++){
        if(i == 0){
            max = array[i];
            }
        else if(array[i]>max){
        max = array[i];
        }
    }
    printf("max value in array was %d", max);
    return 0;
    }
