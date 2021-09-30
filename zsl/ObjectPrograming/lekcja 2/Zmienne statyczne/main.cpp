#include <iostream>

using namespace std;

class School {
    public:
        static string s_school;
        static string s_jobPosition;
        string name;
        string surname;

        void getData();
        void setNameSurname(string name, string surname);
};

string School::s_school="CDV";
string School::s_jobPosition="Student";

void School::getData(){
    cout<<" "<<"Imie i Nazwisko" <<" "<< name <<" "<< surname;
}

void School::setNameSurname(string name, string surname){
    School::name=name;
    School::surname=surname;
}

int main()
{
    setlocale(LC_CTYPE, "polish");
    cout << "Hello world!" << endl << School::s_school << endl<<School::s_school<< endl << School::s_jobPosition;


    School kowal;
    kowal.setNameSurname("Janusz","Kowal");
    kowal.getData();
    School::s_jobPosition="Wykladowka";
    cout << "\n" << School::s_jobPosition << endl;
    kowal.s_jobPosition="Dziekan";
    cout << "\n" << School::s_jobPosition << endl;

    return 0;
}
