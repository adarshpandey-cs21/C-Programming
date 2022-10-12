#include<stdio.h>
int main(){
    int m;
    printf("Enter the year to be checked\n");
    scanf("%d\n",& m);
    if(m%4==0 & m%100!=0 || m%400==0 & m%100==0){
        printf("%d is leap year\n");
    }
    else
    printf("%d is not leap year\n");



}