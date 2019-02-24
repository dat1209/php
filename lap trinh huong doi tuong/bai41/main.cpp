#include <bits/stdc++.h>

using namespace std;

class SINHVIEN
{
    char MaSV[11],HoTen[50];
    float DiemToan,DiemLy,DiemHoa;
public:
    void nhap();
    void xuat();
    float gettd()
    {
        return DiemToan+DiemLy+DiemHoa;
    }
};

void SINHVIEN::nhap()
{
    cout<<"Nhap ma sv: ";fflush(stdin);gets(MaSV);
    cout<<"Nhap ten sv: ";fflush(stdin);gets(HoTen);
    cout<<"nhap diem toan: ";cin>>DiemToan;
    cout<<"nhap diem ly: ";cin>>DiemLy;
    cout<<"nhap diem hoa: ";cin>>DiemHoa;
}

void sapxep(SINHVIEN *a, int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i].gettd()>a[j].gettd())
            {
                swap(a[i],a[j]);
            }
        }
    }
}

void SINHVIEN::xuat()
{
    cout<<setw(11)<<MaSV<<setw(30)<<HoTen<<setw(5)<<DiemHoa<<setw(5)<<DiemLy<<setw(5)<<DiemHoa<<setw(5)<<gettd()<<endl;
}

int main()
{
    cout<<"nhap so luong sv: ";int n; cin>>n;
    SINHVIEN *a=new SINHVIEN[n];
    for(int i=0; i<n; i++)
    {
        a[i].nhap();
    }
    cout<<setw(11)<<"Ma sv"<<setw(30)<<"Ho ten"<<setw(5)<<"Toan"<<setw(5)<<"Ly"<<setw(5)<<"Hoa"<<setw(5)<<"Tong"<<endl;
    for(int i=0; i<n; i++)
    {
        a[i].xuat();
    }
    return 0;
}
