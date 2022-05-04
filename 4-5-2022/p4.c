#include<stdio.h>
#define SQUARE(x) ((x)*(x))
#define MAX(x,y) ((x)>(y) ? (x):(y))
#define MIN(x,y) ((x)<(y) ? (x):(y))
#define ISLOWER(c) (c>=97 && c<=122)
#define ISUPPER(c) (c>=65 && c<97)
int main()
{
    int k=4,j=5,s,p,q,r,e;
    char a,b,z,A;
    e=SQUARE(k++);
    p=MAX(j,k);
    q=MIN(j,k);
    a = b;
    r = ISLOWER(a);
    z=A;
    s = ISUPPER(z);
    printf("e=%d,p=%d, q=%d,r=%c,s=%c",e,p,q,r,s);
}
