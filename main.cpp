#include <iostream>

class Integer
{
public:
	Integer(int n = 0) : x(n)
	{
	}
        
	Integer& operator++()
	{
		std::cout<<"Called prefix:"<<std::endl;
		++x;
		return *this;
	}

	Integer operator++(int)
	{
		std::cout<<"Called postfix:"<<std::endl;
		int tmp = x;
		++x;
		return tmp;
	}

private:
 int  x ;
};



int main()
{
	Integer obj;
	++obj;
	obj++;
 

return 0;
}
