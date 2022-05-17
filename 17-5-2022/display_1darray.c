//Array: when we have to deal with larger data at that time we should use array for storing and excecuting that

#include<stdio.h>
int main()
{
    int arr[5],i;
    for(i=0; i<5; i++)                                //this foor loop is used for enter the data of array
    {
        printf("Enter the elements which you want to enter into the array: ");
        scanf("%d",&arr[i]);                           
    }
    printf("the array elements are: ");
    for(i=0; i<5; i++)                         //this for loop is for printing the data
        printf("%d \t",arr[i]);
}

/*output:
Enter the elements which you want to enter into the array: 1
Enter the elements which you want to enter into the array: 2
Enter the elements which you want to enter into the array: 3
Enter the elements which you want to enter into the array: 4
Enter the elements which you want to enter into the array: 5
the array elements are: 1 	2 	3 	4 	5 
*/

