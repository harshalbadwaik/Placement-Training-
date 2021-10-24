#include<stdio.h>
#define MAX 50
void main()
{
    int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
    int Arows,Acols,Brows,Bcols,
        i,j,k,sum=0;
    
    // First Matrix
    printf("Enter the First Matrix (Size) X by X \n");
    scanf("%d %d",&Arows,&Acols);

    printf("Enter the Elements of Matrix A : \n");
    
    for(i=0;i<Arows;i++)
    {
        for(j=0;j<Acols;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }


    // Second Matrix
    printf("Enter the Second Matrix (Size) X by X");
    scanf("%d %d",&Brows,&Bcols);

    printf("\nEnter the Elements of Matrix B : ");
    
    for(i=0;i<Brows;i++)
    {
        for(j=0;j<Bcols;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    // Matrix Multiplication
    for(i=0;i<Arows;i++)
    {
        for(j=0;j<Bcols;j++)
        {
            for(k=0;k<Brows;k++)
            {
                sum+=A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }

    // Display
    printf("\n A x B = \n");
    
    for(i=0;i<Arows;i++)
    {
        for(j=0;j<Bcols;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }

}