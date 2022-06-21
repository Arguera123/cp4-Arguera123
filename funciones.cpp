#include <iostream>

using namespace std;

//Declarar la funcion
int sumar(int x, int y);

int main(){
    int num1, num2;

    cout << "Ingrese un valor: " << endl;
    cin >> num1;
    cout << "Ingrese otro valor: " << endl;
    cin >> num2;

    //Llmar funcion
    cout << sumar (num1,num2) << endl;
    return 0;    
}

//Definicion de la funcion
int sumar(int x, int y){
    int resultadoSuma;
    resultadoSuma = x + y;
    return resultadoSuma;
}