#include "Character.h"
#include <iostream>

using namespace std;

Character::Character()
	: money(0) // ������ �ʱ�ȭ
{
	money = 0; // �Լ� �ʱ�ȭ
	cout << " ������!" << endl;
}

Character::~Character()
{
	cout << " �Ҹ���!" << endl;
}

void Character::Print()
{
	cout <<" ���ڱ� :" << money << endl;
}
