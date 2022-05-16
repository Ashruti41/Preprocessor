//factorial number


#include<stdio.h>
int factorial(int n);       //function declaration

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    if(a<0)
    printf("negative number has not any factorial number");
    else
    printf("factorial can be %d found %d",a,factorial(a));
    
}

int factorial(int n)         //function defination
{
    int f=1,i;
    if(n==0)
    return 1;
    for(i=n; i>1; i--)
    f*=i;
    return f;
}
/*output:
Enter the number: 3
factorial can be 3 found 6
*/
