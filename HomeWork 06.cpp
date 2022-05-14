
#include <iostream>

int main()
{
    //Task 1

    double UserNumber;
    std::cout << "Enter the number: ";
    std::cin >> UserNumber;


    printf("%.2lf\n", UserNumber);



    //Task 2

    int StudentsWithHomework;
    std::cout << "Enter, how many students with homework: ";
    std::cin >> StudentsWithHomework;


    int StudentsWithoutHomework;
    std::cout << "Enter, how many students without homework: ";
    std::cin >> StudentsWithoutHomework;


    std::cout << StudentsWithoutHomework * 100.0 / (StudentsWithHomework + StudentsWithoutHomework) << "% students without homework. \n";



    //Task 3

    int Day = 24 * 3600; //Сутки в секундах

    int UserTime;
    std::cout << "Time elapsed since the beginning of the day = ";
    std::cin >> UserTime;


    if (Day <= UserTime) {
        std::cout << "It's already night";
    }
    else {
        int TotalSeconds = Day - UserTime;
        int Hours = TotalSeconds / 60 / 60;
        int Minutes = TotalSeconds / 60 % 60;
        int Seconds = TotalSeconds % 60;
        std::cout << Hours << "h " << Minutes << "m " << Seconds << "s left until midnight \n";
    }



    //Task 4

    int SumInUAH;
    std::cout << "UAH amount = ";
    std::cin >> SumInUAH;


    int QuantityMonths;
    std::cout << "Quantity months = ";
    std::cin >> QuantityMonths;


    int PercentInYear;
    std::cout << "Interest rate per year = ";
    std::cin >> PercentInYear;


    double PercentPerMonth = (PercentInYear / 100.0) / 12 * QuantityMonths;


    std::cout << "Money at the end of the term = " << SumInUAH * PercentPerMonth + SumInUAH << "\n";



    //Task 5

    double Radius = 6371;
    double Pi = 3.1415;


    std::cout << "The surface area of the earth is " << 4 * Pi * pow(Radius, 2) << " KM^2";

}
