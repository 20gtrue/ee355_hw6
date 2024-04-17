#include <fstream>
#include <iostream>
#include <iterator>
#include <vector> 
#include <list>
#include <deque>
#include <map>
#include <stack>
#include<array> 

/* HW6 Q1 
    There are 6 blocks of code each a different type of STL; uncomment the desired STL type to test 

    Used GeeksForGeeks to gain knowledge of STLs and look at sample code! 
*/ 

using namespace std;

class Person{
    private:
        string f_name;
        string l_name;
        string birthdate;
        string email;
        string phone;

    public: 
        Person(string f_name, string l_name, string birthdate, string email, string phone)
        {
            this -> f_name = f_name; 
            this -> l_name = l_name; 
            this -> birthdate = birthdate;
            this -> email = email;
            this -> phone = phone;
        };

        void print()
        {
            cout <<f_name << " " <<l_name <<": " <<birthdate <<" | " <<email <<" | " <<phone <<endl; 
        }
};

int main() {
    Person p1 = Person("grace", "true", "07/02/2002", "gtrue@usc.edu", "9253894592");
    Person p2 = Person("mufnas", "Muneer", "08/26/2000", "mufnas@usc.edu", "1234567890");
    Person p3 = Person("matt", "true", "04/20/1998", "momo@usc.edu", "9253891234");


    /* // Q1a. Vectors
    cout << "STL Method a: Vectors " <<endl;
    vector <Person> people_a = {p1, p2, p3};  // Initialized and data set as one line
    vector <Person> people_b; // Initialized then data pushed individually
        people_b.push_back(p1);
        people_b.push_back(p2);
        people_b.push_back(p3);
    
    people_a.at(0).print();
    people_a[1].print();
    people_b.at(2).print();
    */ 

    /* // Q1b. Lists
    cout << "STL Method b: Lists " <<endl;
    list <Person> people_a{p1, p2, p3};
    list <Person> people_b;
        people_b.push_back(p1);
        people_b.push_front(p2);
        people_b.push_back(p3);
    
    auto itr = people_a.begin();
    itr++ -> print();
    itr++ -> print();
    itr++ -> print();
    */ 

    /*// Q1c. Deque
    cout << "STL Method c: Deque " <<endl;
    deque<Person> people;
    people.push_back(p1);
    people.push_front(p2);
    people.push_back(p3);
    
    people.at(0).print();
    people[1].print();
    people.at(2).print();
    */

    /*// Q1d. Map
    cout << "STL Method d: Map " <<endl;
    map<int, Person> people;

    people.insert(pair<int, Person>(1, p1));
    people.insert(pair<int, Person>(2, p2));
    people.insert(pair<int, Person>(3, p3));

    map<int, Person>::iterator itr;
    for (itr = people.begin(); itr != people.end(); ++itr) {
        cout << (itr->first) << ") ";
        itr->second.print();
    }
    */ 

    /*// Q1e. Stack
    stack<Person> people;
    people.push(p1);// The values pushed in the stack should be of the same data which is written during declaration of stack
    people.push(p2);
    people.push(p3);
   
   
    while (!people.empty()) {
        people.top().print();
        people.pop();
    }
    */

    /*// Q1f. Array
    array<Person,3> people = {p1, p2, p3};
    for ( int i=0; i<3; i++){
        people.at(i).print();
    }
    */

}

