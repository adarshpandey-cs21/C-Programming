#include<stdio.h>
#include<string.h>
void main(){
char str1[40],str2[40];
int num,find=0,not_find=0;
printf("Enter the first string\n");
scanf("%s",str1);
printf("Enter the second string\n");
scanf("%s",str2);
strlen(str1);
strlen(str2);
if (strlen(str1)==strlen(str2))
{
    num=strlen(str1);
    for (int i = 0; i < num; i++)
    {
        find=0;
        for (int j = 0; j < num; j++)
        {
            if (str1[i]==str2[j])
            {
                find=1;
                break;
            }
            
        }
        if (find==0)
        {
            not_find=1;
            break;
        }
        
        
    }
    if (not_find==1)
    {
        printf("The first string is not anagram of the second string");
    }
    else
    printf("The first string is anagram of the second string");
    
    
}
else

printf("Both string must have same length and character to be the anagram of string" );
  
}