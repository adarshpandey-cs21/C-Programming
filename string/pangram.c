#include<stdio.h>
#include<string.h>
void main(){
char str[40];
int num,find=0,not_find=0;
printf("Enter the first string\n");
gets(str);
strlen(str);
    num=strlen(str);
    for (int i = 0; i < num; i++)
    {
        find=0;
        for (int j = 0; j < num; j++)
        {
            if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
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