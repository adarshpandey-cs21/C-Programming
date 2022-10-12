#include<stdio.h>
void main(){
    int a,b,c,greater;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    printf("Enter the three number: ");
    scanf("%d",&c);
    greater = a>b?a:b;
    greater = greater>c?greater:c;
    printf("%d is the greatest among the %d , %d & %d\n",greater,a,b,c);
}