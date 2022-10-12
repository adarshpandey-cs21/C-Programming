#include<stdio.h>
#include<string.h>
void main(){
char str[40];
int i;
printf("Enter the string\n");
gets(str);
i=strlen(str);
printf("The given string is : \n");
printf("%s\n",str);
printf("The size of given string is : \n");
printf("%d\n",i);
  
}