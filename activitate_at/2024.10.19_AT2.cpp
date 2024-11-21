//#include <iostream>
//#include <string>
//
//using namespace std;
//
///*
//github.com/gabivas
//github.com/pooid
//gabriel.vasilescu@csie.ase.ro
//*/
//
//class Masina {
//	private:
//		const int id;						//atribut constant
//		static int nrMasini;				//atribut static, nu depinde de obiect, depinde de clasa
//		string marca;
//		int nrComponente;
//		float* preturi;
//	public:
//		Masina() :id(++nrMasini) {			//constructor default
//			this->marca = "Necunoscuta";
//			this->nrComponente = 0;
//			this->preturi = nullptr;
//		}
//		Masina(string marca, int nrComponente, float* preturi) :id(++nrMasini) {
//			this->marca = marca;
//			this->nrComponente = nrComponente;
//			//shallow copy: this->preturi = preturi;
//			//deep copy:
//			this->preturi = new float[nrComponente];
//			for (int i = 0; i < nrComponente; i++) {
//				this->preturi[i] = preturi[i];
//			}
//			delete[] preturi;
//		}
//
//		int getNrComponente() {
//			return this->nrComponente;
//		}
//		void setNrComponente(int nrComponente) {
//			if (nrComponente > 0) {
//				this->nrComponente = nrComponente;
//			}
//		}
//
//		//get si set pentru vectorul de preturi
//		float* getPreturi() {
//			//return this->preturi;
//			float* vectorPreturi = new float[this->nrComponente];
//			for (int i = 0; i < this->nrComponente; i++) {
//				vectorPreturi[i] = this->preturi[i];
//			}
//			return vectorPreturi;
//		}
//		void setPreturi(float* noulVectorPreturi, int nouaDimensiune) {
//			setNrComponente(nouaDimensiune);
//			if (this->preturi != nullptr) {
//				delete[] this->preturi;
//			}
//			this->preturi = new float[nouaDimensiune];
//			for (int i = 0; i < nouaDimensiune; i++) {
//				this->preturi[i] = noulVectorPreturi[i];
//			}
//			delete[] noulVectorPreturi;
//		}
//
//		void afisareMasina() {
//			cout << this->id << ". Masina cu marca " << this->marca;
//			if (this->nrComponente) {
//				cout << " are " << this->nrComponente << " componente cu urmatoarele preturi:";
//				if (this->preturi != nullptr) {
//					for (int i = 0; i < this->nrComponente; i++) {
//						cout << " " << this->preturi[i];
//					}
//				}
//			}
//			cout << endl << "===========================================================================" << endl;
//		}
//};
//
//int Masina::nrMasini = 0;
//
//int main() {
//	Masina masina1;
//	masina1.afisareMasina();
//	masina1.setNrComponente(1);
//	cout << endl << "Noua valoare este: " << masina1.getNrComponente() << endl << endl;
//	masina1.afisareMasina();
//
//	Masina masina2("Renault", 4, new float[4] {23.5f, 50.0f, 60.7f, 3.5f});
//	masina2.afisareMasina();
//	masina2.setPreturi(new float[2] {10.5, 14.7}, 2);
//	float* vectorPreturi = masina2.getPreturi();
//	cout << endl << "Vector preturi masina2 este: " << endl;
//	for (int i = 0; i < masina2.getNrComponente(); i++) {
//		cout << vectorPreturi[i] << " ";
//	}
//
//
//	cout << endl;
//}