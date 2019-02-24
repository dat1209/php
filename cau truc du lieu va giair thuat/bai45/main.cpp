#include <bits/stdc++.h>

using namespace std;

class Arr
{
    int *a;
    int n;
public:
    Arr();
    Arr(int x);
    ~Arr();
    void nhap();
    void xuat();
};


Arr::Arr()
{
    n=0;a = NULL;
}

Arr::Arr(int x)
{
    n=x;
    a=new int[n];
    for(int i=0; i<n; i++)
    {
        a[i]=0;
    }
}

Arr::~Arr()
{
    n=0;delete [] a;
}

void Arr::nhap()
{
    if(n==0)cin>>n;
    if(a==NULL)a=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
}

void Arr::xuat()
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    Arr x(10);
    x.xuat();
    x.nhap();
    x.xuat();
    return 0;
}
