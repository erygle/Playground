#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;


class Student{
  private:  
    int age;
    string first_name;
    string last_name;
    int standard;
  public:
    void set_age(int ageT){age = ageT;}
    void set_standard(int standard){standardT = standardT;}
    void set_first_name(string name){first_name = name;}
    void set_last_name(string name){last_name = name;}
    int get_age(){return age;}
    int get_standard(){return standard;}
    string get_last_name(){return last_name;}
    string get_first_name(){return first_name;}
    void to_string(){cout<<age<<","<<first_name<<","<<last_name<<","<<standard;}
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age/* >> first_name >> last_name >> standard*/;
    
    Student st;
    st.set_age(age);
    /*st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    st.to_string();*/
    cout<<st.get_age();
    
    return 0;
}