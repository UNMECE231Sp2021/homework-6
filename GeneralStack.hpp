#ifndef G_STACK_H
#define G_STACK_H

#include <iostream>
#include <list>

template <typename T>
class Stack {
	private:
		std::list<T> _data;
		size_t _size;
		
	public:
		//Default constructor
		Stack();

		//Default copy constructor
		Stack(const Stack &s);

		//Getters
		T top() const;

		size_t size() const;

		//Adding data to the data structure
		void push(T value);

		//Removing data from the data structure
		void pop();

		bool empty() const;

		void print();

		Stack &operator=(const Stack &s);

		template <typename S>
		friend std::ostream &operator<<(std::ostream &out, const Stack<S> &s);

};

#endif
