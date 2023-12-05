#include <iostream>
#include<set>
using namespace std;
class Student 
{
    int id, marks;
    public:
    Student(int id, int marks)
    {
        this->id = id;
        this->marks = marks;
    }
    bool operator <(const Student& st) const{ //sort using id,
        return (this->id < st.id);
    } 
    void display() const{
      cout << "(" << id << ", " << marks << ")\n";
    }
};
main() 
{
    Student s1(5, 70), s2(3, 86), s3(2, 91), s4(2, 60), s5(1, 78), s6(6, 53), s7(4, 59);
    //the set will not consider duplicate id
    set<Student> st_set;
    st_set.insert(s1);
    st_set.insert(s2);
    st_set.insert(s3);
    st_set.insert(s4);
    st_set.insert(s5);
    st_set.insert(s6);
    st_set.insert(s7);
    set<Student>::iterator it;
    for(it = st_set.begin(); it != st_set.end(); it++){
        it->display();
    }
}