#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,sum_of_elem=0;
	cin>>num;
	int arr1[num],arr2[num],arr3[num];
	for(int i=0;i<num;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<num;i++){
		cin>>arr2[i];
	}
	for(int i=0;i<num;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	for(int x:arr3){
		cout<<x<<" ";
	}
}