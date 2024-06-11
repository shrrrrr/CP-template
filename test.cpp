#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

#define MOD 1000000007
#define ll long long
#define ull unsigned long long
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define vs vector<string>
#define vp vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>
#define ump unordered_map<int,int>
#define ff first
#define ss second
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define rep(i, start, end) for (int i = int(start); i < int(end); i++)
#define repi(i, start, end) for (int i = int(end - 1); i >= start; i--)

int test,n,m,k;
ll nn,mm,kk;
string s;
int dp[30010];

ll gcd(ll a,ll b){
if(b==0) return a;
return gcd(b,a%b);
}



bool isPrime(ll x){

 for(int i=2;i*i<=x;i++){
    if(x%i==0){
        return false;
    }
 }
 return true;

}
int get_trailing_zeros(int n) {
    if(n==0) return 32;
    int cnt=0;
    while((n&1)==0){
        n>>=1;cnt++;
    }
    return cnt;
}



int main()
{
    fastio();

    cin>>test;

    while(test--){
           


}


}
