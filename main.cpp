#include <iostream>
#include <string>
#include <any>

#include "data.hpp"
#include "van_der_waals_lib.hpp"

using namespace std;

int main() {
    cout << "Start the van der waals program" << endl;
    map<string, float> final_result;
    map<string, float> data = data_entree();
    final_result = van_der_waal(data);
    cout << "The result is : " << final_result["Van_der_whaal"] << endl;
    cout << "End of the van der waals program" << endl;
    return 0;
}
