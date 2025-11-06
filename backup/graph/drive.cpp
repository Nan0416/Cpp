#include <iostream>
#include "Tree.hpp"
#include "GraphX.hpp"
#include "Forest.hpp"
using namespace std;
int main(){
		Forest forest;
		GraphX graph;
		graph.scale(800,800);
		while(forest.isBurning()){
			forest.draw(graph);
			forest.applyNextStatus();
		}
		return 0;
		
	}
