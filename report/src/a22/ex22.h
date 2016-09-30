#ifndef EX22_H_
#define EX22_H_

class Demo
{
	public:
		Demo();
		void run();       // 1
		void run() const; // 2
		void run() &&;    // 3
};

#endif


