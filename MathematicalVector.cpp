#include <iostream>
#include <cmath>

struct vec
{
    int x = 0;
    int y = 0;
};

enum operations
{
    add,
    subtract,
    scale,
    length,
    normalize
};

void vec_add();
void vec_subtract();
void vec_scale();
void vec_length();
void vec_normalize();

int main()
{
    int operation;
    std::cout << "Enter operation number (0 - 4): ";
    std::cin >> operation;
    if (operation < 0 || operation > 4)
    {
        std::cerr << "Error! Invalid operation!" << std::endl;
    }
    else
    {
        switch (operation)
        {
        case operations::add:
            vec_add();
            break;
        case operations::subtract:
            vec_subtract();
            break;
        case operations::scale:
            vec_scale();
            break;
        case operations::length:
            vec_length();
            break;
        case operations::normalize:
            vec_normalize();
            break;
        }
    }
}

void vec_add()
{
    std::cout << "The Vector addition!" << std::endl;
    vec first, second;
    std::cout << "Enter coordinates of first vector(x y): ";
    std::cin >> first.x >> first.y;
    
    std::cout << "Enter coordinates of second vector(x y): ";
    std::cin >> second.x >> second.y;
    int resultX = first.x + second.x;
    int resultY = first.y + second.y;
    std::cout << "Result is (" << resultX << "," << resultY << ")." << std::endl;
}

void vec_subtract()
{
    std::cout << "The Vector subtraction!" << std::endl;
    vec first, second;
    std::cout << "Enter coordinates of first vector(x y): ";
    std::cin >> first.x >> first.y;

    std::cout << "Enter coordinates of second vector(x y): ";
    std::cin >> second.x >> second.y;
    int resultX = first.x - second.x;
    int resultY = first.y - second.y;
    std::cout << "Result is (" << resultX << "," << resultY << ")." << std::endl;
}

void vec_scale()
{
    std::cout << "Vector multiplication by scalar!" << std::endl;
    vec first;
    int scalar;
    std::cout << "Enter coordinates of first vector(x y): ";
    std::cin >> first.x >> first.y;

    std::cout << "Enter the scalar: ";
    std::cin >> scalar;
    int resultX = first.x * scalar;
    int resultY = first.y * scalar;
    std::cout << "Result is (" << resultX << "," << resultY << ")." << std::endl;
}

void vec_length()
{
    std::cout << "Calculation the length of a vector!" << std::endl;
    vec first;
    std::cout << "Enter coordinates of vector(x y): ";
    std::cin >> first.x >> first.y;

    double length = sqrt(pow(first.x, 2) + pow(first.y, 2));
    std::cout << "Result is " << length << std::endl;
    
}

void vec_normalize()
{
    std::cout << "Vector normalization!" << std::endl;
    vec first;
    std::cout << "Enter coordinates of vector(x y): ";
    std::cin >> first.x >> first.y;

    double invLength = 1/(sqrt(pow(first.x, 2) + pow(first.y, 2)));
    double resultX = first.x * invLength;
    double resultY = first.y * invLength;
    std::cout << "Result is (" << resultX << "," << resultY << ")." << std::endl;
}
