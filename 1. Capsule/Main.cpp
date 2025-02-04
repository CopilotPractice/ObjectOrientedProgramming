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
    Rectangle rectangle = Rectangle(3.f, 4.f);    // ����, ���� ���� ����.
    std::cout << "����: " << rectangle.GetArea() << "\n";
    std::cout << "�ѷ�: " << rectangle.GetSize() << "\n";

    Circle circle = Circle(5.f);                 // ���� ������ ����.
    std::cout << "����: " << circle.GetArea() << "\n";
    std::cout << "�ѷ�: " << circle.GetSize() << "\n";
}

/// ��� ���.
//����: 12
//�ѷ� : 14
//���� : 78.5
//�ѷ� : 31.4