#include <stdio.h>

int main()
{
    int N;
    int rez = scanf("%d", &N);
    int V = 0;
    int OST = 0;
    int N2 = 0;
    if (rez == 1)
    {
        if (N < 0){
            N *= (-1);
            N2 = 1;
        }
        while (N != 0)
        {
            OST = N % 10;
            V = V * 10 + OST;
            if (V < 0)
            {
                V = 0;
                N = 0;
            }

            N = N / 10;
        }
        if (N2 == 1){
            V = V * (-1);
        }
        printf("%d", V);

    }
    else
    {
        printf("WRONG DATA");
    }
    return 0;
}
