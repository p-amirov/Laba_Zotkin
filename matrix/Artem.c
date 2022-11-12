#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


void max(int x, int *q,int *y,int *xmax)
{
    int i;
    *xmax = q[0];
    *y = 0;
    for(i = 1; i < x; i++)
        if(q[i]>*xmax)
        {
            *xmax = q[i];
            *y = i;
        }
}

int imax(int **a,int m,int w)
{

    int i, j, pr, k;
    pr = 1;
    k = 0;
    for(i = 0; i < m; i++)
        if(a[i][w]!= 0)
        {
            pr*=a[i][w];
            k+=1;
        }
    if(k == 0)
        pr = 0;

    return pr;


}

int main()
{
    int i, **a,j,n,m,pr = 1,k=0,*q,y,xmax,t;
    FILE *f;
    if((f = fopen("laba4.txt","r"))==NULL)
    {
        printf("Error!");
        getch();exit(1);
    }

    printf("Input m and n:" );
    scanf("%d%d",&m,&n);
    a = (int**)malloc(n*sizeof(int));
    q = (int*)malloc(m*sizeof(int));
    for(i = 0; i < n; i++)
        a[i] = (int*)malloc(m*sizeof(int));

    printf("\n===================================\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            fscanf(f,"%d",&a[i][j]);

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        printf("%5d",a[i][j]);
    printf("\n");
    }
    printf("\n===================================\n");
/*// произведение столбца
    for(j = 0; j < m; j++)
    {
        pr = 1;
        for(i = 0; i < n; i++)
        {
            if(a[i][j]!=0)
                {
                    pr*=a[i][j];
                    k+=1;
                }
        if(k==0)
            pr = 0;
        }

        for(i = 0; i < m; i++)
            q[j] = pr;
    }


    for(j = 0; j < m; j++)
        printf("%d\t",q[j]);*/
    //printf("\n===================================\n");

    for(i = 0; i < n;i++)
    {
        t = imax(a,m,i);
        q[i] = t;
    }


    for(i = 0; i < n; i++)
        printf("%5d",q[i]);

    printf("\n=====================================\n");
    max(m,q,&y,&xmax);
    printf("%d\n",xmax);
    for(i = 0; i < n; i++)
        printf("%d\t",a[i][y]);

    return 0;
}
