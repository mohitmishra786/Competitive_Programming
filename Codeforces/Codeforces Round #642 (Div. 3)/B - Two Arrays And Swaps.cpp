#import<bits/stdc++.h>
using namespace std;
int i,k,n,s,t,a[36],b[36];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n>>k;
		for(i=0;i++<n;)cin>>a[i];
		for(i=0;i++<n;)cin>>b[i];
		sort(a,a+n+1);
		sort(b,b+n+1);
		for(i=0;i++<k;)
		{
			if(a[i]<b[n-i+1])a[i]=b[n-i+1];
		}
		for(i=s=0;i++<n;)s+=a[i];
		cout<<s<<endl;
	}
}
