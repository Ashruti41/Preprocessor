//macros with arguments

#include<stdio.h>
#define SUM(x,y) ((x)+(y))
#define PROD(x,y) ((x) *(y))
int main()
{
    int l,m,i,j,a=5,b=3;
    float p,q;
    l=SUM(a,b);                            //l=a+b
    m=PROD(a,b);                           //m=a*b
    i=SUM(4,6);
    j=PROD(4,6);
    p=SUM(2.2,3.4);
    q=PROD(3.3,3.4);
    printf("l=%d,m=%d,i=%d,j=%d,p=%f\n",l,m,i,j,p,q);
}


/*OUTPUT:
l=8,m=15,i=10,j=24,p=5.600000
*/
