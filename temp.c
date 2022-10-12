#include <stdio.h>
int main(){
  float fah,cel;
  int a;
  printf("Temperature Converter\n");
  printf("Press '1' for convert 'Celcius to Fahrenheit'\n");
  printf("Press '2' for convert 'Fahrenheit to Celcius'\n");
  printf("Enter your Choice\n");
  scanf("%d",& a);
  if(a==1){
     printf("Enter temp in celcius :\n");
     scanf("%f",& cel);
     fah = (cel*9/5) + 32;
     printf("Temp in 'Fahrenheit' is : %f\n ",fah);
     }
     else if(a==2){
     	printf("Enter temp in Fahrenheit\n:");
     	scanf("%f",& fah);
     	cel=(fah-32)*5/9;
     	printf("'Temp in 'Celcius' is : %f\n",cel);
     	}
     	else{
     	printf(" 'Error' please choose the right option");
        }
  	return 0;
  	}