#include <iostream>

using namespace std;

int fact(int n){

    int res;

    if(n==0){
        res = 1;
    }else{
    res = n*fact(n-1);
    }
    return res;
}
int main(){

int n;
cout<<"Ingrese un numero entero\n";
cin>>n;
cout<<"El factorial de "<<n<<" es "<<fact(n) <<"\n";

    return 0;
}


// Recursividad: permite a una funcion llamaerse a si misma