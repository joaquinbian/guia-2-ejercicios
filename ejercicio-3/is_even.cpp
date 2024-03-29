//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int num;

    cout << "Ingrese un numero " << endl;

    cin >> num;

    int rest = num % 2;
    
    if(rest == 0){
        cout << "Es par";
    } else {
        cout << "Es impar";
    }

    cout << endl;
   
    return 0;
}