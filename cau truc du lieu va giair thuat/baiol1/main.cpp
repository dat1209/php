#include <bits/stdc++.h>

using namespace std;

class DATE
{
    int D,M,Y;
public:
    void nhap();
    void xuat();
};

void DATE::nhap()
{
    cout<<"D = ";cin>>D;
    cout<<"M = ";cin>>M;
    cout<<"Y = ";cin>>Y;
}

void DATE::xuat()
{
    cout<<setw(2)<<D<<"/"<<setw(2)<<M<<"/"<<setw(4)<<Y;
}

class NCC
{
    char MaNCC[11];
    char TenNCC[30];
    char DiaChi[40];
    int SDT;
public:
    void nhap();
    void xuat();
};

void NCC::nhap()
{
    cout<<"nhap ma NCC: ";fflush(stdin);gets(MaNCC);
    cout<<"nhap ten NCC: ";fflush(stdin);gets(TenNCC);
    cout<<"nhap dia chi NCC: ";fflush(stdin);gets(DiaChi);
    cout<<"nhap SDT NCC: ";cin>>SDT;
}

void NCC::xuat()
{
    cout<<"|"<<setw(18)<<" Ma nha cung cap: "<<setw(22)<<left<<MaNCC<<setw(19)<<"Ten nha cung cap: "<<setw(23)<<left<<TenNCC<<"|"<<endl;
    cout<<"|"<<setw(9)<<" Dia chi: "<<setw(30)<<left<<DiaChi<<setw(5)<<"SDT: "<<setw(11)<<left<<SDT<<setw(27)<<right<<"|"<<endl;
}

class SP
{
    char MaSP[11];
    char TenSP[20];
    int SoLuong;
    float DonGia;
public:
    void nhap();
    void xuat();
    friend int tong(int n, SP *a);
    friend void sapxep(int n, SP*a);
};

void SP::nhap()
{
    cout<<"nhap ma SP: ";fflush(stdin);gets(MaSP);
    cout<<"nhap ten SP: ";fflush(stdin);gets(TenSP);
    cout<<"nhap so luong: ";cin>>SoLuong;
    cout<<"nhap don gia: ";cin>>DonGia;
}

void SP::xuat()
{
    cout<<"| "<<"--------------------------------------------------------------------------------"<<" |"<<endl;
    cout<<"| "<<"|"<<setw(10)<<left<<MaSP<<"|"<<setw(20)<<left<<TenSP<<"|"<<setw(15)<<left<<SoLuong<<"|"<<setw(15)<<left<<DonGia<<"|"<<setw(15)<<left<<fixed<<DonGia*SoLuong<<"|"<<"|"<<endl;
}

class PHIEU
{
    char MaPhieu[11];
    DATE a;
    NCC b;
    SP *c;
    int n;
public:
    void nhap();
    void xuat();
    friend int tong(int n, SP *a);
    friend void sapxep(int n, SP*a);
};

void PHIEU::nhap()
{
    cout<<"nhap ma Phieu: ";fflush(stdin);gets(MaPhieu);
    a.nhap();
    b.nhap();
    cout<<"nhap so san pham: ";cin>>n;
    c=new SP[n];
    for(int i=0; i<n; i++)
    {
        c[i].nhap();
    }
}

void sapxep(int n, SP *a)
{
    if(n>1)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; i<n; i++)
            {
                if(a[i].DonGia*a[i].SoLuong>a[j].DonGia*a[j].SoLuong)
                {
                    swap(a[j], a[i]);
                }
            }
        }
    }
}

int tong(int n, SP *a)
{
    int M=0;
    for(int i=0; i<n; i++)
    {
        M+= a[i].DonGia*a[i].SoLuong;
    }
    return M;
}

void PHIEU::xuat()
{
    sapxep(n,c);
    cout<<"------------------------------------------------------------------------------------"<<endl;
    cout<<"|"<<" Dai hoc Victory"<<setw(67)<<"|"<<endl;
    cout<<"|"<<setw(53)<<"PHIEU NHAP VAN PHONG PHAM"<<setw(30)<<"|"<<endl;
    cout<<"| Ma phieu: "<<setw(29)<<left<<MaPhieu<<setw(11)<<"Ngay nhap:";a.xuat();cout<<setw(22)<<right<<"|"<<endl;
    b.xuat();
    cout<<"| "<<"--------------------------------------------------------------------------------"<<" |"<<endl;
    cout<<"| "<<"|"<<setw(10)<<left<<"MaSP"<<"|"<<setw(20)<<left<<"Ten san pham"<<"|"<<setw(15)<<left<<"So luong"<<"|"<<setw(15)<<left<<"Don gia"<<"|"<<setw(15)<<left<<fixed<<"Thanh tien"<<"|"<<"|"<<endl;
    for(int i=0; i<n; i++)
    {
        c[i].xuat();
    }
    cout<<"| "<<"--------------------------------------------------------------------------------"<<" |"<<endl;
    cout<<"| "<<"|"<<setw(63)<<"TONG"<<"|"<<setw(15)<<tong(n,c)<<"|"<<"|"<<endl;
    cout<<"| "<<"--------------------------------------------------------------------------------"<<" |"<<endl;
    cout<<"|"<<setw(83)<<right<<"|"<<endl;
    cout<<"| "<<setw(15)<<right<<"Hieu truong"<<setw(30)<<"Phong tai chinh"<<setw(30)<<"Nguoi lap"<<setw(7)<<"|"<<endl;
    cout<<"------------------------------------------------------------------------------------";
}

int main()
{
    PHIEU x;
    x.nhap();
    x.xuat();
    return 0;
}
