//count the even and odd numbers in given array

#include<stdio.h>
int main()
{
    int arr[5],i,even=0,odd=0;
    for(i=0; i<5; i++)                                //this foor loop is used for enter the data of array
    {
        printf("Enter the elements which you want to enter into the array: ");
        scanf("%d",&arr[i]); 
        if(arr[i]%2==0)
        even++;
        else 
        odd++;
    }
    printf("even number %d and odd number %d ",even,odd);
}
/*output:
Enter the elements which you want to enter into the array: 1
Enter the elements which you want to enter into the array: 2
Enter the elements which you want to enter into the array: 3
Enter the elements which you want to enter into the array: 4
Enter the elements which you want to enter into the array: 5
even number 2 and odd number 3 
*/
