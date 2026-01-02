#include <stack>
#include <string>
#include <iostream>

int main()
{
	std::stack<std::string> mystack;

	char c = 'A';
	for (int i = 1; i < 10; ++i) {
		mystack.emplace(i, c++);
	}

	while (!mystack.empty()) {
		std::cout << mystack.top() << '\n';
		mystack.pop();
	}
}
