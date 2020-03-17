#include <iostream>

//#include <QDebug>
//#include <QMap>

#include "example.h"


int main()
{
	std::cout << "Hello Travis!" << std::endl;

	std::cout <<"Sum 2,3 = "<<example::add(2,3)<<std::endl;
    std::cout <<"Mult 2,3 = "<<example::mult(2,3)<<std::endl;
    std::cout <<"Neg 2 = "<<example::neg(2)<<std::endl;
    std::cout <<"Div 2,3 = "<<example::div(2,3)<<std::endl;

//	// static code analyzer test
//	int a[4] = {1, 2, 3, 4};
//	std::cout << a[0] << " " << a[2] << std::endl;
//
//	qDebug() << "Hello world with Qt";
//	int c = example::sum(1, 3);
//
//	std::cout << c << std::endl;

	return 0;
}

