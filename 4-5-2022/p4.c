#include<stdio.h>
#define SQUARE(x) ((x)*(x))
#define MIN(x,y) ((x)<(y) ? (x):(y))
#define ISLOWER(c) (c>=97 && c<=122)
int main()
{
    int k=4,j=5,s;
    s=SQUARE(k++);
    char a,b,z;
    a=b;
    z = ISLOWER(a);
    printf("s is lower %c",s);
}
