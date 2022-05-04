/* show that macro expansion can be a string constant */

#include <stdio.h>
#define MSSG "I understand the use of #define\n"
int main()
{
    printf(MSSG);

    return 0;
}
