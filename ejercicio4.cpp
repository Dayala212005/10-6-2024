#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
int x; 
int *apuntador = &x;
cout<<"Ingrese un numero entero\n";
cin >>*apuntador;

delete [] apuntador; 

apuntador = NULL;


cout<<"Usted ingreso e numero: "<<x<<"\n";


    return 0;
}