#include<stdio.h>
int max2num(int a,int b){
    if(a>b){
        printf("%d is the max\n",a);
    }
    else if(b>a){
        printf("%d is the max\n",b);
    }
    else{
        printf("both are equal\n");
    }
}
int main(){
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    max2num(a,b);

}