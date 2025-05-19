#include <iostream>
#include <cmath>
using namespace std;

int main(){

int num1, num2, res, opcion;

//Pedimos que se ingrese los valores a trabajar
cout<<"Ingrese su primer valor \n";
cin>>num1;
cout<<"Ingrese su segundo valor \n";
cin>>num2;

//se le pide al usuario su opcion.
cout<<"Elija que debe realizar";
cout<<"Opcion 1 para sumar";
cout<<"Opcion 2 para restar ";
cout<<"Opcion 3 para Multiplicar";
cout<<"Opcion 4 para dividir";
cout<<"Elija su opcion: ";
cin>>opcion;

//Se revisa cada caso.
switch (opcion)
{case 1:res = num1 + num2;
    cout<<"Su resultado es "<<res;
    break;

case 2: res = num1 - num2;
cout<<"Su resultado es "<<res;
break;

case 3: res = num1 * num2;
cout<<"Su resultado es "<<res;
}
}