#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <iomanip>
#include "hcn.h"

using namespace std;

void HCN::nhap()
{
    cout<<"nhap chieu dai:";cin>>D;
    cout<<"nhap chieu rong:";cin>>R;
}
void HCN::ve()
{
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<D; j++)
        {
            cout<<"**";
        }
        cout<<endl;
    }
}

float HCN::chuvi()
{
    return 2*(D+R);
}

float HCN::dientich()
{
    return D*R;
}
