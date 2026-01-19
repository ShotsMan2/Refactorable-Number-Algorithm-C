#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, i, a;

    a = 1;

    printf("sayi giriniz:");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            printf("%d.boleni:%d\n", a++, i);
        }
    }
    printf("pozitif tam bolen sayisi = %d\n", --a);

    if (x % a == 0)
    {
        printf("%d sayisi TAU sayidir.\n", x);
    }
    else
    {
        printf("%d sayisi TAU sayisi degildir.\n", x);
    }

    return 0;
}
