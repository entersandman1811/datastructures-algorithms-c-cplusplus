#include <iostream>
#include <sstream>
using namespace std;

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int standard;
    public:
        void set_age(int);
        void set_standard(int);
        void set_first_name(string);
        void set_last_name(string);
    
        int get_age() {return this->age;}
        int get_standard(){return this->standard;}
        string get_first_name() {return this->first_name;}
        string get_last_name() {return this->last_name;}
    
        string to_string(){
            stringstream s;
            s<<this->age<<','<<(this->first_name)<<','<< (this->last_name)<<','<<(this->standard);
            return s.str();
        }

};

void Student::set_age(int age){
    this->age = age;}
void Student:: set_standard(int standard){
    this->standard = standard;}
void Student::set_first_name(string first_name){
    this->first_name = first_name;}
void Student::set_last_name(string last_name){
    this->last_name = last_name;}


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
