#include<bits/stdc++.h>
using namespace std;

int main(){
	char oper;
	int n1,n2;
	cin>>oper>>n1>>n2;

	switch(oper){
		case '+':
			cout<<n1+n2;
			break;
		case '-':
			cout<<((n1>n2)?n1-n2:n2-n1);
			break;
		case '*':
			cout<<n1*n2;
			break;
		case '/':
			cout<<n1/n2;
			break;
		case '%':
			cout<<n1%n2;
			break;
	}
}