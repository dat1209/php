#include <bits/stdc++.h>
#include "sach.h"

using namespace std;

void sach::nhap()
{
    cout<<"nhap ma sach:";fflush(stdin);gets(masach);
    cout<<"nhap ten sach:";fflush(stdin);gets(tensach);
    cout<<"nhap ten nxb:";fflush(stdin);gets(nxb);
    cout<<"nhap so trang:";cin>>sotrang;
    cout<<"nhap so luong:";cin>>giatien;
}
void sach::xuat()
{
    cout<<endl<<masach<<"\t"<<tensach<<"\t"<<sotrang<<"\t"<<giatien<<endl;
}
