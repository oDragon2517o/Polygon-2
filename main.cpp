#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;

int numbers[4][2]{
    {1, 2},
    {4, 5},
    {7, 8},
    {3, 9}};

vector<vector<int>> polygon = {
    {1, 2},
    {4, 5},
    {7, 8},
    {3, 9}};

void consoling()
{
    cout << "Двухмерный вектор polygon:" << endl;
    for (const auto &row : polygon)
    { // итерация по строкам
        for (int elem : row)
        { // итерация по элементам строки
            cout << elem << " ";
        }
        cout << endl;
    }
};

void square() {}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double S;
    consoling();

    int index = 2;
    if (index < polygon.size())
    {
        polygon.erase(polygon.begin() + index);
    }

    consoling();

    //////////////////////////////////////////
    return 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << numbers[i][j] << "\t";
            S = numbers[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << S << std::endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << numbers[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    // S = numbers[1][1];
}