#include<iostream>
using namespace std;
struct employee
{
  int eid;
  char favchar;
  float salary;
};

int main(){
    
struct employee prashant;
prashant.eid = 1;
prashant.favchar = 'c';
prashant.salary = 120000000;
cout<<prashant.salary;
    

    return 0;
}