
#include <stdio.h>
//Find Factor number
long factorCheck(int n){
    int i = 1;
    while(i <= n){
        if (n%i == 0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}
int main() {
    int n;
    printf("Inter the number: ");
    scanf("%d",&n);
    //set the number and checking factor
    printf("Factor number are : ")
    factorCheck(n);
    return 0;
}