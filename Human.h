#pragma once
#include "animal.h"

//人間クラスの定義
class Human : public Animal {
public://メンバ関数
	//コンストラクタ
	Human();
	//デストラクタ
	~Human();
	//求愛
	void Courtship() override;

private://メンバ変数

};