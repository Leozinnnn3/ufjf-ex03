 #include <iostream>

using namespace std;

float menor(int n, float vet[])
{
    if(n == 1)
        return vet[0];

    //if(menor(n-1, vet) < vet[n-1])
     //   return menor(n-1, vet);

    int x = menor(n-1, vet);
    if(x < vet[n-1])
        return x;
    else
        return vet[n-1];
}

int main()
{
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    float *vet = new float[n];

    for(int i =0; i < n; i++)
    {
        cout << "Digite os elementos do vetor: ";
        cin >> vet[i];
    }
    float result;
    result = menor(n, vet);

    cout << "O menor valor e: " << result << endl;

    delete [] vet;
    return 0;
}
