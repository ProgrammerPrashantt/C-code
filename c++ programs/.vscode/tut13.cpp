#include<iostream>
using namespace std;

int main(){
    // arrays example
   
    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 278;
    mathMarks[2] = 78;
    mathMarks[3] = 8;

    cout<<"these are all subject mathes marks "<<endl;
    cout<<mathMarks[0]<<endl;
     cout<<mathMarks[1]<<endl;
     cout<<mathMarks[2]<<endl;
     cout<<mathMarks[3]<<endl;

     cout<<"these are all simple marks "<<endl;
    /*cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     // you can change the value of an Array
      marks[2] = 88;
      cout<<marks[2]<<endl;
       cout<<marks[3]<<endl;*/

int marks[4] = {23, 45, 56, 89};
int i = 0;
  /*  do
    
    
    {
        cout<<"the value at "<<i<<" is "<<marks[i]<<endl;
    i++;
        //cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    while (i < 4);*/
    // while loop
/*
    while(i < 4)
    {
         cout<<"the value at "<<i<<" is "<<marks[i]<<endl;
    i++;
    }*/


// pointers in arrays

int* p = marks;
cout<<"the value of marks[0] is "<<*p<<endl;
cout<<"the value of marks[0] is "<<*(p+2)<<endl;
cout<<"the value of marks[0] is "<<*(p+1)<<endl;
cout<<"the value of marks[0] is "<<*(p+3)<<endl;
      
    return 0;
}