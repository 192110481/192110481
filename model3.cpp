#include <bits/stdc++.h>
using namespace std;
inline void Sum(float p, float q) {
    float sum = p + q;
    cout << "SUM        " << p << " + " << q << " = " << sum << "\n";
}

inline void Difference(float p, float q) {
    float sub = p - q;
    cout << "DIFFERENCE " << p << " - " << q << " = " << sub << "\n";
}

inline void Multiplication(float p, float q) {
    float mul = p * q;
    cout << "PRODUCT    " << p << " * " << q << " = " << mul << "\n";
}

inline void Division(float p, float q) {
    float div = (float)p / q;
    cout << "QUOTIENT   " << p << " / " << q << " = " << div << "\n";
}

inline void Modulus(int p, int q) {
    float mod = p % q;
    cout << "MODULUS    " << p << " % " << q << " = " << mod << "\n";
}
int main() {
    float p, q;
    
    cout << "Enter any two numbers:\n";
    cin >> p >> q;
    if ((p<0) || (q<0))
    {
    	cout<<"invalid input";	
	}
	else{
    Sum(p, q);
    Difference(p, q);
    Multiplication(p, q);
    Division(p, q);
    Modulus(p, q);
}
    return 0;
    
}

