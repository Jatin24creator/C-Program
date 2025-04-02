#include<stdio.h>
int main(){
    // declare the data type and variable to store the character
    char letter;

    // print and take the user input from the user
    printf("Enter the letter \n");
    scanf("%c",&letter);
    // print the size of the character maybe it will give away the ascii value
    printf("ASCII value of the character %c is %d",letter,letter);
}