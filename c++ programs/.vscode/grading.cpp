#include <iostream>
using namespace std;
class Student {
private:
  int marks1, marks2, marks3;

public:
 
void setMarks(){
    cout<<"Enter the marks for subject 1 "<<endl;
    cin>>marks1;
    cout<<"Enter the marks for subject 2 "<<endl;
    cin>>marks2;
    cout<<"Enter the marks for subject 3 "<<endl;

    cin>>marks3;
}

  // Getter methods for marks
  int getMarks1() { return marks1; }
  int getMarks2() { return marks2; }
  int getMarks3() { return marks3; }

  // Method to calculate and print the grade
  void getResults() {
    int total = marks1 + marks2 + marks3;
    int average = total / 3;

    
    
     if (average > 80 && average <= 100) {
      std::cout << "Grade: A" << std::endl;
    } else if (average >= 65 && average < 79) {
      std::cout << "Grade: B" << std::endl;
    } else if (average >= 50 && average < 64) {
      std::cout << "Grade: C" << std::endl;
    } else if (average >= 40 && average < 49) {
      std::cout << "Grade: D" << std::endl;
    } else if (average >= 0 && average < 39) {
      std::cout << "Grade: E" << std::endl;
    }
     else {
     std::cout << "Grade: F" << std::endl;
     }
   }
};

int main(){

Student s;

s.setMarks();
s.getResults();
    return 0;
}