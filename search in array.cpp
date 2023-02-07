#include<iostream>
int main(){
	int numbers[5]={5,2,6,8,13};
	int input;
	bool found=false;
	std::cout<<"Enter a number to search in array: \n";
	std::cin>>input;
	for(int i=0;i<5;i++){
		if(input==numbers[i]){
			std::cout<<input<<" is at "<<i<<" index: \n";
			found = true;
			break;
		}
	}
if(!found)
std::cout<<input<<" is not in this array: \n";
}
