#ifndef EX22_H_
#define EX22_H_

class Demo
{
    public:
        void run() &;
	    void run() const &;
	    void run() &&;
};

#endif
