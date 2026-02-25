// tool_life.cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double V, n, C, T;
    int tool_choice;

    cout << "Tool Life Calculator (Taylor's Equation)\n";
    cout << "Select Tool Material:\n";
    cout << "1. High Speed Steel (HSS)\n";
    cout << "2. Carbide\n";
    cout << "3. Ceramic\n";
    cout << "Enter choice (1-3): ";
    cin >> tool_choice;

    // Assign n value based on tool material
    switch(tool_choice) {
        case 1:
            n = 0.125;  // Typical for HSS
            cout << "Selected: HSS\n";
            break;
        case 2:
            n = 0.25;   // Typical for Carbide
            cout << "Selected: Carbide\n";
            break;
        case 3:
            n = 0.5;    // Typical for Ceramic
            cout << "Selected: Ceramic\n";
            break;
        default:
            cout << "Invalid choice!\n";
            return 0;
    }

    cout << "Enter cutting speed (m/min): ";
    cin >> V;

    cout << "Enter constant C (depends on work material): ";
    cin >> C;

    // Calculate Tool Life
    T = pow((C / V), (1.0 / n));

    cout << "\nEstimated Tool Life = " << T << " minutes\n";

    return 0;
}
