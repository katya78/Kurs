#pragma once
#include "DogBase.hpp"

class Spaniel : public DogBase {
public:
	void read(std::istream& in) {
		DogBase::read(in);
	}
	void print(std::ostream& out) {
		out << "\nПорода: Спаниель";
		DogBase::print(out);
	}
	void fread(std::istream& in) {
		DogBase::fread(in);
	}
	void fprint(std::ostream& out) {
		out << "Spaniel\n";
		DogBase::fprint(out);
	}

};
