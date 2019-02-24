#include <bits/stdc++.h>

using namespace std;

class HANG
{
    int mah;
    char tenh[30];
    float dg;
    float tronglg;
public:
    friend istream& operator>>(istream& x, HANG &y);
    friend ostream& operator<<(ostream& x, HANG y);
};

istream& operator>>(istream& x, HANG &y)
{
    cout<<"ma: "; x>>y.mah;
    cout<<"tenh: "; fflush(stdin); x.getline(y.tenh,200);
    cout<<"dong gia: "; x>>y.dg;
    cout<<"trong luong: "; x>>y.tronglg;
    return x;
}

ostream& operator<<(ostream& x, HANG y)
{
    x<<setw(10)<<y.mah<<setw(20)<<y.tenh<<setw(10)<<fixed<<y.dg<<setw(10)<<y.tronglg<<endl;
    return x;
}

int main()
{
    HANG a;
    cin>>a;
    cout<<a;
    ofstream file("file.txt", ios::app);
    file<<a;
    file.close();
    return 0;
}
