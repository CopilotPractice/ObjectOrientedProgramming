#include <iostream>

class Rectangle
{
public:
    Rectangle(float row, float column)
        : row(row), column(column)
    {

    }

    float GetArea() 
    {
        return row * column;
    }

    float GetSize()
    {
        return (row + column) * 2;
    }
private:
    float row;
    float column;
};

class Circle
{
public:
    Circle(float half)
        :half(half)
    {

    }

    float GetArea()
    {
        return (3.14 * half) * (3.14 * half);
    }

    float GetSize()
    {
        return 3.14 * 2 * half;
    }
private:
    float half;
};

int main()
{
    Rectangle rectangle = Rectangle(3.f, 4.f);    // 가로, 세로 길이 전달.
    std::cout << "면적: " << rectangle.GetArea() << "\n";
    std::cout << "둘레: " << rectangle.GetSize() << "\n";

    Circle circle = Circle(5.f);                 // 원의 반지름 전달.
    std::cout << "면적: " << circle.GetArea() << "\n";
    std::cout << "둘레: " << circle.GetSize() << "\n";
}

/// 출력 결과.
//면적: 12
//둘레 : 14
//면적 : 78.5
//둘레 : 31.4