#include <iostream>
#include <string>
using namespace std;

int main() {
    string V;
    int term1, term2;

    do {
        cout << "Veuiez insérer un verbe !" << endl;
        cin >> V;
    } while (V.empty());

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

    return 0;
}