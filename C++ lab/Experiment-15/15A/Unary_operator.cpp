
2)#include <iostream>     
using namespace std;     
class Unary     
{     
   private:     
      int num;     
   public:     
       Unary(): num(1){}     
       void operator ++()         {      
          num = num+10;      
       }     
       void Print() {      
           cout<<"The Count is: "<<num;      
       }     
};     
int main()     
{     
    Unary u;     
    ++u;       
    u.Print();     
    return 0;     
}     
