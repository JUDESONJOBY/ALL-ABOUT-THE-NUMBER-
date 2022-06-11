#include<stdio.h>
#include<math.h>

int main(void)
//created by Judeson Joby
//after pressing run enter any number u want and enter submit,warning square root of some number are not accurate
{
    int n,sqr=0,c=2,i,result;
    printf ("*********************************\n");

    printf("ENTER THE NO:=");
    scanf("%d",&n);
    printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    if(n % 2 == 0)
    {
        printf("\nit is a even number \n");
    }
    else
    {
        printf("\nit is a odd number\n");
    }

    printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    sqr = n * n;
    printf("\nsquare of %d is %d\n", n, sqr);

    printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    for (c = 2; c <= n - 1; c++)
    {

        if (n % c == 0)
        {

            printf("%d is not a prime number \n", n);
            break;
            printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        }

    }

    if (c == n)
        printf("%d is a prime number\n", n);
    printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");


    printf("Factors of %d are:", n);

    for (i = 1; i <= n; ++i)
    {
        if (n % i == 0)
            printf("%d,", i);
    }
    printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    result = sqrt(n);
    printf("\nThe square root of %d is %d ", n, result);
    printf ("\n*********************************");
    return 0;
}
