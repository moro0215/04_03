#pragma once
#include "animal.h"

//クジャククラスの定義
class Peacock : public Animal {
public://メンバ関数
	//コンストラクタ
	Peacock();
	//デストラクタ
	~Peacock();
	//求愛
	void Courtship() override;

private://メンバ変数

};