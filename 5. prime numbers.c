#include <stdio.h>

int main(void){
int num = 12;
int div = num-1; //i changed this from 'int div = num' so it doesnt divide by itself
int remainder;
do{
    remainder = num % div;
    div = div - 1;
    }
while (remainder != 0 && div != 1);

if(remainder == 0){
    printf("Not prime");
    }
else {
    printf("Prime");
    }
return 0;
}