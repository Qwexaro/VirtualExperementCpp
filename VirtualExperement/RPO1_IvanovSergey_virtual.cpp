#include <iostream>

class Old 
{
public:
	virtual void info() { std::cout << "� ���\n"; }
};

class Nouveau : public Old 
{
public:
	void info() { std::cout << "� �� ���\n"; }
};

int main()
{
	system("chcp 1251");
	Old* old_ptr = new Nouveau;
	old_ptr->info();
	return 0;
}