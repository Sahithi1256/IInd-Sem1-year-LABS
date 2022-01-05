#include<iostream>
using namespace std;

class rectangle{
int length,width;
public:
rectangle(){
length = 10;
width = 20;
}
rectangle(int l,int w){
length = l;
width = w;
}
        rectangle(const rectangle &r1){
                length = r1.length;
                width = r1.width;
        }    
int area(){
return length*width;
}
int perimeter(){
return 2*(length+width);
}
};

int main(){
rectangle r1;
rectangle r2(30,40);
rectangle r3(r1);
cout<<"Area of rectangle: "<<r1.area()<<endl;
cout<<"Perimeter of rectangle: "<<r1.perimeter()<<endl;
cout<<"Area of rectangle: "<<r2.area()<<endl;
cout<<"Perimeter of rectangle: "<<r2.perimeter()<<endl;
cout<<"Area of rectangle: "<<r3.area()<<endl;
cout<<"Perimeter of rectangle: "<<r3.perimeter()<<endl;
return 0;
}

