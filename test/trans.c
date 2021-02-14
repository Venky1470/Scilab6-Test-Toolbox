#include <stdio.h>
#include "trans.h"
void trans(int n,int m, int A[n][m])
{
int i,j;
int B[m][n];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
B[i][j]=A[j][i];
}
printf("Normal Matrix (%d * %d) :\n",n,m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d ",A[i][j]);
}
printf("\n");
}

printf("Transpose Matrix (%d * %d) :\n",m,n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",B[i][j]);
}
printf("\n");
}
}
