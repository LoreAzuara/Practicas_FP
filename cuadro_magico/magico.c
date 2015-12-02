//
//  main.c
//  PrimerPrograma
//
//  Created by Lorena Azuara on 08/09/15.
//  Copyright (c) 2015 Lorena Azuara. All rights reserved.
//

/*#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Numero 1: ");
    scanf("%d",&a);
    printf("Numero 2: ");
    scanf("%d",&b);
    printf("Numero 3: ");
    scanf("%d",&c);
    if(a>b)
    {
        if (a>c)
        {
            if(b>c)
                printf("%d-%d-%d",a,b,c);
            else
                printf("%d-%d-%d",a,c,b);
        }
        else
            printf("%d-%d-%d",c,a,b);
    }
    else if(b>c)
    {
        if(a>c)
            printf("%d-%d-%d",b,a,c);
        else
            printf("%d-%d-%d",b,c,a);
    }
    else
        printf("%d-%d-%d",c,b,a);
    
    return 0;
}*/
/*int main()
{
    int a;
    printf("Teclea un número: ");
    scanf("%d",&a);
    if((a%4 == 0 && a%100 != 0) || a%400 == 0)
        printf("Año bisiesto");
    else
        printf("No es bisiesto");
}*/

//Monedas
/*int main()
{
    int c,tb;
    printf("Cantidad: ");
    scanf("%d",&c);
    if(c>=1000)
    {
        tb=c/1000;
        c=c%1000;
        printf("Billetes de $1000: %d",tb);
    }
    else printf("Billetes de $1000: 0");
    
    if(c>=500)
    {
        tb=c/500;
        c=c%500;
        printf("\nBilletes de $500: %d",tb);
    }
    else printf("\nBilletes de $500: 0");

    if(c>=200)
    {
        tb=c/200;
        c=c%200;
        printf("\nBilletes de $200: %d",tb);
    }
    else printf("\nBilletes de $200: 0");

    if(c>=100)
    {
        tb=c/100;
        c=c%100;
        printf("\nBilletes de $100: %d",tb);
    }
    else printf("\nBilletes de $100: 0");

    if(c>=50)
    {
        tb=c/50;
        c=c%50;
        printf("\nBilletes de $50: %d",tb);
    }
    else printf("\nBilletes de $50: 0");

    if(c>=20)
    {
        tb=c/20;
        c=c%20;
        printf("\nBilletes de $20: %d",tb);
    }
    else printf("\nBilletes de $20: 0");

    if(c>=10)
    {
        tb=c/10;
        c=c%10;
        printf("\nMonedas de $10: %d",tb);
    }
    else printf("\nMonedas de $10: 0");
    
    if(c>=5)
    {
        tb=c/5;
        c=c%5;
        printf("\nMonedas de $5: %d",tb);
    }
    else printf("\nMonedas de $5: 0");

    if(c>=2)
    {
        tb=c/2;
        c=c%2;
        printf("\nMonedas de $2: %d",tb);
    }
    else printf("\nMonedas de $2: 0");



    //if ( c>=1)
        printf("\nMonedas de $1: %d\n",c);


}*/

/*int main()
{
    float cantidad, decimal;
    int ent, decimal2=1;
    printf("Cantidad: ");
    scanf("%f",&cantidad);
    ent=cantidad/1;
    printf(" Parte entera = %d",ent);
    
    decimal= cantidad - ent;
    printf("\nParte decimal: %.3f\n",decimal);
    decimal2 = decimal2 * decimal;
    printf("Decimal 2 = %d", decimal2);
}*/


/*#include <stdlib.h>
#include <time.h>
int main()
{
    int n,i;
    srand(time(NULL));
    for(i=1; i<=10; i++)
    {
    n=rand()%1000;
    printf("Numero = %d\n",n);
    }

}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char inquilinos[5][15]={"DESOCUPADO","DESOCUPADO","DESOCUPADO","DESOCUPADO","DESOCUPADO"};
    int renta[5]={5000, 10000, 3500, 1200, 6000}, mts[5]={55,100,50,40,60}, dep[5]={101, 202, 303, 404, 505};
    int opc, r1, r2, i,resp, depto;
    while (1)
    {
        printf("MENU\n1. Renta\n2. Imprimir\nSeleccione un opcion: ");
        scanf("%d",&opc);
        switch(opc)
        {
            case 1:
                printf("Teclea tu rango de busqueda\n");
                printf("Rango 1: ");
                scanf("%d", &r1);
                printf("Rango 2: ");
                scanf("%d", &r2);
                for(i=0; i<5; i++)
                {
                    if(renta[i]>= r1 && renta[i]<= r2)
                    {
                        printf(" Departamento = %d  Metros del departamento = %d  Renta = $%d  %s\n", dep[i],mts[i], renta[i], inquilinos[i]);
                    }
                }
                printf("Le interesa alguno: ");
                scanf("%d",&resp);
                
                if(resp == 1)
                {
                    printf("Digite el numero de Departamento de su eleccion: ");
                    scanf("%d", &depto);
                    
                    i=0;
                    while(depto != dep[i])
                        i++;
                    
                    inquilinos[i][0]='O';
                    inquilinos[i][1]='C';
                    inquilinos[i][2]='U';
                    inquilinos[i][3]='P';
                    inquilinos[i][4]='A';
                    inquilinos[i][5]='D';
                    inquilinos[i][6]='O';
                }

                                    
                break;
                
            case 2:
                printf("Datos almacenados\n");
                for(i=0; i<5;i++)
                    printf("%d   %s\n",dep[i], inquilinos[i]);
                break;
                
            case 4:
                exit(0);
                break;
        }
    }
}*/



/*#include <stdio.h>
void imprime(int []);
void llena(int []);
int a[5];
int main()
{
    llena(a);
    printf("Datos del arreglo\n");
    imprime(a);
    
}

void llena (int A[])
{
    int i, aux=1;
    for(i = 0; i<5; i++)
    {
        
        A[i]=aux * 5;
        aux++;
    }
}

void imprime (int A[])
{
    int i;
    for(i = 0; i<5; i++)
    {
        
        printf("%3d %5d\n",i,A[i]);
    }
}*/

/*#include <stdio.h>
void imprime(int [5][5]);
void llena(int [5][5]);
int a[5][5];
int main()
{
    llena(a);
    printf("Datos del arreglo\n");
    imprime(a);
    
}

void llena (int A[5][5])
{
    int i,j, aux=1;
    for(i = 0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            A[i][j]=aux;
            aux++;
        }
    }
}

void imprime (int A[5][5])
{
    int i,j;
    for(i = 0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%3d",A[i][j]);
        }
        printf("\n");
    }
}*/

/* #include <stdio.h>
 void llena(int *);
 void imprime(int *);


int main()
 {
     int a[5], *p;
     p=a;
     llena(p);
     printf("Datos del arreglo\n");
    
     p=a;
     imprime(p);
 
 
 }
 
 void llena (int *P)
 {
     int i, aux=1, *ND;
     for(i = 0; i<5; i++)
          {
              if(i == 0)
                  *ND = *P;
              *P =aux * 25;
              P++;
              aux++;
            }
}

 
 void imprime (int *P)
 {
  int i;
     for(i = 0; i<5; i++)
         {
             printf("%3d %5d\n",i+1, *P);
             P++;
        }
 }*/

/*#include <stdio.h>
void llenar(int *);
void imprimir(int *);
void buscar(int *, int);
int main()
{
    int m[3][3], *pm, dato;
    pm = m;
    printf("Dirección de la matriz: %p\n", pm);
    
    llenar(pm);
    
    pm = m;
    imprimir(pm);
    printf("Que dato quiere buscar: ");
    scanf("%d", &dato);
    pm = m;
    buscar(pm, dato);
}

void llenar (int *pm)
{
    int i, j, aux =1;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            *pm = aux;
            pm++;
            aux++;
        }
    }
}

void imprimir (int *pm)
{
    int i,j;
    printf("Elementos de la matriz\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%5d   ", *pm);
            pm++;
        }
        printf("\n");
    }

}

void buscar (int *pm, int dato)
{
    int i,j, posx, posy;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(*pm == dato)
            {
                posx = i;
                posy =j;
                printf("Dato encontrado en la posición: m[%d][%d]", posx,posy);
            }
            pm++;
        }
        printf("\n");
    }
    printf("")
}*/


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

