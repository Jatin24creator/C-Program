#include <stdio.h>
int main(){
    // declare the char variable to store the letter
    char letter; 
    // take user input
    printf("Enter the letter: \n");
    scanf("%c",&letter);
    // create the condition to check using or
    if((letter == 'a')||(letter == 'e')||(letter == 'i')||(letter == 'o')||(letter == 'u')){
        printf("%c is vowel",letter);
    } else{
        printf("%c is consonant",letter);
    }
}