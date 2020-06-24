#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;



void solve(){
	int a,b,x,y;
	cin >> a >> b >> x>> y;
	int ar1 = (a - x-1)*b;
	int ar2 = x*b;
	int ar3 =  (b-y-1)*a;
	int ar4 = y*a;
	
	cout << max({ar1,ar2,ar3,ar4}) <<"\n";
	
	
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  //f();
int t;cin>>t;while(t--)
  solve();
  return 0;
}
