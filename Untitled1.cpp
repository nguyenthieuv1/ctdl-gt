# include <bits/stdc++.h>
using namespace std;
int xuoi[100],nguoc[100],a[100],x[100],n;
void in(){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<endl;
	}
}
void tr (int i){
	for(int j=1;j<=n;j++){
		if(a[j]&&xuoi[i-j+n]&&nguoc[i+j-1]){
			x[i]=j;
			a[j]=0;
			xuoi[i+j-n]=0;
			nguoc[i-j+1]=0;
			if(i==n) in();
			else tr(i+1);
			a[j]=1;
			xuoi[i-j+n]=1;
			nguoc[i+j-1]=1;
		}
	}
}
int main(){
	cin>>n;
	tr(1);
}
