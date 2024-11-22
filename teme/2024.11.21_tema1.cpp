//#include <iostream>
//using namespace std;
//
//class Autobuz {
//private:
//	static int nrAutobuze;
//	const int idAutobuz;
//	int capacitate;
//	int nrPersoaneImbarcate;
//	char* producator;
//
//public:
//	//destructor
//	~Autobuz() {
//		if (this->producator != NULL) {
//			delete[]this->producator;
//		}
//	}
//
//	//constructor default
//	Autobuz() :idAutobuz(++nrAutobuze) {
//		this->capacitate = 30;
//		this->nrPersoaneImbarcate = 0;
//		this->producator = new char[strlen("MAN")+1];
//		strcpy_s(this->producator, strlen("MAN") + 1, "MAN");
//	}
//
//	//constructor cu parametri
//	Autobuz(int capacitate, int nrPersoaneImbarcate, const char* producator) :idAutobuz(++nrAutobuze) {
//		this->capacitate = capacitate;
//		this->nrPersoaneImbarcate = nrPersoaneImbarcate;
//		this->producator = new char[strlen(producator) + 1];
//		strcpy_s(this->producator, strlen(producator) + 1, producator);
//	}
//	
//	//constructor de copiere
//	Autobuz(const Autobuz& a) :idAutobuz(++nrAutobuze) {
//		this->capacitate = a.capacitate;
//		this->nrPersoaneImbarcate = a.nrPersoaneImbarcate;
//		this->producator = new char[strlen(a.producator) + 1];
//		strcpy_s(this->producator, strlen(a.producator) + 1, a.producator);
//	}
//	
//	//get&set pt 2 atribute
//	int getCapacitate() {
//		return this->capacitate;
//	}
//	void setCapacitate(int capacitate) {
//		if (capacitate < 0) {
//			cout << "Capacitatea nu poate fi mai mica de 0" << endl;
//			return;
//		}
//		this->capacitate = capacitate;
//	}
//	char* getProducator() {
//		return this->producator;
//	}
//	void setProducator(char* producator) {
//		if (producator == NULL) {
//			cout << "Nume producator nu poate fi NULL" << endl;
//			return;
//		}
//		if (this->producator != NULL) {
//			delete[]this->producator;
//		}
//		this->producator = new char[strlen(producator) + 1];
//		strcpy_s(this->producator, strlen(producator) + 1, producator);
//	}
//
//	//afisare
//	void afisare() {
//		cout << "idAutobuz: " << this->idAutobuz << endl;
//		cout << "producator: " << this->producator << endl;
//		cout << "capacitate: " << this->capacitate << endl;
//		cout << "nrPersoaneImbarcate: " << this->nrPersoaneImbarcate << endl;
//		cout << "=========================" << endl << endl;
//	}
//};
//
//int Autobuz::nrAutobuze = 0;
//
//int main()
//{
//	cout << "Autobuz1 - constructorul default" << endl;
//	Autobuz autobuz1;
//	autobuz1.afisare();
//
//	cout << "Autobuz2 - constructorul cu parametri" << endl;
//	Autobuz autobuz2(50, 30, "Mercedes");
//	autobuz2.afisare();
//
//	cout << "Creare Autobuz3 din Autobuz2 - constructorul de copiere" << endl;
//	Autobuz autobuz3 = autobuz2;
//	autobuz3.afisare();
//
//	cout << "Set & get capacitate" << endl;
//	autobuz3.setCapacitate(66);
//	cout << "Capacitate noua Autobuz3: " << autobuz3.getCapacitate() << endl << endl;
//
//	cout << "Set & get producator" << endl;
//	autobuz3.setProducator("Renault");
//	cout << "Nume producator nou Autobuz3: " << autobuz3.getProducator() << endl;
//}