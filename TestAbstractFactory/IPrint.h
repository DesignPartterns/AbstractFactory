#pragma once
class IPrint 
{
public:
	IPrint();
	~IPrint();
	virtual void print() = 0;
};