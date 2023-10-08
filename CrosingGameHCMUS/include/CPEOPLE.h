#pragma once

class CPEOPLE {
private:	
	int mX{}, mY{};
	bool mState{};
public:
	CPEOPLE();
	void Up(int num);
	void Down(int num);
	void Left(int num);
	void Right(int num);
	//bool isImpact(const CVEHICLE*& obj);
	//bool isImpact(const CANIMAL*& obj);
	bool isFinish();
	bool isDead();
};