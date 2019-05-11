#include "DogBase.hpp"

void DogBase::read(std::istream& in) {
	std::cout << "Кличка: ";
	in >> this->name;
	std::cout << "Имя владельца: ";
	in >> this->owner;
	std::cout << "Дата рождения: ";
	in >> this->birth_date;
	std::cout << "Характер: ";
	in >> this->character;
	std::cout << "Цвет: ";
	in >> this->color;
	std::cout << "Название питомника: ";
	in >> this->home_name;
	std::cout << "Пол(M/F): ";
	std::string sex;
	in >> sex;
	this->is_male = sex == "M";
	std::cout << "Размеры: ";
	in >> this->size;
	std::cout << "Описание: ";
	in >> this->description;
}

void DogBase::print(std::ostream& out) {
	out << "\nКличка: ";
	out << this->name;
	out << "\nИмя владельца: ";
	out << this->owner;
	out << "\nДата рождения: ";
	out << this->birth_date;
	out << "\nХарактер: ";
	out << this->character;
	out << "\nЦвет: ";
	out << this->color;
	out << "\nНазвание питомника: ";
	out << this->home_name;
	out << "\nПол: ";
	out << (this->is_male ? "M" : "F");
	out << "\nРазмеры: ";
	out << this->size;
	out << "\nОписание: ";
	out << this->description;
}

void DogBase::fread(std::istream& in) {
	in >> this->name
		>> this->owner
		>> this->birth_date
		>> this->character
		>> this->color
		>> this->home_name
		>> this->is_male
		>> this->size
		>> this->description;
}

void DogBase::fprint(std::ostream& out) {
	out << this->name << '\n'
		<< this->owner << '\n'
		<< this->birth_date << '\n'
		<< this->character << '\n'
		<< this->color << '\n'
		<< this->home_name << '\n'
		<< this->is_male << '\n'
		<< this->size << '\n'
		<< this->description << '\n';
}