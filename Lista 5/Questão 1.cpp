#include <iostream>
#include <iomanip> 
using namespace std;

double celsius_para_fahrenheit(double celsius) {
    double fahrenheit = (9.0/5.0) * celsius + 32.0;
    return fahrenheit;
}

int main() {
    
    cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit" << endl;
    cout << "------------------------------" << endl;
    
   
    for (int celsius = 0; celsius <= 100; ++celsius) {
        double fahrenheit = celsius_para_fahrenheit(celsius);
        cout << fixed << setw(10) << setprecision(1) << celsius << setw(15) << setprecision(1) << fahrenheit << endl;
    }
    
    return 0;
}
