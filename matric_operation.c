#include<stdio.h>
void main()
{
    int a,b;
    int m1[5][5],i,j,m2[5][5],ans[5][5],choice;
    printf("\nEnter number if rows in matrix 1(max 5): \n");
    scanf("%d",&a);
    printf("\nEnter number of column in matric 1(max 5): \n");
    scanf("%d",&b);
    printf("\nEnter first matrix: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d", &m1[i][j]);
        }
        
    }
    printf("\nEnter second matrix: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d", &m2[i][j]);
        }
        
    }
    printf("\nMatrixes are:\n");
    printf("\nFirst matrix is: \n\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t",m1[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix is: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
    printf("\n1.Addition\n2.Substraction\nWhat operation do you want to form: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            ans[i][j]= m1[i][j] + m2[i][j];
        }
        
    }
    printf("\nSum of matrix is: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    
    }
        break;
    
    case 2:
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            ans[i][j]= m1[i][j] - m2[i][j];
        }
        
    }
    printf("\nSubstraction of matrix is: \n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }
        break;
    }
}