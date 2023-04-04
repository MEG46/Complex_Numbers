#include "Header.h"
int main()
{    
    int d = 5;
    complexNumber number1(3, 4);
    cout << "Real : " << number1.getReal() << endl;
    cout << "Complex : " << number1.getImag() << endl;
    number1.displayComplex();
    complexNumber number2(3, -4);
    cout << "Real : " << number2.getReal() << endl;
    cout << "Complex : " << number2.getImag() << endl;
    number2.displayComplex();
    complexNumber number3(number2);
    number3.displayComplex();
    number3.setValue(3,-7);
    number3.displayComplex();
    cout << "-----------------------------------------------" << endl;
    complexNumber resultMain;
    resultMain = number1.addComplex(number2);
    resultMain.displayComplex();
    cout << "-----------------------------------------------" << endl;
    resultMain = number1.multiplyComplex(number2);
    cout << "-----------------------------------------------" << endl;
    resultMain.displayComplex();
    resultMain = number1.subtractComplex(number3);
    resultMain.displayComplex();
    cout << "-----------------------------------------------" << endl;
    resultMain = number1.multiplyConstant(d);
    resultMain.displayComplex();
    return 0;
}