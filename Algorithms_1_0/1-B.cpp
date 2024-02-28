#include <iostream>

int main(){
	int a1, a2, a3;
	std::cin>>a1>>a2>>a3;

	if(a1 + a2 > a3 && a2 + a3 > a1 && a1 + a3 > a2){
    	std::cout<<"YES"<<std::endl;
    }
	else{
		std::cout<<"NO"<<std::endl;
    }
}