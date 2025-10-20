#include <iostream>
#include <vector>
#include <windows.h>
#include <cmath>
using namespace std;

vector<vector<int>> polygon = {
    {1, 1},
    {3, 5},
    {7, 5},
    {4, 2}};

// vector<vector<int>> polygon = {
//     {1, 1},
//     {3, 10},
//     {10, 10},
//     {10, 3},
//     {5, 5}};

void consoling(vector<vector<int>> polygon)
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

int square(vector<vector<int>> polygon)
{
    int s = 0; // Двойная площадь полигона
    for (int i = 0; i < polygon.size(); i++)
    {
        if (i + 1 < polygon.size())
            s = s + polygon[i][0] * polygon[i + 1][1];
        else
        {
            s = s + polygon[i][0] * polygon[0][1];
        }
    }

    for (int i = 0; i < polygon.size(); i++)
    {
        if (i + 1 < polygon.size())
            s = s - polygon[i + 1][0] * polygon[i][1];
        else
        {
            s = s - polygon[0][0] * polygon[i][1];
        }
    }
    // std::cout << fabs(s) << std::endl;
    return fabs(s);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double s;
    string text = "Могоугольник выпуклый";
    vector<vector<int>> haplominus;
    // consoling(polygon);
    s = square(polygon);

    for (int i = 0; i < polygon.size(); i++) // Убирает переменную в векторе
    {
        haplominus = polygon;
        haplominus.erase(haplominus.begin() + i);
        if (square(haplominus) > s)
        {
            // std::cout << "Могоугольник выпуклый" << std::endl;
            text = "Могоугольник вогнутый";
        };
    }
    std::cout << text << std::endl;
}