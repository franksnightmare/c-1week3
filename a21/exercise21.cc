//Exercise 21

//Encapsulation: Is the act of putting together all the data and functions as a class.

//Data hiding: In the making of the encapsulation you can try to implement the data hiding, i.e., making private the data members to not be accesible for the user or other functions outside the class.


//Why are they important to design classes? How you design the interface of the class (how it is seen by the user) it is important. Furthermore, making data only accesible by member functions prevents some design errors.

//Small example of self-defined class

class person
{
    public://Constructor and member functions
        person();
	//Manipulators
	void setName(std::string const &name);
	void setWeight(size_t weight);
	void setHeight(size_t height);
	void setAge(size_t age);
	//Accessors 
	std::string &name() const;
	size_t weight() const;
	size_t height() const;
	size_t age() const;
    private://Member data
	std::string d_name;
	size_t d_weight;
	size_t d_height;
	size_t d_age;
};

//Why only interface and not implementation?
//To learn to use an object of a class you only need to learn how it is his interface declared. The user doesn't need to know how it is implemented, i.e., how it works, that is the beauty of the objects.
