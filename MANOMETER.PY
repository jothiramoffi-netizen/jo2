# differential_manometer.py

def pressure_difference(rho, h, g=9.81):
    """
    Calculate pressure difference using differential manometer
    rho = density of manometric fluid (kg/m^3)
    h = height difference (m)
    g = gravity (m/s^2)
    """
    return rho * g * h


print("Differential Manometer Calculator")

rho = float(input("Enter density of manometric fluid (kg/m^3): "))
h = float(input("Enter height difference (m): "))

delta_p = pressure_difference(rho, h)

print("\nPressure Difference =", round(delta_p, 2), "Pa")
