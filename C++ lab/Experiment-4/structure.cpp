#include<iostream>
using namespace std;
struct student{
string Name;
int roll_no;
string branch;
char grade;
}s;

int main(){
cout<<"Enter the Name: ";
cin>>s.Name;
cout<<"Enter the Roll.No: ";
cin>>s.roll_no;
cout<<"Enter the Branch: ";
cin>>s.branch;
cout<<"Enter the Grade: ";
cin>>s.grade;

cout<<"Name of the student is : "<<s.Name<<endl;
cout<<"Roll.No of the student is : "<<s.roll_no<<endl;
cout<<"Branch : "<<s.branch<<endl;
cout<<"Grade : "<<s.grade<<endl;

return 0;
}
