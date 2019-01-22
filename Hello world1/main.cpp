//Vasiot kod ovde....
#include <iostream>
#include <cstring>
using namespace std;

class Nedviznina{
protected:
    char *adresa;
    int kv,cena;
public:
    Nedviznina(){
        adresa=new char[0];
    }
    //copy
    Nedviznina(const Nedviznina &n){
        adresa=new char[strlen(n.adresa)+1];
        strcpy(adresa,n.adresa);
        kv=n.kv;
        cena=n.cena;
    }
    //operator =
    Nedviznina& operator=(const Nedviznina &n){
        if(this!=&n){
            delete [] adresa;
            adresa=new char[strlen(n.adresa)+1];
            strcpy(adresa,n.adresa);
            kv=n.kv;
            cena=n.cena;
        }
        return *this;
    }
    //destructor
    ~Nedviznina(){
        delete [] adresa;
    }
    //metodi
    int Cena(){
        return kv*cena;
    }
    void pecati(){
        cout<<adresa<<", Kvadratura: "<<kv<<", Cena po Kvadrat: "<<cena<<endl;
    }
    float danokNaImot(){
        return (float)kv*cena*5/100;
    }
    char *getAdresa(){
        return adresa;
    }
    //operator >>
    friend istream& operator>>(istream &in,Nedviznina &n){
        cout<<"Adresa:";
        in>>n.adresa;
        cout<<endl<<"Kvadrati:";
        in>>n.kv;
        cout<<endl<<"Cena:";
        in>>n.cena;
        return in;
    }
};

class Vila:public Nedviznina{
private:
    int danok;
public:
    Vila(){}
    //metodi
    void pecati(){
        cout<<adresa<<", Kvadratura: "<<kv<<", Cena po Kvadrat: "<<cena<<", Danok na luksuz: "<<danok<<endl;
    }
    float danokNaImot(){
        return Nedviznina::Cena()*(5+danok)/100;
    }
    //operator >>
    friend istream& operator>>(istream &in,Vila &v){
        cout<<endl<<"V Adresa";
        in>>v.adresa;
        cout<<endl<<"V Kvadrati";
        in>>v.kv;
        cout<<endl<<"V Cena";
        in>>v.cena;
        cout<<endl<<"V Danok";
        in>>v.danok;

        return in;
    }
};

int main(){
    Nedviznina n;
    Vila v;
    cin>>n;
    cin>>v;
    n.pecati();
    cout<<"Danok za: "<<n.getAdresa()<<", e: "<<n.danokNaImot()<<endl;
    v.pecati();
    cout<<"Danok za: "<<v.getAdresa()<<", e: "<<v.danokNaImot()<<endl;
    return 0;
}
