//Q6

#include<stdio.h>
#define INFINITE while(1)                                       //while(1) for infinite loop
#define CHECK(a) if(a==0) break                                //when given number is decrease as 0 than loop will break
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
