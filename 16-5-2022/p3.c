//find larger number 


#include<stdio.h>
int max(int a, int b);       //function declaration

int main()
{
    int f,a,b;
    printf("Enter the number: ");
    scanf("%d %d",&a,&b);
    f=max(a,b);              //function call
    
}

int max(int a, int b)         //function defination
{
    if(a>b)
    printf("A is larger than B");
    else
    printf("A is smaller than B");
}
/*output:
Enter the number: 4 9
A is smaller than B
*/
