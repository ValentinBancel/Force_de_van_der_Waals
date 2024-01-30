#include <string>
#include <iostream>
#include <map>
#include <any>
using namespace std;

map<string, float> data_entree()
{
    map<string, float> data;
    float entree;

    cout << "Entrez la donnée r: " << endl;
    cin >> entree;
    data["r"] = entree;

    cout << "Entrez la donnée T: " << endl;
    cin >> entree;
    data["T"] = entree;

    cout << "Entrez la donnée mu1: " << endl;
    cin >> entree;
    data["mu1"] = entree;

    cout << "Entrez la donnée mu2: " << endl;
    cin >> entree;
    data["mu2"] = entree;

    cout << "Entrez la donnée epsilon_r: " << endl;
    cin >> entree;
    data["epsilon_r"] = entree;

    cout << "Entrez la donnée alpha1: " << endl;
    cin >> entree;
    data["alpha1"] = entree;

    cout << "Entrez la donnée alpha2: " << endl;
    cin >> entree;
    data["alpha2"] = entree;
    
    cout << "Entrez la donnée nu1: " << endl;
    cin >> entree;
    data["nu1"] = entree;

    cout << "Entrez la donnée nu2: " << endl;
    cin >> entree;
    data["nu2"] = entree;

    cout << "Données entrées: "<< endl;
    cout << "r: " << data["r"] << endl;
    cout << "T: " << data["T"] << endl;
    cout << "mu1: " << data["mu1"] << endl;
    cout << "mu2: " << data["mu2"] << endl;
    cout << "epsilon_r: " << data["epsilon_r"] << endl;
    cout << "alpha1: " << data["alpha1"] << endl;
    cout << "alpha2: " << data["alpha2"] << endl;
    cout << "nu1: " << data["nu1"] << endl;
    cout << "nu2: " << data["nu2"] << endl;
    return data;
}
