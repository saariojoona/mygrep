// Joona Saario
// Mygrep työ 1 inkrementti / 1 piste

#include <iostream>
#include <string>

using namespace std;

int main() {
    string source, search; 
    
    cout << "Give a string from which to search for: ";
    getline(cin, source); // käyttäjä syöttää ensimmäisenä "ison" merkkijonon.
    
    cout << "Give search string: ";
    getline(cin, search); // käyttäjä syöttää merkkijonon, jota etsitään isosta merkkijonosta.
    
    size_t position = source.find(search); //etsii merkkijonon search, isommasta merkkijonosta source ja tallentaa sen sijainnin.
    
    if (position != string::npos) { // tarkistaa löytyykö merkkijono search, merkkjonosta source ja tulostaa sen sijainnin.
        cout << "\"" << search << "\" found in \"" << source << "\" in position " << position << "\n";
    } else { // jos merkkijonoa ei löydy, tulostetaan sekin.
        cout << "\"" << search << "\" NOT found in \"" << source << "\"\n";
    }
    
    return 0;
}

