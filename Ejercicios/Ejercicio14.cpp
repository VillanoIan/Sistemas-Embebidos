// Online C++ compiler to run C++ program online
#include <iostream>

int main() 
{
    int n[5], contar=0, i, suma=0,sum=0;
    float promedio=0;
    for(i=0;i<5;i++)
    {
        printf("Ingrese un numero:");
        scanf("%d", &n[i]);
        if(n[i]>100)
        {
            contar+=1;
            suma+=n[i];
        }
        if(n[i]<-10)
        {
            sum+=n[i];
        }
    }
    promedio=suma/contar;
    
    printf("El promedio del a suma de los numeros mayores a 100 da: %f", promedio);
    printf("\n");
    printf("La suma de los numeros menores a -10 da como resultado: %d", sum);
    return 0;
}