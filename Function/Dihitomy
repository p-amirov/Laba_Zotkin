#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float f(float x)
{
    return 1.0/3*pow(sin(x),4)-x+1;
}


float dixit(float a, float b, float eps)
{
    float c;
    do{
        c = (a+b)/2.0;
        if(f(a)*f(c) < 0)
            b = c;
        else if(f(b)*f(c) < 0)
                a = c;
        else
            {
            printf("Error!");
            return 0;
            }
        }while(fabs(b - a) > eps);
        return c;
}



int main()
{
    float a,b,eps,x;
    printf("Input a, b, eps: ");
    scanf("%f %f %f",&a,&b,&eps);
    printf("\n%f", dixit(a,b,eps));
    printf("\n====================\n");
    printf("f(a)= %f",f(a));
    printf("\nf(b)= %f",f(b));
    x = dixit(a, b, eps);
    printf("\nx = %f", x);
    printf("\nF = %f", f(x));

return 0;
}
