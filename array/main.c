#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int main()
{


    int i, *A, m, *B, *C, s;
    FILE *f;
    f = fopen("laba.txt", "r");

    printf("אשכגûנאהכûאt m: ");
    scanf("%d",&m);
    A=(int*)malloc(m*sizeof(int));
    for (i=0; i<m; i++)
        fscanf(f,"%d",&A[i]);
    printf("Index mas A: ");
    for (i = 0; i < m; i++)
        printf("%d; ",A[i]);

    B = (int*)malloc(m*sizeof(int));
    printf("\n");
    for (i = 0; i < m; i++)
        fscanf(f,"%d",&B[i]);
    printf("Index mas B: ");
    for ( i = 0; i < m; i++)
        printf("%d; ", B[i]);

    fclose(f);
    s = 0;
    printf("\n");
    for( i = 0; i < m; i++)
    {
        C[i]= B[m-i-1]+ A[i];
        s += C[i];
    }
    printf("Index mas C: ");
    for (i = 0; i < m; i++)
        printf("%d; ", C[i]);
    printf("\nS = %d", s);

    return 0;

}
