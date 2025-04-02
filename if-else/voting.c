#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(18<=age){
        printf("Elgible");
    }else{
        printf("Not Eligible");
    }
}