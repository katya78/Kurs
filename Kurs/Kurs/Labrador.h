#pragma once
#include "DogBase.hpp"

class Labrador : public DogBase {
public:
	void read(std::istream& in) {
		DogBase::read(in);
	}
	void print(std::ostream& out) {
		out << "\nПорода: Лабрадор";
		DogBase::print(out);
	}
	void fread(std::istream& in) {
		DogBase::fread(in);
	}
	void fprint(std::ostream& out) {
		out << "Labrador\n";
		DogBase::fprint(out);
	}

};
