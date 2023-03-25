#include <iostream>

using namespace std;

int fatorial(int n)
{
    if(n == 0)
        return 1;

    return n*fatorial(n-1);
}

int main()
{
    int numero, result;
    cout << "Digite um numero: ";
    cin >> numero;

    result = fatorial(numero);
    cout << "O Resultado do Fatorial e : " << result << endl;
    return 0;
}
