//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 

    int a, b, c, max;

    cout << "Ingresa 3 numeros y te mostrare el mas grande de ellos " << endl;

    cin >> a >> b >> c;

    if(a >= b && a >= c){
        max = a;
    } else {
        if(b >= c){
            max = b;
        } else {
            max = c;
        }
    }

    cout << "El mas grande es " << max;


    cout << endl;
    
    
    return 0;
}