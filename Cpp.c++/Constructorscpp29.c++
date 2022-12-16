#include<iostream>
using namespace std;
  
  class complex{
    int a, b;

    public:
    // creating a constructor
    // constractor is a special member function with the same name of class. it isw  automatically invoked an object
    complex(void);
    void printNumber()
    {
      cout<<"Your number is "<< a <<" + "<< b <<"i"<<endl;
    }
  };
  complex ::complex(void)// tihis is the deafult constractor as take no  paramiter
  {
    a = 10;
    b = 20;
    cout<<"Assalamualikum"<<endl;

  }
  int main()
  {
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
  }