//2-d array addition

#include<stdio.h>
#define row 3 
#define col 4

int main()
{
    int mat1[row][col],mat2[row][col],i,j,mat3[row][col];
    printf("Enter the array mat1[%dx%d] : \n",row,col);                        //reading mat1 values
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)
        scanf("%d",&mat1[i][j]);
  
    printf("Enter the array mat1[%dx%d] : \n",row,col);                       //reading mat2 values
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)
        scanf("%d",&mat2[i][j]);
  
    //adding
    printf("Enter the array mat3[%dx%d] : \n",row,col);                     // mat1 and mat2 addition
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)
        mat3[i][j]=mat1[i][j]+mat2[i][j];

    for(i=0; i<row; i++)
    {
    for(j=0; j<col; j++)
    printf("%d\t",mat3[i][j]);
    printf("\n");
    }
    printf("\n");
}
/*output:
Enter the array mat1[3x4] : 
1 2 8 4
5 6 7 8
3 2 1 4
Enter the array mat1[3x4] : 
2 5 4 2
1 5 2 6
9 4 7 2
Enter the array mat3[3x4] : 
3       7       12      6
6       11      9       14
12      6       8       6
*/
