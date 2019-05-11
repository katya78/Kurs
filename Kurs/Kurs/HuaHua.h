#pragma once
#include "DogBase.hpp"

class HuaHua : public DogBase {
public:
	void read(std::istream& in) {
		DogBase::read(in);
	}
	void print(std::ostream& out) {
		out << "\nПорода: Чихуахуа";
		DogBase::print(out);
	}
	void fread(std::istream& in) {
		DogBase::fread(in);
	}
	void fprint(std::ostream& out) {
		out << "HuaHua\n";
		DogBase::fprint(out);
	}

};
