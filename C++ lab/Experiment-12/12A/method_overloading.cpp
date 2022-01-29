#include<iostream>
#include<string>
using namespace std;

void display(int i){
        cout<<"Integer value is: "<<i<<endl;
}

void display(double f){
        cout<<"Float value is: "<<f<<endl;
}

void display(string s){
        cout<<"String: "<<s<<endl;
}

int main(){
        display(55);
        display(55.5555);
        display("Fiftyfive");
        return 0;
}
