#include <vector>

template <typename T, typename Container = std::vector<T>,
	typename Compare = std::less<typename Container::value_type>>
class PriorityQueue {
protected:
		Compare comp; // sorting criterion
		Container c; // container
public:
	explicit PriorityQueue(const Compare& cmp = Compare(),
		const Container& cont = Container())
		: comp(cmp), c(cont) {
		make_heap(c.begin(), c.end(), comp);
	}
		
	void push(const value_type& x) 
	{
		c.push_back(x);
		push_heap(c.begin(), c.end(), comp);
	}

	void push(value_type&& x)
	{
		c.push_back(std::move(x))
		push_heap(c.begin(), c.end(), comp);
	}
	
	void pop()
	{
		pop_heap(c.begin(), c.end(), comp);
		c.pop_back();
	}
		
	bool empty() const 
	{ 
		return c.empty(); 
	}
	
	size_type size() const 
	{
		return c.size();
	}
	
	const value_type& top() const 
	{
		return c.front(); 
	}
};
