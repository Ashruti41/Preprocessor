//Q5.

#include<stdio.h>
#define NEW_LINE printf("\n");                                        //this is for giving a new line
#define BLANK_LINES(n) {int i; for(i=0;i<n;i++) printf("\n");}           //n number of line blanks

int main()
{
    printf("When you have a chance");
    NEW_LINE
    printf("TO EMBRACE AN OPPORTUNITY");
    BLANK_LINES(3)
    printf("Give it a big hug");
    NEW_LINE
}

/*OUTPUT:
When you have a chance
TO EMBRACE AN OPPORTUNITY


Give it a big hug
*/

