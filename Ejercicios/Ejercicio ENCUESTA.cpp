// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
struct Persona {
    char Nombre, Apellido[50];
    int Edad;
    char Genero, Estudios;
    };
struct Familia{
    char Domicilio;
    
};
void llenardatos1(Familia* datos_vaciosF){
    printf("\nTipo de domicilio( C :casa, D :departamento): ");
    getchar();
    scanf("%c", datos_vaciosF->Domicilio);
}
void llenardatos2(Persona *datos_vaciosP){
    printf("\nNombre: ");
    scanf("%s",&datos_vaciosP->Nombre);
    
    printf("\nApellido: ");
    scanf("%s",&datos_vaciosP->Apellido);
    
    printf("\nIngrese su edad: ");
    scanf("%d",&datos_vaciosP->Edad);
    
    printf("\nGenero(M o F): ");
    getchar();
    scanf("%c",&datos_vaciosP->Genero);
    
    printf("\nEstudios alcanzado(N: no posee, P: primario, S: secundario, T: terciario, U universitario : I: incompleto, C: completo):");
    getchar();
    scanf("%c",&datos_vaciosP->Estudios);
    }
    
int main(){
    struct Familia familias[2];
    struct Persona personas[4];
    for(int a=0; a<3 ;a++)
    {
        printf("FAMILIA %d:\n ",a+1);
         llenardatos1(&familias[a]);
         
        for(int b=0 ; b<5 ; b++){
            printf("INTEGRANTE %d:\n", b+1);
            llenardatos2(&personas[b]);
            
        }
    }
    
       
    }
    
    int print_information(Persona persona){
        printf("%c",persona.[0]);
        
    };