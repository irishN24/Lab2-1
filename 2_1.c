#include <stdio.h>

int main()

{
    int N;
    int rez = scanf("%d", &N);
    int V = 0;
    int OST = 0;
    int N2 = 1;
    if (rez == 1)
    {
        if (N < 1){
            N *= (-1);
            N2 = 0;
        }
            while (N != 0)
            {
                OST = N % 10;
                if (V < 0)
                {
                    V = 0;
                    N = 0;
                }
                V = V * 10 + OST;
                N = N / 10; 
            }
        if (N2 == 0){
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
