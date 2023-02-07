#include<iostream>
using namespace std;
string toLowerCase(string name){
	int length = name.length();
	string another = name;
	char low_name[length];
	for(int i=0;i<length;i++){
		low_name[i] = name[i];
	}
	for(int i=0;i<length;i++){
		char uppercase = low_name[i];
		int integer_value = int(uppercase);
		if(integer_value >90){
			uppercase -= 32;	
		}
		another[i]=uppercase;
	}
	return another;
}
int main(){
	string name;
	cout<<"Enter Your first name in lowercase: Without any Space "<<endl;
	getline(cin,name);
	cout<<toLowerCase(name);
}
