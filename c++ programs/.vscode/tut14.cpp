#include<iostream>
using namespace std;

typedef struct employee

{
  int eid;
  char favchar;
  float salary;
} ep ;

union money

{
  int rice;
  char car;
  float pounds;
};

int main(){
    
/*ep prashant;
struct employee shubham;
struct employee rohandas;
prashant.eid = 1;
prashant.favchar = 'c';
prashant.salary = 120000000;
cout<<"this is tremendous "<<prashant.eid<<endl;
cout<<"this is tremendous "<<prashant.salary<<endl;
cout<<"this is tremendous "<<prashant.favchar<<endl;

union money m1;
m1.rice = 34;
m1.car = 'c';
//m1.rice = 34;

cout<<m1.car;*/

enum meal { breakfast, lunch, dinner};

meal m1 = dinner;

cout<<m1<<endl;



    return 0;
}