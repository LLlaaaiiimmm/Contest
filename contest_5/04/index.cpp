class Point {
private:
    double x;  // координата x в декартовой системе координат
    double y;  // координата y в декартовой системе координат
    double r;  // радиус вектор в полярной системе координат
    double a;  // угол в радианах в полярной системе координат

public:
    // Конструктор
    Point(double x, double y) : x(x), y(y) {
        updatePolarCoordinates();
    }

    // Методы доступа к координатам
    double get_x() const {
        return x;
    }

    double get_y() const {
        return y;
    }

    double get_r() const {
        return r;
    }

    double get_a() const {
        return a;
    }

    void set_x(double new_x) {
        x = new_x;
        updatePolarCoordinates();
    }

    void set_y(double new_y) {
        y = new_y;
        updatePolarCoordinates();
    }

    void set_r(double new_r) {
        r = new_r;
        updateCartesianCoordinates();
    }

    void set_a(double new_a) {
        a = new_a;
        updateCartesianCoordinates();
    }

private:
    // Обновление полярных координат на основе декартовых координат
    void updatePolarCoordinates() {
        r = std::sqrt(x * x + y * y);
        a = std::atan2(y, x);
    }

    // Обновление декартовых координат на основе полярных координат
    void updateCartesianCoordinates() {
        x = r * std::cos(a);
        y = r * std::sin(a);
    }
};