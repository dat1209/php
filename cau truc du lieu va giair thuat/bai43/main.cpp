#include <bits/stdc++.h>

using namespace std;

class DATE
{
    int D,M,Y;
    friend class HANG;
};

class HANG
{
    char MaHang[11];
    char TenHang[30];
    DATE NgaySX;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"nhap ma hang: ";fflush(stdin); gets(MaHang);
    cout<<"nhap ten hang: ";fflush(stdin); gets(TenHang);
    cout<<"nhap thoi gian san xuat: "<<endl;
    cout<<"D = "; cin>>NgaySX.D;
    cout<<"M = "; cin>>NgaySX.M;
    cout<<"Y = "; cin>>NgaySX.Y;
}

void HANG::xuat()
{
    cout<<setw(11)<<left<<MaHang<<setw(20)<<TenHang<<NgaySX.D<<"/"<<NgaySX.M<<"/"<<NgaySX.Y<<endl;
}

int main()
{
    int n;cout<<"nhap so san pham: ";cin>>n;
    HANG *a = new HANG[n];
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
