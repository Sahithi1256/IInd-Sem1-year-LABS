#include<iostream>
using namespace std;

class Grand_parent{
	public:
	int a;
	Grand_parent(){
		a = 80;
	}
	void display1(){
		cout<<a<<endl;
	}
};
class parent:public Grand_parent{
	public:
	int b;
	parent(){
		b = 40;
	}
	void display2(){
		cout<<b<<endl;
	}
};
class child:public parent{
	public:
	int c;
	Grand_parent(){
		c = 10;
	}
	void display3(){
		cout<<c<<endl;
	}
};
int main(){
	child obj;
	obj.display1();
	obj.display2();
	obj.display3();
	return 0;
}

	
