#include <iostream>
using namespace std;

struct city{
    string ime;
    int populacija;
};
struct pre{
    string ime;
    string prezime;
    int godini;
};
struct drzava{
    string ime;
    city grad;
    pre pretsedatel;
};

void citidrzavi(drzava &d){
cin>>d.ime;
cin>>d.grad.ime;
cin>>d.grad.populacija;
cin>>d.pretsedatel.ime;
cin>>d.pretsedatel.prezime;
cin>>d.pretsedatel.godini;
}

void print(drzava &d){
cout<<d.ime<<"\t"<<d.grad.ime<<"\n";
}

int main()
{
    int n;
    cin>>n;

    drzava drzavi[n];

    for(int i=0; i<n; i++)citidrzavi(drzavi[i]);

    for(int i=0; i<n; i++)print(drzavi[i]);



}
