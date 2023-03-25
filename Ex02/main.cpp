#include <iostream>

using namespace std;

void imprimeIntervalo(int a, int b, int inc){

    if(a <= b)
    {
        cout << a << " ";
        imprimeIntervalo(a+inc, b, inc);
    }

}

int main()
{
    int a, b, inc;
    cout << "Digite o Valor de A: ";
    cin >> a;
    cout << "Digite o Valor de B: ";
    cin >> b;
    cout << "Digite o Incremento: ";
    cin >> inc;

    imprimeIntervalo(a, b, inc);
    return 0;
}
