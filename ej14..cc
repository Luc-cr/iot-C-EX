#include <iostream>

using namespace std;

int main(){
    int num;
    int count = 1;
    int mul = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> num;

    while(count != num+1){
        
       mul = mul * count;

        count++;
    }
    cout << "El factorial de " << num << " es " << mul;
}