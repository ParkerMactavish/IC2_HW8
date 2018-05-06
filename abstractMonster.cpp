#include "AbstractMonster.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void AbstractMonster::setHP(int HP)
{
	if(HP>=0&&HP<=this->max_hp)
	{
		this->hp=HP;
	}
	else if(this->max_hp<HP)
	{
		this->hp=max_hp;
		cout<<"Warning: HP has exceeded, HP is max."<<endl;
	}
	else
	{
		cout<<"Error: HP of "<<this->name<<" is smaller than zero."<<endl;
		this->hp=0;
	}
}

int AbstractMonster::getHP()const {return this->hp;}

void AbstractMonster::setMP(int MP)
{
	if(MP>=0&&MP<=this->max_mp)
	{
		this->mp=MP;
	}
	else if(this->max_mp<MP)
	{		
		this->mp=this->max_mp;
		cout<<"Warning: MP has exceeded, MP is max."<<endl;
	}
	else
	{
		cout<<"Error: MP of "<<this->name<<" is smaller than zero."<<endl;
		this->mp=0;
	}
}

int AbstractMonster::getMP() const{return this->mp;}

int AbstractMonster::count=0;

AbstractMonster::AbstractMonster(string name, int attack, int defense, int exp, int max_hp, int max_mp):name(name), attack(attack), defense(defense), exp(exp), max_hp(max_hp), max_mp(max_mp)
{
	setHP(max_hp);
	setMP(max_mp);
	count++;
}

AbstractMonster::~AbstractMonster()
{
	count--;
}