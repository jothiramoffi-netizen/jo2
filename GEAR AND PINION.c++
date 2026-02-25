// gear_calculation.cpp
#include <iostream>
using namespace std;

int main() {
    double module;
    int teeth_pinion, teeth_gear;
    double D_pinion, D_gear;
    double addendum, dedendum;

    cout << "Gear Calculation Program\n";

    cout << "Enter module (m): ";
    cin >> module;

    cout << "Enter number of teeth on pinion: ";
    cin >> teeth_pinion;

    cout << "Enter number of teeth on gear: ";
    cin >> teeth_gear;

    // Pitch Circle Diameter
    D_pinion = module * teeth_pinion;
    D_gear = module * teeth_gear;

    // Addendum & Dedendum
    addendum = module;
    dedendum = 1.25 * module;

    cout << "\n--- Results ---\n";
    cout << "Pinion Pitch Diameter: " << D_pinion << " mm\n";
    cout << "Gear Pitch Diameter: " << D_gear << " mm\n";
    cout << "Addendum: " << addendum << " mm\n";
    cout << "Dedendum: " << dedendum << " mm\n";

    return 0;
}
