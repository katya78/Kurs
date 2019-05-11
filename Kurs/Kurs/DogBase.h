#pragma once
#include <string>
#include <iostream>

class DogBase
{
protected:
	std::string name;
	std::string color;
	std::string birth_date;
	std::string size;
	std::string owner;
	std::string home_name;
	std::string character;
	std::string description;
	bool is_male;
public:
	virtual void read(std::istream& in);
	virtual void print(std::ostream& out);
	virtual void fread(std::istream& in);
	virtual void fprint(std::ostream& out);
};
