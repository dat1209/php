#include <iostream>
#include "hang.h"

using namespace std;

int main()
{
    int n;
    cout<<"nhap n:";
    cin>>n;
    hang *a = new hang[n];
    for(int i=0; i<n; i++)
        a[i].nhap();
    for(int i=0; i<n; i++)
        a[i].xuat();
    return 0;
}
