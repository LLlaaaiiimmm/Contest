class Employee {
public:
    std::string name;
    std::string jobpos;
    int money;
    int plus;

    Employee(std::string name, std::string jobpos, int salary) {
        this->name = name;
        this->jobpos = jobpos;
        this->money = salary;
    }
    virtual int bonus(double percent) {
        this->plus = (money * percent);
        return static_cast<int>(plus + 0.5f);
    }
    int salary() {
        return money + bonus(bonuses[jobpos]);
    }
    friend std::ostream& operator<<(std::ostream& os, Employee& employee) {
        os << employee.name + " "+ "(" + employee.jobpos + "):"+" " << employee.salary();
        return os;
    }
};

class Manager :public Employee {
private:
    int plus;
    double percent = bonuses["manager"];
public:
    Manager(std::string name, int money = 16242) :Employee(name, "manager", money) {
    }
    int bonus(double percent) override {
        if (percent * 100 < 10) {
            percent = 0.1;
        }
        this->plus = (percent * money);
        return static_cast<int>(plus + 0.5f);
    }
    
};