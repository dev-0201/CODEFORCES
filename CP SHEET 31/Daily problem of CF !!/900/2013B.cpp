#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t,n,a,s;
    scanf("%lld",&t);
    while(t--) {
        s=0;
        scanf("%lld",&n);
        while(n--) {
            scanf("%lld",&a);
            if(n==1) s-=a;
            else s+=a;
        }
        printf("%lld\n",s);
    }
}
