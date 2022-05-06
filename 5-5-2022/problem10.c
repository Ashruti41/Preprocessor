//#if....#endif when we take macro value as 0 or an expression which is followed by #if is evaluated, if result is non-zero then the statements between #if and #endif are compiled otherwise they are skipped


#include<stdio.h>
#define Flag 0                                       //here flag=0 so #if..#endif statement will skipped and direct gives output as hi
                                                    //so when we take Flag>0 then and then hello message will print

int main()
{
    #if Flag  
    printf("hello");
    #endif
    printf("hi");
}


/*OUTPUT:
hi
*/
