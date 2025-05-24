#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

void solve()
{
    char a[10][10];
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='X')
            {
                if(i==0 || i==9 || j==0 || j==9)
                    c1++;
                else if(i==1 || i==8 || j==1 || j==8)
                    c2++;
                else if(i==2 || i==7 || j==2 || j==7)
                    c3++;
                else if(i==3 || i==6 || j==3 || j==6)
                    c4++;
                else 
                    c5++;
            }
        }
    }
    cout<<((1*c1)+(2*c2)+(3*c3)+(4*c4)+(5*c5))<<endl;
}

signed main()
{
    int tc=1;
    cin>>tc;
    while(tc--)
        solve();
    return 0;
}
