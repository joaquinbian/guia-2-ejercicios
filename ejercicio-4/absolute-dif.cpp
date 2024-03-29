//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int n1, n2, res;

    cout << "Ingresa 2 numeros y devolveremos la diferencia absoluta " << endl;

    cout << "Ingresa el primer numero " << endl;

    cin >> n1;

    cout << "Ingresa el segundo numero " << endl;

    cin >> n2;

    res = n1 - n2;

    if(res < 0) {
        res *= -1; 
    }

    cout << "La diferencia absoluta es " << res;

    cout << endl;

    return 0;
}