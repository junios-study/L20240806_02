#include "Boar.h"
#include <iostream>

using namespace std;

ABoar::ABoar()
{
}

ABoar::~ABoar()
{
}

void ABoar::Move()
{
	cout << "����� ";
	AActor::Move();
}

