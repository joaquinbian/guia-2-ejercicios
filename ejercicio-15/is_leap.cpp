//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    int year, rest4, rest100, rest400;

    cout << "Ingresa un anio y te diremos si es bisiesto o no " << endl;
    cin >> year;
    //tiene que ser multiplo de 4

    //tiene que ser multiplo de 100 y 400?

     rest4 = year % 4;
     rest100 = year % 100;
     rest400 = year % 400;

    if((rest100 == 0 && rest400 == 0) && rest4 == 0){
        cout << year << " es un anio bisiesto " << endl;
    } else {
        if(rest4 == 0 && rest100 != 0){
            cout << year << " es un anio bisiesto " << endl;
        } else {
            cout << year << " no es un anio bisiesto " << endl;
        }

    }

    cout << endl;

    
    return 0;
}