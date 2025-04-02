#include <stdio.h>
int main(){
    //declare the storage variable
    int num;
    // take user input
    printf("Enter the number: \n");
    scanf("%d",&num);
    // if num>0 = positive, else if num <0 = negative else 0
    if(num>0){
        printf("Enterred Number is Positive \n");
    }
    else if(num<0){
        printf("Enterred number is negative \n");
    }
    else{
        printf("Number is neither positive nor negative");
    }
}