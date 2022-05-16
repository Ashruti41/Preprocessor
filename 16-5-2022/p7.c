// Write a function cubesum( ) that accepts an integer and returns the sum of the cubes of individual digits of that number.

#include<stdio.h>
int cubesum(int a,int b);

int main()
{
    int x,y,sum=0;
    printf("ENter the numbers: ");
    scanf("%d %d",&x,&y);
    printf("%d",cubesum(x,y));
}
int cubesum(int a, int b)
{
    int cs;
    cs= a*a*a + b*b*b;
    return cs;
}

