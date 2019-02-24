#include <bits/stdc++.h>

using namespace std;

class ss
{
    int n;
    float *a;
public:
    void nhap();
    void xuat();
    float MAX();
    float MIN();
};

void ss::nhap()
{
    cout<<"nhap n:";
    cin>>n;
    a=new float[n];
    cout<<"nhap mang:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}

void ss::xuat()
{
    cout<<"du lieu mang la:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

float ss::MAX()
{
    float tg=a[0];
    for(int i=0; i<n; i++)
    {
        if(tg<a[i])
        {
            tg=a[i];
        }
    }
    return tg;
}

float ss::MIN()
{
    float tg=a[0];
    for(int i=0; i<n; i++)
    {
        if(tg>a[i])
        {
            tg=a[i];
        }
    }
    return tg;
}


int main()
{
    ss x;
    x.nhap();
    cout<<"gia tri max la: "<<x.MAX()<<endl<<"gia tri min la: "<<x.MIN()<<endl;
    x.xuat();
    return 0;
}
