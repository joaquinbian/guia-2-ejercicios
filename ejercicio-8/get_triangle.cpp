//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 

    int a, b, c;

    string triangle_type;

    cout << "Ingresa todos 3 lados del triangulo y dire si es Isoceles, Escaleno o Equilatero" << endl;

    cin >> a >> b >> c;

    if(a == b && b == c){
        triangle_type = "Equilatero";
    } else {
        if(a != b && a != c && b != c){
            triangle_type = "Escaleno";
        } else {
            triangle_type = "Isoceles";
        }
    }


    cout << "El triangulo es " << triangle_type;

    cout << endl;

    return 0;
}