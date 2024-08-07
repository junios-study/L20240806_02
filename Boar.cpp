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
	cout << "¸äµÅÁö ";
	AActor::Move();
}

