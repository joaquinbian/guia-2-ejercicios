//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int num;

    cout << "Ingrese un numero " << endl;

    cin >> num;

    if(num > 0){
        cout << "Es positivo";
    } else {
        if(num == 0){
            cout << "Es cero";
        } else {
            cout << "Es negativo";
        }
    }

    cout << endl;
   
    return 0;
}