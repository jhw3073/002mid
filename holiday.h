#pragma once
#include "dayOfYear.h"
#include <string>

namespace JungHyewon2693292
{
class holiday
{
	std::string name; 
	dayOfYear date;
public:        
	holiday(const std::string& n = "no name yet",
		dayOfYear d = dayOfYear{1,1})
		: name{n}, date{d}
	{}
	void print() const 
	{
		std::cout << name << ": ";
		date.print(); 
	}
	friend std::ostream& operator<<(std::ostream& os, const holiday& h)
	{
		os << h.name << ": ";
		os << h.date;
		return os;
	}
	friend std::istream& operator>>(std::istream& is, holiday& h)
	{
		std::cout << "Enter holiday name: ";
		std::getline(is >> std::ws, h.name);
		is >> h.date; 
		return is;
	}
	void input()
	{
		std::cout << "Enter holiday name: ";
		std::getline(std::cin >> std::ws, name);
		date.input();
	}
	const std::string& getName() const {return name;}
	const dayOfYear& getDate() const { return date; }
	void setName(const std::string& n) {name = n;}
	void setDate(const dayOfYear& d) { date = d; }
};
}


