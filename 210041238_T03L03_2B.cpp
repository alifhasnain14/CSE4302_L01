#include <iostream>
#include <conio.h>
using namespace std;

class Student
{
private:
    string firstname;
    string lastname;
    int id;
    int birthyear;
    string course;
    int marks;

public:
    void setDetails(string fn, string ln, int x, int by, string c, int m)
    {
        firstname = fn;
        lastname = ln;
        id = x;
        birthyear = by;
        course = c;
        marks = m;
    }


    void getDetails()
    {
        cout << "First Name: " << firstname << endl;
        cout << "Last Name: " << lastname << endl;
        cout << "ID: " << id << endl;
        cout << "Birth Year: " << birthyear << endl;
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }


    int displayAge()
    {
        return (2023-birthyear);
    }


    float displayGPA(int marks)
    {
        if(marks>=80) return 4.00;
        else if(marks<80 && marks>=75) return 3.75;
        else if(marks<75 && marks>=70) return 3.50;
        else if(marks<70 && marks>=65) return 3.25;
        else if(marks<65 && marks>=60) return 3.00;
        else if(marks<60 && marks>=55) return 2.75;
        else if(marks<55 && marks>=50) return 2.50;
        else if(marks<50 && marks>=45) return 2.25;
        else if(marks<45 && marks>=40) return 2.00;
        else return 0.00;
    }


    void willGraduate(int m)
    {
        if(m<40) cout << "Student will fail." << endl;
        else
            cout << "Student will pass." << endl;
    }


    float updatedGPA(int marks)
    {
        marks += marks*0.1;
        if(marks>=80) return 4.00;
        else if(marks<80 && marks>=75) return 3.75;
        else if(marks<75 && marks>=70) return 3.50;
        else if(marks<70 && marks>=65) return 3.25;
        else if(marks<65 && marks>=60) return 3.00;
        else if(marks<60 && marks>=55) return 2.75;
        else if(marks<55 && marks>=50) return 2.50;
        else if(marks<50 && marks>=45) return 2.25;
        else if(marks<45 && marks>=40) return 2.00;
        else return 0.00;
    }


    void printTranscript()
    {
        cout << "Full Name: " << firstname << " " << lastname << endl;
        cout << "ID: " << id << endl;
        cout << "Age " << (2023-birthyear) << endl;
    }
};


int main()
{
    Student Alif;
    Alif.setDetails("ALIF","HASNAIN",238, 2004,"CSE",75);
    Alif.getDetails();

    cout << "AGE: " << Alif.displayAge() << endl;
    cout << "GPA: " << Alif.displayGPA(75) << endl;
    Alif.willGraduate(75);
    cout << "Updated GPA: " << Alif.updatedGPA(75) << endl;
    Alif.printTranscript();

    getch();
}
