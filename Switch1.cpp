#include <iostream>
using namespace std;

int main(){
    //Aqui se declaran las varibales
    int res, num1;
    //se pide el numero a ingresar
    cout<<"put a number ";
    cin>>num1;
    //Se calcula si es par o impar
    res= num1 % 2;

    //Se revisa cada caso.
    switch (res){
        case 1: cout<<num1<<"tu numero es impar\n";
     break;

     case 0: cout <<num1<<"Tu numero es par\n";
     break;

     default: cout<<"Datos incorrectos ";
     break;
    } 




    //Se termina el programa.
    return 0;

}
