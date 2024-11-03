#include <iostream>

using namespace std;

class Robot {
public:					//protected, private
	string nume;
	int versiuneSoft;
	float memorie;
	bool esteBiped;
	char* culoare;

	~Robot() {			//destructorul -> dezalocam culoarea (ce am alocat in heap)
		if (this->culoare != NULL) {
			delete[]this->culoare;
		}
	}

	Robot() {
		this->nume = "Tesla";
		this->memorie = 78.9;
		this->versiuneSoft = 2;
		this->esteBiped = true;
		//robot1.culoare = (char*)malloc(strlen("Alb")+1);
		this->culoare = new char[strlen("Alb") + 1];
		strcpy_s(this->culoare, strlen("Alb") + 1, "Alb");
	}

	Robot(string nume) {
		this->nume = nume;
		this->memorie = 78.9;
		this->versiuneSoft = 2;
		this->esteBiped = true;
		//robot1.culoare = (char*)malloc(strlen("Alb")+1);
		this->culoare = new char[strlen("Alb") + 1];
		strcpy_s(this->culoare, strlen("Alb") + 1, "Alb");
	}

	Robot(int versSoft) {
		this->nume = "Tesla";
		this->memorie = 78.9;
		this->versiuneSoft = versSoft;
		this->esteBiped = true;
		//robot1.culoare = (char*)malloc(strlen("Alb")+1);
		this->culoare = new char[strlen("Alb") + 1];
		strcpy_s(this->culoare, strlen("Alb") + 1, "Alb");
	}

	Robot(string nume, int versiuneSoft, float memorie, bool esteBiped, const char* culoare) {
		this->nume = nume;
		this->memorie = memorie;
		this->versiuneSoft = versiuneSoft;
		this->esteBiped = esteBiped;
		this->culoare = new char[strlen(culoare) + 1];
		strcpy_s(this->culoare, strlen(culoare) + 1, culoare);
	}

	void afisare() { //primeste ca paramentru un pointer la robot
		cout << "Nume: " << this->nume << endl; // -> este dereferentiere plus accesare (*.)
		cout << "Memorie: " << this->memorie << endl;
		cout << "Versiune: " << this->versiuneSoft << endl;
		cout << "Culoare: " << this->culoare << endl;
		//cout << "Este biped: " << this->esteBiped << endl;
		cout << "Este biped: " << (this->esteBiped ? "DA" : "NU") << endl << endl;
		/*
		if (this->esteBiped) {
			cout << "DA";
		}
		else {
			cout << "NU";
		}
		*/
	}
};

void main() {
	Robot robot1;
	robot1.afisare();

	Robot robot2("Marcel");
	robot2.afisare();

	Robot robotel3(13);
	robotel3.afisare();

	Robot robot4("Cornel", 4, 56, false, "Verde");
	robot4.afisare();

	Robot* pointer;
	pointer = new Robot("Cornel");
	delete pointer;

}

/*
std::cout << "Salutare";	//std::cout << "Salutare"; --> without using namespace std
'a' - char
"a" - string
*/