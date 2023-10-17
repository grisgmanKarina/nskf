#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, f;
    double a, b, h;
    cin>>a>>b>>h;
    x = a;
    cout<<"\nx: \tf:"<<endl;
    while (x<=b)
    {
        if (x<= -1)
        {
            f = -x;
            cout<<x<<"\t"<<f<<endl;
        }
        else if (x<=1)
        {
            f= pow(x,3);
            cout<<x<<"\t"<<f<<endl;
        }
        else
        {
            f=pow(M_E,1-x);
            cout<<x<<"\t"<<f<<endl;
        }
        x+=h;
    }
}
