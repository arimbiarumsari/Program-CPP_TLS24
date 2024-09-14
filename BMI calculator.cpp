#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float Height_in_cm, Weight_in_kg, BMI;
    int i = 0;
    
    do {
        cout << "Enter your height in centimetres: "; // ask for height
        cin >> Height_in_cm;
    
        cout << "Enter your weight in kilograms: "; // ask for weight
        cin >> Weight_in_kg;
    
        BMI = Weight_in_kg / (pow(Height_in_cm / 100, 2)); // BMI calculation
    
        cout << "Your BMI is ";
        cout << BMI << endl;
    
        if (BMI < 18.5) { // BMI Classification
                cout << "You are underweight" << endl;
                } else if (BMI >= 18.5 && BMI < 25) {
                cout << "You are normal" << endl;
                } else if (BMI >= 25 && BMI < 30) {
                cout << "You are overweight" << endl;
                } else {
                cout << "You are obese" << endl;
                }
                
        cout << "Would you like to restart? (Enter 1 for yes, any other number for no)" << endl; // Asking for repetition
        cin >> i;
        }while (i == 1);
}
