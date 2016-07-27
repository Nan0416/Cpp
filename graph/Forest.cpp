#include "Forest.hpp"
#include <cstdlib>
Forest::Forest(){
	for(int i=1;i<32;i++){
		for(int j=1;j<32;j++){
				grid[i][j].setProbCatch(0.8);
				grid[i][j].setStatus(1);
				
			}
		}
		grid[16][16].setStatus(2);
	for(int i=0;i<33;i++){
		for(int j=0;j<33;j++){
			grid[i][j].setPosi(i*25,j*25);
			}
		}
	cout<<grid[12][12].getStatus();
}
void Forest::draw(GraphX& graph){
	
	for(int i=0;i<33;i++){
		for(int j=0;j<33;j++){
			grid[i][j].draw(graph);
			
			}
		}
		int i=0;
	while(i==0){
	string input =graph.input();
			if (input == "rightbutton")
				i=1;
			if (input == "leftbutton")
			i=1;
	}
		
	}
int Forest::nextStatus(int i,int j){
	
	cout<<" "<<i<<" "<<j<<grid[i][j].getStatus()<<endl;
	if(grid[i][j].getStatus()==0||grid[i][j].getStatus()==2){
		grid[i][j].setStatus(0);
		return 0;
	}else{
		//srand(time(0));
		int rand_0=rand()%10000;
		double rand_1=rand_0/10000.0;
		cout<<rand_1<<endl;
		rand_1=0.7;
		if((grid[i-1][j].getStatus()==2||grid[i+1][j].getStatus()==2||grid[i][j-1].getStatus()==2||grid[i][j+1].getStatus()==2)&&rand_1<grid[i][j].getProbCatch()){
			cout<<" "<<i<<" "<<j<<endl;
			grid[i][j].setStatus(2);
			return 2;
			}
	}
}
void Forest::applyNextStatus(){
	
	int status_[33][33];
	for(int i=0;i<33;i++){
		for(int j=0;j<33;j++){
			status_[i][j]=nextStatus(i,j);
			}
		}
	
	for(int i=0;i<33;i++){
		for(int j=0;j<33;j++){
			grid[i][j].setStatus(status_[i][j]);
			}
		}
}
bool Forest::isBurning(){
	for(int i=0;i<33;i++){
		for(int j=0;j<33;j++){
			if(grid[i][j].getStatus()==2){
				return true;
				}
			}
		}
		
	return false;
}
