// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Sensor {
    int  sensor_id, timestamp, value_type, value;
    };
    int ident=0, ident2=0;
void llenardatos(Sensor *sensorvacio){
        
        printf("\nIndentificacion del sensor :");
        scanf("%d",&sensorvacio->sensor_id);
        
        printf("\nIngrese fecha y hora: ");
        scanf("%d",&sensorvacio->timestamp);
        
        printf("\nIngrese un tipo de valor:");
        scanf("%d",&sensorvacio->value_type);
        
        printf("\nIngrese un valor:");
        scanf("%d",&sensorvacio->value);
        
         }
int get_highest_value(Sensor *sensores[]);
    int mayor=sensores[0].value;
    for(int i=0;i<6;i++){
        if (sensores[i].value > mayor) {
        mayor=sensores[i].value;
        ident = sensores[i].sensor_id;
        }
    }

int get_lowest_value(Sensor sensores[]);
    int menor=sensores[0].value;
    int a;
    for(a=0;a<6;a++){
    if(sensores[i].value<menor){
        menor=sensores[i].value;
        ident2=sensores[i].sensor_id;
        }
    }

int get_average_value(Sensor sensores[]);
    float prom;
    int suma;
    suma+=sensores[0].value;
    prom= suma/5;
    
    
}