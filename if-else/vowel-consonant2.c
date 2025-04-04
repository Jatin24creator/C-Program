#include <stdio.h>
void check(char letter){
    if((letter =='a')||(letter =='e')||(letter =='i')||(letter =='o')||(letter =='u')){
        printf("%c is a vowel.",letter);
    }else{printf("%c is not a vowel.",letter);
    }
}
void main(){
    char letter;
    printf("Enter any letter: ");
    scanf("%c",&letter);
    check(letter);
}