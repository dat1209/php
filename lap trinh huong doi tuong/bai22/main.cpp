#include <bits/stdc++.h>

using namespace std;

class ss
{
    int n;
    int *a;
public:
    void nhap();
    void xuat();
    void sapxep();
};

void ss::nhap()
{
    cout<<"nhap n:";
    cin>>n;
    a=new int[n];
    cout<<"nhap mang:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}

void ss::xuat()
{
    cout<<"mang sau khi sap xep la:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

void ss::sapxep()
{
    int tg;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(a[i]>a[j])
            {
                tg=a[i];
                a[i]=a[j];
                a[j]=tg;
            }
        }
    }
}

int main()
{
    ss x;
    x.nhap();
    x.sapxep();
    x.xuat();
    return 0;
}
