#include <iostream>

using namespace std;

int sum(int a, int b){return a + b;}
int res(int a, int b){return a - b;}
int mul(int a, int b){return a * b;}
int di(int a, int b){return a / b;}
int ut(int a, int b){return a % b;}


int main(){
    int num1; 
    int num2;
    char oper;
    
    while(true){
        cout << "Ingrese una operacion para realizar: ";
        cin >> num1 >> oper >> num2;

        switch (oper)
        {
        case '+':
            cout << "Resultado: " << sum(num1, num2)<< endl;
            break;
        case '-':
            cout << "Resultado: " << res(num1, num2)<< endl;
            break;
        case '*':
            cout << "Resultado: " << mul(num1, num2)<< endl;
            break;
        case '/':
            cout << "Resultado: " << di(num1, num2)<< endl;
            break;
        case '%':
            cout << "Resultado: " << ut(num1, num2) << endl;
            break;
        default:
            cout << "No existe esa operacion" << endl;
            break;
        }
    }
}