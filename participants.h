#pragma once
#include<string>

using namespace std;

class Participants
{
public:
	Participants(string name);
	~Participants();
	
	string name;
	void addPreferenceDate(int date);
	void addExclusionDate(int date);
	string getName() const;

private:
		//int importance;
		int prefDate[20];
		int excluDate[20];

		
};
