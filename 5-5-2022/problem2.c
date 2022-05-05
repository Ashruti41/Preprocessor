//program without any parentheses

#include<stdio.h>
#define PROD(x,y) x*y

int main()
{
    printf("PROD is %d\n",PROD(2,3));
    printf("PROD1 is %d",PROD(2+1,3+4));
}
