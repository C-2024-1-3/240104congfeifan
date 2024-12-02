#include <iostream>
#include <iomanip>
#include "mytemperature.h"
using namespace std;
int main() 
{
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
    for (double cel = 40.0,fah = 120.0; cel >= 31.0,fah>=30.0; cel -= 1.0,fah-=10.0)cout <<fixed << setprecision(1)<< cel << "\t" << celsius_to_fah(cel) << "\t\t|\t" << fah<< "\t\t" << setprecision(2)<<fahrenheit_to_cels(fah) << endl;
    return 0;
}
