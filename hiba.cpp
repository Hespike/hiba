#include <iostream>

using namespace std;

int main() {
    int szam;
    cin >> szam;

    switch(szam) {
        case 0:
            cout << "nulla";
            break;
        case 1:
            cout << "egy";
            break;
        case 2:
            cout << "ketto";
            break;
        case 3:
            cout << "harom";
            break;
        case 4:
            cout << "negy";
            break;
        case 5:
            cout << "ot";
            break;
        case 6:
            cout << "hat";
            break;
        case 7:
            cout << "het";
            break;
        case 8:
            cout << "nyolc";
            break;
        case 9:
            cout << "kilenc";
            break;
        default:
            cerr << "hibas szamjegy!";
    }
    return 0;
}
/*
#include <iostream>

using namespace std;

int main() {
    int res;
    cin >> res;

    switch (res) {
        case 0:
            cout << "nulla";
            break;
        case 1:
            cout << "egy";
            break;
        case 2:
            cout << "ketto";
            break;
        case 3:
            cout << "harom";
            break;
        case 4:
            cout << "negy";
            break;
        case 5:
            cout << "ot";
            break;
        case 6:
            cout << "hat";
            break;
        case 7:
            cout << "het";
            break;
        case 8:
            cout << "nyolc";
            break;
        case 9:
            cout << "kilenc";
            break;
        default:
            cerr << "hibas szamjegy!";
    }

    return 0;
}
 */
