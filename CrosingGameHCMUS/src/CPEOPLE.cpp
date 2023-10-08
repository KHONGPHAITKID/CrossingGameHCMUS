#include "CPEOPLE.h"

CPEOPLE::CPEOPLE() {}

void CPEOPLE::Up(int num) {}
void CPEOPLE::Down(int num) {}
void CPEOPLE::Left(int num) {}
void CPEOPLE::Right(int num) {}
//bool CPEOPLE::isImpact(const CVEHICLE*& obj) {}
//bool CPEOPLE::isImpact(const CANIMAL*& obj) {}
bool CPEOPLE::isFinish() { return 1; }
bool CPEOPLE::isDead() { return 1; }