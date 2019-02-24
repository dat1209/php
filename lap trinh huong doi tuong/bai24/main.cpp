#include <bits/stdc++.h>

using namespace std;

class DoanhNghiep
{
    char TenDN[50];
    char Diachi[60];
    int SoNV;
    long DoanhThu;
public:
    void nhap();
    void xuat();
};

void DoanhNghiep::nhap()
{
    cout<<"nhap ten doanh nghiep: ";
    fflush(stdin);
    gets(TenDN);
    cout<<"Nhap dia chi doanh nghiep: ";
    fflush(stdin);
    gets(Diachi);
    cout<<"nhap so nhan vien cua doanh nghiep: ";
    cin>>SoNV;
    cout<<"nhap doanh thu cua doanh nghiep: ";
    cin>>DoanhThu;
}

void DoanhNghiep::xuat()
{
    cout<<setw(20)<<TenDN<<setw(20)<<Diachi<<setw(20)<<SoNV<<setw(20)<<DoanhThu<<endl;
}

int main()
{
    int n;cout<<"nhap so doanh nghiep: "; cin>>n;
    DoanhNghiep *a= new DoanhNghiep[n];
    for(int i=0; i<n; i++)
    {
        cout<<"nhap thong tin doanh nghiep thu "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<endl<<setw(50)<<"DANH SACH CAC DOANH NGHIEP"<<endl;
    cout<<setw(20)<<"Ten doanh nghiep"<<setw(20)<<"Dia chi"<<setw(20)<<"So nhan vien"<<setw(20)<<"Doanh thu"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
