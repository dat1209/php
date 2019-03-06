#include <iostream>
#include <graphics.h>
using namespace std;

void macode(int xmin,int ymin,int xmax,int ymax,int x, int y, int b[], int &b10)
{
    for(int i=0;i<4;i++)
    b[i]=0;
    if(x<xmin) b[0]=1;
    if(x>xmax) b[1]=1;
    if(y<ymin) b[2]=1;
    if(y>ymax) b[3]=1;
    b10=b[3]*8+b[2]*4+b[1]*2+b[0];
}
void cohen(int xmin,int ymin,int xmax,int ymax,int xa, int ya, int xb, int yb)
{
    bool KT=false;
    int A10,B10;
    int A[4],B[4];
    while(!KT)
    {
        macode(xmin,ymin,xmax,ymax,xa,ya,A,A10);
        macode(xmin,ymin,xmax,ymax,xb,yb,B,B10);
        if(A10==0&&B10==0)
        {
            line(xa,ya,xb,yb);
            KT=true;
        }
        else if((A10&B10)!=0)
            KT=true;
        else
        {
            if(A10==0)
            {
                int tg1=xa;
                xa=xb;
                xb=tg1;

                int tg2=ya;
                ya=yb;
                yb=tg2;

                macode(xmin,ymin,xmax,ymax,xa,ya,A,A10);
            }
            float m=(float) (yb-ya)/(xb-xa);
            if(A[0]==1)
            {
                ya=m*(xmin-xa)+ya;
                xa=xmin;
            }
            else if(A[1]==1)
            {
                ya=m*(xmax-xa)+ya;
                xa=xmax;
            }
            else if(A[2]==1)
            {
                xa=1/m*(ymin-ya)+xa;
                ya=ymin;
            }
            else if(A[3]==1)
            {
                xa=1/m*(ymax-ya)+xa;
                ya=ymax;
            }
        }
    }
}
int main()
{
    initwindow(640,480);
    rectangle(100,100,300,250);
    setcolor(4);
    line(100,50,400,300);
    getch();
    setcolor(0);
    line(100,50,400,300);
    setcolor(YELLOW);
    cohen(100,100,300,250,100,50,400,300);
    getch();
}

