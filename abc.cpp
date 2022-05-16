
#include <iostream> 
#include <cmath> 

using namespace std;



double Dis(double a, double b, double c)
{
    double d;
    d = b * b - 4 * a * c;
    return d;
}

/*double root_norm_dis(double a, double b, double c, double d1, double& x1, double& x2)
{
    x1 = (-b + d1) / (2 * a);
    x2 = (-b - d1) / (2 * a);

}

double dis_0(double a, double b, double c, double d1, double& x1, double& x2)
{
    x1 = (-b + d1) / (2 * a);

}*/

/*double a0_c(double a, double b, double c, double d1, double& x1, double& x2)
{
    x1 = (-c / b);

}*/

double root(double a, double b, double c, double d)
{
    double x1;
    double x2;
    double d1;
    d1 = sqrt(d);
    if ((a == 0 && b == 0) || (b == 0 && ((c > 0 && a > 0) || (c < 0 && a < 0))) || d < 0) {
        cout << "нет решени€";
        return 0; 
    }
    else if ((b == 0 && c == 0) || (a == 0 && c == 0)) {
        x1 = 0;
        cout << x1 << endl; 
    }

    
    else if (a == 0 && c != 0) {
        x1 = (-c / b);
        cout << "один корень: " << x1 << endl;
    }
    else if (d > 0) {
        x1 = (-b + d1) / (2 * a);
        x2 = (-b - d1) / (2 * a);
        cout << "x1:" << x1 << ' ' << "x2:" << x2 << endl;
    }
    else if (d == 0) {

        x1 = (-b + d1) / (2 * a);
        cout << "один корень: " << x1 << endl;

        }

}

double root_k(double a, double b, double c, double d)
{
    double x00 = 0, x01 = 0, x02 = 0;
    x00 = -b / 2*a;
    x01 = sqrt(-d) / (2 * a);
    x02 = -sqrt(-d) / (2 * a);

    if (x01 < 0 && x02 < 0)
    {
        x01 = abs(x01);
        x02 = abs(x02);
        cout << "x1:" << x00 << ' ' << '-' << x01 << 'i' << ' ' << "x2:" << x00 << ' ' << '-' << x02 << 'i' << endl;
    }
    else if (x01 > 0 && x02 < 0)
    {
        x02 = abs(x02);
        cout << "x1:" << x00 << ' ' << '+' << x01 << 'i' << ' ' << "x2:" << x00 << ' ' << '-' << x02 << 'i' << endl;
    }
    else if (x01 < 0 && x02 > 0)
    {
        x01 = abs(x01);
        cout << "x1:" << x00 << ' '  << '-' << x01 << 'i' << ' ' << "x2:" << x00 << ' ' << '+' << x02 << 'i' << endl;
    }
    else if (x01 > 0 && x02 > 0)
    {
        cout << "x1:" << x00 << ' ' << '+' << x01 << 'i' << ' ' << "x2:" << x00 << ' ' << '+' << x02 << 'i' << endl;
    }
    return 0;



}

int main()
{
   setlocale(LC_ALL, "Russian");
   double a, b, c, d;

    cout << "¬ведите a\n";
    cin >> a;
    cout << "¬ведите b\n";
    cin >> b;
    cout << "¬ведите c\n";
    cin >> c;
    d = Dis(a, b, c);

    if (d >= 0) 
    {
       root(a, b, c, d);
    }
    else
    {
       root_k(a, b, c, d);
    }
}