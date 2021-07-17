
#include <bits/stdc++.h>
using namespace std;
int a[50][50],b[50][50],v,e,chuaxet[50];
void DFSstack(int u){
	int s;
	stack<int> st;
	st.push(u);
	chuaxet[u]=0;
	cout<<u<<' ';
	while(!st.empty()){
		s=st.top();
		st.pop();
		for(int i=1;i<=v;i++){
			if(a[s][i] && chuaxet[i]){
				cout<<i<<' ';
				chuaxet[i]=0;
				st.push(s);
				st.push(i);
				break;
			}
		}
	}
}


int main(){//nhap ma tran lien thuoc
	cin>>v>>e;
	for(int i=1;i<=v;i++){
		chuaxet[i]=1;
		for(int j=1;j<=v;j++) a[i][j]=0;
	}
	for(int i=1;i<=v;i++){
		for(int j=1;j<=e;j++) cin>>b[i][j];
	}
	for(int i=1;i<=e;i++){
		int vt[2],cnt=0;
		for(int j=1;j<=v;j++){
			if(b[j][i]==1) vt[cnt++]=j;
		}
		a[vt[0]][vt[1]]=1;
		a[vt[1]][vt[0]]=1;
	}
    //nhap danh sach ke
	// cin>>n>>m;	
	// for(int i=1;i<=n;i++){
	// 	chuaxet[i]=1;
	// 	for(int j=1;j<=n;j++) a[i][j]=0;
	// }
	// for(int i=1;i<=m;i++){
	// 	cin>>b[i];
	// }
	// int j=1;
	// for(int i=1;i<=n;i++){
	// 	cin>>vt[i];
	// 	while(j<=vt[i]){
	// 		a[i][b[j]]=1;
	// 		j++;
	// 	}
	// }
	DFSstack(3);
}

