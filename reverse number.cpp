#include <iostream>
using namespace std;
	int reverse(int n){
		int rev=0,digit;
			for(n;n>0;n/=10){
			digit = n%10;
			rev=(rev*10)+digit;
		}
		return rev;
	}
int main()
{
	int number;
	cout<<"Enter a number to reverse: "<<endl;
	cin>>number;
	cout<<"Reverse of number is: "<<reverse(number);
}
