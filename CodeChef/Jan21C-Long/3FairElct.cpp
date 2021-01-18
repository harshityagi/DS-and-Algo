#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	while (t)
	{
		int tmp, m, n, cnt = 0, sma = 0, smb = 0, i = 0,flag = 0;;
		cin >> n >> m;
		int arr[n], barr[m];

		while (i < n)
		{
			cin >> arr[i];
			sma = sma + arr[i];
			i++;
		}
		i = 0;
		while (i < m)
		{
			cin >> barr[i];
			smb = smb + barr[i];
			i++;
		}
		
		while (sma <= smb)
		{
		    sort(arr, arr + n);
		    sort(barr,barr+n,greater<int>());
		    if(arr[0]<barr[0]){
                sma=sma+barr[0]-arr[0];
                smb=smb+arr[0]-barr[0];
                tmp=arr[0];
                arr[0]=barr[0];
                barr[0]=tmp;
                cnt++;
		    }
		    else{
		        flag=1;
		        cout<<"-1\n";
		        break;
		    }
		}
		if(flag==0){
		    cout<<cnt<<"\n";
		}
		t--;
	}
	return 0;
}
