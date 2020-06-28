#include"iostream"
using namespace std;


void mayor(float [ ],float);
void menor(float [ ], float);

float promedio(float arreglo[]){
    float suma = 0.0;

    for(int i=0 ; i<25 ; i++){
        suma +=arreglo[i];
    }

    return suma / 25;
}

int main(){


    cout<<"\nPrograma para calcular el promedio de estaturas de 25 alumnos\n\n";
    cout<<"Acontinuacion ingrese las medidas de los alumnos "<<endl<<endl;
    
     float estaturas[25];

     for(int i=0 ; i<25 ; i++){

         cout<<"Ingrese la medida #"<<i+1<<": ";
         cin>>estaturas[i];
     }

     float media = promedio(estaturas);

     cout<<"El promedio de las estaturas es: "<<media<<endl;

     mayor(estaturas, media);
     menor(estaturas, media);

}

void mayor(float alturas[], float media){

    int mayor=0;

    for(int i=0 ; i<25 ; i++){

        if(alturas[i] > media){

            mayor++;
        }
    }

    cout<<"El numero de alunmos que tienen una estatura que esta arriba del promedio es: "<<mayor<<endl;
}
void menor(float alturas[], float media){

    float menor = 0;

    for(int i=0 ; i<25 ; i++){

        if(alturas[i] < media){

            menor++;
        }
    }

    cout<<"El numero de alumnos que tienen una estatura por debajo del promedio es: "<<menor<<endl;
}