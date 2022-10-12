#include<stdio.h>
void main(){
char str[20];
int i;
printf("Enter the string\n");
for ( i = 0; i <5; i++)
{
    scanf("%c",&str[i]);
}

printf("The given string is : \n");
for ( i = 0; i < 5; i++)
{
    printf("%s",str);

}

  
}