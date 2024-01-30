#include <iostream>
#include <map>
#include <string>

#ifndef MATH_HPP_INCLUDED
#define MATH_HPP_INCLUDED
// #pragma once

std::map<std::string, float> van_der_waal(std::map<std::string, float> data);


// float resultat;
float Van_der_waals_weigth(float Keessom, float Debye, float London, float r);
float Keessom_weigth(float mu1, float mu2, float epsilon_r, float T);
float Debye_weigth(float epsilon_r, float alpha1, float alpha2, float mu1, float mu2);
float London_weigth(float epsilon_r, float alpha1, float alpha2, float nu1, float nu2);
#endif