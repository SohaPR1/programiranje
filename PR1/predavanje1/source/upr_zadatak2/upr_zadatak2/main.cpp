#include <iostream>
#include<Math.h>

using namespace std;

float fx1 (float a, float b, float c){
    float D{0};
    D= b*b - 4*a*c;
    if (a == 0 || D<0)
        return 0;
    return (-b + sqrt(D))/2*a;
}

float fx2 (float a, float b, float c){
    float D{0};
    D= b*b - 4*a*c;
    if (a == 0 || D<0)
        return 0;
    return (-b - sqrt(D))/2*a;
}

int main()
{
    float a,b,c,x2;
    cout << "unesi podatke u formate \" a b c \"" << endl;
    cin>>a>>b>>c;
    x2 = fx2(a,b,c);
    cout<<"Rjesenje funkcije 1 je " <<fx1(a,b,c)<<endl;
    cout<<"Rjesenje funkcije 2 je " <<x2<<endl;
    return 0;
}
