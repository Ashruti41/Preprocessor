//Q19

#include<stdio.h>
#define show(value) printf( #value "= %d\n", value)

int main()
{
    int a=10,b=5,c=4;
    show(a/b*c);                      //10/5=2  2*4=8
}

/*output:
a/b*c=8
*/
