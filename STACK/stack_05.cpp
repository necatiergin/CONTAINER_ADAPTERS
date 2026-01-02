#include <stack>
#include <iostream>
#include <string>

int main()
{
	std::stack<std::string> mystack;

	for (int i = 0; i < 5; ++i) {
		mystack.push("necati" + std::to_string(i + 1) + ".txt");
	}

	while (!mystack.empty()) {
		std::cout << mystack.top() << '\n';
		mystack.pop();
	}
}
