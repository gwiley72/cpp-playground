#pragma once

class Address
{
public:
	int house_number;
	string street_name;
	string city;

	Address(int house_number, 
		string street_name, string city)
		: house_number(house_number), 
		street_name(street_name), city(city)
	{
		
	}
};

