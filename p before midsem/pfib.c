#include <stdio.h>
int main()
{
    int n,first=0,second=1,third;
    printf("enter limit of fibbonaci series ");
    scanf("%d\n",&n);
    printf("%d\n",first);
    printf("%d",second);
    while(n>=2){
        third=first+second;
        first=second;
        second=third;
         printf("%d\n",third);
        n--;
       // printf("%d\n",third);



    }

     
}