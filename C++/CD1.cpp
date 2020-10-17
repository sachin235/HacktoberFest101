#include <bits/stdc++.h>
using namespace std;
#define fastIO ios::sync_with_stdio(false);	cin.tie(NULL); cout.tie(NULL);
#define asc(s) sort(s.begin(),s.end())
#define des(s) sort(s.rbegin(),s.rend())
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define rev(v) reverse(v.begin(), v.end())
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define upper(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define precision(x,p) fixed<<setprecision(p)<<x
#define mod 1000000007
#define PI 3.14159265358979

typedef long long ll;

int main()
{
    fastIO   
    ll t;
    cin>>t;
    while(t--){
        ll n,p,mx=-1,c=0;
        cin>>n>>p;
        for(ll i=1;i<=p;i++){
            for(ll j=1;j<=p;j++){
                for(ll k=1;k<=p;k++){
                    ll t = ((((n%i)%j)%k)%n);
                    if(t>mx){
                        mx=t;
                    }
                }
            }
        }
        
        for(ll i=1;i<=p;i++){
            for(ll j=1;j<=p;j++){
                for(ll k=1;k<=p;k++){
                    ll t = ((((n%i)%j)%k)%n);
                    if(t==mx){
                        c++;
                        cout<<i<<"^"<<j<<"^"<<k<<endl;
                    }
                }
            }
        }
        
        cout<<c<<"\n";
    
    }

    return 0;
}
