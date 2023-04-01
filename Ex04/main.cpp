#include <iostream>

using namespace std;

float soma(int n, float vet[])
{
    if(n == 0)
        return 0;

    return soma(n-1, vet) + vet[n-1];
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
    result = soma(n, vet);

    cout << "A soma e: " << result;

    delete [] vet;
    return 0;
}
