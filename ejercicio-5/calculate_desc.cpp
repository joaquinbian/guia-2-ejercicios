//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 
    float price, per_to_pay;
    int desc;

    cout << "Ingrese el precio del perfume " << endl;

    cin >> price;

    if(price < 100){
        desc = 5;
    } else {
        if(price >= 100 && price <= 500){
            desc = 10;
        } else {
            desc = 15;
        }
    }


    //con esto calculamos el porcentaje que paga del producto
    per_to_pay = 100 - desc;

    cout << "El precio del producto queda en: $" << price * (per_to_pay / 100);

    cout << endl;


   
    return 0;
}