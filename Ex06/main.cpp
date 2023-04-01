#include <iostream>

using namespace std;

int contaPares(int n, int vet[])
{
    if(n == 1)
    {
        if(vet[0] % 2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if(vet[n] % 2 == 0)
    {
        return contaPares(n-1, vet) + 1;
    }
    else
    {
        return contaPares(n-1, vet);
    }
}

int main()
{
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    int *vet = new int[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Digite o elemento do vetor: ";
        cin >> vet[i];
    }

    cout << contaPares(n, vet);

    delete [] vet;
    return 0;
}
