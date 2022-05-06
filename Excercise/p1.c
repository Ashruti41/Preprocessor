//Q1.

#include<stdio.h>
#define MAX 5;
int main()
{
    printf("%d",MAX);
}

//this program will show errors since there is a semicolon after 5 due to this printf("%d",5;); looks like this for that we should remove semicolon

#include<stdio.h>
#define MAX 5
int main()
{
    printf("%d",MAX);
}

/*OUTPUT:
5
*/
