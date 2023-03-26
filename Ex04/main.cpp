#include <iostream>

using namespace std;

float soma(int n, float vet[])
{
    float resultado;
    if(n >= 0)
    {
        cout << "Chamada: " << n << endl;;
        cout << "Chamada Vetor: " << vet[n] << endl;
        *vet = *vet + 5;
        soma(n-1, vet);
    }

    return *vet;
}

int main()
{
    int n;
    cout << "Digite o tamanho do vetor: ";
    cin >> n;
    float *vet = new float [n];

    for(int i = 0; i < n; i++)
    {
        cout << "Digite os valores do vetor: ";
        cin >> vet[i];
    }
    float result;
    result = soma(n-1, vet);

    cout << "A soma e: " << result;

    delete [] vet;
    return 0;
}
