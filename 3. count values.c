#include <string.h>
#include <stdio.h>

int main(void){
//declare vowel variable
char string[6];
string[1] = 'e';
string[2] = 'd';
string[3] = 'd';
string[4] = 'i';
string[5] = 'e';
for(int i=0; i< strlen(string); i++){
    if(string.substring(i,1) == 'a'||'e'||'i'||'o'||'u'){ //idk what substring means
        vowel = vowel + 1;
        }
        }
printf("there were %d vowels", vowel);
return 0;
}