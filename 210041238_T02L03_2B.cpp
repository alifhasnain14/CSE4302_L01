#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int publication_year;
    string availability_status;

public:
    void setDetails(string tit, string aut, int pub)
    {
        title = tit;
        author = aut;
        publication_year = pub;
    }

    string getDetails()
    {
        return title;
    }

    string getDetails2()
    {
        return author;
    }

    int getDetails3()
    {
        return publication_year;
    }

    void checkOut()
    {
        cout << "Book is unavailable." << endl;
    }

    void checkIn()
    {
        cout << "Book is available." << endl;
    }

    void displayStatus(string book)
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << publication_year << endl;
    }

    bool isClassic(int publication_year)
    {
        if (publication_year < 1973)
            return true;
        else
            return false;
    }
};

int main()
{
    Book cse;

    cse.setDetails("CSE", "ALIF", 1950);
    cout << "Name: " << cse.getDetails() << endl;
    cout << "Author: " << cse.getDetails2() << endl;
    cout << "Publication Year: " << cse.getDetails3() << endl;

    cse.displayStatus("CSE");
    cse.checkOut();
    cse.checkIn();

    getch();
}
