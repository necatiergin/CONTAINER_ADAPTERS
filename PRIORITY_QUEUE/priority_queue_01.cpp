//max priority queue

#include <queue>
#include <string>
#include <iostream>

int main()
{
	const int grades[] = { 23, 87, 98, 14, 55, 90, 73, 16, 41 };
	std::priority_queue<int> grades_queue{ std::begin(grades), std::end(grades) };

	std::cout << "size      = " << grades_queue.size() << '\n';
	std::cout << "is empty? = " << std::boolalpha << grades_queue.empty() << '\n';

	for (; !grades_queue.empty(); grades_queue.pop())
		std::cout << grades_queue.top() << '\n';
	
	std::cout << "size      = " << grades_queue.size() << '\n';
	std::cout << "is empty? = " << std::boolalpha << grades_queue.empty() << '\n';
}
