#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,*a;
    cin>>n;
    a=new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int m1=a[0],m2=a[1],x=0;
    for(int i=0; i<=n; i++)
    {
        if (a[i] < m1)
        {
            m2 = m1;
            m1 = a[i];
            x=i;
        }
        else if (a[i] < m2)
        {
            m2 = a[i];
        }
    }
    cout<<x<<" "<<m1<<endl<<m2;
    return 0;
}
