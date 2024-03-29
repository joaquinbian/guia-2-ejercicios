//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int a, b, c;

    cout << "Ingresa 3 numeros, y te diremos si los 3 son iguales " << endl;

    cin >> a >> b >> c;


    if(a == b && b == c){
        cout << "Son iguales";
    }

    cout << endl;
   
    return 0;
}