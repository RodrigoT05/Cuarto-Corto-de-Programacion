#include <iostream>
#include <string>
using namespace std;

char CMurci(char clave[], int i); // CMurci es la clave murcielago
void Murcielago(char x[], int n); //arreglo perteneciente a la palabra murcielago

int main(void){

    string palabra, resultado;
    char clave[100];
    int n;

    cout<<"\nPrograma codificador de palabras en Clave Murcielago\n\n";
    cout<<"Ingrese una palabra: ";
    cin>>clave;

    palabra=clave;
    n=(palabra).length();

    for(int i = 0; i < n; i++)
        CMurci(clave, i);

    resultado=clave;

    cout<<"La palabra '"<<palabra<<"' codificada en clave murcielago es: "<<resultado<<endl;
    Murcielago(clave, n);
}

char CMurci(char clave[], int i){

    switch (clave[i]){
            
    case 'm':
        clave[i]='0'; return clave[i];
        break;
        case 'u':
        clave[i]='1'; return clave[i];
        break;
        case 'r':
        clave[i]='2'; return clave[i];
        break;
        case 'c':
        clave[i]='3'; return clave[i];
        break;
        case 'i':
        clave[i]='4'; return clave[i];
        break;
        case 'e':
        clave[i]='5'; return clave[i];
        break;
        case 'l':
        clave[i]='6'; return clave[i];
        break;
        case 'a':
        clave[i]='7'; return clave[i];
        break;
        case 'g':
        clave[i]='8'; return clave[i];
        break;
        case 'o':
        clave[i]='9'; return clave[i];
        break;
    
    default:  return clave[i];
        break;
    }
    return clave[i];
}

void Murcielago(char x[ ], int n){

int i;

for (int i = 0; i < n; i++){

    cout << x[i] << " "<<endl;

}

}
