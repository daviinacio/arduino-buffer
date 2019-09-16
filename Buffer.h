#ifndef BUFFER_H
#define BUFFER_H

class Buffer {
	public:
		// Constructors
		Buffer(int, int);
		
		// Getters		
		int calcAverage();
		int getAverage();
		int getAt(int);
		bool empty();
		int size();
		
		// Setters
		void fill(int);
		void insert(int);
		void clear();
		
	private:
        int init;
		int *values;
		int length;
		int average;
};


#endif
