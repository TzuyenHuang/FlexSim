#include <iostream>
using namespace std;

class Student{
public:
    //property
    int id;
    string name;

    //method
    void get_info(int id, string name){
        cout << "id: " << id << ", name: " << name << endl;
    }
};

int main()
{
    Student a;
    a.id = 1;
    a.name = "Amy";
    a.get_info(a.id, a.name);
    return 0;
}
