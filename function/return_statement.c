#include<stdio.h>
int add(int a,int b){
    return a+b;
}

void main(){
    int x,y,c;
    scanf("%i %i",&x,&y);
    c=add(x,y);
    printf("%i",c);
    printf("%i",add(x,y));
}