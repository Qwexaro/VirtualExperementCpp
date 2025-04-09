#include <iostream>

class Old 
{
public:
	virtual void info() { std::cout << "‗ מכה\n"; }
};

class Nouveau : public Old 
{
public:
	void info() { std::cout << "‗ םו מכה\n"; }
};

int main()
{
	system("chcp 1251");

	std::unique_ptr<Old>old_ptr = std::make_unique<Nouveau>();
	//Old* old_ptr = new Nouveau;
	old_ptr->info();
	return 0;
}