#include <bits/stdc++.h>

using namespace std;

class Oto
{
    char MaOto[11];
    float GiaMuaMoi;
    int NamSD;
    float KhauHao;
public:
    void nhap();
    void xuat();
};

void Oto::nhap()
{
    cout<<"Nhap ma oto: ";
    fflush(stdin);
    gets(MaOto);
    cout<<"Nhap gia mua moi cua oto: ";
    cin>>GiaMuaMoi;
    cout<<"nhap so nam su dung cua oto: ";
    cin>>NamSD;
    cout<<"nhap khau hao: ";
    cin>>KhauHao;
}

void Oto::xuat()
{
    int a=GiaMuaMoi;
    for(int i=1; i<=NamSD; i++)
    {
        a-=a*KhauHao;
    }
    cout<<setw(20)<<MaOto<<setw(20)<<GiaMuaMoi<<setw(10)<<NamSD<<setw(15)<<KhauHao<<setw(20)<<fixed<<a<<endl;
}

int main()
{
    int n;cout<<"nhap so luong oto: ";cin>>n;
    Oto *a=new Oto[n];
    for(int i=0; i<n; i++)
    {
        cout<<"nhap thong oto thu "<<i+1<<endl;
        a[i].nhap();
    }
    cout<<endl<<setw(50)<<"DANH SACH CAC OTO"<<endl;
    cout<<setw(20)<<"Ma Oto"<<setw(20)<<"Gia"<<setw(10)<<"Nam SD"<<setw(15)<<"Khau Hao"<<setw(20)<<"Gia tri hien tai"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
