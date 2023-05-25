#include<bits/stdc++.h>
#include <string>
using namespace std;
struct student
{
    int age;
    int marks;
    int rollno;
    string name;
    float salary;

}S1,S2,S3;

int main()
{
    struct student S1;
        cin >> S1.age>>S1.marks>>S1.name>>S1.rollno>>S1.salary;
    struct student S2;
        cin >> S2.age>>S2.marks>>S2.name>>S2.rollno>>S2.salary;
    struct student S3;
        cin >> S3.age>>S3.marks>>S3.name>>S3.rollno>>S3.salary;
    cout <<"the details of student S1"<< endl;
    cout << S1.age<<S1.marks<<S1.name<<S1.rollno<<S1.salary << endl;
    cout <<"the details of student S2"<< endl;
    cout << S2.age<<S2.marks<<S2.name<<S2.rollno<<S2.salary << endl;
    cout <<"the details of student S3" << endl;
    cout << S3.age<<S3.marks<<S3.name<<S3.rollno<<S3.salary << endl;
    return 0;
}