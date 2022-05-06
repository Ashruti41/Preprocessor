//predefined macro names: some macro names are already defined which we can't be undefined or redifined in our program

#include<stdio.h>
int main()
{
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%s\n",__FILE__);
    printf("%s\n",__LINE__);
}
