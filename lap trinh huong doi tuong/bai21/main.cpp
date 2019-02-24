#include <bits/stdc++.h>

using namespace std;

class ptb2
{
    float a,b,c,delta,x1,x2,x;
public:
    void nhap();
    void giai();
};

void ptb2::nhap()
{
    cout<<"nhap a,b,c:";
    cin>>a>>b>>c;
}

void ptb2::giai()
{
    if(a==0)
    {
        cout<<"Nghiem cua pt la:"<<-c/b;
    }else
    {
        delta=b*b-4*a*c;
        if(delta<0)
        {
            cout<<"phuong trinh vo nghiem";
        }else
        {
            cout<<"phuong trinh co 2 nghiem: "<<(-b+sqrt(delta))/(2*a)<<" va "<<(-b-sqrt(delta))/(2*a);
        }
    }
}

int main()
{
    ptb2 a;
    a.nhap();
    a.giai();
    return 0;
}
