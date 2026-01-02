#include <queue>
#include <string>
#include <iostream>

int main()
{
	std::queue<std::string> names;
	
	std::cout << "size      : " << names.size() << '\n';
	std::cout << "is empty? : " << std::boolalpha << names.empty() << '\n';

	names.push("mahir");
	names.push("deniz");
	names.push("yusuf");
	names.push("huseyin");

	std::cout << "size      : " << names.size() << '\n';
	std::cout << "is empty? : " << names.empty() << '\n';

	std::cout << "front : " << names.front() << '\n';
	std::cout << "back  : " << names.back() << '\n';

	std::cout << "popping all the names from the queue\n";

	for (; !names.empty(); names.pop())
		std::cout << names.front() << '\n';

	std::cout << "size      : " << names.size() << '\n';
	std::cout << "is empty? : " << names.empty() << '\n';
}
