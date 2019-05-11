#pragma once
#include "DogBase.hpp"

class Sgnaucer : public DogBase {
public:
	void read(std::istream& in) {
		DogBase::read(in);
	}
	void print(std::ostream& out) {
		out << "\nПорода: Шнауцер";
		DogBase::print(out);
	}
	void fread(std::istream& in) {
		DogBase::fread(in);
	}
	void fprint(std::ostream& out) {
		out << "Sgnaucer\n";
		DogBase::fprint(out);
	}

};
