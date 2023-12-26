class Vector; // предварительное объявление класса Vector 

class Point { 
public: 
int x, y; 

Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {} // конструктор 

void move(const Vector& v); // объявление метода move 
}; 

class Vector { 
public: 
int x, y; 

Vector(const Point& startPoint, const Point& endPoint) { 
x = endPoint.x - startPoint.x; 
y = endPoint.y - startPoint.y; 
} // конструктор 
}; 

void Point::move(const Vector& v) { 
x += v.x; 
y += v.y; 
}