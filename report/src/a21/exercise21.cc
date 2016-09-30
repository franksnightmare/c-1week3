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
