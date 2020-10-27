#define _USE_MATH_DEFINES

#include <iostream>
#include <sstream>
#include <cmath>
#include <math.h>

using namespace std;

double q1;
double q1hoch;
double q2;
double q2hoch;
double radius;
double er;


int main()
{

    cout << "\n\nWillkommen beim Coulumbkraft Rechner!\n";
    cout << "Hier kannst du ausrechnen mit wie viel Kraft sich zwei Ladungen anziehen oder abstossen.";
    cout << "Bitte gib mir Damit wir anfangen koennen einige Daten\n\n\n";
    while (true) {
        cout << "Zuerst nenne mir bitte deine erste Ladung in Coulomb.\n";
        cin >> q1;
        cout << endl;
        cout << "Mal zehn hoch?\n";
        cin >> q1hoch;
        cout << endl;
        cout << "Nun nenne mir deine zweite Ladung.\n";
        cin >> q2;
        cout << endl;
        cout << "Mal zehn hoch?\n";
        cin >> q2hoch;
        cout << endl;
        cout << "Jetzt nenne mir deinen Radius, also den Abstand in metern\n";
        cin >> radius;
        cout << endl;
        cout << "Zuletzt gib mir die Zahl fuer die relative Permittivitaet deines Stoffes. (Luft: 1)\n";
        cin >> er;
        cout << endl;
        double ergebnis = (q1 * pow(10,q1hoch) * q2 * pow(10,q2hoch)) / ((8.854187817 * pow(10, -12) * er) * 4 * M_PI * pow(radius, 2));
        cout.precision(20);
        if (ergebnis < 0) {
            cout << "Sie ziehen sich mit einer Kraft von " << fixed << ergebnis << " Newton gegenseitig an.\n\n";
        }
        else if (ergebnis > 0) {
            cout << "Sie stossen sich mit einer Kraft von " << fixed << ergebnis << " Newton gegenseitig voneinander ab\n\n";
        }
        else {
            cout << "Sie ziehen sich weder an, noch stossen sie sich ab. (0 Newton)\n\n";
        }
        cout << "Zeit fuer die naechste Berechnung!\n\n\n\n\n";
    }
}
