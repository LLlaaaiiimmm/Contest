
// Функция для создания объекта Student из строки
Student make_student(const std::string& line) {
    size_t separator_pos = line.find(';');
    std::string name = line.substr(0, separator_pos);
    std::string group = line.substr(separator_pos + 1);
    return {name, group};
}

// Предикат для сравнения двух студентов
bool is_upper(const Student& student1, const Student& student2) {
    if (student1.group != student2.group) {
        return student1.group < student2.group;
    } else {
        return student1.name < student2.name;
    }
}

// Функция для вывода списка студентов
void print(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "Empty list!" << std::endl;
        return;
    }

    std::string current_group = students[0].group;
    std::cout << current_group << std::endl;
    for (const auto& student : students) {
        if (student.group != current_group) {
            current_group = student.group;
            std::cout  << current_group << std::endl;
        }
        std::cout << "- " << student.name << std::endl;
    }
}

