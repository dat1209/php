#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char MaNSX[11],TenNSX[50],DcNSX[50];
public:
    void nhap();
    void xuat();
};

class HANG
{
    char MaHang[11], TenHang[50];
    NSX a;
public:
    void nhap();
    void xuat();
};

void NSX::nhap()
{
    cout<<"nhap ma NSX: ";
    fflush(stdin);
    gets(MaNSX);
    cout<<"nhap ten NSX: ";
    fflush(stdin);
    gets(TenNSX);
    cout<<"nhap dia chi NSX: ";
    fflush(stdin);
    gets(DcNSX);
}

void NSX::xuat()
{
    cout<<"Ma NSX: "<<MaNSX<<endl<<"Ten NSX: "<<TenNSX<<endl<<"Dia chi: "<<DcNSX;
}

void HANG::nhap()
{
    cout<<"nhap ma hang: ";
    fflush(stdin);
    gets(MaHang);
    cout<<"nhap ten hang: ";
    fflush(stdin);
    gets(TenHang);
    a.nhap();
}

void HANG::xuat()
{
    cout<<endl<<"Ma hang: "<<MaHang<<endl<<"Ten hang: "<<TenHang<<endl;
    a.xuat();
}

int main()
{
    HANG a;
    a.nhap();
    a.xuat();
    return 0;
}
