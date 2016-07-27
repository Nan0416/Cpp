#ifndef TREE_HPP
#define TREE_HPP
#include <iostream>
#include "GraphX.hpp"
using namespace std;
class Tree{
	private:
	string type;
	double probCatch;
	int status;
	double wetness;
	int burntime;
	int xpos;
	int ypos;
	string symbol;
	public:
	Tree();
	Tree(string type_,double probCatch_,int status_,double wetness_,int burntime_,int xpos_,int ypos_,string symbol_);
	double getProbCatch();// - an accessor function for the probCatch data member
	void setProbCatch(double P) ;//- a mutator function to set probCatch
	int getStatus() ;//- an accessor function for the status data member
	void setStatus(int s);// - a mutator function to set status
	double getWetness();// - an accessor function for the wetness data member
	void setWetness(double s) ;//- a mutator function to set wetness
	int getBurnTime();// - an accessor function for the burnTime data member
	void setBurnTime(int s);
	void draw(GraphX&);
	void setPosi(int x,int y);
	
	
	
	};
	#endif //
