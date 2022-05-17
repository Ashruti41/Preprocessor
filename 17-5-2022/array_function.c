//general function that works on arrays of different sizes

#include<stdio.h>
main ( )
{
int a[5]={2,4,6,8,10};
int b[8] = {1, 3,5,7,9,11,13,15};
int c[10] = {1, 2,3,4,5,6,7,8,9,10};
printf("Sum of elements of array a:%d\n",add(a,5));                //5 is size of an array
printf("Sum of elements of array b:%d\n",add(b,8));
printf("Sum of elements of array c:%d\n",add(c,10));
}
add(int arr[],int n)
{
int i, sum=0;
for(i=0;i<n;i++)
sum+=arr[i];
return sum;
}
/*output:
Sum of elements of array a:30
Sum of elements of array b:64
Sum of elements of array c:55
*/
