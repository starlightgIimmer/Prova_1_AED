#include <iostream>
#include <vector>

using namespace std;

void insertionSort(int n, int a[])
{
    for(int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i- 1;
        
        while (j>=0 && a[j]>key)
        {
            a[j+ 1] = a[j];
            j = j - 1; 
        }
        
        a[j+ 1] = key;
    }
}


pair <int, int> BuscarX(int x, int t, int a[])
{
    int pesquisas = 0;
    int i = 0;
    
    while(i<t && a[i] != x)
        i++;
        pesquisas++;
    return make_pair((i == t) ? -1 : i, pesquisas);
}    
    
int main()
{
    int N =10;
    int v[N];
    cout<<"Insira os elementos do vetor: ";
    for (int i = 0; i < N; i++) 
    {
        cin >> v[i];
    }
    
    cout << "Os elementos do vetor são: ";
    for (int i = 0; i < N; ++i) 
    {
        cout << v[i]<<" ";
    }
    
     insertionSort(N, v);
    cout << "\nElementos depois da ordenação: ";
    for (int& elementos : v) 
    {
        cout << elementos << " ";
    }
    
    int X;
    cout<<"Insira o valor procurado: ";
    cin>>X;
    
    pair<int, int> resultado = BuscarX(X, N, v);
    if (resultado.first != -1) 
    {
        cout << "O valor " << X << " foi encontrado na posição " << resultado.first << ".";
        cout << "Número de pesquisas realizadas: " << resultado.second;
    } else 
    {
        cout << "O valor " << X << " não foi encontrado no vetor.";
        cout << "Número de pesquisas realizadas: " << resultado.second;
    }
    
    return 0;
}
