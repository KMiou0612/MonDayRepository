#pragma once
#include "MagicalGirl.h"
#include <iostream>
using namespace std;

class Homura:public MagicalGirl
{
public:
	void Fight() override;

	void ShowProfile() override;
};