#ifndef Vector_extension_hpp
#define Vector_extension_hpp

#include <stdio.h>
#include <vector>

std::vector<double> operator+(const std::vector<double> &a, const std::vector<double> &b);

std::vector<double> operator-(const std::vector<double> &a, const std::vector<double> &b);

double operator*(const std::vector<double> &a, const std::vector<double> &b);

std::vector<double> operator*(const double &b, const std::vector<double> &a);

std::vector<double> operator*(const std::vector<double> &a, const double &b);

std::vector<double> operator/(const std::vector<double> &a, const double &b);

double abs (const std::vector<double> &a);

#endif
