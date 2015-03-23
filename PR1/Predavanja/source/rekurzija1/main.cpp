#include <iostream>
#include <iomanip>

using namespace std;

// int brojac = 0;

int najveci (int t)
{
    int br = 0;
    cout<<"Unesi broj : ";
    cin>>br;
    if (br <= 0)
        return t;
    else
    {
        if (br > t)
            t = br;
        return najveci(t);
    }
}

int zadatak20 (int broj, int t)
{
    int a = 0;
    if (broj == t)
        return 0;
    cout<<"Unesi brojeve koje ces sabirati: "<<endl;
    cin>>a;
    if (a != 0)
        return a + zadatak20(++broj,t);
    else
        return 0;
}

int zadatak19 (int* brojac)
{
    int x{0};
    //cout<<++brojac<<" \t";
    (*brojac)++;
    cout<<"Unesi broj: ";
    cin>>x;
    if (x != 0)
        return x + zadatak19(brojac);
    else
        return 0;
}

int zadatak18 (int a, int b)
{
    if (a == b)
    {
        cout<<"Suma kubova ("<<a<<", "<<b<<") = "<<a*a*a<<endl;
        cout<<"============================================="<<endl;
        return a*a*a;
    }
    else
    {
        cout<<"Suma kubova ("<<a<<", "<<b<<") = "<<a*a*a<<" \t + suma kubova ("<<a+1<<", "<<b<<")"<<endl;
        return a*a*a + zadatak18(a+1,b);
    }

}

int zadatak17 (int n, int m)
{
    int sr{0};
    if (n == m)
        return n*m;
    else
    {
        sr = (n+m)/2;
        return zadatak17(n,sr) + zadatak17(sr+1,m);
    }


}

int zadatak16 (int y)
{
    if (y <= 0)
        return 0;
    while (y % 3 != 0)
        y--;
    return y + zadatak16(y-1);
}

int sumaNeparnih (int x)
{
    if (x%2 == 0)
        x-=1;
    if (x <= 0)
        return 0;
    else
        return x + sumaNeparnih(x - 2);
}

int fib (int a) // fibonaci niz !
{
    if (a <= 2)
        return 1;
    else
        return (fib(a - 1)+ fib(a - 2));
}

int sumaKvadrata2 (int a, int b)
{
    //if (a == b+1)
       // return 0;
    //else
      //  return a*a + sumaKvadrata2(a+1,b);

    if (b == a-1)
        return 0;
    else
        return b*b + sumaKvadrata2 (a,b-1);
}

int sumaKvadrata (int n)
{
    if (n == 0)
        return 0;
    else
        return (n*n + sumaKvadrata(n-1));
}

int f1(int n)
{
    if (n==0)
    return 1;
        else
    return (n * f1(n-1) );
}

int main()
{
    //int broj =  0;
    //cout<<"Koliko brojeva ? "<<endl;
    cout<<"Najveci je: "<<najveci(0)<<endl;
   // int brojac = 0;
    //int br{0};
    //int x{0};
   // cout<<"Unesi broj : "<<endl;
   //cout<<"Unesi broj do kojeg zelis racunati sumu neparnih brojeva : ";
    //cout<<"Unesi broj za racunanje fibonaci niza: ";
  //  cin>>x;
   // cout<<"Rezultat je: "<<zadatak17(x,y)<<endl;
   // cout<<"Rezultat je: "<<zadatak18(x,y)<<endl;
   // cout<<"Rezultat je: "<<zadatak19(&brojac)<<", a broj poziva je: ";
   // cout<<brojac<<endl;
    //cout<<"Rezultat je: "<<sumaKvadrata2(x,y);
    //cout<<"Rezultat je: "<<zadatak16(x)<<endl;
    //if (x%2 == 0)
       // cout<<"Broj nije neparan !!!"<<endl;
    //else
        //cout<<"Suma neparnih brojeva je : "<<sumaNeparnih(x)<<endl;
    //cout<<"Fibonaci niz za broj "<<x<<" je: "<<fib(x)<<endl;
    //int n{0},m{0};
    //cout<<"Unesi brojeve: ";
    //cin>>n>>m;
   // cout<<"Rezultat je : "<<sumaKvadrata2(n,m);
    //cout<<"Faktorijel je: "<<f1(broj)<<endl;
    return 0;
}
