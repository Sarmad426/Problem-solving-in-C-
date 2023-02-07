#include<iostream>
using namespace std;
int factorial(int n){
	int fac=1;
	for(int i=2;i<=n;i++){
		fac*=i;
	}
	return fac;
}
int main(){
	int number;
	cout<<"Enter a number: "<<endl;
	cin>>number;
	for(int i=0;i<number;i++){
		for(int j=0;j<=i;j++){
			cout<<factorial(i)/(factorial(j) * factorial(i-j))<<" ";
		}
		cout<<endl;
	}
}
