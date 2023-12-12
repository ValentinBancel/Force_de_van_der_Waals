#include <iostream>
#include <map>
#include <string>

#ifndef MATH_HPP_INCLUDED
#define MATH_HPP_INCLUDED
class Van_der_Waals{
    public:
    
    const float constante_dielectrique_vide;
    const float constante_de_plank;
    const float constante_de_boltzmann;
    const float ratio_celsius_kelvin;
    std::map<std::string, float> Van_der_whaal(float r, float T, float mu1, float mu2, float epsilon_r, float alpha1, float alpha2, float nu1, float nu2);
    
    private:

    float Van_der_waals_weigth(float Keessom, float Debye, float London, float r);
    float Keessom_weigth(float mu1, float mu2, float epsilon_r, float T);
    float Debye_weigth(float epsilon_r, float alpha1, float alpha2, float mu1, float mu2);
    float London_weigth(float epsilon_r, float alpha1, float alpha2, float nu1, float nu2);

};

#endif // MATH_HPP_INCLUDED