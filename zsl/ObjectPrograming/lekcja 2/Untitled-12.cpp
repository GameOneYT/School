#include <iostream>

using namespace std;

class School {
    static string s_school;
};

int main()
{
    setlocale(LC_CTYPE, "polish");
    cout << "Hello world!" << endl << School::s_school;
    return 0;
}
