#include <iostream>

using namespace std;

void unos (int niz[], int v)
{
    if (v == 0)
        cin>>niz[v];
    else
    {
        cin>>niz[v];
        unos (niz,v-1);
    }
}

void ispis (int* niz, int v)
{
    if (v == 0)
        cout<<niz[v]<<endl;
    else
    {
        cout<<niz[v]<<" , ";
        ispis(niz,v-1);
    }
}

int suma (int niz[], int v)
{
    if (v == 0)
        return niz[v];
    else
    {
        return niz[v] + suma(niz,v-1);
    }
}

int main()
{
    int velicina = 7;
    int niz [velicina];
    unos(niz,velicina-1);
    ispis (niz,velicina-1);
    cout<<suma (niz,velicina-1);
}
