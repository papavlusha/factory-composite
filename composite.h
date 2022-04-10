#pragma once
#include "transport.h"
#include <vector>
class composite
{
public:
	int getAverageSpeed() const;
	double getVolume() const;
	void AddTransport(transport* p);
	~composite();
private:
	std::vector <transport*> wh;
	void dummy() {};
};

