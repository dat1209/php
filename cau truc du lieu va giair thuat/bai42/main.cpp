#include <bits/stdc++.h>

using namespace std;

class NSX
{
    char MaNSX[11];
    char TenNSX[30];
    char DCNSX[50];
public:
    friend class HANG;
};

class HANG
{
    char MaHang[11];
    char TenHang[20];
    float Donggia, TrongLuong;
    NSX x;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"nhap ma hang: ";fflush(stdin);gets(MaHang);
    cout<<"nhap ten hang: ";fflush(stdin);gets(TenHang);
    cout<<"nhap dong gia: ";cin>>Donggia;
    cout<<"Nhap trong luong: ";cin>>TrongLuong;
    cout<<"nhap ma nha san xuat: ";fflush(stdin);gets(x.MaNSX);
    cout<<"nhap ten nha san xuat: ";fflush(stdin);gets(x.TenNSX);
    cout<<"nhap dia chi nha san xuat: ";fflush(stdin);gets(x.DCNSX);
}

void HANG::xuat()
{
    cout<<"Ma hang: "<<MaHang<<endl;
    cout<<"ten hang: "<<TenHang<<endl;
    cout<<"Dong gia: "<<fixed<<Donggia<<endl;
    cout<<"Trong luong: "<<TrongLuong<<endl;
    cout<<"Ma NSX: "<<x.MaNSX<<endl;
    cout<<"Ten NSX: "<<x.TenNSX<<endl;
    cout<<"Dia chi NSX: "<<x.DCNSX;
}

int main()
{
    HANG a;
    a.nhap();
    a.xuat();
    return 0;
}
