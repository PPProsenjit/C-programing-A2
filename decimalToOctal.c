#include <stdio.h>
int decimal(int dec){
    int octal[32], i = 0;
    // conversion 
      while (dec > 0) {
        octal[i++] = dec % 8;
        dec /= 8;
    }
    //Octal output display
    printf("Octal is : ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", octal[j]);
}
int main() {
    int dec;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    decimal(dec);
    return 0;
}
