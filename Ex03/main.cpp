#include <iostream>

using namespace std;

void imprimeDecrescente(int n)
{
    if(n >= 0)
        cout << " " << n;
        imprimeDecrescente(n-1);
}

int main()
{
    int numero;
    cout << "Digite um Numero Inteiro: " << endl;
    cin >> numero;

    imprimeDecrescente(numero);
    return 0;
}
