#include <iostream>

int main(void)
{
    using namespace std;

    int cheat = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "cheat = " << cheat << "(42 in dec)." << endl;

    cout << hex;
    cout << "waist = " << waist << "(42 in hex)." << endl;

    cout << oct;
    cout << "inseam = " << inseam << "(42 in oct)." << endl;

    return 0; 
}