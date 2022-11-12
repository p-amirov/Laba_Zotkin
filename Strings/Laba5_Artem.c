#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("laba5.txt","r");
    char s[40],*T,k[40],m[40];
    printf("Punkt otpravlen:\n");
            scanf("%s",m);
    while(fscanf(f,"%s",s)!=EOF)
    {
        //printf("Punkt otpravlen:\n");
           // scanf("%s",m);
        //puts(s);
        T = strchr(s,'-');
        //puts(T);
        *T = 0;
        sscanf(T+1,"%s",k);
        //puts(k);
            if(strcmp(s,m)==0)
                puts(k);
    }
    return 0;
}
