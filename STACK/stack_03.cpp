#include <stack>
#include <vector>
#include <iostream>

int main()
{
	std::vector vec{ 1, 3, 5, 7 };
	std::deque dq{ 1, 3, 5, 7 };

	//std::stack<int> st(vec);	// invalid
	std::stack<int> st(dq);	// valid
	// ...
}
