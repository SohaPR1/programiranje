#include <iostream>
#include<Math.h>

using namespace std;

void kvad (float a, float b, float c, float& rez1, float& rez2){
    float D{0};
    D= b*b - 4*a*c;
    if (a == 0 || D<0)
        return;
    rez1 = (-b + sqrt(D))/2*a;
    rez2 = (-b - sqrt(D))/2*a;
}

int main()
{
    float a,b,c,x1,x2;
    cout << "unesi podatke u formate \" a b c \"" << endl;
    cin>>a>>b>>c;
    kvad (a,b,c,x1,x2);
    cout<<"rezultat jedan: "<<x1<<endl;
    cout<<"rezultat dva: "<<x2<<endl;
    return 0;
}

