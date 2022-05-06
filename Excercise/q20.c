//Q20


#include<stdio.h>
#define MACRO(a) if(a<=5) printf(#a "=%d\n",a);
int main()
{
    int x=6,y=15;                                   //x and y is greater than 5 so in the chance of withou error ans will not print 
    if(x<=y)
    MACRO(x);                                      //semicolon gives an error
    else
    MACRO(y);
}

//here i take x=2 and remove semicolon after macro in if and else in main function
#include<stdio.h>
#define MACRO(a) if(a<=5) printf(#a "=%d\n",a);
int main()
{
    int x=2,y=15;
    if(x<=y)
    MACRO(x)
    else
    MACRO(y)
}

/*output:
x=2
*/
