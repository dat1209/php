#include <iostream>

using namespace std;

void nhap(float *&a, int &n, float &x)
{
    cin>>n;
    a=new float[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"nhap x: ";
    cin>>x;
}

int timkiem(float *a, int l, int r, float x)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        if(x<a[mid])
        {
            return timkiem(a,l,mid-1,x);
        }
        if(x>a[mid])
        {
            return timkiem(a,mid+1,r,x);
        }
        if(x==a[mid])
        {
            return mid;
        }
    }
}

int main()
{
    float *a,x;
    int n;
    nhap(a,n,x);
    cout<<"m="<<timkiem(a,0,n-1,x);
    return 0;
}
