
//fecha operación febrero 4 2023
//Este programa tiene como objetivo mostrar el uso de calculadoras a traves de una calculadora.

#include <iostream>
#include <cstdlib>

using namespace std;

void sumar();
void restar();
void multiplicar();
void dividir();
void factorial();
void menuPrincipal();
void menuOperacionesBasicas();
void menuOperacionesExtendidas();

int main()
{
    menuPrincipal();
}
//Implementacion de funciones
void menuOperacionesExtendidas()
{
    system("cls");
         cout <<"\n\n\t\t\tMenu Operaciones Basicas" << endl;
         cout <<"\t\t\t" << endl;
         cout <<"\t1. Sumar dos numeros" << endl;
         cout <<"\t2. SALIR" << endl;
         cout <<"\n\t Ingrese una opcion" << endl;
         cin >> opciones;
         switch (opciones)
         {
         case 1:
            sumar();
            break;
         case 2:
            repetir=false;
            break;
         }
    }while (repetir);
    return 0;
}
void menuOperacionesBasicas()
{
    int opciones;
    bool repetir=true;
    do
    {
        system("cls");
         cout <<"\n\n\t\t\tMenu Operaciones Basicas" << endl;
         cout <<"\t\t\t" << endl;
         cout <<"\t1. Sumar dos numeros" << endl;
         cout <<"\t2. Restar dos numeros" << endl;
         cout <<"\t3. SMultipliccar dos numeros" << endl;
         cout <<"\t4. Dividir dos numeros" << endl;
         cout <<"\t5. SALIR" << endl;
         cout <<"\n\t Ingrese una opcion" << endl;
         cin >> opciones;
         switch (opciones)
         {
         case 1:
            sumar();
            break;
         case 2:
            restar();
            break;
         case 3:
            multiplicar();
            break;
         case 4:
            dividir();
            break;
         case 5:
            repetir=false;
            break;
         }
    }while (repetir);
    return 0;
}
void menuPrincipal()
{
    int opciones;
    bool repetir=true;
    do
    {
        system("cls");
         cout <<"\n\n\t\t\tMENU PRINCIPAL" << endl;
         cout <<"\t\t\t---------------------" << endl;
         cout << "\t1. Operaciones Basicas" <<endl;
         cout <<"\t2. Operaciones Extendidas" << endl;
         cout <<"\t3. Salir" << endl;
         cout <<"\n\t Ingrese una opcion" << endl;
         cin >> opciones;
         switch (opciones)
         {
         case 1:
            menuOperacionesBasicas();
            break;
         case 2:
            menuOperacionesExtendidas();
            break;
         case 3:
            repetir=false;
            break;
         }
    }while (repetir);
}
void factorial()
{
    system("cls");
    int numeroIngresado
    cout << "\n\tCalculo del Factorial" << endl;
    cout << "\t\t\t----------------" << endl;
    cout << "\n\tIngrese Numero: ";
    cin >> numeroIngresado;
    resultadoFactorial=1;
    for(i=1;i<=numeroIngresado;i++)
    {
        resultadoFactorial= resultadoFactorial * i;
    }
    cout << "\t" <<numeroIngresado << "!"
    system("pause>nul");
}
void sumar()
{
    int primerNumero, segundoNumero;
    float resultadoSumar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------------"<< endl;
    resultadoSumar= primerNumero+segundoNumero;
    cout << "\tResultado de la suma. " << resultadoSumar << endl;
    system("pause>nul");
}
void restar()
{
    int primerNumero, segundoNumero;
    float resultadoRestar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------------"<< endl;
    resultadoRestar= primerNumero-segundoNumero;
    cout << "\tResultado de la resta. " <<resultadoRestar << endl;
    system("pause>nul");
}
void multiplicar()
{
    int primerNumero, segundoNumero;
    float resultadoMultiplicar;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------------"<< endl;
    resultadoMultiplicar= primerNumero*segundoNumero;
    cout << "\tResultado de la multiplicacion. " << resultadoMultiplicar << endl;
    system("pause>nul");
}
void dividir()
{
    int primerNumero, segundoNumero;
    float resultadoDividir;
    cout << "\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout << "\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout << "\n\t----------------------------"<< endl;
    if(segundoNumero==0)
    {
        cout << "\tSegundo numero no puede ser cero ERROR";
    }
    else
    {
        resultadoDividir= primerNumero/segundoNumero;
    cout << "\tResultado de la division. " << resultadoDividir << endl;
    }
    system("pause>nul");
}
