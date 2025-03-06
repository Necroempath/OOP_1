//Требования:
//Закрытые(private) поля :
//    brand – марка автомобиля.
//    model – модель автомобиля.
//    year – год выпуска.
//    mileage – пробег.
//    Открытые(public) методы :
//    Конструктор : принимает значения марки, модели, года выпуска и пробега.
//    Default Конструктор : инициализирует данные старндартные
//    Геттеры :
//getMileage() – возвращает пробег.
//Сеттер :
//    setMileage(newMileage) – устанавливает пробег(нельзя уменьшать пробег).
//    Метод drive(km) : увеличивает пробег на переданное количество километров.
//    Метод getAge(currentYear) : возвращает возраст автомобиля.
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

    unsigned int get_mileage() { return _mileage; }

    unsigned short get_age(unsigned short current_year) { return current_year > _year ? current_year - _year : 0; }

    void set_mileage(const unsigned int mileage){ _mileage = mileage > _mileage ? mileage : _mileage; }

    void drive(const unsigned int km) { _mileage += km; }

    //void display_car(const Car& car)
    //{
    //    std::cout << "Brand: " << _brand << "\n";
    //    std::cout << "Model: " << _model << "\n";
    //    std::cout << "Year: " << _year << "\n";
    //    std::cout << "Mileage: " << _mileage << "\n";
    //}

};

int main()
{
    Car car("some_brand", "some_model", 2001, 1200);
    car.display_car(car);
}

