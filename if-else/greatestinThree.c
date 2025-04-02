#include <stdio.h>
int main() {
    //declare the num1,num2,num3
    int num1,num2,num3;
    // take user input input of the numbers
    printf("Enter the three numbers: \n");
    scanf("%d %d %d",&num1,&num2,&num3);
    // if a>b move to a>c, declare a greates
    if(num1>num2){
        if(num1>num3){
            printf("%d is the greatest. \n",num1);
        }
        else if(num3>num2){
            printf("%d is the greatest. \n",num3);
        }
        else{
            printf("%d is the greatest. \n",num2);
        }
    } else if(num3>num2){
        if(num3>num1){
            printf("%d is the greatest. \n",num3);
        }   
 
    }
    else{
        printf("%d is the greatest \n",num2);
    }
}

