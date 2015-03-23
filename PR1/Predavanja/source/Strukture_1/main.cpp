#include <iostream>

using namespace std;

struct trougao {
    float a_x;
    float a_y;
    float b_x;
    float b_y;
    float c_x;
    float c_y;
};

struct kruznica {
    float x;
    float y;
    float r;
};

void infoKruznica (kruznica k)
{
    cout<<"Centar kruznice : "<<k.x<<" , "<<k.y<<endl;
    cout<<"Poluprecnik : "<<k.r<<endl;
}

void infoTrougao (trougao t)
{
    cout<<"Tacka A trougla je : "<<t.a_x<<" , "<<t.a_y<<endl;
    cout<<"Tacka B trougla je : "<<t.b_x<<" , "<<t.b_y<<endl;
    cout<<"Tacka C trougla je : "<<t.c_x<<" , "<<t.c_y<<endl;
}

int main()
{
    /*kruznica k1,k2,k3,k4;
    k1.x = 3;
    k1.y = 4;
    k2.x = -4;
    k2.y = 6;
    k3.x = -9;
    k3.y = -20;
    k4.x = 11;
    k4.y = -23;
    cout<<"Unesi poluprecnik : ";
    cin>>k1.r;
    k2.r = k1.r;
    k3.r = 2 * k2.r;
    k4.r = k2.r + k3.r;
    cout<<"Kruznica "<<k1.x<<" , "<<k1.y<<" ima isti poluprecnik kao kruznica "<<k2.x<<" , "<<k2.y<<" koji iznosi: "<<k1.r<<endl;
    cout<<"Kruznica "<<k3.x<<" , "<<k3.y<<" ima duplo veci poluprecnik i on iznosi : "<<k3.r<<endl;
    cout<<"Kruznica "<<k4.x<<" , "<<k4.y<<" ima poluprecnik koji predstavlja zbir poluprecnika, a on iznosi : "<<k4.r<<endl;
    */
    trougao t1;
    kruznica k1,k2,k3;
    cout<<"Unesi tacku A : "<<endl;
    cin>>t1.a_x>>t1.a_y;
    cout<<"Unesi tacku B : "<<endl;
    cin>>t1.b_x>>t1.b_y;
    cout<<"Unesi tacku C : "<<endl;
    cin>>t1.c_x>>t1.c_y;
    cout<<"Unesi poluprecnik za kruznicu 1 : "<<endl;
    cin>>k1.r;
    k1.x = t1.a_x;
    k1.y = t1.a_y;
    k3.x = t1.a_x;
    k3.y = t1.a_y;
    k3.r = k1.r * 1.1;
    k2.x = t1.b_x;
    k2.y = t1.b_y;
    k2.r = k3.r;
    infoKruznica(k1);
    infoKruznica(k2);
    infoKruznica(k3);
    infoTrougao(t1);
}
