#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,sum_digits=0;
	cin>>num;
	while(num!=0){
		sum_digits+=num%10;
		num/=10;
	}
	cout<<"sum of digits is : "<<sum_digits;
}