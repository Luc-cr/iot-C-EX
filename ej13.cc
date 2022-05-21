#include <iostream>

using namespace std;

int main(){
    int num;
    int count;

    cout << "Ingrese un valor entero: ";
    cin >> num;

    count = num;
    while(count != 0){
        if(num % count == 0 ){
            cout << num << " Es divisible por " << count << endl;
        }
        count--;
    }
}