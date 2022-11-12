#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int xproiz(int **a, int n, int m, int w)
{
    int j,pr = 1,k = 0;
    for(j = 0; j < m; j++)
        if(a[j][w]!=0)
        {
            pr *=a[j][w];
            k+=1;
        }

    if(k == 0)
        pr = 0;

return pr;
}

void minpr(int *q,int n,int *index,int *min)
{
    int i;
    *min = q[0];
    *index = 0;
    for(i = 1; i < n; i++)
        if(q[i]<*min)
        {
            *min = q[i];
            *index = i;
        }
    printf("%d",*min);
}



int main()
{
    int n, m,**a,i,j,*q,index,min;
    FILE *f;
    if((f = fopen("laba4.txt","r"))==NULL)
    {
        printf("Error!");
        getch();exit(1);
    }

    printf("Input n: ");
    scanf("%d",&n);
    printf("Input m: ");
    scanf("%d",&m);
    a = (int**)malloc(n*sizeof(int));
    q = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m*sizeof(int));

    printf("==============================\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            fscanf(f,"%d",&a[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        printf("%5d",a[i][j]);
    printf("\n");
    }
    printf("\n==============================\n");

    for(i = 0; i < n; i++)
        q[i] = xproiz(a,n,m,i);

    for(i = 0; i < n; i++)
        printf("%5d",q[i]);

    printf("\n==============================\n");

    minpr(q,n,&index,&min);

    printf("\n================================\n");

    for(i = 0; i < n; i++)
        printf("%d\t",a[i][index]);

    return 0;
}
