#include<stdio.h>
#include<string.h>
void main(){
char str[40],str1[40];
int i;
printf("Enter the string\n");
gets(str);
strcpy(str1,str);
strrev(str);
if(strcmp(str,str1)==0)
{
    printf("pallindrome\n");

}
else 
printf("not pallindrome\n");


//printf("The given string is : \n");
 //printf("%s\n",str);
//printf("%s\n",str1);
  
}