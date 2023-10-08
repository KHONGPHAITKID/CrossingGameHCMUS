#pragma once

class CANIMAL {
private:
	int mX{}, my{};
public:
	virtual void Move(int X, int Y);
	virtual void Tell();
};