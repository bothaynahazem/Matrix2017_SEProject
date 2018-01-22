#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include "stdarg.h"

#define PI 3.14159265359

using namespace std;

class Complex
{
  double R;
  double I;

  public:
    Complex();
    Complex(double R, double I);
    Complex(Complex& C);
    void copy(Complex& C);
    string getString();

    /*certain gets*/
    double magnitude();
    double angle();
    void negative();
    double real();
    double imaginary();

    static Complex addComplex(Complex& A, Complex& B);
    void add(Complex& C);
    void add(double D);
    void multiply(Complex& C);
    void multiply(double D);

    Complex operator=(Complex& C);
    Complex operator=(double D);
    void operator+=(Complex& C);
    void operator+=(double D);

    Complex operator+(Complex& C);
    Complex operator+(double D);

    Complex operator*(Complex& C);

    Complex operator-(); //Negative

    operator const string(); //Casting

    friend istream& operator >> (istream &is, Complex& C); //Stream
    friend ostream& operator << (ostream &os, Complex& C); //Stream

    Complex operator++(); //Pre Increment
    Complex operator++(int); //Post Increment, int is not used

    double operator[](string name); //Index
    double operator()(string name, string info = ""); //Argument

    void * operator new(size_t size); //overloading "new" operator
    void operator delete(void * p); //overloading "delete" operator

  };
