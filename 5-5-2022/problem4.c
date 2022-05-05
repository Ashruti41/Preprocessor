//in this code when we give run= 0 than macro will call and get the output as Out for a Duck
//when run=101 so condition will not satisfy so output will not print


#include<stdio.h>
#define MACRO(x) if(x==0) printf("Out for a Duck\n")
int main()
{
    int runs=101;
    if(runs<100)
    MACRO(runs);
    else
    printf("Scored a century");
}
