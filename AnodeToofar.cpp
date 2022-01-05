#include <bits/stdc++.h>
#define ll  long long int
#define f0(j,n) for(int j=0;j<n;j++)
#define f1(i,n) for(int i=1;i<=n;i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define cn cout<<"NO"<<endl
#define cy cout<<"YES"<<endl
#define ca cout<<ans<<endl
#define pb(x) push_back(x)
#define pi pair < ll , ll >

using namespace std;

int main()
{
//    fast;
//    ll t;
//    cin>>t;
//    while(t--)
//    {
//
//    }
      ll n,i=1;
      cin>>n;
      while(n!=0){
        ll x,y;
        vector <ll> g[1000];
        set < ll > s;
        while(n--){
            cin>>x>>y;
            g[x].pb(y);
            g[y].pb(x);
             s.insert(x);
             s.insert(y);
        }
        while(1){
                ll ans=0;
            cin>>x>>y;
            if(x==0 && y==0)break;
            queue < ll > q;
            q.push(x);
            ll lvl[100000];
            ll vis[100000];
            for(auto k : s){
                lvl[k]=0;
                vis[k]=0;
            }
            while(!q.empty()){
                ll t = q.front();
                q.pop();
                vis[t]=1;
                //if(lvl[t]>y)continue;
                for(auto c : g[t]){
                    if(vis[c]==0){
                        q.push(c);
                        vis[c]=1;
                        lvl[c] = lvl[t]+1;
                        if(lvl[c]<=y){
                                ans++;
                           //cout<<c<<lvl[c]<<" "<<lvl[t]<<endl;
                        }
                    }
                }
            }
cout<<"Case "<<i++<<": "<<s.size()-ans-1<<" nodes not reachable from node "<<x<<" with TTL = "<<y<<"."<<endl;
        }
        cin>>n;
      }

    return 0;
}