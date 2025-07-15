// 4.2.cpp
//  Write a program that has a class with a dynamically allocated character array as its data member. One object should contain "Engineers are" and another should contain " Creatures of logic". Member function join() should concatenate two strings by passing two objects as arguments. Display the concatenated string through a member function. Use constructors to allocate and initialize the data member. Also, write a destructor to free the allocated memory for the character array. Make your own function for the concatenation of two strings.
#include <iostream>
#include <cstring>
using namespace std;
class Join_string
{
private:
    char *str;

public:
    Join_string(const char *str1)
    {
        str = new char[strlen(str1) + 1];
        strcpy(str, str1);
    }
    ~Join_string()
    {
        delete[] str;
    }
    string add(Join_string &j1, Join_string &j2)
    {
        delete[] str;
        str = new char[strlen(j1.str) + strlen(j2.str) + 1];
        strcpy(str, j1.str);
        int i = 0;
        while (str[i] != '\0')
            i++;
        int j = 0;
        while (j2.str[j] != '\0')
        {
            str[i] = j2.str[j];
            i++;
            j++;
        }
        str[i] != '\0';
        return str;
    }
    void display()
    {
        cout << str;
    }
};

int main()
{
    Join_string j1("Engineers are ");
    Join_string j2("creatures of Logic");
    Join_string j3("");
    j3.add(j1, j2);
    j3.display();
    return 0;
}