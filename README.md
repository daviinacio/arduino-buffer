# Arduino Buffer
This is a arduino library that helps to buffer values.

## Instalation
1. Download [the master branch](https://github.com/daviinacio/arduino-buffer/archive/master.zip) from github.
2. Unzip the file on the arduino library folder
3. Restart the Arduino IDE

## Features
- Get buffer averages

## Getting Started

### Create buffer instance
```
Buffer b = Buffer(length, init);

or

Buffer b(length, init);

or

Buffer* b = new Buffer(length, init);
```

### Constructor
```Buffer(length, init)``` Create a new instance and clear the buffer.
``` length```: Buffer size, ``` init ```: Initial value


### Getters
- ```calcAverage()``` Calc the buffer average and return the result
- ```getAverage()``` Just return the buffer average
- ```getAt(index)``` Returns the buffer value by index
- ```empty()``` Check if the buffer average is equals the initial value

### Setters
- ```fill(value)``` Fill the buffer with the value
- ```insert(value)``` Insert a new value to the buffer and calls ```calcAverage()```
- ```clear()``` Fill the buffer with the initial value

## Example
```
// Create a instance of Buffer
Buffer sensorBuffer(10, 0);

// Your sensor read function
void sensorRead(){
	// Get a new sensor value
	int read = readSensor();
	
	// Insert the new value on buffer
	sensorBuffer.insert(read);
	
	// Print the sensor average on Serial Monitor
	Serial.println(sensorBuffer.getAverage());
}

```
