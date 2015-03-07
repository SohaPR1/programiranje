#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

void tablica ()
{
    int n{0};
    cout<<"Unesi broj : "<<endl;
    cin>>n;
    for (int i = 1;i<=n;i++)
    {
        cout<<"+-----"<<endl;
        for (int j=1;j<=n;j++)
        {
            cout<<setw(5)<<left<<i*j;
        }
        cout<<endl;
    }
}

void pravougaonik ()
{
    int visina{0};
    cout<<"Unesi visinu : "<<endl;
    cin>>visina;
    for (int i = 0;i < visina; i++)
    {
        for (int r = 0; r < visina - i -1; r++)
        {
            cout<<" ";
        }

        for (int j = 0;j < 1 + i * 2; j++)
        {
                cout<<"*";
        }
       // duzina--;
        cout<<endl;
    }

}


void vrijeme ()
{
    int sat,sat2,sat3,m,m2,m3,sek,sek2,sek3;
    int t;
    cout<<"Unesi prvi vremenski trenutak : "<<endl;
    cin>>sat>>m>>sek;
    cout<<"Unesi drugi vremenski trenutak : "<<endl;
    cin>>sat2>>m2>>sek2;
    if ((sat < 0 || sat2 < 0)||(sat > 24 || sat2 > 24)||(m < 0 || m2 < 0)||(m > 59 || m2 > 59)||(sek < 0 || sek2 < 0)||(sek > 59 || sek2 > 59))
        cout<<"Greska prilikom unosa !"<<endl;
    else
    {
        cout<<"Prvi vremenski trenutak: "<<sat<<"h "<<m<<"m "<<sek<<"s "<<endl;
        cout<<"Drugi vremenski trenutak: "<<sat2<<"h "<<m2<<"m "<<sek2<<"s "<<endl;
    }
    t = ((sat2*60)*60 + (m2*60) + sek2) - ((sat*60)*60 + (m*60) + sek);
    sat3 = t/3600;
    m3 = t/60;
    cout<<sat3<<endl;
    cout<<m3<<endl;
    cout<<"Razlika iznosi : "<<t;
}

int main()
{
    tablica ();
   // pravougaonik ();
   // vrijeme ();
}
