#include "cmath"
#include <map>
#include <string>

using namespace std;

const float ratio_celsius_kelvin = 273.15;
const float constante_de_boltzmann = 1.38064852e-23;
const float constante_de_plank = 6.62607004e-34;
const float constante_dielectrique_vide = 8.854187817e-12;





float Van_der_waals_weigth(float Keessom, float Debye, float London, float r)
{
    float resultat;
    resultat = -(1/pow(r,6)) * (Keessom + Debye + London);
    return resultat;
}
float Keessom_weigth(float mu1, float mu2, float epsilon_r, float T)
{
    float resultat;
    float numerator;
    float denominator;

    numerator = 2 * pow(mu1,2) *pow(mu2,2);
    denominator = pow((4 * constante_dielectrique_vide * M_PI * epsilon_r),2) * 3 * constante_de_boltzmann * T;
    resultat = numerator / denominator;
    return resultat;
}

float Debye_weigth(float epsilon_r, float alpha1, float alpha2, float mu1, float mu2)
{
    float resultat;
    float numerator;
    float denominator;

    numerator = alpha1 * pow(mu2,2) + alpha2 * pow(mu1,2);
    denominator = pow((4 * constante_dielectrique_vide * M_PI * epsilon_r),2);
    resultat = numerator / denominator;
    return resultat;
}

float London_weigth(float epsilon_r, float alpha1, float alpha2, float nu1, float nu2)
{
    float resultat;
    float numerator;
    float denominator;
    
    numerator =3 * constante_de_plank * alpha1 * alpha2 * nu1 * nu2;
    denominator =2 * pow((4 * constante_dielectrique_vide * M_PI * epsilon_r),2) * (nu1 + nu2);
    resultat = numerator / denominator;
    return resultat;

};
map<string, float> van_der_waal(map<string, float> data)
{
    float constante_dielectrique_vide;
    float constante_de_plank;
    float constante_de_boltzmann;
    float ratio_celsius_kelvin;

    map<string,float> resultat;
    resultat["Keessom"] = Keessom_weigth(data["mu1"],data["mu2"],data["epsilon_r"],data["T"]);
    resultat["Debye"] = Debye_weigth(data["epsilon_r"],data["alpha1"],data["alpha2"],data["mu1"],data["mu2"]);
    resultat["London"] = London_weigth(data["epsilon_r"],data["alpha1"],data["alpha2"],data["nu1"],data["nu2"]);
    resultat["Van_der_whaal"] = Van_der_waals_weigth(resultat["Keessom"],resultat["Debye"],resultat["London"],data["r"]);
    return resultat;
}