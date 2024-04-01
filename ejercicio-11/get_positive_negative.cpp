//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){
 

    //no se puede usar bucles

    int n1, n2, n3, n4, n5, counter_pos, counter_neg, counter_z;

    cout << "Ingresa 5 numeros, y te mostraremos cuantos de ellos son positivos, negativos y/o cero" << endl;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    //chequeamos el n1
    if(n1 > 0){
        counter_pos += 1;
    } else {
        if(n1 < 0) {
            counter_neg += 1;
        } else {
            counter_z += 1;
        }
    }

    //chequeamos el n2
    if(n2 > 0){
        counter_pos += 1;
    } else {
        if(n2 < 0) {
            counter_neg += 1;
        } else {
            counter_z += 1;
        }
    }

    //chequeamos el n3
    if(n3 > 0){
        counter_pos += 1;
    } else {
        if(n3 < 0) {
            counter_neg += 1;
        } else {
            counter_z += 1;
        }
    }

    //chequeamos el n4
    if(n4 > 0){
        counter_pos += 1;
    } else {
        if(n4 < 0) {
            counter_neg += 1;
        } else {
            counter_z += 1;
        }
    }

    //chequeamos el n5
    if(n5 > 0){
        counter_pos += 1;
    } else {
        if(n5 < 0) {
            counter_neg += 1;
        } else {
            counter_z += 1;
        }
    }

    cout << "Numeros positivos: " << counter_pos << endl;
    cout << "Numeros Negativos: " << counter_neg << endl;
    cout << "Numeros 0: " << counter_z << endl;
    return 0;
}