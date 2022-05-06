//Q10

/*t=a+b  t=1+2 , t=3
a = t-a,  a=3-1, a=2
b=t-b,   b=3-2, b=1
*/

#include<stdio.h>
#define SWAP(dtype,x,y) {dtype t; t=x+y, x=t-x, y=t-y;}
int main()
{
    int a=1,b=2,x=3,y=4,s=25,t=26;                         //here we take t as int so maybe compiler get confused for here which t will take 
    SWAP(int,a,b)                                
    SWAP(int,x,y)
    SWAP(int,s,t)                                                         
    printf("a=%d,b=%d,x=%d,y=%d,s=%d,t=%d\n",a,b,x,y,s,t);
}
//so when we take any other variable without t get correct answer for s

/*OUTPUT:
a=2,b=1,x=4,y=3,s=0,t=26
*/
