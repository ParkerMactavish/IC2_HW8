#include <iostream>
#include <fstream>
#include <cstdlib>
#include <windows.h>
#include "GeneralPlayer.h"
#include "OrcPlayer.h"
#include "MagicianPlayer.h"
#include "KnightPlayer.h"
#include "AbstractMonster.h"
#include "GoblinMonster.h"
#include "ZombieMonster.h"
#include "JWMonster.h"

using namespace std;

void GPTest()
{
	cout<<"General Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	GeneralPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	GeneralPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	GeneralPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	GeneralPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4.getName()<<endl;
	G4.setHP(180);
	cout<<"HP:"<<G4.getHP()<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4.getMP()<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
}

void OPTest()
{
	cout<<"Orc Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	OrcPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	OrcPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	OrcPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	OrcPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4<<endl;
	G4.setHP(290);
	cout<<"HP:"<<G4<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
}

void MPTest()
{
	cout<<"Magician Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	MagicianPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	MagicianPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	MagicianPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	MagicianPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4<<endl;
	G4.setHP(290);
	cout<<"HP:"<<G4<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
	G4.increaseMP(-G4.getLevel()*10-1);
	cout<<"MP decreased:"<<endl<<G4<<endl;
	G4.pray();
	cout<<"Pray:"<<endl<<G4<<endl;
}

void KPTest()
{
	cout<<"Knight Player:"<<endl;
	cout<<"Default Constructor:"<<endl;
	KnightPlayer G1;
	cout<<G1<<endl;
	cout<<"Copy Constructor:"<<endl;
	KnightPlayer G2(G1);
	cout<<G2<<endl;
	cout<<"Level Constructor:"<<endl;
	KnightPlayer G3(5);	
	cout<<G3<<endl;
	cout<<"Level-Name Constructor:"<<endl;
	KnightPlayer G4(3, "G4");
	cout<<G4<<endl;
	cout<<"HP decreased by 3:"<<endl;
	G4.increaseHP(-3);
	cout<<G4<<endl;
	cout<<"MP decreased by 4:"<<endl;
	G4.increaseMP(-4);
	cout<<G4<<endl;
	cout<<"Exp increased by 5:"<<endl;
	G4.increaseExp(5);
	cout<<G4<<endl;
	cout<<"Exp increased by -5:"<<endl;
	G4.increaseExp(-5);
	cout<<G4<<endl;	
	cout<<"HP recovered:"<<endl;
	G4.recoverHP();
	cout<<G4<<endl;
	cout<<"MP recovered:"<<endl;
	G4.recoverMP();
	cout<<G4<<endl;
	cout<<"G4:"<<endl;
	G4.setName("New Name");
	cout<<"Name:"<<G4<<endl;
	G4.setHP(290);
	cout<<"HP:"<<G4<<endl;
	G4.setMP(180);
	cout<<"MP:"<<G4<<endl;
	G4.setExp(1000);
	cout<<"Set Exp 1000:"<<endl<<G4<<endl;
	G4.setLevel(10);
	cout<<"Set Level 10:"<<endl<<G4<<endl;
	G4.levelUp();
	cout<<"Level Up:"<<endl<<G4<<endl;
	G4.increaseHP(-G4.getLevel()*10-1);
	cout<<"HP decreased:"<<endl<<G4<<endl;
	G4.heal();
	cout<<"Heal:"<<endl<<G4<<endl;
}

void GMTest()
{
	GoblinMonster GM1;
	GeneralPlayer* GP1 = new KnightPlayer(3, "victim");
	cout <<"Initial:"<<endl<< GM1 << endl << *GP1<<endl;
	GM1.attackTo(GP1);
	cout<<endl << *GP1<<endl;
}

void ZMTest()
{
	ZombieMonster GM1;
	GeneralPlayer* GP1 = new KnightPlayer(3, "victim");
	cout << "Initial:" << endl << GM1 << endl << *GP1 << endl;
	GM1.attackTo(GP1);
	cout << endl << *GP1<<endl;
}

void JWTest()
{
	JWMonster JW1;
	GeneralPlayer* GP1 = new OrcPlayer(10, "victim");
	cout << JW1 << endl << *GP1 << endl;
	for (int i = 0; i < 10; i++)
	{
		JW1.attackTo(GP1);
		cout << endl;
		Sleep(1);
	}
}

void GMhitTest(GeneralPlayer* GP)
{
	AbstractMonster* GM = new GoblinMonster;
	cout << *GP << endl;
	GP->attackTo(GM);
	cout << *GP << endl;
}

void ZMhitTest(GeneralPlayer* GP)
{
	AbstractMonster* ZM = new ZombieMonster;
	cout << *GP << endl;
	GP->attackTo(ZM);
	cout << *GP << endl;
}

void JWhitTest(GeneralPlayer* GP)
{
	AbstractMonster* JW = new JWMonster;
	cout << *GP << endl;
	GP->attackTo(JW);
	GP->attackTo(JW);
	cout << *GP << endl;
}

int main()
{
	/*GPTest();
	OPTest();
	MPTest();
	KPTest();
	cout << "_____________________________________________" << endl
		 << "Test for Monster:" << endl;*/
	/*GMTest();
	ZMTest();
	ZMTest();
	ZMTest();
	ZMTest();
	JWTest();*/
	cout << "_____________________________________________" << endl
		<< "Test for Player Attack" << endl;
	GeneralPlayer* GP = new OrcPlayer(15, "butcher");
	GeneralPlayer* GP2 = new OrcPlayer(20, "butcher the better");
	GMhitTest(GP);
	ZMhitTest(GP);
	JWhitTest(GP2);
	system("PAUSE");
	return 0;
}