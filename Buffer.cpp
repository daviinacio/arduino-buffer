#include "Buffer.h"

// Constructors
Buffer::Buffer(int length, int init){
	this->values = new int[length];
	this->length = length;
	this->init = init;
	this->clear();
}


// Getters
int Buffer::calcAverage(){
	float sum = 0;
	
	for(int i = 0; i < this->length; i++)
		sum += this->values[i];
		
	this->average = sum / this->length;
		
	return this->average;
}

int Buffer::getAverage(){
	return this->average;
}

int Buffer::getAt(int position){
	return this->values[position];
}

bool Buffer::empty(){
	return this->calcAverage() == this->init;	
}

int Buffer::size(){
	return this->length;
}


// Setters
void Buffer::fill(int value){
	for(int i = 0; i < this->length; i++)
		this->values[i] = value;
		
	this->calcAverage();
}

void Buffer::insert(int value){
	// Move array values
	for(int i = this->length -1; i > 0; i--)
		this->values[i] = this->values[i - 1];
	
	// Insert new value
	this->values[0] = value;
	
	// Update the average variable
	this->calcAverage();
}

void Buffer::clear(){
	// Clear the Buffer and enable to fill on first insert
	this->fill(this->init);
}
