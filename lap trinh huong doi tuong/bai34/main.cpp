#include <bits/stdc++.h>

using namespace std;

class QUANLY
{
    char MaQl[11];
    char Hoten[30];
public:
    void nhap();
    void xuat();
};

class MAY
{
    char MaMay[11],KieuMay[30],TinhTrang[20];
public:
    void nhap();
    void xuat();
};

class PHONGMAY
{
    char MaPM[11],TenPM[30];
    float DienTich;
    QUANLY x;
    MAY *y;
    int n;
public:
    void nhap();
    void xuat();
};

void QUANLY::nhap()
{
    cout<<"Nhap ma QL: ";fflush(stdin);gets(MaQl);
    cout<<"Nhap ten QL: ";fflush(stdin);gets(Hoten);
}

void QUANLY::xuat()
{
    cout<<"Ma QL: "<<MaQl<<endl;
    cout<<"Ten QL: "<<Hoten<<endl;
}

void MAY::nhap()
{
    cout<<"Nhap ma may: ";fflush(stdin);gets(MaMay);
    cout<<"Nhap ten may: ";fflush(stdin);gets(KieuMay);
    cout<<"Nhap tinh trang: ";fflush(stdin);gets(TinhTrang);
}

void MAY::xuat()
{
    cout<<setw(11)<<MaMay<<setw(15)<<KieuMay<<setw(15)<<TinhTrang<<endl;
}

void PHONGMAY::nhap()
{
    cout<<"Nhap ma phong: ";fflush(stdin);gets(MaPM);
    cout<<"Nhap ten phong: ";fflush(stdin);gets(TenPM);
    cout<<"Nhap tdien tich phong: ";cin>>DienTich;
    cout<<"nhap quan ly: "<<endl;
    x.nhap();
    cout<<"nhap so luong may: ";cin>>n;
    y=new MAY[n];
    for(int i=0; i<n; i++)
    {
        y[i].nhap();
    }
}

void PHONGMAY::xuat()
{
    cout<<"MA PHONG MAY: "<<MaPM<<endl;
    cout<<"TEN PHONG MAY: "<<TenPM<<endl;
    cout<<"DIEN TICH PHONG: "<<DienTich<<endl;
    x.xuat();
    cout<<setw(11)<<"Ma May"<<setw(15)<<"Kieu May"<<setw(15)<<"Tinh Trang"<<endl;
    for(int i=0; i<n; i++)
    {
        y[i].xuat();
    }
}

int main()
{
    PHONGMAY a;
    a.nhap();
    a.xuat();
    return 0;
}
