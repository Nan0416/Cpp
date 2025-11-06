#include <iostream>
#include "GraphX.hpp"
#include <cmath>
int main(){
	int theta=0;
	double radius=100;
	double x,y;
	GraphX graph;
	graph.scale(400,400);
	graph.symbol("solidcircle");
	graph.symbolsize(30);
	graph.pencolor("black");
	//graph.pensize(12);
	bool done = false;
	while(!done)
		{
			
			 string input =graph.input();
			if (input == "rightbutton")
				done = false;
			if (input == "leftbutton")
			done = true;
			theta=theta%360;
			theta++;
			x=cos(theta)*radius+200;
			y=sin(theta)*radius+200;
			
			graph.setpos(x,y);
			
			graph.plot();
			graph.delay(0.02);
			
			graph.erase();
			
		}
	
	
	
	
	
	return 0;
	}
