#include <iostream>

class Shape
{
private:
	std::string name{};
	int sides{};
	bool isCorrect{true};

public:
	Shape() {}
	Shape(std::string setName, int setSides) : name{ setName }, sides{ setSides } {}

	std::string getName() { return name; }
	int getSides() { return sides; }
	virtual bool getCorrect(){ return isCorrect; }
	virtual void  printAandS() {};
	void getInfo()
	{
		std::cout << "Фигура: " << getName() << std::endl;
		if (getCorrect())
		{
			std::cout << "Правильная" << std::endl;
		}
		else std::cout << "Неправильная" << std::endl;

		std::cout << "Количество сторон: " << getSides() << std::endl;

		if (getSides() > 0 && getSides() > 0)
		{
			printAandS();
		}

		std::cout << std::endl;
	}

	~Shape () {}
};

class Triangle : public Shape
{
private:						// a = angle, l = length.
	int a1, a2, a3{};
	int l1, l2, l3{};

public:
	Triangle(int setSides, int setA1, int setA2, int setA3, int setL1, int setL2, int setL3) : Shape{ "Треугольник", setSides }, a1{ setA1 }, a2{ setA2 }, a3{ setA3 }, l1{ setL1 }, l2{ setL2 }, l3{ setL3 } {}

	int getSumAngles() { return a1 + a2 + a3; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 3 && getSumAngles() <= 180) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl;
	}

	~Triangle() {}
};

class R_triangle : public Shape		// Прямоугольный треугольник
{
private:						// a = angle, l = length.
	int a1, a2{};
	const int a3{ 90 };
	int l1, l2, l3{};

public:
	R_triangle(int setSides, int setA1, int setA2, int setL1, int setL2, int setL3) : Shape{ "Прямоуголный треугольник", setSides }, a1{ setA1 }, a2{ setA2 }, l1{ setL1 }, l2{ setL2 }, l3{ setL3 } {}

	int getSumAngles() { return a1 + a2 + a3; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 3 && getSumAngles() <= 180) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl;
	}

	~R_triangle() {}
};

class I_triangle : public Shape		// Равнобедренный треугольник
{
private:
	int a1, a2, a3{};
	int l1, l2, l3{};

public:
	I_triangle(int setSides, int setA1, int setA2, int setL1, int setL2) : Shape{ "Равнобедренный треугольник", setSides }, a1{ setA1 }, a2{ setA2 }, l1{ setL1 }, l2{ setL2 } { a3 = a1; l3 = l1; }

	int getSumAngles() { return a1 + a2 + a3; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 3 && getSumAngles() <= 180) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl;
	}

	~I_triangle() {}
};

class E_triangle : public Shape		// Равносторонний треугольник
{
private:
	int a1, a2, a3{};
	int l1, l2, l3{};

public:
	E_triangle(int setSides, int setA1, int setL1) : Shape{ "Равносторонний треугольник", setSides }, a1{ setA1 }, l1{ setL1 } { a2 = a1; a3 = a1; l2 = l1; l3 = l1; }

	int getSumAngles() { return a1 + a2 + a3; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 3 && getSumAngles() <= 180) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << std::endl;
	}

	~E_triangle() {}
};

class Quadrangle : public Shape
{
private:
	int a1, a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Quadrangle(int setSides, int setA1, int setA2, int setA3, int setA4, int setL1, int setL2, int setL3, int setL4) : Shape{ "Четырехугольник", setSides }, a1{ setA1 }, a2{ setA2 }, a3{ setA3 }, a4{ setA4 }, l1{ setL1 },
		l2{ setL2 }, l3{ setL3 }, l4{ setL4 } {
	}

	int getSumAngles() { return a1 + a2 + a3 + a4; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta3 = " << a4 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl;
	}

	~Quadrangle() {}
};

class Rectangle : public Shape
{
private:
	int a1{ 90 };
	int a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Rectangle(int setSides, int setL1, int setL2) : Shape{ "Прямоугольник", setSides }, l1{ setL1 }, l2{ setL2 } { a2 = a1;  a3 = a1; a4 = a2; l3 = l1; l4 = l2; }

	int getSumAngles() { return a1 + a2 + a3 + a4; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta3 = " << a4 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl;
	}

	~Rectangle() {}
};

class Square : public Shape
{
private:
	int a1{ 90 };
	int a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Square(int setSides, int setL1) : Shape("Квадрат", setSides), l1{ setL1 } { a2 = a1; a3 = a1; a4 = a1; l2 = l1; l3 = l1; l4 = l1; }

	int getSumAngles() { return a1 + a2 + a3 + a4; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta3 = " << a4 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl;
	}

	~Square() {}
};

class Parall : public Shape
{
private:
	int a1, a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Parall(int setSides, int setA1, int setA2, int setL1, int setL2) : Shape{ "Параллелограмм", setSides }, a1{ setA1 }, a2{ setA2 }, l1{ setL1 }, l2{ setL2 } { a3 = a1; a4 = a2; l3 = l1; l4 = l2; }

	int getSumAngles() { return a1 + a2 + a3 + a4; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta3 = " << a4 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl;
	}

	~Parall() {}
};

class Rhombus : public Shape
{
private:
	int a1, a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Rhombus(int setSides, int setA1, int setA2, int setL1) : Shape("Ромб", setSides), a1{ setA1 }, a2{ setA2 }, l1{ setL1 } { a3 = a1; a4 = a2; l2 = l1; l3 = l1; l4 = l1; }

	int getSumAngles() { return a1 + a2 + a3 + a4; }
	bool isCorrect{};
	bool getCorrect()
	{
		if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; }
		else isCorrect = false;
		return isCorrect;
	}

	void printAandS()
	{
		std::cout << "Углы: " << "\t a1 = " << a1 << "\ta2 = " << a2 << "\ta3 = " << a3 << "\ta3 = " << a4 << std::endl;
		std::cout << "Стороны: " << "l1 = " << l1 << "\tl2 = " << l2 << "\tl3 = " << l3 << "\tl4 = " << l4 << std::endl;
	}

	~Rhombus() {}
};

int main()
{
	setlocale(LC_ALL, "rus");

	Shape shape{};
	shape.getInfo();

	Triangle triangle{3, 1, 2, 3, 4, 5, 6};
	triangle.getInfo();
    
	R_triangle Rtriangle{4, 1, 2, 3, 4, 5};
	Rtriangle.getInfo();

	I_triangle Itriangle{3, 1, 2, 3, 4};
	Itriangle.getInfo();

	E_triangle Etriangle{ 2, 1, 3 };
	Etriangle.getInfo();

	Quadrangle quadrangle{4 ,1, 2, 3, 4, 5, 6, 7, 8};
	quadrangle.getInfo();

	Rectangle rectangle{5, 1, 2};
	rectangle.getInfo();

	Square square{4, 6};
	square.getInfo();

	Parall parall{4, 1, 2, 3, 4};
	parall.getInfo();

	Rhombus rhombus{9, 1, 2, 3};
	rhombus.getInfo();

	return 0;
}