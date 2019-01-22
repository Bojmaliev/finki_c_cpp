#include <iostream>
#include <cstring>
using namespace std;
enum tip{pop=0,rap,rok};

class Pesna{
private:
    char * imePesna;
    int minuti;
    tip kojTip;
public:
    Pesna(){

    }
    Pesna(char *imePesna, int minuti, tip kojTip){
        this->imePesna = new char[strlen(imePesna) + 1];
        strcpy(this->imePesna, imePesna);
        this->minuti = minuti;
        this->kojTip = kojTip;
    }

    void pecati(){
        cout<<"\""<<this->imePesna<<"\"-"<<this->minuti<<"min"<<endl;
    }

    tip getTip(){
        return kojTip;
    }

    ~Pesna(){
    delete [] imePesna;
    }

};

class CD{
private:
    Pesna pesni[10];
    int brojPesni;
    int maxTraenje;
public:
    CD(int maxTraenje){
        this->maxTraenje = maxTraenje;
        this->brojPesni = 0;
    }

    void dodadiPesna(const Pesna &pesna){
        pesni[this->brojPesni] = pesna;
        this->brojPesni++;
    }

    Pesna getPesna(int i){
        return pesni[i];
    }
    int getBroj(){
        return brojPesni;
    }
    void pecatiPesniPoTip(tip kojTip){

        for(int i=0; i<brojPesni; i++){
            if(pesni[i].getTip() == kojTip){
                pesni[i].pecati();
            }
        }

    }

};


int main() {
	// se testira zadacata modularno
    int testCase;
    cin >> testCase;

	int n, minuti, kojtip;
	char ime[50];

	if(testCase == 1) {
        cout << "===== Testiranje na klasata Pesna ======" << endl;
        cin >> ime;
        cin >> minuti;
        cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
        Pesna p(ime,minuti,(tip)kojtip);
		p.pecati();
    } else if(testCase == 2) {
        cout << "===== Testiranje na klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        	for (int i=0; i<n; i++)
				(omileno.getPesna(i)).pecati();
	}
    else if(testCase == 3) {
        cout << "===== Testiranje na metodot dodadiPesna() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        	for (int i=0; i<omileno.getBroj(); i++)
				(omileno.getPesna(i)).pecati();
    }
    else if(testCase == 4) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        cin>>kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);

    }
    else if(testCase == 5) {
        cout << "===== Testiranje na metodot pecatiPesniPoTip() od klasata CD ======" << endl;
		CD omileno(20);
		cin>>n;
			for (int i=0;i<n;i++){
				cin >> ime;
				cin >> minuti;
				cin >> kojtip; //se vnesuva 0 za POP,1 za RAP i 2 za ROK
				Pesna p(ime,minuti,(tip)kojtip);
				omileno.dodadiPesna(p);
			}
        cin>>kojtip;
        omileno.pecatiPesniPoTip((tip)kojtip);

    }*/

return 0;
}
