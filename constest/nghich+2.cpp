#include <bits/stdc++.h>
using namespace std;
// ITPTIT - Mai la anh em

int main() {
	// Your code goes here
	int t;
  cin >> t;
  while (t--){
  	int n;
    cin >> n;
    int a[n+1];
    int m1=INT_MAX,i,m = INT_MIN,j;
    for (int l =1;l<=n;l++){
    	cin >> a[l];
      	if (a[l]<m1) {
        	m1 = a[l];
          i = l;
        }
      if (a[l]>m){
      	m = a[l];
        j = l;
      }
    }
    int tmp;
    if (i<j){
    	tmp = min(j,n-i+1);//so sanh huong di 1 chieu dau hoac cuoi 
    	tmp = min(tmp,i+(n-j+1));//so sanh huong di 2 ben ket hop 
	}
	if (j<i){
		tmp = min(i,n-j+1);
		tmp = min(tmp,j+(n-i+1));
	}
	cout<<tmp<<endl;
  }
	return 0;
}