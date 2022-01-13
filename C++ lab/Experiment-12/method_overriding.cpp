#include<iostream>
using namespace std;

class parent{
        public:
        void display(){
                cout<<"Parent Class"<<endl;
        }
};

class child:public parent{
        public:
        void display(){
                cout<<"Child Class"<<endl;
        }
};

int main(){
        child c;
        c.display();
        return 0;
}
