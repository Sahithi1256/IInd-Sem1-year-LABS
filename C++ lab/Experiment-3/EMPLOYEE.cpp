#include<iostream>
#include<string>
using namespace std;

class EMPLOYEE{
	private:
		int e_num;
		string e_name;
		int Basic;
		float DA;
		float IT;
	
	public:
		void get_details(){
			cout<<"Name of the Employee:";
			cin>>e_name;
			cout<<"ID of the Employee:";
			cin>>e_num;
			cout<<"Basic salary of the Employee:";
			cin>>Basic;
	
			
		}
		void put_details(){
			DA = 0.52 * Basic;
			IT = 0.03 * (Basic+DA);
			cout<<"Name of the Employee:"<<e_name<<endl;
			cout<<"ID of the Employee:"<<e_num<<endl;
			cout<<"Basic salary of the Employee:"<<Basic<<endl;
			cout<<"DA of the Employee"<<DA<<endl;
			cout<<"IT of the Employee:"<<IT<<endl;
			cout<<"Net Salary of the Employee:"<<Basic+DA-IT<<endl;
		}
	};
int main(){
	int i;
	EMPLOYEE e[3];
	for(i=0;i<3;i++){
		e[i].get_details();
	}
	for(i=0;i<3;i++){
		e[i].put_details();
	}
	
	return 0;
}
	
