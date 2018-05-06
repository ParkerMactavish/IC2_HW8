#include "GoblinMonster.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

GoblinMonster::GoblinMonster(string name):AbstractMonster(name, 60, 40, 12, 100, 50)
{
	setHP(max_hp);
	setMP(max_mp);
	count++;
}

GoblinMonster::~GoblinMonster()
{
	count--;
}

int GoblinMonster::count=0;

void GoblinMonster::attackTo(GeneralPlayer* Player)
{
	srand(time(NULL));
	float percentage=(rand()%2000-1000)/10000;
	Player->increaseHP((percentage+1)*this->attack);
	cout<<"Player "<<Player->getName()<<" has received a normal attack "<<(percentage+1)*this->attack<<"points."<<endl
	<<"Now "<<Player->getName()<<" only has "<<Player->getHP()<<" health points left."<<endl;
}