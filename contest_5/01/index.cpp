#include <iostream>
class Cat {
    
    public: 
	// рандом для отгадки жив кот или нет
    int a = rand();
    bool is_alive() {
    //преобразование в булевое значение данного выражения
        return static_cast<bool>(a%2);
}
};
class Box {
    public:
// функция мы открываем класс кота
    Cat open(){
    //создали локальную переменную с типом класса КЭТ
        Cat cat;
    //вернем то значение кэт
        return cat;
}
};
