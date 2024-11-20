#include<stdio.h>
long primeCheck(int start, int end){
    int i , j , count;
    //loop for the range 1 to n
    for(i = start; i <= end; i++){
        count = 0; //counter initialization 
        //loop for the possible divisors.
        for( j = 2; j <= i/2; j++){
            //if the divisor is found.
            if(i % j == 0){
                count++;
                break;
            }
        }
        //if no divisors found and the number is not 1 than prime 
        //1 is not a prime because it has only one divisor
        if(count == 0 && i != 1){
            printf("%d, ", i);
        }
    }
}
int main(){
    int start, end ;
    printf("Enter the Range of the number start to end: ");
    scanf("%d %d",&start ,&end);
    primeCheck(start, end);
}