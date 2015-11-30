//
//  main.cpp
//  take home assignment Q2
//  I wasnt able to finish this. I have questions about the employee array.
//  I will try to answer my questions and resubmit.
//  Feras Ahmed on 11/15/15.
//  Copyright © 2015 Feras Ahmed. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

struct PersonType {
    private:
    string firstName;
    string lastName;
    int eID;
    string salary;
    string title;
   
    public:
    PersonType(string firstName, string lastName, int eID);
    PersonType();
    void setPersonType (string x, string y, int z)
    {
        x= firstName;
        y = lastName;
        z = eID;
    }
    string getPersonType ()
    {
    return firstName;
    }
};

struct CompanyType {
    private:
    string cID;
    string Name;
    string City;
    string State;
    
    public:
    PersonType Employee[50];
    CompanyType(int, string); // add PersonType Employee[0]
    //void hire (PersonType, PersonType.salary);
    
};

int main(int argc, const char * argv[]) {
    
    cout << "hello world." << endl;
    
    PersonType Feras;
    
    
    return 0;
}

PersonType::PersonType(string x, string y, int z)
{
    x= firstName;
    y = lastName;
    z = eID;
}

CompanyType::CompanyType(int id, string name){ // PersonType Employee[0]
    id= 0;
    name = Name;
    //PersonType(Employee[0]);
}