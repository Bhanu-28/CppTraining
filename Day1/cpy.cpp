#include <iostream>
using namespace std;

enum InsuranceType { ZERO_DEBT, REGULAR };
enum VehicleType { PRIVATE, COMMERCIAL, SPECIAL_PURPOSE };
enum CarType { SUV, SEDAN, HATCHBACK };

class Insurance {
public:
    string insuranceId;
    float insuranceAmount;
    InsuranceType insuranceType;
};

class Vehicle {
public:
    int vehicleId;
    int vehicleRegistrationYear;
    VehicleType vehicleType;
    Insurance vehicleInsurancePlan;
};

class Car : public Vehicle {
public:
    CarType carType;
    float carPrice;
    string carColour;
};

int main() {
    // Create an instance of the Insurance class
    Insurance insurance;
    insurance.insuranceId = "INS001";
    insurance.insuranceAmount = 10000.0;
    insurance.insuranceType = ZERO_DEBT;

    // Create an instance of the Vehicle class
    Vehicle vehicle;
    vehicle.vehicleId = 1;
    vehicle.vehicleRegistrationYear = 2021;
    vehicle.vehicleType = PRIVATE;
    vehicle.vehicleInsurancePlan = insurance;

    // Create an instance of the Car class
    Car car;
    car.vehicleId = 2;
    car.vehicleRegistrationYear = 2022;
    car.vehicleType = COMMERCIAL;
    car.vehicleInsurancePlan = insurance;
    car.carType = SEDAN;
    car.carPrice = 25000.0;
    car.carColour = "Blue";

    // Output the car details
    cout << "Car Details:" << endl;
    cout << "Vehicle ID: " << car.vehicleId << endl;
    cout << "Registration Year: " << car.vehicleRegistrationYear << endl;
    cout << "Vehicle Type: " << car.vehicleType << endl;
    cout << "Insurance ID: " << car.vehicleInsurancePlan.insuranceId << endl;
    cout << "Insurance Amount: " << car.vehicleInsurancePlan.insuranceAmount << endl;
    cout << "Insurance Type: " << car.vehicleInsurancePlan.insuranceType << endl;
    cout << "Car Type: " << car.carType << endl;
    cout << "Car Price: " << car.carPrice << endl;
    cout << "Car Colour: " << car.carColour << endl;

    return 0;
}
