/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//// sonal gupta
#include <iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    void getdata()
    {
        cout<<"Enter real and imaginary nos : \n";
        cin>>real>>img;
    }
    void display()
    {
        cout<<"Real : "<<real<<endl;
        cout<<"Imaginary : "<<img<<endl;
    }
    complex operator + (complex c1)
    {
        complex temp;
        temp.real = real + c1.real;
        temp.img = img + c1.img;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c1.display();
    c2.display();
    c3 = c1 + c2;
    c3.display();
   
    return 0;
}
