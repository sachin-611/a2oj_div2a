///Astalavista Code........~boy_with_no_gf
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Br cout<<endl
#define int long long
#define double long double
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define PT(x) cout << (x) << endl
#define PTT(x) cout << (#x) << " is " << (x) << endl; 
#define lets_go ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
const int M = 1e9 + 7;
const int N = 2e6 + 10;
const int IM = 1e15 + 37;
const double PI = 3.1415926535897932384;
inline void PP(int n) { cout << n << " ";}
void PV(vi v) { for (int i = 0 ; i < v.size() ; i++) cout << v[i] << " " ; cout << endl;}
void PVV(vii v) {for (int i = 0 ; i < v.size() ; i++) cout << v[i].first << " " << v[i].second << endl;}
void PA(int v[], int n, int x = 0) { for (int i = x ; i < n + x; i++)cout << v[i] << " " ; cout << endl;}
void IN(int a[], int n, int x = 0) {for (int i = x; i < n + x; i++)cin >> a[i];}
// <=================================================================================================================================
// <=================================================================================================================================


void fun(){
    int n;cin>>n;
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        if(m1.find(a)!=m1.end()){
            m1[a]++;
        }else{
            m1[a]=1;
        }
        if(m2.find(b)!=m2.end()){
            m2[b]++;
        }else{
            m2[b]=1;
        }
    }
    int ans=0;
    for(auto i=m1.begin();i!=m1.end();i++){
        if(m2.find(i->first)!=m2.end()){
            auto v=m2.find(i->first);
            ans+=((v->second)*(i->second));
        }
    }
    cout<<ans;
}

signed  main() {
    lets_go

      int t;
      t=1;
// cin >> t;
    while (t--) {            
         fun();             
    }                        
                            
                            
    return 0;

}
