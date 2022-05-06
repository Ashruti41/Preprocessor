//#line is used for debugging purpose

#include<stdio.h>
int main()
{
    printf("C in depth\n");
    printf("%d %s\n",__LINE__,__FILE__);
    #line 15 "myprog.c"                                      //this line is for check in myprog.c for debugging
    printf("%d %s\n",__LINE__,__FILE__);
}



/* output:   
C in depth
13 main.c
15 myprog.c 
*/
