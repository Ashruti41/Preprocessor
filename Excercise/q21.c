//Q21


#include<stdio.h>

int main()
{
  #line 100 "system.c"                     //line for line number and file number
  printf("%d %s\n",__LINE__,__FILE__);        //in #line first give dec_const and 2nd string_const
}

/*output:
100 system.c
*/
