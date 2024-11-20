#include<stdio.h>
long largeNumber(int num1, int num2, int num3){
    if (num1 > num2 ){
        if (num1 > num3){
            printf(" %d is greater than number %d and %d", num1, num2, num3);
        }
        else
        printf(" %d is greater than number %d and %d", num3, num1, num2);
    }
    else if( num2 > num3){
        printf(" %d is greater than number %d and %d", num2, num1, num3);
    }
    else {
        printf(" %d is greater than number %d and %d", num3, num1, num2);
    }
    return 0;
    
}
int main(){
    int num1, num2, num3 ;
    printf("Enter three number:  ");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);
    largeNumber(num1, num2, num3);
}