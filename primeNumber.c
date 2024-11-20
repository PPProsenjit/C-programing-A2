
#include <stdio.h>
//checking the number is prime or not 
 int primeCheck(int n){
     int i = 2, c = 0;
     //1 is not a prime number because it's only one devisor
     if( n <= 1){
         printf("%d is not a prime number.\n",n);
     }
     else {
         while( i <= n/2){
             if ( n%i == 0){
             c++;
             break;
         }
         i++;
         }
         if(c == 0){
             printf("%d is a prime number.\n",n);
         }
         else
         printf("%d is not a prime number.\n",n);
     }
     return 0;
 }

int main() {
    int n;
    printf("Inter the positive number: ");
    scanf("%d",&n);
    primeCheck(n);
    return 0;
}