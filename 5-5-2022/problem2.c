//program without any parentheses

#include<stdio.h>
#define PROD(x,y) x*y

int main()
{
    printf("PROD is %d\n",PROD(2,3));
    printf("PROD1 is %d",PROD(2+1,3+4));
}
/*OUTPUT:
PROD is 6
PROD1 is 9
*/


//with parentheses ans will be more accurate as compare to program without any parentheses
#include<stdio.h>
#define PROD(x,y) (x)*(y)

int main()
{
    printf("PROD is %d\n",PROD(2,3));
    printf("PROD1 is %d\n",PROD(2+1,3+4));
    printf("Prod2 is %d",60/PROD(1,4));
}

/*OUTPUT:
PROD is 6
PROD1 is 21
PROD2 is 240
*/
