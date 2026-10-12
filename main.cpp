#include  <iostream>
using namespace std;

int main() {

    cout << "wpisz ile masz lat" << endl;
    int wiek;
    cin >> wiek;

    int wiekWdniach = wiek * 365;
    cout << "to twoj wiek w dniach: " << wiekWdniach ;

    return 0;
}