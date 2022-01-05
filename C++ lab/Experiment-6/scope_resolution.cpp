#include<iostream>
#define PI 3.14
//using namespace std;
class circle{
	float radius;
	public:
	int area();
};
int circle::area(){
	radius = 10;
	return PI*radius*radius;
}
	
int a = 50;
int main(){
	circle c;
	int num = 100;
	std::cout<<num<<std::endl;
	std::cout<<::a<<std::endl;
	std::cout<<"Area:"<<c.area()<<std::endl;
	return 0;
}
