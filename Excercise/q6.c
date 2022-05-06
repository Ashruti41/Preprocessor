//Q6

#include<stdio.h>
#define INFINITE while(1)
#define CHECK(a) if(a==0) break
int main()
{
    int x=5;
    INFINITE
    {
        printf("%d ",x--);
        CHECK(x);
    }
}


/*output:
5 4 3 2 1
*/
