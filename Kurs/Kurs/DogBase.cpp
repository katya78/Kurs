#include "DogBase.hpp"

void DogBase::read(std::istream& in) {
	std::cout << "������: ";
	in >> this->name;
	std::cout << "��� ���������: ";
	in >> this->owner;
	std::cout << "���� ��������: ";
	in >> this->birth_date;
	std::cout << "��������: ";
	in >> this->character;
	std::cout << "����: ";
	in >> this->color;
	std::cout << "�������� ���������: ";
	in >> this->home_name;
	std::cout << "���(M/F): ";
	std::string sex;
	in >> sex;
	this->is_male = sex == "M";
	std::cout << "�������: ";
	in >> this->size;
	std::cout << "��������: ";
	in >> this->description;
}

void DogBase::print(std::ostream& out) {
	out << "\n������: ";
	out << this->name;
	out << "\n��� ���������: ";
	out << this->owner;
	out << "\n���� ��������: ";
	out << this->birth_date;
	out << "\n��������: ";
	out << this->character;
	out << "\n����: ";
	out << this->color;
	out << "\n�������� ���������: ";
	out << this->home_name;
	out << "\n���: ";
	out << (this->is_male ? "M" : "F");
	out << "\n�������: ";
	out << this->size;
	out << "\n��������: ";
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