#include <deque>
#include <exception>

template <typename T, typename C = std::deque<T>>
class Stack {
protected:
	C c;
public:
	struct ReadEmptyStack : std::exception {
	public:
		virtual const char* what() const noexcept
		{
			return "read from empty stack";
		}
	};

	typename C::size_type size() const
	{
		return c.size();
	}

	bool empty() const noexcept
	{
		return c.empty();
	}

	void push(const T& val)
	{
		c.push_back(val);
	}

	void push(T&& val)
	{
		c.push_back(std::move(val));
	}

	template <typename ...Args>
	void emplace(Args&& ...args)
	{
		c.emplace_back(std::forward<Args>(args...));
	}

	T pop()
	{
		if (c.empty()) {
			throw ReadEmptyStack();
		}
		T elem(c.back());
		c.pop_back();
		return elem;
	}

	T& top()
	{
		if (c.empty()) {
			throw ReadEmptyStack();
		}

		return c.back();
	}
};
