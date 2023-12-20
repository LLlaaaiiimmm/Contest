//класс неопределнной фигуры
class Shape {
    public: 
    // виртуальная чистая фунция
    virtual double getPerimeter() const = 0;
};
//прямоугольник
class Rectangle: public Shape {
    int length;
    int width;
    // констрк=уктор будет дальше
public:
    Rectangle(int a, int b) {
        length = a;
        width = b;
    }
    // периметр прямоугльника
    double getPerimeter() const override {
        return length+width+length+width;
    }
};
// класс наследник для круга 
class Circle : public Shape {
    int radius;
    double const PI = 3.141592653589793238463;
    public: 
    //конструктор круга
    Circle(int rad) {
        radius = rad;
    }
    //периметр круга
    double getPerimeter() const override {
        return 2*PI*radius;
    }
};
// наследник три угла
class Triangle: public Shape {
    int sideA;
    int sideB; 
    int sideC;
public: 
// конструктор трех углов
    Triangle(int a, int b, int c) {
        sideA = a;
        sideB = b;
        sideC = c;
    }
    // периметр который засчитывается при выполнении проверки о сущности трех углов
    double getPerimeter() const override {
        if(sideA + sideB <= sideC || sideA + sideC <= sideB || sideB + sideC <= sideA) {
            return 0;
        }
        return sideA+sideB+sideC;
    }
};

