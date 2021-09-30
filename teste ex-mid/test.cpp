#include <iostream>

using namespace std;

int main(){
    int petroleum,mileage;
    cout << "Enter petroleum : "; cin >> petroleum;
    cout << "Enter mileage   : "; cin >> mileage;
    float L = petroleum*4.5461;
    float km = mileage*1.6093;
    float kml = km/L;
    float lk = L/mileage;

    cout << kml << endl;
    cout << km << endl;
    cout << L << endl;
    cout << lk << endl;
    return 0;
}