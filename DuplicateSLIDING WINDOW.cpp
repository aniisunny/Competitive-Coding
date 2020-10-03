#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool hasit(unordered_set<ll> &s,int n)
{
	return s.find(n)!=s.end();
}



bool duplicate(vector<ll> &a,ll r)
{
	unordered_set<ll> s; // for maintaing record of data.

	for(ll i=1;i<=a.size();i++)
	{
		if(hasit(s,a[i]))    //check for availability of duplicate.
		{
			return true;
		}

		s.insert(a[i]);

		if(i>=r)    //shifting the window and deleting the older window elements from the last windo
		{
			s.erase(a[i-r]);
		}
		
	}


return false;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

vector<ll> a;
ll n; cin>>n;

for(ll i=0;i<n;i++)
{
	ll x; cin>>x;
	a.push_back(x);
}

ll r; cin>>r;

if(duplicate(a,r-1))
{
	cout<<"EXIST";
}
else
{
	cout<<"DOES NOT EXIST";
}




	return 0;
}