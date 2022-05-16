//enter binary or octal number and on that find decimal number of them.

#include<stdio.h> 
int main ( )
{
int num, base, result;
char choice;
printf("Enter 'b' for binary and '0' for octal: ");
scanf("%c",&choice);
printf ("Enter the number:");
scanf("%d",&num);
if(choice=='b')
base=2;
else
base=8;
result=func(num,base);
printf("Decimal number is %d\n", result);
}

func(int n,int base)
{
int rem,d,j=1,dec=0;
while(n>0)
{
rem=n%10; 
d=rem*j;
dec+=d;
j*=base;
n/=10; 
}
return dec;

}

/*output:
Enter 'b' for binary and '0' for octal:b
Enter the number: 11
Decimal: 3
*/
