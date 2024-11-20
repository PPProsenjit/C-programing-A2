#include <stdio.h>
int binary(int num){
    int  dec_num = 0;
    //initialization base value 1 2^0
    int base = 1;
    int temp = num;
    while(temp){
        
        int last_num = temp % 10;
        temp = temp / 10;
        //multiplying and adding decimal value
        dec_num = dec_num + last_num * base;
       //updating base number 
        base = base * 2; 
    }
    return dec_num;
 
}
int main() {
    int num;
    printf("Enter binary number: ");
    scanf("%d", &num);
    printf("Decimal number is %d",binary(num));
    return 0;
}
