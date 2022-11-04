#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int N,v=1000;
    char t[40],s[40],*T;
    f =fopen("laba5.txt","r");
    while(fscanf(f,"%s",s)!=EOF)
    {
        puts(s);
        T = strchr(s,'/');
        *T = 0 ;
        sscanf(T+1,"%d",&N);
        if(v < N)
        {
            strcpy(t,s);
            v = N;
        }
    }
    printf("Yonger: \n");
    printf("%s\t",t);
    printf("%d",N);
    return 0;
}
