#include <stdio.h>
int decimal(int dec){
    int binary[32], i = 0;
    // conversion 
      while (dec > 0) {
        binary[i++] = dec % 2;
        dec /= 2;
    }
    //binary outpur display
    printf("Binary is : ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}
int main() {
    int dec;
    printf("Enter decimal number: ");
    scanf("%d", &dec);
    decimal(dec);
    return 0;
}
