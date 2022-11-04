#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



void xmin(int n,int *r,int *z,int *y)
{
    int i;
    *z = r[0];
    *y = 0;
    for(i = 0; i < n; i++)
        if(r[i] < *z)
            {
            *z = r[i];
            *y = i;
            }
}


int xsum(int n, int *q)
{
    int i, s = 0;
        for(i = 0; i < n; i++)
            if(q[i]>0)
                s += q[i];
    return s;
}



int main()
    {
    int **a,i,j,n,m,*s,k,z,y,*q;
    FILE *f;
    if((f = fopen("laba.txt","r"))==NULL)
    {
        printf("Error");
        getch();exit(1);
    }
    printf("\n===================================\n");
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);

    a = (int**)malloc(n*sizeof(int));
    s = (int*)malloc(n*sizeof(int));
    q = (int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++)
        a[i] = (int*)malloc(m*sizeof(int));

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            fscanf(f,"%d",&a[i][j]);
    printf("===================================\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%5d",a[i][j]);
    printf("\n");
    }
    printf("===================================\n");

    printf("index matr: ");
    scanf("%d",&k);
    for(i=0;i<n;i++)
        s[i] = (a[i][k-1]);


    printf("===================================\n");
    for(i=0;i<n;i++)
        printf("%5d",s[i]);

    printf("\n===================================\n");

    xmin(n,s,&z,&y);

    printf("Stroka: ");
    printf("%d\n",y+1);

    for(j = 0; j < m; j++)
        q[j] = a[y][j];

    for(i = 0; i < n; i++)
        printf("%5d",q[i]);

    printf("\nSumma sroki");
    printf("\n%d", xsum(n,q));

    fclose(f);
    return 0;
    }
