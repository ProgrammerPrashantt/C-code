#include <iostream>
using namespace std;

class Y;
 class X
    {
        int data;

    public:
        void setValue(int value)
        {
            data = value;
        }

        friend void add(X,Y);

    };

    class Y
    {

        int num;

    public:
        void setValue(int value)
        {
            num = value;
        }
        
        friend void add(X,Y);


    };

    void add(X o1, Y o2){

        cout<<"summing data's of x and y which gives me "<<o1.data + o2.num<<endl;
    }


int main()
{

X o1;
o1.setValue(3);

Y o2;
o2.setValue(5); 

add(o1, o2);

    return 0;
}