// #include <string>
// #include <iostream>

// class Weapon
// {
// public:
// 	Weapon();
// 	Weapon(std::string s);
// 	~Weapon();
// 	std::string &	getType() const;
// 	void			setType(std::string s);
// private:
// 	std::string *	type;
// };

// Weapon::Weapon()
// {
// 	std::cout << "Weapon::Constractor is called : " << this << std::endl;
// 	type = NULL;
// }

// Weapon::Weapon(std::string s)
// {
// 	std::cout << "Weapon::Constractor is called(std::string s) : " << this << std::endl;
// 	type = new std::string;
// }

// Weapon::~Weapon()
// {
// 	std::cout << "Weapon::Destractor is called : " << this << std::endl;
// 	delete type;
// }

// int main(void)
// {
// 	Weapon	club1("crude spiked club");
// 	Weapon	club2;
// }