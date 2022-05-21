#include <iostream>

using namespace std;

int main(){
    int vector [10];
    
    vector[100] = 1;
    for(int i =0; i < 10; i++){
        cout << "Ingrese un numero: ";
        cin >> vector[i];
    }
    for(int i = 0; i < 10; i ++){
        cout << "El numero: " << vector[i] << " Se encuentra en la pocision: " << i <<endl; 
    }
}