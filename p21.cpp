#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,sum_of_elem=0;
	cin>>num;
	int arr[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	for(int x:arr){
		sum_of_elem+=x;
	}
	cout<<"sum of elements is : "<<sum_of_elem;
}