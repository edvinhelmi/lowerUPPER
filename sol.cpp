#include <iostream>

using namespace std;

int main ()
{
    char din, dout;
    int vin, vout;
    int flag, valido;

    cout << "Immetti un carattere: ";
    cin >> din;
    vin = din;
    flag = (vin<91);
    vout = flag*(vin+32) + (1-flag)*(vin-32);
    valido=((din>='A' && din<='Z') || (din>='a' && din<='z'));
    vout = valido*vout + (1-valido)*'?';
    dout = vout;
    cout << din << "-> " << dout << endl;
    
    return 0;
}