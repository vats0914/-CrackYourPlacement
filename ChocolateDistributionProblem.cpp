//DSA Sheet by Arsh - Updated 2023
//https://www.geeksforgeeks.org/chocolate-distribution-problem/
//  https://twitter.com/VatsalGupt81731
//#CrackYourInternship
//#CrackYourPlacement
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        long long minn = INT_MAX ;
        if(m == 0 || n == 0) return 0 ;
        if(n < m ) return -1 ;
        sort(a.begin() , a.end()) ;
        for(int i = 0 ; i  < n- m+1 ; i++)
        {
            minn = min((long long)minn , (a[m+i-1] - a[i])) ;
        }
        return minn ;
    }
       
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends
