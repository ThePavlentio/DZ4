#include <iostream>

class Shape
{
protected:
	std::string name{};
	int sides{};

public:
	Shape() { name = "Фигура"; sides = 0; }

	Shape(std::string setName, int setSides) : name{ setName }, sides { setSides }
	{}

	std::string getName() { return name; }
	int getSides() { return sides; }

	~Shape(){}
};

class Triangle : public Shape
{
protected:
	std::string name{};
	int sides{};

public:
	Triangle() : Shape{"Треугольник", 3} {}

	~Triangle () {}
};

class Quadrangle : public Shape
{
protected:
	std::string name{};
	int sides{};

public:
	Quadrangle() : Shape{ "Четырехугольник", 4 } {}

	~Quadrangle () {}
};

void printData(Shape* shape)
{
	std::cout << "Количество сторон: " << std::endl;
	std::cout << shape->getName() << ": " << shape->getSides() << std::endl;
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	Shape shape{};
	printData(&shape);

	Triangle triangle{};
	printData(&triangle);

	Quadrangle quadrangle{};
	printData(&quadrangle);

	return 0;
}
