#include <iostream>
using namespace std;

int uvecaj_v (int a)
{
    return a+1;
}

void uvecaj_r(int& a)
{
    a++;
}
int main()
{
    int x{5};
    x = uvecaj_v(x);
    x = uvecaj_v(x);
   // uvecaj_r(x);
   // uvecaj_r(x);
    cout<<x;
}
