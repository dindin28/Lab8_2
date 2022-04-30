// Lab8_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MathLibraryV2.h"

// Unit tests
void TestCalcAverageHarmonic();
void TestCalcTaylorRow();
void TestCalcPolygonArea();

int main()
{
    TestCalcAverageHarmonic();
    TestCalcTaylorRow();
    TestCalcPolygonArea();

    return 0;
}

void TestCalcAverageHarmonic()
{
    std::cout << "Starting TestCalcAverageHarmonic\n"
        << "========================\n";

    std::cout << "Normal flow:\n";
    std::cout << "CalcAverageHarmonic(-1, 3, 4): "
        << CalcAverageHarmonic(-1, 3, 4)
        << std::endl;

    std::cout << "Error flow:\n";
    try
    {
        std::cout << "CalcAverageHarmonic(-1, 0, 4): "
            << CalcAverageHarmonic(-1, 0, 4) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << std::endl
            << "Catched error: " << e.what()
            << std::endl;
    }

    std::cout << "========================\n\n";
}

void TestCalcTaylorRow()
{
    std::cout << "Starting TestCalcTaylorRow\n"
        << "========================\n";

    std::cout << "Normal flow:\n";
    std::cout << "CalcTaylorRow(0.5, 20):\n";
    CalcTaylorRow(0.5, 20);

    std::cout << "Error flow:\n";
    std::cout << "CalcTaylorRow(1.1, 20):\n";
    try
    {
        CalcTaylorRow(1.1, 20);
    }
    catch (const std::exception& e)
    {
        std::cout << "Catched error: " << e.what()
            << std::endl;
    }

    std::cout << "========================\n\n";
}
void TestCalcPolygonArea()
{
    std::cout << "Starting TestCalcPolygonArea\n"
        << "========================\n";

    std::cout << "Normal flow:\n";
    std::cout << "CalcPolygonArea(4, 4): "
        << CalcPolygonArea(4, 4)
        << std::endl;
    std::cout << "Error flow:\n";
    try
    {
        std::cout << "CalcPolygonArea(0, 4): "
            << CalcPolygonArea(0, 4) << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << std::endl
            << "Catched error: " << e.what()
            << std::endl;
    }
    
    std::cout << "========================\n\n";
}