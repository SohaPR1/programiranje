#include <iostream>

using namespace std;

int main()
{
    int cifra{0};
    int t{0};
    cout<<"Koliko zelis unjeti brojeva ? : ";
    cin>>cifra;
    int broj{0};
    for (int i = 0; i<cifra; i++)
    {
        cout<<"Unesi broj "<<i+1<<" : ";
        cin>>broj;
        if (i == 0)
            t = broj;
        if (broj>t)
            t = broj;
    }
    cout<<"Najveci broj je : "<<t<<endl;
    return 0;
}
