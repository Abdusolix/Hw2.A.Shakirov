#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "problem1\n";
    int number1, number2; 
    cin >> number1 >> number2;
    float avnumber = (number1 + number2)/2;
    int product = number1 * number2;
    cout << "The result of average is equal to " << avnumber << endl;
    cout << "The result of product is equal to " << product << endl;
    cout << "problem2\n";
    int base, height;
    cin >> base >> height;
    int area = 0.5*base*height;
    cout << "The area of triangle is " << area << endl;
    cout << "problem3\n";
    double celsius, fahrenheit;
    cin >> celsius;
    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << "The temperature in Fahrenheit is equal to " << fahrenheit << endl;
    cout << "problem4\n";
    int a, b, c;
    cin >> a >> b >> c;
    int result = pow(pow(a, b), c);
    cout << result << endl;
    cout << "problem5\n";
    int N;
    cin >> N;
    int d = pow(N, 1);
    int e = pow(N, 2);
    int f = pow(N, 3);
    int g = pow(N, 4);
    int h = pow(N, 5);
    int j = pow(N, 6);
    int k = pow(N, 7);
    int l = pow(N, 8);
    int m = pow(N, 9);
    int p = pow(N, 10);
    cout << "5ˆ1=" << d << " \n" << "5ˆ2=" << e << " \n" <<  "5ˆ3=" << f  << " \n" << "5ˆ4=" << g << " \n" << "5ˆ5=" << h << " \n" << "5ˆ6=" << j  << " \n" << "5ˆ7=" << k << " \n" << "5ˆ8=" << l << " \n" << "5ˆ9=" << m << " \n" << "5ˆ10=" << p << " \n" << endl;
    

    return 0;
}