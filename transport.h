#pragma once
#include <assert.h>
#include <string>
#include <iostream>

using namespace std;

enum  Transport_ID {ship_ID = 1, car_ID , carriage_ID};

class transport
{
	public:
		static transport* createTransport(Transport_ID id);
		transport(string aName,int aspeed , double aVolume);
		transport(const transport& other);
		virtual double getVolume() const = 0;
		virtual void AddTransport(transport* p) {
			assert(false);
		}
		void operator = (const transport& other);
		transport();
		void setName(string aName);
		string  getName() const;
		void setVolume(double aVolume);
		void setSpeed(int aSpeed);
		int getSpeed() const;
		virtual void readFromConsole();
		virtual void writeToStream(ostream&);
		virtual ~transport() {};
protected:
		string name;
		int speed;
		double volume;
		void clone(const transport& other);
		virtual void dummy() = 0;
		friend ostream& operator << (ostream& os, const transport& b);
	};








