#include <iostream>
using namespace std;
bool provjera (int a)
{
    if ((a > -99 && a < -33) || a == 114 || a%19 == 0)
        return true;
    else {
        if ((a < 100 || a > 1000) && (a > 0) && (a%2 != 0) && (a%7 != 0))
            return true;
        else
            return false;
    }

}
int main  ()
{
    int broj{0};
        cout<<"Unesi broj: "<<endl;
        cin>>broj;
        cout<<provjera(broj)<<endl;
}
