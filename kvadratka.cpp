#include <stdio.h>
#include <math.h>

//=======================================================================

void vvod(double *a, double *b, double *c)
    {
    scanf("%lg %lg %lg", a, b, c);
    }

//=======================================================================

void solving(double a, double b, double c)
    {
    double d, x, x1, x2;
    char Z;

    if (a==0)
        {
        if (b==0)
            {
            if (c==0)
                {
                Z=0;
                }
            else
                {
                Z=4;
                }
            }
        else
            {
            x=-c/b;
            Z=1;
            }
        }
    else
        {
        d=b*b-4*a*c;
        if (d<0)
            {
            Z=4;
            }
        if (d>0)
            {
            x1=(-b-sqrt(d))/(2*a);
            x2=(-b+sqrt(d))/(2*a);
            Z=2;
            }
        if (d==0)
            {
            x=-b/(2*a);
            Z=1;
            }
        }
    }
//=======================================================================

void outputting(char Z, double x, double x1, double x2)
    {

    if (Z == 0)
        {
        printf("Any number");
        }
    else if (Z == 1)
        {
        printf("%lf", x);
        }
    else if (Z == 2)
        {
        printf("%lf %lf", x1, x2);
        }
    else if (Z == 4)
        {
        printf("NO solutions");
        }
    }

//=======================================================================

int main()
{
    double a, b, c, d, x, x1, x2;
    char Z;

    vvod(&a, &b, &c);   //названия функций

    solving(a,b,c, &x, );
    outputting(Z, x, x1, x2);
}
