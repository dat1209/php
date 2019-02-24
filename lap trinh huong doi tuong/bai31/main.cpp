#include <bits/stdc++.h>

using namespace std;

class date
{
    int D,M,Y;
public:
    void nhap();
    void xuat();
};

class NHANSU
{
    char MaNS[11];
    char Hoten[30];
    date NS;
public:
    void nhap();
    void xuat();
};

void date::nhap()
{
    cout<<"D = ";
    cin>>D;
    cout<<"M = ";
    cin>>M;
    cout<<"Y = ";
    cin>>Y;
}

void date::xuat()
{
    cout<<setw(20)<<D<<"/"<<M<<"/"<<Y;
}

void NHANSU::nhap()
{
    cout<<"nhap ma nhan su: ";
    fflush(stdin);
    gets(MaNS);
    cout<<"nhap ten nhan su: ";
    fflush(stdin);
    gets(Hoten);
    cout<<"nhap ngay sinh: ";
    NS.nhap();
}

void NHANSU::xuat()
{
    cout<<setw(11)<<MaNS<<setw(30)<<Hoten;
    NS.xuat();
}

int main()
{
    NHANSU a;
    a.nhap();
    a.xuat();
    return 0;
}
