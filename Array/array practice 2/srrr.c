#include<stdio.h>
void main(){
 char str[5];
 printf("enter the string");
 for (int i = 0; i < 5; i++)
 {
     scanf("%c",& str[i]);
 }
 printf("entered string");
 for (int i = 0; i <5; i++)
 {
     printf("%c",str[i]);
 }
 //scanf("%s",str);
 //printf("%s",str);
 
 


}