#include <stack>
#include <vector>
#include <iostream>

template <typename T>
using vstack = std::stack<T, std::vector<T>>;

int main()
{
	std::vector vec{ 3, 7, 9, 2, 6, 5 };

	vstack<int> s1;
	vstack<int> s2(vec);

	while (!s2.empty()) {
		std::cout << s2.top() << '\n';
		s2.pop();
	}
}


