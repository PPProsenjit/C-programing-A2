#include<stdio.h>
long leapYear(int year){
    // if the year is devide in 4 and not devide in 100 this year is liap year.
    // or if the year is devide in 400 than this year also leap year.
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 )
    {
        printf("%d year is leap year. ", year);
    }
    else 
    printf(" %d year is not a leap year.", year);
}
int main(){
    int year ;
    printf("Enter the year:  ");
    scanf("%d",&year);
    leapYear(year);
}