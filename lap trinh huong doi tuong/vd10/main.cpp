#include <iostream>

using namespace std;

class mang
{
    int *a;
    int n;
public:
    void nhap();
    void xuat();
    mang operator+(mang y);
    mang operator-();
    mang operator++();
    float operator!();
};

void mang::nhap()
{
    cout<<"n = ";
    cin>>n;
    a=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void mang::xuat()
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
}

mang mang::operator+(mang y)
{
    mang tg;
    if(n != y.n)
    {
        tg.n=0; tg.a=NULL;
    }
    else
    {
        tg.n = n;
        tg.a = new int[n];
        for(int i=0; i<n; i++)
        {
            tg.a[i] = a[i]+y.a[i];
        }
    }
    return tg;
}

mang mang::operator-()
{
    for(int i=0; i<n; i++)
    {
        a[i]=-a[i];
    }
    return *this;
}

mang mang::operator++()
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
                swap(a[i],a[j]);
        }
    }
    return *this;
}

float mang::operator!()
{
    float T;
    for(int i=0; i<n; i++)
    {
        T+=a[i];
    }
    return T/n;
}

int main()
{
    mang p, q;
    p.nhap();
    q.nhap();
    mang k=p+q;
    k.xuat();
    k = -k;
    k.xuat();
    k=++k;
    k.xuat();
    cout<<!k;
    return 0;
}
