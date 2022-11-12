#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char s[40],*T,N[40],v[40];
    if((f = fopen("laba5.txt","r"))==NULL)
        {
            printf("ERROR!");
            exit(1);
        }
    printf("Input naznachenie: ");
    scanf("%s",v);

   while(fscanf(f,"%s",s)!=EOF)
   {
       //puts(s);
       T = strchr(s,'-');
       //puts(T);
       *T = 0;
       sscanf(T+1,"%s",N);
       //puts(N);
    if(strcmp(v,N)==0)
        puts(s);
   }
fclose(f);
return 0;
}
