#include <iostream>

using namespace std;

int main(){
    int num; 
    int res = 10;

    cout << "Ingrese una cantidad de ceros: ";
    cin >> num;

    for(int i = 1; i < num; i ++){
        res *= 10;
        cout << "10 elevado a " << i + 1 << " = " <<  res << endl;
    }
}