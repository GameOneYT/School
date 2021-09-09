#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Test{
	public:
		int a;
};

class Worker{
	public:
		string name;
		string surname;
		string country;
		string nationality;
		unsigned short int yearBirthday;
		float height;
		char gender;
		
		void showNameSurname(){
			cout << "Imie i nazwisko: " << name << " " << surname;
		};
		
		//deklaracja (Prototyp) metody ahowallData
		void showAllData();
};

void Worker::showAllData(){
	string genderDescription;
	switch(gender){
		case'm':
			genderDescription="Mezczyzna";
			break;
		
		case'w':
			genderDescription= "Kobieta";
			break;
		
		default:
			genderDescription="-";
	}
	cout << "\n\nImie i nazwisko" << name << " " << surname << "\n"
		<< "Narodowosc: " << nationality << ", rok urodzenia: "
		<< yearBirthday << "\nWzrost: " << height << ", plec: " 
		<< genderDescription <<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	Test newObject;
	Worker pracownik;
	pracownik.name="Jan";
	pracownik.surname="Kowalski";
	pracownik.nationality="Polska";
	pracownik.yearBirthday=1998;
	pracownik.height=180;
	pracownik.gender='m';
	cout << newObject.a;
	cout << pracownik.name << endl <<endl;
	pracownik.showNameSurname();
	pracownik.showAllData();
	return 0;
}
