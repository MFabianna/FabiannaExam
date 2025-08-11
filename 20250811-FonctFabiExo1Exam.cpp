#include <iostream>
#include <string>
using namespace std;
//Definition de prototypes
string CamelCase(string P);

//Déclaration du fonction
string CamelCase(string P){
    string ma = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int f, g;
    
     cout << "La phrase est: ";

    for (f = 0; f <P.length(); f++) {
        for (g = 0; g < ma.length(); g++) {
            if (P[f] == ma[g] && f != 0) {
                cout << " ";
            }
        }
        cout << P[f];
    }

    cout << endl;
    return P;
}

int main (){
 string P;
 
  do {
       cout << "Saisissez une chaîne en CamelCase!" << endl;
        getline(cin, P);
    } while (P.empty());
    
     //Appel du fonction 
     CamelCase(P);
     
    return 0;
}

