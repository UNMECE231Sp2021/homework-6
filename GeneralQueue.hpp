#ifndef G_QUEUE_H
#define G_QUEUE_H

#include <iostream>
#include <list>

template <typename T>
class Queue {
	private:
		std::list<T> _data;
		size_t _size;
	public:
		//Default constructor
		Queue();

		//Copy constructor
		Queue(const Queue &q);

		//Getters
		size_t size() const;

		T front() const;

		T back() const;

		//Push to queue
		void enqueue(T value);

		//Pop from queue
		void dequeue();

		void print();

		bool empty();

		Queue &operator=(const Queue &q);

		template <typename Q>
		friend std::ostream &operator<<(std::ostream &out, const Queue<Q> &q);
};

#endif
