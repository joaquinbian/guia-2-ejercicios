//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int a, b, c;

    cout << "Ingresa 3 numeros y te diremos si son todos diferentes " << endl;

    cin >> a >> b >> c;

    if(a != b && a != c && b != c){
        cout << "Son diferentes ";
    }
    
    cout << endl;
    
    return 0;
}