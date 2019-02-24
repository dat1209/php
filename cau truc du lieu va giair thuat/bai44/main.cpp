#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

class PTb2
{
    float a,b,c;
public:
    void nhap();
    void xuat();
    void giai();
    PTb2();
    PTb2(float x, float y, float z);
};

void PTb2::nhap()
{
    cout<<"a = ";cin>>a;
    cout<<"b = ";cin>>b;
    cout<<"c = ";cin>>c;
}

void PTb2::xuat()
{
    cout<<a<<"x"<<(char)253<<"+"<<b<<"x+"<<c<<endl;
}

void PTb2::giai()
{
    float deta=b*b-4*a*c;
    if(deta<0)
    {
        cout<<"phuong trinh vo nghiem";
    }
    else
    {
        cout<<"phuong trinh co 2 nghiem: "<<(b-sqrt(deta))/(2*a)<<" va "<<(b+sqrt(deta))/(2*a);
    }
}

PTb2::PTb2()
{
    a=b=c=0;
}

PTb2::PTb2(float x, float y, float z)
{
    a=x;
    b=y;
    c=z;
}

int main()
{
    PTb2 p(1,2,3);
    PTb2 *q;
    q = &p;
    q -> nhap();
    q -> xuat();
    q -> giai();
    return 0;
}
