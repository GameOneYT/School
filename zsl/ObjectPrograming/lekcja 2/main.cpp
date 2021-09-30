#include <iostream>
using namespace std;

struct Date {
	unsigned short int dd, mm, rrrr;
};

class Worker{
	public:
		unsigned int id {};
		string name {}, surname {};
		Date dateBirthday {};

		void showAllData();
		void setData(unsigned int id, string name, string surname, Date dateBirthday){
			Worker::id=id;
			Worker::name=name;
			Worker::surname=surname;
			Worker::dateBirthday = dateBirthday;
		}
};

	void Worker::showAllData(){
		cout << "Dane pracownika:\n" << "Id: " << id
				 << "\nImię i nazwisko: " << name << " " << surname
				 << "\nData urodzenia: " << dateBirthday.dd << "-"
				 << dateBirthday.mm << "-"
				 << dateBirthday.rrrr << "r.\n\n";
	}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker pracownik;
	pracownik.setData(100, "Janusz", "Nowak", {16, 9, 2021});
	pracownik.showAllData();

	return 0;
}
