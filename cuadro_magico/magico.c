/////CUADRO MÁGICO////////
#include<stdio.h>
int main()
{
    int cm[21][21], i, j, N, num;
    printf("Ingrese la dimensión del cuadro: ");
    scanf("%d", &N);
    if(N % 2 == 1)
    {
        j = (N+1)/2;
        i=1;
        cm[i][j]=1;
        for (num = 2; num <= (N*N); num++)
        {
            if ((num - 1) % N == 0)
                i++;
            else
            {
                i--;
                j++;
            }
            if(i == 0)
                i = N;
            if (j > N)
                j = 1;
            cm[i][j] = num;
            printf("i:%d   j:%d  num:%d\n",i,j,num);
        }
        
        printf("CUADRO MAGICO\n");
        for(i = 1; i<=N; i++)
        {
            for(j=1; j<=N; j++)
            {
                printf("%5d", cm[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("ERROR\n");
}

