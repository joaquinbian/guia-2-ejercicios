//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
    
    const int CURRENT_DAY = 2;
    const int CURRENT_MONTH = 4;
    const int CURRENT_YEAR  = 2024;

    int d, m, y, age;

    cout << "Ingresa solo el dia de tu nacimiento " << endl;

    cin >> d;

     if(d > 31){
        cout << "El dia ingresado tiene que ser menor o igual a 31 " << endl;
        return 1;
    } 

    cout << "Ingresa el mes de tu nacimiento " << endl;

    cin >> m;

     if(m > 12){
        cout << "El mes ingresado debe ser menor o igual a 12 " << endl;
        return 1;
    } 

    cout << "Ingresa el anio de tu nacimiento " << endl;

    cin >> y;


    if(y > CURRENT_YEAR){
        cout << "No naciste " << endl;
        return 1;
    }

    //presunta edad
    age = CURRENT_YEAR - y;

    if(CURRENT_MONTH < m || CURRENT_MONTH == m && CURRENT_DAY < d){
        age -= 1;
    } 


    cout << "Tu edad es " << age;

    cout << endl;
    
    return 0;
}