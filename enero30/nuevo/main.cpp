#include <iostream>

using namespace std;

int main()
{
    int n1,n2,s,r,m,d;
    char o;

        cout << "Introduce el primer numero" << endl;
        cin >>n1;
        cout << "Introduce el segundo numero" << endl;
        cin >>n2;
        cout << "Introduce el signo de operacion a realizar (suma, resta, multiplicacion, division" << endl;
        cin >>o;
        switch (o)
        {
        case '+':
            s=n1+n2;
            cout << n1 << "+" << n2 << "=" << s << endl;
            break;
        case '-':
            r=n1-n2;
            cout << n1 << "-" << n2 << "=" << r << endl;
            break;
        case '*':
            m=n1*n2;
            cout << n1 << "*" << n2 << "=" << m << endl;
            break;
        case '/':
            d=n1/n2;
            cout << n1 << "/" << n2 << "=" << d << endl;
            break;
        }

    return 0;
}
