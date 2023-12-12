#include "cmath"
#include <map>
#include <string>

class Van_der_Waals
{
    public:
    
    const float constante_dielectrique_vide = 8.854187817e-12;
    const float constante_de_plank = 6.62607004e-34;
    const float constante_de_boltzmann = 1.38064852e-23;
    const float ratio_celsius_kelvin = 273.15;
    std::map<std::string, float> Van_der_whaal(float r, float T, float mu1, float mu2, float epsilon_r, float alpha1, float alpha2, float nu1, float nu2)
    {
        std::map<std::string,float> resultat;
        resultat["Keessom"] = Keessom_weigth(mu1,mu2,epsilon_r,T);
        resultat["Debye"] = Debye_weigth(epsilon_r,alpha1,alpha2,mu1,mu2);
        resultat["London"] = London_weigth(epsilon_r,alpha1,alpha2,nu1,nu2);
        resultat["Van_der_whaal"] = Van_der_waals_weigth(resultat["Keessom"],resultat["Debye"],resultat["London"],r);
        return resultat;
    }
    
    private:
    
    float Van_der_waals_weigth(float Keessom, float Debye, float London, float r)
    {
        float resultat;
        resultat = -(1/pow(r,6)) * (Keessom + Debye + London);
        return resultat;
    }
    float Keessom_weigth(float mu1, float mu2, float epsilon_r, float T)
    {
        float numerator = 2 * pow(mu1,2) *pow(mu2,2);
        float denominator = pow((4 * constante_dielectrique_vide * M_PI * epsilon_r),2) * 3 * constante_de_boltzmann * T;
        float resultat = numerator / denominator;
        return resultat;
    }

    float Debye_weigth(float epsilon_r, float alpha1, float alpha2, float mu1, float mu2)
    {
        float numerator = alpha1 * pow(mu2,2) + alpha2 * pow(mu1,2);
        float denominator = pow((4 * constante_dielectrique_vide * M_PI * epsilon_r),2);
        float resultat = numerator / denominator;
        return resultat;
    }

    float London_weigth(float epsilon_r, float alpha1, float alpha2, float nu1, float nu2)
    {
        float numerator =3 * constante_de_plank * alpha1 * alpha2 * nu1 * nu2;
        float denominator =2 * pow((4 * constante_dielectrique_vide * M_PI * epsilon_r),2) * (nu1 + nu2);
        float resultat = numerator / denominator;
        return resultat;

    }
    float ConvertKelvinToCelsius(float temp)
    {
        return temp + ratio_celsius_kelvin;
    }
};