#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Car
{
    char _brand[20];
    char _model[20];
    unsigned short _year;
    unsigned int _mileage;

public:

    Car() :_brand("Unkown"), _model("Unknown"), _year(0), _mileage(0) {}

    Car(const char brand[], const char model[], const unsigned short year, const unsigned int mileage)
    {
        strncpy(_brand, brand, sizeof(_brand));
        strncpy(_model, model, sizeof(_model));
        _year = year;
        _mileage = mileage;
    };

    unsigned int get_mileage() const { return _mileage; }

    unsigned short get_age(short current_year) const { return current_year > _year ? current_year - _year : 0; }

    void set_mileage(const int mileage){ _mileage = mileage > _mileage ? mileage : _mileage; }

    void drive(const int km) 
    { 
        int a = km;
        _mileage = km > 0 ? _mileage + km : _mileage; 
    }
};

int main()
{
    Car car("some_brand", "some_model", 2001, 1200);

    car.drive(300);
    std::cout << car.get_mileage() << "\n";

    car.set_mileage(1700);
    std::cout << car.get_mileage() << "\n";
 
    std::cout<< car.get_age(2025);
    return 0;
}

