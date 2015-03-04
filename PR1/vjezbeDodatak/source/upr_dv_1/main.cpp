#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void pravougaonik ()
{
    int duzina{0},visina{0};
    cout<<"Unesi duzinu i visinu : "<<endl;
    cin>>duzina>>visina;
    for (int i = 0;i < visina; i++)
    {

        for (int j = 0;j < duzina; j++)
        {
            if ((i == 0) || (i == visina-1))
                cout<<"*";
            else
            {
                if ((j == 0)||(j == duzina-1))
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }

}

void slucajno ()
{
    int broj{0}, t{0};
    srand (time(NULL));
    t = rand() % 100 + 1;
    cout<<"Pokusaj pogoditi broj izmedju 1 i 100: ";
    do{
        cin>>broj;
        if (broj < t)
            cout<<"To je puno manje. Pokusaj ponovo!"<<endl;
        if (broj > t)
            cout<<"To je puno vise. Pokusaj ponovo!"<<endl;
    }while (broj != t);

    cout<<"BRAVOOO !"<<endl;

}

void sokovi()
{
    int broj{0};
    cout<<"Koji sok zelite ?"<<endl;
    cout<<"*-------------------*"<<endl;
    cout<<"1. Kola"<<endl;
    cout<<"2. Fanta"<<endl;
    cout<<"3. Juice"<<endl;
    cout<<"4. Tonic"<<endl;
    cout<<"5. Sprite"<<endl;
    cout<<"*-------------------*"<<endl;
    cin>>broj;
    switch(broj)
    {
        case 1: cout<<"Izabrali ste kolu !"<<endl;
        break;
        case 2: cout<<"Izabrali ste fantu !"<<endl;
        break;
        case 3: cout<<"Izabrali ste juice !"<<endl;
        break;
        case 4: cout<<"Izabrali ste tonic !"<<endl;
        break;
        case 5: cout<<"Izabrali ste sprite !"<<endl;
        break;
        default:
                cout<<"Greska !"<<endl;
    }
  //  if (broj > 0 && broj < 6)
    //{
      //  if (broj == 1)
        //    cout<<"Izabrali ste kolu !"<<endl;
        //if (broj == 2)
          //  cout<<"Izabrali ste fantu !"<<endl;
        //if (broj == 3)
          //  cout<<"Izabrali ste juice !"<<endl;
        //if (broj == 4)
         //   cout<<"Izabrali ste tonic !"<<endl;
        //if (broj == 5)
          //  cout<<"Izabrali ste sprite !"<<endl;
   // }
   // else
     //   cout<<"Greska !"<<endl;
}

void nula()
{
    float broj, a{0}, g{1},b{0};
    cout<<"Unesi brojeve: "<<endl;
    do
    {
        cin>>broj;
        if (broj != 0)
           {
               a+=broj;
               g*=broj;
               b++;
           }
    }while(broj != 0);

    cout<<"Aritimeticka sredina iznosi : "<<a/b<<endl;
    cout<<"Geometrijska sredina iznosi : "<<pow(g,1.0/b)<<endl;
}

void osmi()
{
    int broj,t{0};
    cout<<"Unesi 6 brojeva: "<<endl;
    for (int i = 0; i<6; i++)
    {
        cin>>broj;
        if(broj > 0 && broj%2 == 0)
            t++;
    }
    if (t == 6)
        cout<<"Svi brojevi su pozitivni i parni !"<<endl;
    else
        cout<<"Ima brojeva koji ili nisu pozitivni ili nisu parni !"<<endl;
}

void trokut ()
{
    float a,b,c,t,t1,t2;
    cout<<"Unesi brojeve a, b i c: "<<endl;
    cin>>a>>b>>c;
    t = sqrt(a*a + b*b);
    t1 = sqrt(a*a + c*c);
    t2 = sqrt(c*c + b*b);
    if ((c == t)||(b == t1)|| (a == t2))
        cout<<"Ova tri broja mogu biti stranice trokuta !"<<endl;
    else
        cout<<"Ova tri broja ne mogu biti stranice nekog trokuta !"<<endl;
}

void firme ()
{
    int br{0}; int rez1{0}; int rez2{0};
    cout<<"Unesi broj sati : ";
    cin>>br;
    rez1 = 10 + (0.5 * br);
    rez2 = 0.8 * br;
    if (rez1 == rez2)
        cout<<"Cijena prvog interneta iznosi : "<<rez1<<" KM, dok cijena drugog interneta iznosi : "<<rez2<<" KM, tako da je svejedno !"<<endl;
    if (rez1 > rez2)
        cout<<"Jeftinije je internet broj 2 i on iznosi: "<<rez2<<" KM, za razliku od prve opcije koja iznosi : "<<rez1<<" KM"<<endl;
    if (rez1 < rez2)
        cout<<"Jeftinije je internet broj 1 i on iznosi: "<<rez1<<" KM, za razliku od druge opcije koja iznosi : "<<rez2<<" KM"<<endl;
}

void prov ()
{
    float p;
    int t;
    cout<<"Unesi podatak : ";
    cin>>p;
    t = int(p);
    if (!cin)
        cout<<"Podatak nije broj!"<<endl;
    else
    {
        if (p >= 0 && t == p)
            cout<<"Prirodan !"<<endl;
        if (p < 0 && t == p)
            cout<<"Cijeli, ali nije prirodan!"<<endl;
        if (t == p)
            cout<<"Cijeli !"<<endl;
        else
            cout<<"Realan !"<<endl;
    }

}

float pretvaranje (int b)
{
    const float x {1.852};
    return b*x;
}

char provjera (int b)
{
    char s;
    if (b >= 0 && b < 60)
    {
        s = 'F';
        return s;
    }

    if (b >= 60 && b < 70)
    {
        s = 'D';
        return s;
    }
    if (b >= 70 && b < 80)
    {
        s = 'C';
        return s;
    }
    if (b >= 80 && b < 90)
    {
        s = 'B';
        return s;
    }
    if (b >= 90 && b <= 100)
    {
        s = 'A';
        return s;
    }


        cout<<"Greska"<<endl;
        return '@';


}

int main()
{
   //pravougaonik();
    //slucajno ();
   // sokovi();
   //nula();
    //osmi();
   // trokut();
    //firme();
    //prov();
    //int b{0};
   // cout<<"Unesi: ";
   // cin>>b;
   // cout<<"Nakon pretvaranja iznosi: "<<pretvaranje(b);
    //cout<<"Vasa ocjena je : "<<provjera(broj);
    return 0;
}
