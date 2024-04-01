//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 

    int n1, n2, n3, middle;

    cout << "Ingresa 3 numeros y te diremos cual es el numero del medio" << endl;

    cin >> n1 >> n2 >> n3;

    if(n1 > n2 && n1 < n3 || n1 < n2 && n1 > n3){
        middle = n1;
    } else {
        if(n2 > n1 && n2 < n3 || n2 < n1 && n2 > n3){
            middle = n2;
        } else {
            middle = n3;
        }
    }

    cout << "El numero del medio es " << middle;
    cout << endl;
    return 0;
}