#include <iostream>
#include<Math.h>

using namespace std;

void ispisi_rjesenja(float a, float b, float c){
    float D(0), x1(0), x2(0);

/*
// kako su oni htjeli
    if(a!=0&&D>0){

        x1= (-b + sqrt(D))/2*a;
        x2= (-b - sqrt(D))/2*a;

        cout<<"rjesenje kvadratne jednacine je \n x1=  "<<x1<<" x2= "<<x2 <<endl;
        return ;

    }

    else
         cout<<"Greska: Nije moguce izracuanti rjesenja";

*/

    if(a==0){
        cout<<"a=0 linearna jednacina, necemo ispisati nista :) "<<endl;
        return ;
    }

    D= b*b - 4*a*c;

    if(D<0){
        cout<<"D<0 linearna jednacina nema realnih rjesenja :) "<<endl;
        return ;
    }

    x1= (-b + sqrt(D))/2*a;
    x2= (-b - sqrt(D))/2*a;

      cout<<"rjesenje kvadratne jednacine je \n x1=  "<<x1<<" x2= "<<x2 <<endl;


    cout<< "test"<<endl;

}

int main()
{
    float a,b,c;
    cout << "unesi podatke u formate \" a b c \"" << endl;
    cin>>a>>b>>c;
    ispisi_rjesenja(a,b,c);
    return 0;
}
