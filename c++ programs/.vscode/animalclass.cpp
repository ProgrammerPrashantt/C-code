#include<iostream>
#include<string>
using namespace std;

class animal
{

    private:
    string name;
    int num;
    public :
    string colour,food,sound;
    void setdata(string name1, string colour1, string food1, string sound1);
    void getdata(){
        cout<<"The name of the animal is "<<name<<endl;
        cout<<"The colour of the animal is "<<colour<<endl;
        cout<<"The food of the animal is "<<food<<endl;
        cout<<"The sound of the animal is "<<sound<<endl;
    }
    
};
void animal :: setdata(string name1, string colour1, string food1, string sound1){
    name = name1;
    colour = colour1;
    food = food1;
    sound = sound1;
}

int main(){
    animal dog;
    {
        dog.setdata("tiger","brown black","german shepard","burrraaaaaahhhhhhhhhh");
        dog.getdata();


    }
    return 0;
}