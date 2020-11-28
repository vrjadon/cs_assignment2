
#include<stdio.h>

int main()
{
    long int ctr , n , i , j , r ;
    printf(" Input any number: \n");
    scanf("%ld",&n);
    for (i = 0; i < 10; i++)
    {
        printf("The frequency of %ld is",i," = ");
        ctr = 0;
        for (j = n; j > 0; j = j / 10)
        {
            r = j % 10;
            if (r == i)
            {
                ctr++;
            }
        }
        printf(" %ld \n",ctr );
    }
}
