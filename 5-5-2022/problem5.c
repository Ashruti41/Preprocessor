//mecros that be used to generate different functions for different data types which called generic function.
//in this program we create one generic function fo maximum

#include <stdio.h>
#define MAX(FNAME,DTYPE) \                                    //this is the macro function for different data types          
DTYPE FNAME(DTYPE X, DTYPE Y) \                                
{                         \
    return X>Y ? X:Y;  \
}
MAX(max_int, int)
MAX(max_float, float)
MAX(max_double, double)

int main()
{
    int p;
    float q;
    double r;
    p=max_int(3,9);                                        //check in int format for maximum number
    q=max_float(7.4,5.7);
    r=max_double(12.34,13.54);
    printf("p=%d,q=%.2f,r=%.2lf \n",p,q,r);
}


/*OUTPUT:
p=9,q=7.4,r=13.54
*/
