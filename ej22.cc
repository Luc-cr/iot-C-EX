#include <iostream>

using namespace std;

int main(){
    int dias[12]= {31,28,31,30,31,30,31,31,30,31,30,31};
    int mes;
    int res;

    cout << "Indique un mes por numero: ";
    cin >> mes;

    cout << "Su mes tiene: " << dias[mes-1] << " dias" << endl;
    cout << "Ingrese el dia que quiere de ese mes: ";
    cin >> res;


    for(int i = 0; i < mes -1; i++){
        res +=dias[i];
    }
    cout << "Su dia es el dia: "<< res << " del año";
}