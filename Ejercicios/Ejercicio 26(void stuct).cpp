// Online C++ compiler to run C++ program online
#include <iostream>
struct Contenedor {
    int puerto,identificacion, peso;
    };
    int pesototal=0, puertoMP=0, idefMP;
    int cont1=0, cont2=0, cont3=0;
void llenardatos(Contenedor *contenedorvacio){
        
        printf("\nIndentificacion del contenedor (1, 2 o 3):");
        scanf("%d",&contenedorvacio->identificacion);
        
        printf("\nPeso del contenedor (en KG): ");
        scanf("%d",&contenedorvacio->peso);
        
        printf("\nPuerto donde se dejo el contenedor:");
        scanf("%d",&contenedorvacio->puerto);
        }
    


int main(void){
    struct Contenedor contenedores[5];
    for(int i=0; i<5; i++){
        printf("CONTENEDOR %d\n", i+1);
        llenardatos(&contenedores[i]);
        pesototal += contenedores[i].peso;
        
        if (contenedores[i].peso > puertoMP) {
            puertoMP=contenedores[i].peso;
            idefMP = contenedores[i].identificacion;
        }
        
        if(contenedores[i].puerto == 1) {
            cont1 += 1;
                }
        if(contenedores[i].puerto == 2) {
            cont2 += 1;
                }
        if(contenedores[i].puerto == 3) {
            cont3 += 1;
        }
    }
    printf("\nPeso total del buque: %d (KG)", pesototal);
    printf("\nEl contenedor con mas peso era de identificacion %d", idefMP);
    printf("\nLa cantidad de contenedor por puerto es:\nPuerto 1: %d\nPuerto 2: %d\nPuerto 3: %d", cont1, cont2, cont3);
        
}
        