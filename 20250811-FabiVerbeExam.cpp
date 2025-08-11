#include <iostream>
#include <string>
using namespace std;
//Definition de prototypes
string Verbe(string V);

//Déclaration du fonction
string  Verbe (string V){
   int term1,term2;

    if (V == "aller") {
        cout << "Verbe du 3eme groupe." << endl;
    }
    else if (V.length() >= 2) {
        term1 = V.length() - 2;
        term2 = V.length() - 1;

        if (V[term1] == 'e' && V[term2] == 'r' && V != "aller") {
            cout << "Verbe du 1er G." << endl;
        }
        else if (V[term1] == 'i' && V[term2] == 'r') {
            cout << "Verbe du 2eme G." << endl;
        }
        else {
            cout << "Verbe du 3eme G." << endl;
        }
    }
    else {
        cout << "Erreur !" << endl;
    }

    return V;
}

int main (){
    string V;
 
  do {
       cout << "Veuillez insérer une phrase!" << endl;
        cin>>V;
    } while (V.empty());
    
     //Appel du fonction 
     Verbe (V);
     
    return 0;
}
