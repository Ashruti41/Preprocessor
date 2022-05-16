//find even or odd number using function

#include<stdio.h>
int find(int n);       //function declaration

int main()
{
    int f,a;
    printf("Enter the number: ");
    scanf("%d",&a);
    f=find(a);              //function call
    
}

int find(int n)         //function defination
{
    if(n%2==0)
    printf("the number is even");
    else
    printf("the number is odd");
    
}
