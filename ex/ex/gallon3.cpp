#include<iostream>

using namespace std;

int main(){
    float petro,mil,keep_liter,keep_kilometer;

    cout<<"Input petroleum used : "; cin>>petro;
    cout<<"Input mileage        : "; cin>>mil;
    cout<<"(1) Fuel economy = "<<mil/petro<<" Miles per gallon (MPG)"<<endl;
    keep_liter     = petro4.5461;
    keep_kilometer = mil1.6093;
    cout<<"(2) The car will use "<<keep_liter / keep_kilometer<<"Liter per kilometer"<<endl;
    cout<<"(3) Fuel economy = "<<keep_kilometer / keep_liter <<" Kilometers per liter (Km/L)"<<endl;


    return 0;
}
