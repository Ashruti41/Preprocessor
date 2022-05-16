//with the help of function we can avoid rewriting same code again and again and we easily divided code into some parts.


#include<stdio.h>
int sum(int a, int b);       //function declaration

int main()
{
    int add;
    add=sum(2,3);              //function call
    printf("sum=%d",add);
}

int sum(int a, int b)         //function defination
{
    int add=0;
    add = a + b;
    return add;
}

/*output:
Sum=5
*/
