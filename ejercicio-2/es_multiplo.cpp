//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int num1, num2;

    cout << "Ingresa 2 numeros y te diremos si el primero es multiplo del segundo. " << endl;
    cout << "Ingresa el primer numero " << endl;
    
    cin >> num1;

    cout << "Ingresa el segundo numero " << endl;

    cin >> num2;

    int rest = num1 % num2;

    if(rest == 0){
        cout << "Es multiplo";
    } else {
        cout << "No es multiplo";
    }

    cout << endl;
    
    return 0;
}