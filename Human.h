#pragma once
#include "animal.h"

//�l�ԃN���X�̒�`
class Human : public Animal {
public://�����o�֐�
	//�R���X�g���N�^
	Human();
	//�f�X�g���N�^
	~Human();
	//����
	void Courtship() override;

private://�����o�ϐ�

};