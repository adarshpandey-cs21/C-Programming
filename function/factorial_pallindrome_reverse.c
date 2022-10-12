#include<stdio.h>

int fact(int n){
    int f=1;
   
    if(n==0){
        printf("Factorial is 1");}
    else{
    while(n>0){
        f*=n;
        n-=1;
    }
    printf("Factorial of given number is : %d",f);
}}

int pallindrome(){
        int n,m, reverse = 0, rem;
    printf("enter the number to check ");
    scanf("%d", &n);
    m=n;
    while (n!=0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    
    if(m == reverse)
    printf("pallindrome");
    else
    printf("not pallindrome");

}
void main(){
    int f;
     printf("Enter number to print factorial : ");
    scanf("%d",&f);

    fact(f);
}