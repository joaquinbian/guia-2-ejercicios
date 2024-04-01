//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
    
    int a, b, c, aux;

    cout << "Ingresa 3 numeros y los ordenaremos de menor a mayor" << endl;

    cin >> a >> b >> c;

    
    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }


    if(b > c){
        aux = b;
        b = c;
        c = aux;
    }

    if(a > b){
        aux = a;
        a = b;
        b = aux;
    }

    cout << "1: " << a << endl; 
    cout << "2: " << b << endl; 
    cout << "3: " << c << endl; 
    
    return 0;
}