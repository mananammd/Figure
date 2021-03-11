#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "ITriangle.h"
#include "RTriangle.h"
#include "ETriangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Square.h"
#include "Ellipse.h"
#include "Circle.h"


int main() {
    Triangle *t = new Triangle(1, 1, 1);
    std::cout << t->getName() << std::endl;
    std::cout << t->calculateP() << std::endl;
    std::cout << t->calculateS() << std::endl;

    RTriangle *rt = new RTriangle(1, 1);
    std::cout << rt->getName() << std::endl;
    std::cout << rt->calculateP() << std::endl;
    std::cout << rt->calculateS() << std::endl;

    ITriangle *it = new ITriangle(1, 1);
    std::cout << it->getName() << std::endl;
    std::cout << it->calculateP() << std::endl;
    std::cout << it->calculateS() << std::endl;

    ETriangle *et = new ETriangle(1);
    std::cout << et->getName() << std::endl;
    std::cout << et->calculateP() << std::endl;
    std::cout << et->calculateS() << std::endl;



    Parallelogram *p = new Parallelogram(1, 2, 30);
    std::cout << p->getName() << std::endl;
    std::cout << p->calculateP() << std::endl;
    std::cout << p->calculateS() << std::endl;

    Rectangle *r = new Rectangle(5, 4);
    std::cout << r->getName() << std::endl;
    std::cout << r->calculateP() << std::endl;
    std::cout << r->calculateS() << std::endl;

    Square *s = new Square(5);
    std::cout << s->getName() << std::endl;
    std::cout << s->calculateP() << std::endl;
    std::cout << s->calculateS() << std::endl;



    Ellipse *e = new Ellipse(3, 1);
    std::cout << e->getName() << std::endl;
    std::cout << e->calculateP() << std::endl;
    std::cout << e->calculateS() << std::endl;

    Circle *c = new Circle(5);
    std::cout << c->getName() << std::endl;
    std::cout << c->calculateP() << std::endl;
    std::cout << c->calculateS() << std::endl;
}