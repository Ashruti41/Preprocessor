//swap the value of 2 variable of any datatype

#include<stdio.h>
#define SWAP(dtype,x,y) { dtype t; t=x, x=y, y=t;}         //dtype is for data type

int main()
{
    int a=2, b=5;
    SWAP(int,a,b);                                   //here change the interger a,b
    printf("a=%d,b=%d\n",a,b);
}

/*OUTPUT:
a=5,b=2
*/
