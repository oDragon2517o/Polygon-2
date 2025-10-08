#include <iostream>

using namespace std;

int numbers[4][2]{
    {1, 2},
    {4, 5},
    {7, 8},
    {3, 9}};

int main()
{
    // cout numbers << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << numbers[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}