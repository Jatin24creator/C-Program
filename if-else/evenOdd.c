// even Odd
#include<stdio.h>
int main(){
    //declare variables
    int a;
    // take user input
    printf("Enter a number: ");
    scanf("%d", &a);
    // check if the number is even or odd
    if(a%2 == 0){
        printf("%d is even",a);
    }
    else{
        printf("%d is odd",a);
    }
}