//print two dimensional array

#include<stdio.h>
#define row 3 
#define col 4

int main()
{
    int mat[row][col],i,j;
    printf("Enter the array mat[%dx%d] : \n",row,col);
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)                                                //this for loops is used for reading values in array
        scanf("%d",&mat[i][j]);
    printf("2-D array:\n");
    for(i=0; i<row; i++)                                              //and this for loops are used for displaying value in array.
    {
        for(j=0; j<col; j++)
            printf("%d\t", mat[i][j]);
            printf("\n");
        
    }
    printf("\n"); 
}

/*output:
Enter the array mat[3x4] : 
1 2 3 4
5 6 7 8
9 10 11 12
2-D array:
1       2       3       4
5       6       7       8
9       10      11      12
*/
