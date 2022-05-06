//Q12

#include<stdio.h>
#define INC(dtype,x,i) x=x+i
int main()
{
    int arr[5]={20,34,56,12,96},*ptr=arr;                //arr[2]=56 , 56+3=59
    INC(int,arr[2],3);
    INC(int*,ptr,2);
    printf("*ptr = %d\n",*ptr);
}

/*output:
       *ptr = 59
*/
