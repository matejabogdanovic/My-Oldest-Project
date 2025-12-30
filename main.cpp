#include <iostream>
#include <string>
using namespace std;
int main(){ // I couldn't find the initialization part of the code, so I improvised to make the number of lines 259
    string a;
    string ime;
    string prvo;
    string drugo;
    string trece;
    string cetvrto;
    string peto;
    string pokusaj;
    int z = 0, t = 0, t1 = 1, c1 = 0, a1 = 0, b1 = 1, c2 = 0, a2 = 0, b2 = 1, d1 = 0;
    // The following code is what I was able to recover from the video and the diagram I found
    cout << "Da li zelis da ucestvujes(Da/Ne)   ";
    cin >> a;

    if(a == "Da" or a=="da"){
        cout << "SJAJNO!" << endl;
        cout << "Pre svega...Kako se zoves?  ";
        cin >> ime;
        cout <<ime<< ", dobro dosli u kviz!"<<endl;
        system("pause");
        system ("CLS");

    }

    else {
        return 0;
    }
    cout << "=================KVIZ=================" << endl << endl << endl;
 cout << "Kviz se sastoji od 5 pitanja." << endl;
    system("pause");
    system ("CLS");
      cout << "=================KVIZ=================" << endl << endl << endl;
 cout << "Prva dva pitanja su LAKA." << endl;
    system("pause");
    system ("CLS");
      cout << "=================KVIZ=================" << endl << endl << endl;
 cout << "Druga dva su TEZA." << endl;
    system("pause");
    system ("CLS");
      cout << "=================KVIZ=================" << endl << endl << endl;
 cout << "A poslednje je NAJTEZE." << endl;
    system("pause");
    system ("CLS");
      cout << "=================KVIZ=================" << endl << endl << endl;
 cout << "Ako pogresis na prva dva, ODMAH ispadas." << endl;
    system("pause");
    system ("CLS");
    cout << "=================KVIZ=================" << endl << endl << endl;
 cout << "Ako prodjes prva dva, imas pravo na jednu gresku. Na drugoj padas kviz." << endl;
    system("pause");
    system ("CLS");
      cout << "=================KVIZ=================" << endl << endl << endl;
    cout << "PA DA POCNEMO!!!" << endl;
    system("pause");
    system ("CLS");

    system("color F");
    cout << "=================KVIZ=================" << endl << endl << endl;
    cout << "Pitanje broj: (1) " << endl << endl;
    cout << "Kako se zove OSNIVAC ovog kviza?(a/b/c) " << endl << endl;
    cout << "a) Marko" << endl << "b) Ivan" << endl << "c) Mateja" << endl;
    cin >> prvo;
    system ("CLS");

    if (prvo=="c" or prvo=="C" or prvo== "Mateja" or prvo== "mateja"){

        z=t+t1;
            cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "To je... TACAN odgovor!!! " << endl;
        system("pause");
        system ("CLS");

      }
    else {
            cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "To je... NETACAN odgovor!!! " <<endl;
        cout << "Hvala na ucescu!!! Vise srece drugi put!!!" << endl;
        system("pause");
        return 0;
      }

    cout << "=================KVIZ=================" << endl << endl << endl;
    cout << "Pitanje broj: (2) *upisi jedno od ponudjenih* " << endl << endl;
    cout << "Kako se ne preziva osnivac ovog kviza?(a/b/c) " << endl << endl;
    cout << "a) Bogdanovic" << endl << "b) Petkovic" << endl << "c) Milutinovic" << endl;
    cin >> drugo;
    system ("CLS");

    if(drugo=="b" or drugo=="B" or drugo=="c" or drugo=="C" ){
        cout << "=================KVIZ=================" << endl << endl << endl;
    cout << "To je... TACAN odgovor!!!" << endl;
        system("pause");
        system ("CLS");

      }

          else {
                    cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "To je... NETACAN odgovor!!! " <<endl;
        cout << "Hvala na ucescu!!! Vise srece drugi put!!!" << endl;
        system("pause");
        return 0;
      }
    system("color 2");
    cout << "=================KVIZ=================" << endl << endl << endl;
    cout << "E sada teza pitanja :) " << endl;
    system("pause");
    system ("CLS");
    cout << "=================KVIZ=================" << endl << endl << endl;
      cout << "Pitanje broj: (3)  " << endl << endl;
      cout << "Neki meseci imaju 30 dana, neki 31 a koliko njih ima 28?(a/b/c) " << endl << endl;
      cout << "a) 1" << endl << "b) 12" << endl << "c) Nijedan" << endl;
      cin >> trece;
      system ("CLS");

      if (trece=="b" or trece=="B" or trece=="12" ){
              cout << "=================KVIZ=================" << endl << endl << endl;
      cout << "To je... TACAN odgovor!!!" << endl;
      system("pause");
      system ("CLS");

        }

        else {
      c1=a1+b1;
          cout << "=================KVIZ=================" << endl << endl << endl;
          cout << "To je... NETACAN odgovor!!! " <<endl;
          cout << "Zelis li da nastavis?(Zelim/Ne zelim) " ;
          cin >> pokusaj;
          system("pause");
          system ("CLS");

          if(pokusaj=="zelim" or pokusaj=="Zelim" ){
                  cout << "=================KVIZ=================" << endl << endl << endl;
              cout << "Nemas vise prava na gresku!!! " << endl;
          system("pause");
          system ("CLS");
              cout << "=================KVIZ=================" << endl << endl << endl;
              cout << "Hajdemo dalje..." << endl;
              system("pause");
              system ("CLS");

            }

          else{
              cout << "=================KVIZ=================" << endl << endl << endl;
          cout << "OK.Hvala na ucescu!!! " << endl;
          system("pause");
          return 0;
            }

            }

          cout << "=================KVIZ=================" << endl << endl << endl;
          cout << "Pitanje broj: (4)  " << endl << endl;
          cout << "Koliko zemlje mozemo izvaditi iz rupe koja je duboka 5 metara, siroka 5 i visoka 3 metra?(a/b/c) " << endl << endl;
          cout << "a) 65m2" << endl << "b) 75m3" << endl << "c) Nista" << endl;
          cin >> cetvrto;
          system ("CLS");

          if (cetvrto=="c" or cetvrto=="C" or cetvrto=="Nista" or cetvrto=="nista"){
          cout << "=================KVIZ=================" << endl << endl << endl;
          cout << "To je... TACAN odgovor!!!" << endl;
          system("pause");
          system ("CLS");

          }

          else{

          if(z==1){

           c2=a2+b2;

           }
          d1=c1+b1;
          if(d1==2){
              cout << "=================KVIZ=================" << endl << endl << endl;
              cout << "To je... NETACAN odgovor!!! " <<endl;
              cout << "Hvala na ucescu!!! Vise srece drugi put!!!" << endl;
              system("pause");
              return 0;
          }
          else {
              cout << "=================KVIZ=================" << endl << endl << endl;
              cout << "To je... NETACAN odgovor!!! " <<endl;
              cout << "Zelis li da nastavis?(Zelim/Ne zelim) " ;
              cin >> pokusaj;
              system("pause");
              system ("CLS");

              if(pokusaj=="zelim" or pokusaj=="Zelim" ){
                      cout << "=================KVIZ=================" << endl << endl << endl;
                  cout << "Nemas vise prava na gresku!!! " << endl;
                  system("pause");
                  system ("CLS");
                  cout << "=================KVIZ=================" << endl << endl << endl;
                  cout << "Hajdemo dalje..." << endl;
                  system("pause");
                  system ("CLS");

              }
          }
          }

        system("color 4");
        cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "Pitanje broj: (5)  " << endl << endl;
        cout << "Od jednog do drugog kraja sume ima 1000m. Koliko duboko pas moze da udje u sumu?(a/b/c) " << endl << endl;
        cout << "a)do 0,5km" << endl << "b)do 1km" << endl << "c)do 1000m" << endl;
        cin >> peto;
        system ("CLS");

        if(peto=="a" or peto=="A" or peto=="0.5") {
            cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "To je... TACAN odgovor!!!" << endl;
        system("pause");
        system ("CLS");
            cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "Cestitamo. Polozio/la si kviz!!! " << endl;
        system("pause");
        system ("CLS");

        }

        else {

            if(c1==1 or c2==1){
            cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "To je... NETACAN odgovor!!! " <<endl;
        cout << "Hvala na ucescu!!! Vise srece drugi put!!!" << endl;
        system("pause");
        return 0;

            }
                cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "To je netacan odgovor..." <<endl;
        system("pause");
        system("CLS");
            cout << "=================KVIZ=================" << endl << endl << endl;
        cout << "Cestitamo. Polozio/la si kviz!!! " << endl;
        system("pause");
        system ("CLS");


        }









}