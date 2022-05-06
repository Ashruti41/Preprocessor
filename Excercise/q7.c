//Q7

#include<stdio.h>
#define ABS(x) ((x)<0 ? -(x):(x))          //here use conditional statement for given number is <0 

int main()
{
    int array[4]={1,-2,3,4};
    int *p=array+3;
    while(p>=array)
    {
        printf("%d ",ABS(*p));
        p--;
    }
}

/*output:
4 3 2 1
*/
