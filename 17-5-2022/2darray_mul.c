//2-D array multiplication 

#include<stdio.h>
#define row 3 
#define col 3

int main()
{
    int mat1[row][col],mat2[row][col],i,j,k,mat3[row][col];
    printf("Enter the array mat1[%dx%d] : \n",row,col);
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)
        scanf("%d",&mat1[i][j]);
    printf("Enter the array mat1[%dx%d] : \n",row,col);
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)
        scanf("%d",&mat2[i][j]);
        
    //multiplication
    printf("Enter the array mat3[%dx%d] : \n",row,col);
    for(i=0; i<row; i++)
    for(j=0; j<col; j++)
    {
    mat3[i][j]=0;
    for(k=0; k<col; k++)
        mat3[i][j]+=mat1[i][k]*mat2[k][j];
    }

    for(i=0; i<row; i++)
    {
    for(j=0; j<col; j++)
    printf("%d\t",mat3[i][j]);
    printf("\n");
    }
    printf("\n");
}
/*output:
Enter the array mat1[3x3] : 
1 2 3 
4 5 6
7 8 9
Enter the array mat1[3x3] : 
1 2 3 
4 5 6
7 8 9
Enter the array mat3[3x3] : 
30      36      42
66      81      96
102     126     150
*/
