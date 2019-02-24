#include <bits/stdc++.h>

using namespace std;

class hcn
{
    float D,R;
public:
    void ve();
    float DT();
    float CV();
    hcn();
    hcn(float x, float y);
    ~hcn();
};

hcn::~hcn()
{
    cout<<"fuck you!!!"<<endl;
}

void hcn::ve()
{
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<D; j++)
            cout<<"*";
        cout<<endl;
    }
}

float hcn::DT()
{
    return D*R;
}

float hcn::CV()
{
    return 2*(D+R);
}

hcn::hcn()
{
    R=D=10;
}

hcn::hcn(float x, float y)
{
    D=x; R=y;
}

int main()
{
    hcn p;
    p.ve();
    cout<<"DT = "<<p.DT();
    cout<<endl<<"CV = "<<p.CV()<<endl;
    hcn q(10, 15);
    q.ve();
    cout<<"DT = "<<q.DT();
    cout<<endl<<"CV = "<<q.CV()<<endl;
    return 0;
}
