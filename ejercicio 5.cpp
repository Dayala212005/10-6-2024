#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    int x;
    int *apuntador = &x;
    cout<<"Ingrese un numero entero\n";
    cin>>*apuntador;
    cout<<x<<"\n";
    cout<<&apuntador;
    return 0;
}