//understand nesting in macros
//program for check character is an alphanumeric or not

#include <stdio.h>
#define ISLOWER(c) (c>=97 && c<=122)
#define ISUPPER(c) (c>=65 && c<=90)
#define ISALPHA(c) ISLOWER(c) || ISUPPER(c)
#define ISNUM(c) (c>=48 && c<=57)
#define ISALPHANUM(c) ISALPHA(c) || ISNUM(c)

int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    if(ISALPHANUM(ch))
    printf("%c is an alphanumeric character\n",ch);
    else
    printf("%c is not an alphanumeric character\n",ch);
    
}

/* OUTPUT:
Enter a character: 
B
B is an alphanumeric character
or
Enter a character: 
$
$ is not an alphanumeric character
*/
