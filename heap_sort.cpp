# include <iostream>
using namespace std;
void heapify(int a[],int n,int i){// sap xep cho nut cha la lon nhat
	int max=i;
	int left=2*i+1;
	int right =2*i+2;
	if(left<n && a[left]>a[max]) max=left;
	if(right<n && a[right]>a[max]) max=right;
	if(max!=i){
		swap(a[max],a[i]);
		heapify(a,n,max);
	}
}
void heap_sort(int a[],int n){
	for(int i=n/2-1;i>=0;i--){// duyet cac nut khong phai la nut la; roi heapify cho cac nut do -> tao thanh max_heap
		heapify(a,n,i);
	}
	for(int i=n-1;i>=0;i--){
		swap(a[i],a[0]);// doi cho cho nut goc(nut goc la nut lon nhat)
		heapify(a,i,0);
	}
}
int main(){
	int n; cin>>n;
	int a[n+9];
	for(int i=0;i<n;i++) cin>>a[i];
	heap_sort(a,n);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
