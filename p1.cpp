#include<bits/stdc++.h>
using namespace std;

int main(){
	int s1,s2,s3,s4,s5;
	cout<<"Enter marks of 5 subjects out of 100 with space separated : ";
	cin>>s1>>s2>>s3>>s4>>s5;
	int sum=s1+s2+s3+s4+s5;
	int per=(sum/500.0)*100;
	cout<<"\nsum : "<<sum;
	cout<<"\npercentage: "<<per;
	return 0;
}
