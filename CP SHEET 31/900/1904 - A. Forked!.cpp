#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    int a,b;
    cin>>a>>b;
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int c=0;
    if(a==b)
    {
        int dx[4]={-a,-a,a,a};
        int dy[4]={b,-b,b,-b};
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                int kx=x1+dx[i];
                int ky=y1+dy[i];
                int qx=x2+dx[j];
                int qy=y2+dy[j];
                if(kx==qx && ky==qy)
                    c++;
            }
        }
    }
    else 
    {
        int dx[8]={-a,-a,a,a,b,b,-b,-b};
        int dy[8]={b,-b,b,-b,a,-a,a,-a};
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                int kx=x1+dx[i];
                int ky=y1+dy[i];
                int qx=x2+dx[j];
                int qy=y2+dy[j];
                if(kx==qx && ky==qy)
                    c++;
            }
        }
    }
    cout<<c<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}