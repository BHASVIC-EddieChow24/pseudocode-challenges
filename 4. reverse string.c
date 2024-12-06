#include <stdio.h>
#include <string.h>

int main(void){
char string[10], reverse[10];
printf("Enter your string:");
fflush(stdin);
gets(string);
for(int i=0 ; i< strlen(string); i++){ //i think it should be a backwards loop with i--
    reverse = reverse + string[strlen(string)-i]; //then instead of this it could be reverse = reverse + string[i]
    }
printf("string reversed is %s", reverse);
return 0;
}
