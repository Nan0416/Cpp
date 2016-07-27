#ifndef Forest_HPP
#define Forest_HPP

#include <iostream>
#include "GraphX.hpp"
#include "Tree.hpp"
using namespace std;
class Forest{
private:
	Tree grid[33][33];
public:
	Forest();
	void draw(GraphX&);
	int nextStatus(int i,int j);
	void applyNextStatus();
	bool isBurning();
};
#endif //
