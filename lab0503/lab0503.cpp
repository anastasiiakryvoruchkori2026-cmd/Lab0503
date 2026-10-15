// Криворучко Анастасія
// лабораторна робота №5.3
// Варіант 16

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double s(const double x);

int main()
{
    double tp, tk, z;
    int n;

    cout << "tp = "; cin >> tp;
    cout << "tk = "; cin >> tk;
    cout << "n = "; cin >> n;

    double dt = (tk - tp) / n;
    double t = tp;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(10) << "t" << " |"
        << setw(12) << "z" << " |" << endl;
    cout << "---------------------------" << endl;

    while (t <= tk + dt / 2.0)
    {
        z = s(t * t + 1.0) + 2.0 * pow(s(1.0 - t), 2) + s(1.0);

        cout << "|" << setw(10) << setprecision(2) << t << " |"
            << setw(12) << setprecision(5) << z << " |" << endl;

        t += dt;
    }
    cout << "---------------------------" << endl;

    return 0;
}

double s(const double x)
{
    if (abs(x) > 1.0)
    {
        
        return (pow(cos(x), 2) + 1.0) / exp(x);
    }
    else
    {
        
        double S = 0;
        int k = 0;
        double a = x; 
        S = a;

        do {
            k++;
            double R = (x * x) / ((2.0 * k) * (2 * k + 1.));
            a *= R; 
            S += a; 
        } while (k < 4); 

        return S;
    }
}