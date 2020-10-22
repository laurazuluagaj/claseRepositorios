/*Reciba una cadena de caracteres y separe los numeros del resto de caracteres, generando
 una cadena con solo caracteres y otra con los numeros que habia en la cadena original.
A partir de la cadena de numeros obtenida, el programa separa en numeros de 2 cifras, los
suma e imprime el resultado.
En caso de no poderse dividir exactamente en numeros de 2 cifras, se colocan ceros a la
izquierda del primer numero.*/

#include <iostream>

//Variables globales y macros
#define TAM (int)10

using namespace std;

int main()
{
    char a[TAM]="AB11CD44";

    for (int var = 0; var < TAM; ++var){
        cout << a[var] << endl;
    }

    cout << "Imprimir solo los numeros de la cadena orignal" << endl;

    for(int var = 0;var < TAM; ++var){
        if (a[var]>='0' || a[var]<='9'){
            cout << a[var] << endl;
        }
    }
    return 0;
}
