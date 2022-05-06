//Q4.

#include<stdio.h>
#define A 50
#define B A+100

main()
{
    int i,j;
    i=B/20;
    j=500-B;
    printf("i= %d, j = %d\n",i,j);
}

//output: i=55,j = 550
//here we take macro without parenthesis so ans is not correct 

#include<stdio.h>
#define A 50
#define B ((A)+(100))          //when we take like this then our ans will be more accurate as compared below code

main()
{
    int i,j;
    i=B/20;
    j=500-B;
    printf("i= %d, j = %d\n",i,j);
}

/*OUTPUT:
i=7, j = 350
*/
