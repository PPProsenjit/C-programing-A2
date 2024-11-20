
#include <stdio.h>
//reverse number check
long reverseCheck(int n){
    int rev = 0;
    while(n > 0){
        rev = rev*10 + n%10;
        n = n/10;
    }
    return rev;
}
int main() {
    int n;
    printf("Inter the number: ");
    scanf("%d",&n);
    //checking this number palindrome or not
    if (n == reverseCheck(n)){
        printf("%d is a palindrome number:",n);
    }
    else 
    printf("%d is not a palindrome number",n);
    return 0;
}