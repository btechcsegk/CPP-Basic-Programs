#include<bits/stdc++.h>
using namespace std;

int main(){
	int s1,s2,s3,s4,s5;
	cin>>s1>>s2>>s3>>s4>>s5;
	int sum=s1+s2+s3+s4+s5;
	float per=sum/5.0;
	cout<<fixed<<setprecision(0)<<per<<" ";
	if(per>90.0){
		cout<<"A";
	}else if(per>80.0){
		cout<<"B";
	}else if(per>60.0){
		cout<<"C";
	}else{
		cout<<"D";
	}
}