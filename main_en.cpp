#include <iostream>
#include <string>
using namespace std;
int main(){ // I couldn't find the initialization part of the code, so I improvised to make the number of lines 259
    string a;
    string name;
    string first;
    string second;
    string third;
    string fourth;
    string fifth;
    string tryagain;
    int z = 0, t = 0, t1 = 1, c1 = 0, a1 = 0, b1 = 1, c2 = 0, a2 = 0, b2 = 1, d1 = 0;
    // The following code is what I was able to recover from the video and the diagram I found
    cout << "Would you like to participate?(Yes/No)   ";
    cin >> a;

    if(a == "Yes" or a=="yes"){
        cout << "GREAT!" << endl;
        cout << "First of all...What's your name?  ";
        cin >> name;
        cout <<name<< ", welcome to the quiz!"<<endl;
        system("pause");
        system ("CLS");

    }

    else {
        return 0;
    }
    cout << "=================QUIZ=================" << endl << endl << endl;
 cout << "The quiz is made up of five questions." << endl;
    system("pause");
    system ("CLS");
      cout << "=================QUIZ=================" << endl << endl << endl;
 cout << "First two questions are EASY." << endl;
    system("pause");
    system ("CLS");
      cout << "=================QUIZ=================" << endl << endl << endl;
 cout << "Other two are HARDER." << endl;
    system("pause");
    system ("CLS");
      cout << "=================QUIZ=================" << endl << endl << endl;
 cout << "And the last one is the HARDEST." << endl;
    system("pause");
    system ("CLS");
      cout << "=================QUIZ=================" << endl << endl << endl;
 cout << "If you make a mistake on the first two questions, you are IMMEDIATELY out." << endl;
    system("pause");
    system ("CLS");
    cout << "=================QUIZ=================" << endl << endl << endl;
 cout << "If you pass the first two, you can make one mistake. On second mistake, you are OUT." << endl;
    system("pause");
    system ("CLS");
      cout << "=================QUIZ=================" << endl << endl << endl;
    cout << "SO, LET'S BEGIN!!!" << endl;
    system("pause");
    system ("CLS");

    system("color F");
    cout << "=================QUIZ=================" << endl << endl << endl;
    cout << "Question number: (1) " << endl << endl;
    cout << "What is the name of the person who made the quiz?(a/b/c) " << endl << endl;
    cout << "a) Marko" << endl << "b) Ivan" << endl << "c) Mateja" << endl;
    cin >> first;
    system ("CLS");

    if (first=="c" or first=="C" or first== "Mateja" or first== "mateja"){

        z=t+t1;
            cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "That is... CORRECT answer!!! " << endl;
        system("pause");
        system ("CLS");

      }
    else {
            cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "That is... INCORRECT answer!!! " <<endl;
        cout << "Thanks for participating!!! More luck next time!!!" << endl;
        system("pause");
        return 0;
      }

    cout << "=================QUIZ=================" << endl << endl << endl;
    cout << "Question number: (2) *type one of the possible letter* " << endl << endl;
    cout << "Which is not the surname of the person who made this quiz?(a/b/c) " << endl << endl;
    cout << "a) Bogdanovic" << endl << "b) Petkovic" << endl << "c) Milutinovic" << endl;
    cin >> second;
    system ("CLS");

    if(second=="b" or second=="B" or second=="c" or second=="C" ){
        cout << "=================QUIZ=================" << endl << endl << endl;
    cout << "That is... CORRECT answer!!!" << endl;
        system("pause");
        system ("CLS");

      }

          else {
                    cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "That is... INCORRECT answer!!! " <<endl;
        cout << "Thanks for participating!!! More luck next time!!!" << endl;
        system("pause");
        return 0;
      }
    system("color 2");
    cout << "=================QUIZ=================" << endl << endl << endl;
    cout << "Now harder questions :) " << endl;
    system("pause");
    system ("CLS");
    cout << "=================QUIZ=================" << endl << endl << endl;
      cout << "Question number: (3)  " << endl << endl;
      cout << "Some of months have 30 days, some 31 but how many have 28?(a/b/c) " << endl << endl;
      cout << "a) 1" << endl << "b) 12" << endl << "c) Zero" << endl;
      cin >> third;
      system ("CLS");

      if (third=="b" or third=="B" or third=="12" ){
              cout << "=================QUIZ=================" << endl << endl << endl;
      cout << "That is... CORRECT answer!!!" << endl;
      system("pause");
      system ("CLS");

        }

        else {
      c1=a1+b1;
          cout << "=================QUIZ=================" << endl << endl << endl;
          cout << "That is... INCORRECT answer!!! " <<endl;
          cout << "Would you like to continue?(Yes/No) " ;
          cin >> tryagain;
          system("pause");
          system ("CLS");

          if(tryagain=="yes" or tryagain=="Yes" ){
                  cout << "=================QUIZ=================" << endl << endl << endl;
              cout << "You can't make more mistakes!!! " << endl;
          system("pause");
          system ("CLS");
              cout << "=================QUIZ=================" << endl << endl << endl;
              cout << "Let's continue..." << endl;
              system("pause");
              system ("CLS");

            }

          else{
              cout << "=================QUIZ=================" << endl << endl << endl;
          cout << "OK.Thanks for participating!!! " << endl;
          system("pause");
          return 0;
            }

            }

          cout << "=================QUIZ=================" << endl << endl << endl;
          cout << "Question number: (4)  " << endl << endl;
          cout << "How much dirt can we dig out from the hole that is 5 meters deep, 5 wide and 3 meters tall?(a/b/c) " << endl << endl;
          cout << "a) 65m2" << endl << "b) 75m3" << endl << "c) None" << endl;
          cin >> fourth;
          system ("CLS");

          if (fourth=="c" or fourth=="C" or fourth=="None" or fourth=="none"){
          cout << "=================QUIZ=================" << endl << endl << endl;
          cout << "That is... CORRECT answer!!!" << endl;
          system("pause");
          system ("CLS");

          }

          else{

          if(z==1){

           c2=a2+b2;

           }
          d1=c1+b1;
          if(d1==2){
              cout << "=================QUIZ=================" << endl << endl << endl;
              cout << "That is... INCORRECT answer!!! " <<endl;
              cout << "Thanks for participating!!! More luck next time!!!" << endl;
              system("pause");
              return 0;
          }
          else {
              cout << "=================QUIZ=================" << endl << endl << endl;
              cout << "That is... INCORRECT answer!!! " <<endl;
              cout << "Would you like to continue?(Yes/No) " ;
              cin >> tryagain;
              system("pause");
              system ("CLS");

              if(tryagain=="yes" or tryagain=="Yes" ){
                      cout << "=================QUIZ=================" << endl << endl << endl;
                  cout << "You can't make more mistakes!!! " << endl;
                  system("pause");
                  system ("CLS");
                  cout << "=================QUIZ=================" << endl << endl << endl;
                  cout << "Let's continue..." << endl;
                  system("pause");
                  system ("CLS");

              }
          }
          }

        system("color 4");
        cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "Question number: (5)  " << endl << endl;
        cout << "It's 1000m from one to the other side of the forest. How deep can a dog go into the forest?(a/b/c) " << endl << endl;
        cout << "a)up to 0,5km" << endl << "b)up to 1km" << endl << "c)up to 1000m" << endl;
        cin >> fifth;
        system ("CLS");

        if(fifth=="a" or fifth=="A" or fifth=="0.5") {
            cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "That is... CORRECT answer!!!" << endl;
        system("pause");
        system ("CLS");
            cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "Congratulations. You passed the quiz!!! " << endl;
        system("pause");
        system ("CLS");

        }

        else {

            if(c1==1 or c2==1){
            cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "That is... INCORRECT answer!!! " <<endl;
        cout << "Thanks for participating!!! More luck next time!!!" << endl;
        system("pause");
        return 0;

            }
                cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "That is incorrect answer..." <<endl;
        system("pause");
        system("CLS");
            cout << "=================QUIZ=================" << endl << endl << endl;
        cout << "Congratulations. You passed the quiz!!! " << endl;
        system("pause");
        system ("CLS");


        }









}