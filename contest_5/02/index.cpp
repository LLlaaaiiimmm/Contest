class Water {
    int temperature;// приватность к переменной темпаречур
    public:
//сделаем конструктор в котором мы передаем какие-ибо значение к темпаречур
    Water(int Init) : temperature(Init) {}
// получаем данные
    int get() const{
        return temperature;
    }
// добавляем к температуре
    void heat_up(int degress) {
        temperature += degress;
    }
// больше ста или ровно оке
    bool boiling() {
        return temperature>=100;
    }
     
};

class Teapot {
// открываем наш вотер с типом ВОТЕР
Water water;
public :
// начнем тоже самое что и в объекте с вотер 
    Teapot(Water obj): water(obj) {};
// делаем функции
    void heat_up(int degress) {
        water.heat_up(degress);
    }

    bool is_boiling() {
        return water.boiling();
    }
};