//Q3.
#include<stdio.h>
#define PROD (x,y) ((x)*(y))  
int main()
{
    int a=3,b=4;
    printf("Product of a and b=%d",PROD(a,b));
}

//here error occured because there is a space between macro PROD and left parenthesis for resolving that we should remove space and then again run the code

#include<stdio.h>
#define PROD(x,y) ((x)*(y))  
int main()
{
    int a=3,b=4;
    printf("Product of a and b=%d",PROD(a,b));
}

/*OUTPUT:
Product of a and b=12
*/
