#include<iostream>
using namespace std;

class Employee {
static int count;
int id;


public:
       void setData(void){
        cout<<"Enter the id"<<endl;
        cin>>id;
        count++;
       }
       void getData(void){
        cout<<"The id of the employee is  " << id <<" and this is Employee number "<<" "<< count<<endl;
       }

static void getCount(void){
    cout<<"The value of the count is"<<count<<endl;
}

};



int Employee :: count;
int main(){
    
 Employee prashant,rohan,harry;

prashant.setData();
prashant.getData();
Employee::getCount();

rohan.setData();
rohan.getData();
Employee::getCount();

harry.setData();
harry.getData();
Employee::getCount();

    return 0;
}