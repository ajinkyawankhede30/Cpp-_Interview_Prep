#pragma once
#include <iostream>
#include <string>

class Toy
{
protected:
	std::string name;
	double price = 0;
public:
	virtual ~Toy() {};
	virtual void PrepareParts() = 0;
	//virtual void AssembleParts() = 0;
	virtual void AssembleParts();
	virtual void ApplyLable() = 0;
	virtual void ShowProduct() = 0;

};

class Car : public Toy
{
public:
	Car();
	~Car();
	void PrepareParts() override;
	void AssembleParts() override;
	void ApplyLable() override;
	void ShowProduct() override;
};

class Bike : public Toy
{
public:
	Bike();
	~Bike();
	void PrepareParts() override;
	void AssembleParts() override;
	void ApplyLable() override;
	void ShowProduct() override;
};

class Truck : public Toy
{
public:
	Truck();
	~Truck();
	void PrepareParts() override;
	void AssembleParts() override;
	void ApplyLable() override;
	void ShowProduct() override;

};

class Doll : public Toy
{
public:
	Doll();
	~Doll();
	void PrepareParts() override;
	//void AssembleParts() override;
	void ApplyLable() override;
	void ShowProduct() override;

};
