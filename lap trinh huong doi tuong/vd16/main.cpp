#include <bits/stdc++.h>

using namespace std;

class MANG
{
    float *a;
    int n;
public:
    friend istream& operator>>(istream& x, MANG &y);
    friend ostream& operator<<(ostream& x, MANG y);
};

istream& operator>>(istream& x, MANG &y)
{
    cout<<"n = ";x>>y.n;
    y.a=new float[y.n];
    for(int i=0; i<y.n; i++)
    {
        x>>y.a[i];
    }
    return x;
}

ostream& operator<<(ostream& x, MANG y)
{
    for(int i=0; i<y.n; i++)
    {
        x<<y.a[i]<<"\t";
    }
    x<<endl;
    return x;
}

int main()
{
    MANG a,b;
    cout<<"nhap mang a: "<<endl;cin>>a;
    cout<<"nhap mang b: "<<endl;cin>>b;
    cout<<"mang a: "<<a;
    cout<<"mang b: "<<b;
    ofstream f;
    f.open("mang_a.txt",ios::app);
    f<<a;
    f.close();
    f.open("mang_b.txt",ios::app);
    f<<b;
    f.close();
    return 0;
}
