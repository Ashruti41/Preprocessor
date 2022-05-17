//for adding 1d array 


#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for(i=0; i<5; i++)                                //this foor loop is used for enter the data of array
    {
        printf("Enter the elements which you want to enter into the array: ");
        scanf("%d",&arr[i]);                           
    }
    printf("the array elements are: ");
    for(i=0; i<5; i++)                         //this for loop is for printing the data
    {
        printf("%d\t",arr[i]);
        sum+=arr[i];
    }
    printf("\nSum: %d",sum);    
}
/*output:
Enter the elements which you want to enter into the array: 2
Enter the elements which you want to enter into the array: 5
Enter the elements which you want to enter into the array: 3
Enter the elements which you want to enter into the array: 1
Enter the elements which you want to enter into the array: 4
the array elements are: 2	5	3	1	4	
Sum: 15
*/

//or unother method

#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    for(i=0; i<5; i++)                                //this foor loop is used for enter the data of array
    {
        printf("Enter the elements which you want to enter into the array: ");
        scanf("%d",&arr[i]); 
        sum+=arr[i];
    }
    printf("\nSum : %d",sum);
}
/*output:
Enter the elements which you want to enter into the array: 1
Enter the elements which you want to enter into the array: 2
Enter the elements which you want to enter into the array: 3
Enter the elements which you want to enter into the array: 4
Enter the elements which you want to enter into the array: 5
Sum : 15
*/
