
#include "Tree.hpp"

#include <cstdlib>
Tree::Tree(){
	type="not_a_tree";
	probCatch=1.0;
	status=0;
	wetness=1.0;
	burntime=1;
	 xpos=0;
	 ypos=0;
	symbol="solidtriangle";
	}
Tree::Tree(string type_,double probCatch_,int status_,double wetness_,int burntime_,int xpos_,int ypos_,string symbol_){
		type=type_;
		probCatch=probCatch_;
		status=status_;
		wetness=wetness_;
		burntime=burntime_;
		xpos=xpos_;
		ypos=ypos_;
		symbol=symbol_;
		
		}
double Tree::getProbCatch(){
		return probCatch;
		}
void Tree::setProbCatch(double P){
		probCatch=P;
		}
int Tree::getStatus(){
		return status;
		}
void Tree::setStatus(int s){
		status=s;
		}
double Tree::getWetness(){
		return wetness;
		}
void Tree::setWetness(double s){
		wetness=s;
		}
int Tree::getBurnTime(){
		return burntime;
		}
void Tree::setBurnTime(int s){
		burntime=s;
		}
void Tree::draw(GraphX& graph){
	
	graph.penup();
	graph.setposition(xpos,ypos);
	graph.pendown();
	graph.symbol(symbol);
	graph.symbolsize(10);
	if(status==0){
		graph.pencolor("white");
	}else if(status==1){
		graph.pencolor("green");
	}else if(status==2){
		graph.pencolor("red");
	}
	
	graph.plot();
	
}
void Tree::setPosi(int x,int y){
	xpos=x;
	ypos=y;
	}
	
	
	
	
	

