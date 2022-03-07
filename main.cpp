using namespace std;
#include "iostream"
#include "string"
#include<locale.h>
// Densell Andres Guevara Morales 9090-20-11193

using namespace std;

int main()
{

float nm, nm1, nm2;
int fact = 1;
int opcion;

cout << "Eslige Una de las acciones que quieres realizar: Calcular la factorial de un numero[1]  Tabla de multiplicar[2]  Calcular numeros pares[3]  Que dia de la semana es laboral[4]  Comprobar contraseña bancaria[5]";
cin >> opcion;


switch (opcion)
{
    case 1:
        cout << "Elejiste Calcular la factorial de un numero" << endl;
        printf ("\n");

        printf("Ingresa el numero que deseas factorizar");
        cin>>nm;

        for(int i=1; i<=nm;i++){
            fact= fact*= i;
        }
cout<< "El resultado del factorial es:"<<fact<<endl;
        break;

    case 2:
        cout << "Elejiste Tabla de multiplicar" << endl;
        printf ("\n");

do {
    printf("Ingrese el numero del cual quiere visualizar su tabla de multiplicar");
    cin >> nm;
}while((nm<1) || (nm>10));

for (int i=1; i<=10; i++){
    cout<<nm<<"*"<<i<<"="<<nm*i<<endl;
}

        break;


}


    return 0;
}
