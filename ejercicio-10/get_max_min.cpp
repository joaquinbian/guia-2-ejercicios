//importamos libreria para hacer print e ingresar info 
#include <iostream>

//usamos el namespace
using namespace std;

int main(){



    //no se pueden usar bucles pq no lo vimos todavia, entonces no tiene sentido
 
    int a, b, c, d, e, max, min;

    cout << "Ingresa 5 numeros, y devolvere el minimo y el mayor de ellos " << endl;

    cin >> a >> b >> c >> d >> e;



    //buscamos el mayor
    if(a >= b && a >= c && a >= d && a >= e){
        max = a;
    }    else {
        if(b >= c && b >= d && b >= e){
            max = b;
        } else {
            if(c >= d && c >= e){
                max = c;
            } else{
                if(d >= e){
                    max = d;
                } else {
                    max = e;
                }
            }
        }
    }

    //buscamos el menor
    if(a <= b && a <= c && a <= d && a <= e){
        min = a;
    }    else {
        if(b <= c && b <= d && b <= e){
            min = b;
        } else {
            if(c <= d && c <= e){
                min = c;
            } else{
                if(d <= e){
                    min = d;
                } else {
                    min = e;
                }
            }
        }
    }



    cout << "El mayor es: " << max << endl;

    cout << "El menor es: " << min << endl;
    //esto es por buena practica, si el programa
    //termina exitosamente, retorna 0
    return 0;
}