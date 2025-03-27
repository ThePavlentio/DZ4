#include <iostream>

class Shape
{
protected:
	std::string name{};
	int sides{};
	bool isCorrect{true};

public:
	Shape() {}
	Shape(std::string setName, int setSides) : name{ setName }, sides{ setSides } {}

	std::string getName() { return name; }
	virtual int getSides() { return sides; }
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
protected:						// a = angle, l = length.
	int a1, a2, a3{};
	int l1, l2, l3{};

public:
	Triangle(std::string setName, int setSides, int setA1, int setA2, int setA3, int setL1, int setL2, int setL3) : Shape{ setName, setSides }, a1{ setA1 }, a2{ setA2 }, a3{ setA3 }, l1{ setL1 }, l2{ setL2 }, l3{ setL3 } {}

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

class R_triangle : public Triangle		// Прямоугольный треугольник
{
public:
	R_triangle(std::string setName, int setSides, int setA1, int setA2, int setA3, int setL1, int setL2, int setL3) : Triangle{ setName, setSides, setA1, setA2, setA3, setL1, setL2, setL3 } {}

	bool isCorrect{};
	bool getCorrect()
	{
		if (a1 == 90 || a2 == 90 || a3 == 90) { if (getSides() == 3 && getSumAngles() <= 180) { isCorrect = true; } }
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

class I_triangle : public Triangle		// Равнобедренный треугольник
{
public:
	I_triangle(std::string setName, int setSides, int setA1, int setA2, int setA3, int setL1, int setL2, int setL3) : Triangle{ setName, setSides, setA1, setA2, setA3, setL1, setL2, setL3 } {}

	bool isCorrect{};
	bool getCorrect()
	{
		if((a1 == a2 || a1 == a3 || a2 == a3) && (l1 == l2 || l1 == l3 || l2 == l3)){ if (getSides() == 3 && getSumAngles() <= 180) { isCorrect = true; } }
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

class E_triangle : public Triangle		// Равносторонний треугольник
{
public:
	E_triangle(std::string setName, int setSides, int setA1, int setA2, int setA3, int setL1, int setL2, int setL3) : Triangle{ setName, setSides, setA1, setA2, setA3, setL1, setL2, setL3 } {}

	bool isCorrect{};
	bool getCorrect()
	{
		if((a1 == 60 && a2 == 60 && a3 == 60) && (l1 == l2 && l1 == l3)){ if (getSides() == 3 && getSumAngles() <= 180) { isCorrect = true; } }
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
protected:
	int a1, a2, a3, a4{};
	int l1, l2, l3, l4{};

public:
	Quadrangle(std::string setName, int setSides, int setA1, int setA2, int setA3, int setA4, int setL1, int setL2, int setL3, int setL4) : Shape{ setName, setSides }, a1{ setA1 }, a2{ setA2 }, a3{ setA3 }, a4{ setA4 }, l1{ setL1 },
		l2{ setL2 }, l3{ setL3 }, l4{ setL4 } {}

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

class Rectangle : public Quadrangle
{
public:
	Rectangle(std::string setName, int setSides, int setA1, int setA2, int setA3, int setA4, int setL1, int setL2, int setL3, int setL4) : Quadrangle{setName, setSides, setA1, setA2, setA3, setA4, setL1, setL2, setL3, setL4}{}

	bool isCorrect{};
	bool getCorrect()
	{
		if ((a1 == 90 && a2 == 90 && a3 == 90 && a4 == 90) && (l1 == l3 && l2 == l4)) { if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; }	}
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

class Square : public Quadrangle
{
public:
	Square(std::string setName, int setSides, int setA1, int setA2, int setA3, int setA4, int setL1, int setL2, int setL3, int setL4) : Quadrangle{ setName, setSides, setA1, setA2, setA3, setA4, setL1, setL2, setL3, setL4 } {}

	bool isCorrect{};
	bool getCorrect()
	{
		if((a1 == 90 && a2 == 90 && a3 == 90 && a4 == 90) && (l1 == l2 && l2 == l3 && l3 == l4)){ if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; } }
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

class Parall : public Quadrangle
{
public:
	Parall(std::string setName, int setSides, int setA1, int setA2, int setA3, int setA4, int setL1, int setL2, int setL3, int setL4) : Quadrangle{ setName, setSides, setA1, setA2, setA3, setA4, setL1, setL2, setL3, setL4 } {}

	bool isCorrect{};
	bool getCorrect()
	{
		if((a1 == a3 && a2 == a4) && (l1 == l3 && l2 == l4)){ if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; } }
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

class Rhombus : public Quadrangle
{
public:
	Rhombus(std::string setName, int setSides, int setA1, int setA2, int setA3, int setA4, int setL1, int setL2, int setL3, int setL4) : Quadrangle{ setName, setSides, setA1, setA2, setA3, setA4, setL1, setL2, setL3, setL4 } {}

	bool isCorrect{};
	bool getCorrect()
	{
		if((a1 == a3 && a2 == a4) && (l1 == l2 && l2 == l3 && l3 == l4)) { if (getSides() == 4 && getSumAngles() <= 360) { isCorrect = true; } }
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

	Triangle triangle{"Треугольник", 3, 1, 2, 3, 4, 5, 6};
	triangle.getInfo();
    
	R_triangle Rtriangle{"Прямоугольный треугольник", 3, 90, 50, 3, 6, 8, 9};
	Rtriangle.getInfo();

	I_triangle Itriangle{"Равнобедренный треугольник", 3, 5, 5, 3, 4, 6, 6};
	Itriangle.getInfo();

	E_triangle Etriangle{"Равносторонний треугольник", 3, 60, 60, 60, 4, 4, 4};
	Etriangle.getInfo();

	Quadrangle quadrangle{"Четырехугольник", 4, 1, 2, 3, 4, 5, 6, 7, 8};
	quadrangle.getInfo();

	Rectangle rectangle{"Прямоугольник", 4, 90, 90, 90, 90, 5, 8, 5, 8};
	rectangle.getInfo();

	Square square{"Квадрат", 4, 90, 90, 90, 90, 40, 40, 40, 40};
	square.getInfo();

	Parall parall{"Параллелограмм", 4, 5, 6, 5, 6, 8, 9, 8, 9};
	parall.getInfo();

	Rhombus rhombus{"Ромб", 4, 20, 5, 20, 5, 30, 30, 30, 30};
	rhombus.getInfo();

	return 0;
}