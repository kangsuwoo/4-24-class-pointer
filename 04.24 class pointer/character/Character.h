#pragma once


// Ŭ����!
// class, struct �� �� ���� ������ ��� ���� �����Ѵ�
// ���� �������� ������ 3����

// ���� ����		| private | protected | public
//  �ڽ�			|    O    |		O	  |    O
//  �ڽ�		    |    X    |		O	  |    O
//  �ܺ�			|    X    |		X	  |    O

// class �� �⺻ ���� �����ڴ� private: �̴�
// struct �� �⺻ ���� �����ڴ� public: �̴�
class Character
{
public: // Ctrl + . ������ Ȯ��
	
	Character();	// ������	:  Ŭ������ �����԰� ���ÿ� �� �� ���� ȣ���
	~Character();	// �Ҹ���    :  Ŭ������ �����ʰ� ���ÿ� �� �� ���� ȣ���

private:
	int money;

public:
	int GetMoney() { return money; } //Getter
	void SetMoney(int money) {this->money = money; } //Setter

	void Print();
};

