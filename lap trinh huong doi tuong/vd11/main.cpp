#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class SINHVIEN
{
    int masv;
    char ht[30];
    int tuoi;
public:
    friend istream& operator>>(istream& x, SINHVIEN &y);
    friend ostream& operator<<(ostream& x, SINHVIEN y);
};

istream& operator>>(istream& x, SINHVIEN &y)
{
    cout<<"ma : "; x>>y.masv;
    cout<<"ht : "; fflush(stdin); x.getline(y.ht,200);
    cout<<"tu : "; x>>y.tuoi;
    return x;
}

ostream& operator<<(ostream& x, SINHVIEN y)
{
    x<<setw(10)<<y.masv<<setw(20)<<y.ht<<setw(10)<<y.tuoi<<endl;
    return x;
}

int main()
{
    SINHVIEN a;
    cin>>a;
    cout<<a;
    ofstream tep("SINHVIEN.TXT",ios::app);
    tep<<a;
    tep.close();
    return 0;
}
