#pragma once
#include "DogBase.hpp"

class Pudel : public DogBase {
public:
	void read(std::istream& in) {
		DogBase::read(in);
	}
	void print(std::ostream& out) {
		out << "\nПорода: Пудель";
		DogBase::print(out);
	}
	void fread(std::istream& in) {
		DogBase::fread(in);
	}
	void fprint(std::ostream& out) {
		out << "Pudel\n";
		DogBase::fprint(out);
	}

};
