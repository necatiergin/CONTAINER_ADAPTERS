// default ctor

#include <stack>
#include <iostream>

int main()
{
	std::stack<int> st;
	//std::stack<int, std::deque<int>> st;

	std::cout << st.size() << '\n';
	std::cout << std::boolalpha << st.empty() << '\n';
}
