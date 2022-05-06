//Stringizing Operator(#) stringizes in macro argument.
//string format output

#include<stdio.h>
#define str(s) #s
#define message(a,b) printf(#a "_" #b);

int main()
{
  printf("\n%s",str(India));
  printf("\n%s",str(1234));            //int type
  printf("\n%s",str(12.34));            //float type
  message(Ashruti,Shah);
}

/*OUTPUT:
India
1234
12.34
Ashruti_Shah
*/
  
