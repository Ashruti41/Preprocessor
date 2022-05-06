//stringizing operator
//it causes the argument it precedes to be turned into string 

#include<stdio.h>
#define SHOW(var,format) printf(#var "=% " #format "\n",var);
int main()
{
    int x=9;
    float y=2.5;
    char z='$';
    SHOW(x,d);                      //here x is int and d for int format
    SHOW(y,0.2f);
    SHOW(z,c);
    SHOW(x*y,0.2f);
}

/*OUTPUT:
x= 9
y= 2.50
z=$
x*y= 22.50
*/
