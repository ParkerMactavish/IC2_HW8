#ifndef GOBLIN_MONSTER_H
#define GOBLIN_MONSTER_H

#include <iostream>
#include <cstdlib>
#include <string>
#include "AbstractMonster.h"
class GeneralPlayer;

using namespace std;

class GoblinMonster:public AbstractMonster
{
	public:		
		GoblinMonster(string);
		~GoblinMonster();
		void attackTo(GeneralPlayer*);

		static int count;
};

#endif