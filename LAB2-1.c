#include <stdio.h>
int main()
{
    int N;
    int rez = scanf_s("%d", &N);
    int V = 0;
    int OST = 0;
    int N2 = 0;
    if (rez == 1)
    {
        if (N < 0){
            N2 = 1;
            N *= (-1);
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
            N *= (-1); 
        }
            if (V != 0) {
                printf("%d", V);
            }
            else{
                printf("0");
            }

    }
    else
    {
        printf("WRONG DATA");
    }


    return 0;
}