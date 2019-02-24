#include <bits/stdc++.h>

using namespace std;

class HANG
{
    char MaHang[11], TenHang[50];
    float Gia;
public:
    void nhap();
    void xuat();
};

void HANG::nhap()
{
    cout<<"nhap ma hang: ";
    fflush(stdin);
    gets(MaHang);
    cout<<"nhap ten hang: ";
    fflush(stdin);
    gets(TenHang);
    cout<<"Nhap gia hang: ";
    cin>>Gia;
}

void HANG::xuat()
{
    cout<<setw(11)<<MaHang<<setw(30)<<TenHang<<setw(11)<<Gia<<endl;
}

class PHIEU
{
    char MaPhieu[11];
    HANG *a;
    int n;
public:
    void nhap();
    void xuat();
};

void PHIEU::nhap()
{
    cout<<"Nhap ma phieu: ";
    fflush(stdin);
    gets(MaPhieu);
    cout<<"Nhap so mat hang trong phieu: ";
    cin>>n;
    a=new HANG[n];
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
}

void PHIEU::xuat()
{
    cout<<endl<<"Ma phieu: "<<MaPhieu;
    cout<<endl<<setw(11)<<"Ma Hang"<<setw(30)<<"Ten Hang"<<setw(11)<<fixed<<"Gia"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
}

int main()
{
    PHIEU x;
    x.nhap();
    x.xuat();
    return 0;
}
