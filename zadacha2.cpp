#include <iostream>

class Shape
{
protected:
	std::string name{};

public:
	Shape(std::string setName) : name{setName}{}

	std::string getName() { return name; }

	virtual void getAngles() = 0;
	virtual void getLenghts() = 0;

	~Shape () {}
};

class Triangle : public Shape
{
private:						// a = angle, l = length.
	int a1, a2, a3{};
	int l1, l2, l3{};

public:
	Triangle(int setA1, int setA2, int setA3, int setL1, int setL2, int setL3) : Shape{ "Треугольник" }, a1{ setA1 }, a2{setA2}, a3{setA3}, l1{setL1}, l2{setL2}, l3{setL3}{}

	void getAngles(){ std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl; }

	~Triangle () {}
};

class R_triangle : public Shape		// Прямоугольный треугольник
{
private:						// a = angle, l = length.
	int a1, a2{};
	const int a3{90};
	int l1, l2, l3{};

public:
	R_triangle(int setA1, int setA2, int setL1, int setL2, int setL3) : Shape{ "Прямоуголный треугольник" }, a1{ setA1 }, a2{ setA2 }, l1{ setL1 }, l2{ setL2 }, l3{ setL3 } {}

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl; }

	~R_triangle () {}
};

class I_triangle : public Shape		// Равнобедренный треугольник
{
private:
	int a1, a2, a3{};
	int l1, l2, l3{};

public:
	I_triangle(int setA1, int setA2, int setL1, int setL2) : Shape{ "Равнобедренный треугольник" }, a1{ setA1 }, a2{ setA2 }, l1{ setL1 }, l2{ setL2 } { a3 = a1; l3 = l1; }

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl; }

	~I_triangle(){}
};

class E_triangle : public Shape		// Равносторонний треугольник
{
private:
	int a1, a2, a3{};
	int l1, l2, l3{};

public:
	E_triangle(int setA1, int setL1) : Shape{ "Равносторонний треугольник" }, a1{ setA1 }, l1{ setL1 } { a2 = a1; a3 = a1; l2 = l1; l3 = l1; }

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl; }

	~E_triangle () {}
};

class Quadrangle : public Shape
{
private:
	int a1, a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Quadrangle(int setA1, int setA2, int setA3, int setA4, int setL1, int setL2, int setL3, int setL4) : Shape{"Четырехугольник"}, a1{setA1}, a2{setA2}, a3{setA3}, a4{setA4}, l1{setL1},
		l2{setL2}, l3{setL3}, l4{setL4} {}

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta4 = " << a4 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl; }

	~Quadrangle (){}
};

class Rectangle : public Shape
{
private:
	int a1{ 90 };
	int a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Rectangle(int setL1, int setL2) : Shape{ "Прямоугольник" }, l1{ setL1 }, l2{ setL2 } { a2 = a1;  a3 = a1; a4 = a2; l3 = l1; l4 = l2; }

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta4 = " << a4 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl; }

	~Rectangle () {}
};

class Square : public Shape
{
private:
	int a1{ 90 };
	int a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Square(int setL1) : Shape("Квадрат"), l1{ setL1 } { a2 = a1; a3 = a1; a4 = a1; l2 = l1; l3 = l1; l4 = l1; }

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta4 = " << a4 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl; }

	~Square () {}
};

class Parall : public Shape
{
private:
	int a1, a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Parall(int setA1, int setA2, int setL1, int setL2) : Shape{ "Параллелограмм" }, a1{ setA1 }, a2{ setA2 }, l1{ setL1 }, l2{ setL2 } { a3 = a1; a4 = a2; l3 = l1; l4 = l2; }

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta4 = " << a4 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl; }

	~Parall () {}
};

class Rhombus : public Shape
{
private:
	int a1, a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Rhombus(int setA1, int setA2, int setL1) : Shape("Ромб"), a1{ setA1 }, a2{ setA2 }, l1{ setL1 } { a3 = a1; a4 = a2; l2 = l1; l3 = l1; l4 = l1; }

	void getAngles() { std::cout << "a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta4 = " << a4 << std::endl; }
	void getLenghts() { std::cout << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl; }

	~Rhombus () {}
};

void printInfo(Shape* shape)
{
	std::cout << shape->getName() << ": " << std::endl;
	shape->getAngles();
	shape->getLenghts();
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");

	Triangle triangle{1, 2, 3, 4, 5, 6};
	printInfo(&triangle);

	R_triangle rtriangle{1, 2, 3, 4, 5};
	printInfo(&rtriangle);

	I_triangle itriangle{ 1, 2, 3, 4 };
	printInfo(&itriangle);

	E_triangle etriangle{1, 2};
	printInfo(&etriangle);

	Quadrangle quadrangle{ 1, 2, 3, 4, 5, 6, 7, 8 };
	printInfo(&quadrangle);

	Rectangle rectangle{ 3, 4 };
	printInfo(&rectangle);

	Square square{ 1 };
	printInfo(&square);

	Parall parall{1, 2, 3, 4};
	printInfo(&parall);

	Rhombus rhombus(1, 2, 3);
	printInfo(&rhombus);

	return 0;
}