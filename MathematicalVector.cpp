#include <iostream>
#include <cmath>

struct vec
{
    int x = 0;
    int y = 0;
    
    double length = sqrt(pow(x, 2) + pow(y, 2));
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
    std::cout << "Vector addition!" << std::endl;
    vec first, second;
    std::cout << "Enter coordinates of first vector(x y):";
    std::cin >> first.x >> first.y;
    std::cout << "Enter coordinates of second vector(x y):";
    std::cin >> second.x >> second.y;

    double cos = ((first.x * second.x) + (first.y * second.y)) / (first.length * second.length);
    //double angle = acos(((first.x * second.x) + (first.y * second.y)) / (first.length * second.length));
    double result = sqrt(pow(first.length, 2) + pow(second.length, 2) - (2 * first.length * second.length * cos));
}

void vec_subtract()
{

}

void vec_scale()
{
}

void vec_length()
{
}

void vec_normalize()
{
}
