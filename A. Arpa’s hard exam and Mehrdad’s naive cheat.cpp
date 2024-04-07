#include<bits/stdc++.h>
#define endl "\n"
#define yes cout<<"YES\n"
#define no  cout<<"NO\n"
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define sz(a) (int)(a.size())
#define fin(a) for (auto &x : a) cin>>x
#define fout(a) for (auto &x : a) cout<<x<<" "; cout<<endl;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);

using namespace std;
void solve()
{
    int n;
    cin>>n;
    int ans=1,b=8;
    while(n)
    {
        if(n%2==0)
        {
            b=(b*b)%10;
            n/=2;
        }
        else
        {
            ans=(ans*b)%10;
            n--;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    Faster;
    int tc=1;
   // cin>>tc;
    while(tc--)
    solve();
}
