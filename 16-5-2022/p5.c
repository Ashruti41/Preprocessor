//find square of odd number in 1 to 25

#include<stdio.h>
int func(int n);

int main()
{
    int a;
    printf("square is %d",func(a));
}

int func(int n)
{
    int num,s=0;
    for(num=1; num<=25; num++)
    {
        if(num%2!=0)
        s+=num*num;
    }
    return s;
}
/*output:
square:2925
*/
