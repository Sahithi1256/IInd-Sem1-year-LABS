#include<iostream>
#include<string>
using namespace std;
class Employee{
	string name;
	int id;
	int salary;
	public :
	void read(){
		cout<<"Name :";
		cin>>name;
		cout<<"id :";
		cin>>id;
		cout<<"salary";
		cin>>salary;
	}
	void display(){
		cout<<name<<endl;
		cout<<id<<endl;
		cout<<salary<<endl;
	
	}
};
int main(){
	Employee e;
	Employee *ptr;
	ptr = &e;
	ptr->read();
	ptr->display();
	return 0;
}
