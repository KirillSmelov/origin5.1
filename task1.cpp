
#include <iostream>
#include<string>
#include<windows.h>
class Figure
{
protected:
	int side_num  ;
	std::string name;
public:
	Figure()
	{
		side_num = 0;
		name  ="Фигура";
	}
	void getName()
	{
		std::cout << name << ": ";
	}
	void info()
	{
		std::cout << side_num << std::endl;
	}
	
	
};
class Triangle:public Figure
{
public:
	Triangle()
	{
		side_num = 3;
		name = "Треугольник";
	}
	
};
class  Quadrangle:public Figure
{
public:
	Quadrangle()
	{
		side_num = 4;
		name = "Четырёхугольник";
	}
};
int main(int argc, char** argv)
{
	system("chcp 1251");
	std::cout << "Колличество сторон: " << std::endl;
	Figure figure;
	figure.getName();
	figure.info();
	Triangle triangle;
	triangle.getName();
	triangle.info();
	Quadrangle quadrangle;
	quadrangle.getName();
	quadrangle.info();
	return 0;
}