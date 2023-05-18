#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,temp;
	cout<<"Enter two values (space separated) : ";
	cin>>a>>b;
	cout<<"\nValues before swapping a= "<<a<<" and b= "<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nValues after swapping a= "<<a<<" and b= "<<b;
	return 0;
}
