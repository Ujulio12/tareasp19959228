//Fecha creeación: 6 feb 2023 - autor: daguilae
//Este programa tienen como objetivo mostrar el uso de funciones a traves de una calculadora
#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Definición de prototipos
void menuPrincipal();
void menuOperacionesBasicas();
void menuOperacionesExtendidas();
void factorial();
void sumar();
void restar();
void multiplicar();
void dividir();

void potenciaAlCuadrado();
void raizCuadrada();
void tangente();
void promedio();
void teoremaDePitagoras();

int main() {
    menuPrincipal();
    return 0;
}
//Implementación de funciones
void menuOperacionesExtendidas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Extendidas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Factorial" << endl;
        cout << "\t2. Potencia al cuadrado" << endl;
        cout << "\t3. Raiz cuadrada" << endl;
        cout << "\t4. Tangente" << endl;
        cout << "\t5. Promedio" << endl;
        cout << "\t6. Teorema de pitagoras" << endl;
        cout << "\t7. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
        case 1:
                factorial();
                break;
        case 2:
                potenciaAlCuadrado();
                break;
        case 3:
                raizCuadrada();
                break;
        case 4:
                tangente();
                break;
        case 5:
                promedio();
                break;
        case 6:
                teoremaDePitagoras();
                break;
        case 7: repetir = false;
                break;
        }
    } while (repetir);
}
void menuOperacionesBasicas()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMenu Operaciones Basicas" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Sumar dos numeros" << endl;
        cout << "\t2. Restar dos numeros" << endl;
        cout << "\t3. Multiplicar dos numeros" << endl;
        cout << "\t4. Dividir dos numeros" << endl;
        cout << "\t5. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
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
        case 5: repetir = false;
                break;
        }
    } while (repetir);
}
void menuPrincipal()
{
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        cout << "\n\n\t\t\tMENU CALCULADORA" << endl;
        cout << "\t\t\t-----------------" << endl;
        cout << "\t1. Operaciones Basicas" << endl;
        cout << "\t2. Operaciones Extendidas" << endl;
        cout << "\t3. SALIR" << endl;
        cout << "\n\tIngrese una opcion: ";
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
                repetir = false;
                break;
        }
    } while (repetir);
}
void factorial()
{
    system("cls");
    int numeroIngresado, i;
    float resultadoFactorial;
    cout << "\n\tCalculo del Factorial" << endl;
    cout << "\t\t\t-----------------" << endl;
    cout << "\n\tIngrese Número: ";
    cin >> numeroIngresado;
    resultadoFactorial = 1;
    for (i=1; i <= numeroIngresado; i++)
    {
        resultadoFactorial = resultadoFactorial * i;
    }
    cout << "\t" << numeroIngresado << "! = " << resultadoFactorial << endl;
    system("pause>nul");
}
void potenciaAlCuadrado()
{
    int numero;
    float potencia;
    cout << "\n\tIngrese el numero que desea: ";
    cin >> numero;
    cout << "\n\t----------------------" << endl;
    potencia = numero * numero;
    cout << "\tResultado de la potencia " << potencia << endl;
    system("pause>nul");
}
void raizCuadrada()
{
    int numero;
    float raiz;
    cout << "\n\tIngrese el numero que desea: ";
    cin >> numero;
    cout << "\n\t----------------------" << endl;
    if(numero>0)
    {
        raiz = sqrt(numero);
        cout << "\tResultado de la raiz " << raiz << endl;
    }
    else
    {
        cout <<"\tEl número debe ser mayor a cero! "  << endl;
    }
    system("pause>nul");
}
void tangente()
{

    int angulo;
    float tangente;
    cout << "\n\tIngrese Valor del angulo: ";
    cin >> angulo;
    cout << "\n\t----------------------" << endl;
    tangente=tan(angulo*3.14159/180);
    cout << "\tResultado de la tangente: " << tangente << endl;
    system("pause>nul");
}
void promedio()
{
    int a,b,c,d,e,f,x,contador;
    float resultadoPromedio;
    cout << "\n\tIngrese cuantos números desea (3 a 6) ";
    cin >> x;
    contador=0;
    if(x>2 && x<7)
    {
        switch (x)
        {
        case 3:
            cout << "\n\tIngrese primer numero: ";
            cin >> a;
            cout << "\n\tIngrese segundo numero: ";
            cin >> b;
            cout << "\n\tIngrese tercer numero: ";
            cin >> c;
            resultadoPromedio=(a+b+c)/x;
            break;
        case 4:
            cout << "\n\tIngrese primer numero: ";
            cin >> a;
            cout << "\n\tIngrese segundo numero: ";
            cin >> b;
            cout << "\n\tIngrese tercer numero: ";
            cin >> c;
            cout << "\n\tIngrese cuarto numero: ";
            cin >> d;
            resultadoPromedio=(a+b+c+d)/x;
            break;
        case 5:
            cout << "\n\tIngrese primer numero: ";
            cin >> a;
            cout << "\n\tIngrese segundo numero: ";
            cin >> b;
            cout << "\n\tIngrese tercer numero: ";
            cin >> c;
            cout << "\n\tIngrese cuarto numero: ";
            cin >> d;
            cout << "\n\tIngrese quinto numero: ";
            cin >> e;
            resultadoPromedio=(a+b+c+d+e)/x;
            break;
        case 6:
            cout << "\n\tIngrese primer numero: ";
            cin >> a;
            cout << "\n\tIngrese segundo numero: ";
            cin >> b;
            cout << "\n\tIngrese tercer numero: ";
            cin >> c;
            cout << "\n\tIngrese cuarto numero: ";
            cin >> d;
            cout << "\n\tIngrese quinto numero: ";
            cin >> e;
            cout << "\n\tIngrese sexto numero: ";
            cin >> f;
            resultadoPromedio=(a+b+c+d+e+f)/x;
            break;
        }
        cout << "\tResultado del promedio: " << resultadoPromedio << endl;
    }
    else
    {
        cout << "\tEl numero ingresado no se encuentra en el rango. " << resultadoPromedio << endl;
    }

    system("pause>nul");
}
void teoremaDePitagoras()
{
    int primerLado, segundoLado,p1,p2;
    float resultado;
    cout << "\n\tIngrese primer lado: ";
    cin >> primerLado;
    cout << "\n\tIngrese segundo lado: ";
    cin >> segundoLado;
    cout << "\n\t----------------------" << endl;
    p1=primerLado*primerLado;
    p2=segundoLado*segundoLado;
    resultado = sqrt(p1 + p2);
    cout << "\tTercer lado: " << resultado << endl;
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
    cout << "\n\t----------------------" << endl;
    resultadoSumar = primerNumero + segundoNumero;
    cout << "\tResultado de la suma: " << resultadoSumar << endl;
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
    cout << "\n\t----------------------" << endl;
    resultadoRestar = primerNumero - segundoNumero;
    cout << "\tResultado de la resta: " << resultadoRestar << endl;
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
    cout << "\n\t----------------------" << endl;
    resultadoMultiplicar = primerNumero * segundoNumero;
    cout << "\tResultado de la multiplicacion: " << resultadoMultiplicar << endl;
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
    cout << "\n\t----------------------" << endl;
    if (segundoNumero == 0)
    {
        cout << "\tSegundo numero no puede ser cero (0) ERROR" << endl;
    } else
    {
        resultadoDividir = primerNumero / segundoNumero;
        cout << "\tResultado de la division: " << resultadoDividir << endl;
    }
    system("pause>nul");
}

