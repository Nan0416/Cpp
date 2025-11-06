#include "Star.hpp"

/* constructors */
Star::Star(){
    
    setMoon(0);
    
    /*
     
     because in moon it will call the default constructor.
     so it will invoke infinite loop
     
     */
    
}
Star::Star(std::string name){
    this->name=name;
    setMoon(0);
}
Star::Star(std::string name,double mass){
    this->mass=mass;
    this->name=name;
    this->velocity=0;// for previous calculate kinetic_energy
    setMoon(0);
}
Star::Star(std::string name,double mass,double velocity){
    this->velocity=velocity;
    this->mass=mass;
    this->name=name;
   
    setMoon(0);
    
    calKinetic_energy();

}
/* copy constructor */
Star::Star(const Star& star_){
    if(star_.end){
        name=star_.name;
        mass=star_.mass;
        velocity=star_.velocity;
        kinetic_energy=star_.kinetic_energy;
        end=true;
        moon=new Star [1];
        moon->name="xxx";
        moon->mass=0;
        moon->velocity=0;
        moon->kinetic_energy=0;
        moon->end=true;
        moon->moon_size=0;

        
        
    }else{
        *this=star_;
    }
    
}
/* copy assignment */
Star& Star::operator = (const Star& star_){
    /* 
     because need to copy moon, however, moon is also a Star class, so there will be recursive operator
     and end is the end=true signal
     */
    if(star_.end){
        Star(star_.name,star_.mass,star_.velocity); // included setMoon(0);
        kinetic_energy=star_.kinetic_energy;
        
    }else{
        name=star_.name;
        mass=star_.mass;
        velocity=star_.velocity;
        end=false;
        kinetic_energy=star_.kinetic_energy;
        Star* moon=new Star [star_.moon_size];
        
        for(int i=0;i<star_.moon_size;i++){
            /* call copy assignment */
            moon[i]=star_.moon[i];
        
        }
    }
    return *this;

}
/* deconstructor */
Star::~Star(){
     //std::cout<<"out"<<std::endl;
    delete moon;
}

/* mutators */
void Star::setMoon(int moon_size){
    if(moon_size==0){
        moon=NULL;
    
       
        
    }else{
        delete moon;
        moon=new Star[moon_size];
        moon->moon_size=moon_size;
        moon->end=false;
    }
}
void Star::setMoon(Star* moon, int moon_size){
    if(moon_size==0){
        setMoon(0);
    }else{
        delete moon;// when declare, there is an existing moon[1];
        moon=new Star[moon_size];
        moon->moon_size=moon_size;
        moon->end=false;
    }

}
void Star::calKinetic_energy(){
    kinetic_energy=0.5*mass*velocity*velocity;
}
void Star::setName(std::string name){
    this->name=name;
   
}
void Star::setMass(double mass){
    this->mass=mass;
    calKinetic_energy();
}
void Star::setVelocity(double velocity){
    this->velocity=velocity;
    calKinetic_energy();
}
void Star::createmoon(Star* head,int num){
    delete moon;
    moon=head;
    end=false;
    moon_size=num;

}
/* accessors */
std::string Star::getName(){
    return name;
}
double Star::getMass(){
    return mass;
}
double Star::getVelocity(){
    return velocity;
}
double Star::getKinetic_energy(){
    return kinetic_energy;
}
Star* Star::getMoon(){
    return moon;
    
}
int Star::getMoonnum(){
    return moon_size;
}


/* friend function */
std::ostream& operator << (std::ostream& out, const Star& star){
    using std::endl;
        out<<"name:      "<<star.name<<endl;
        out<<"mass:      "<<star.mass<<endl;
        out<<"velocity:  "<<star.velocity<<endl;
        out<<"kinetic energy: "<<star.kinetic_energy<<endl;
        if(!star.end){
            for(int i=0;i<star.moon_size;i++){
                
                out<<"moon "<<i<<star.moon[i].name<<endl;
                
            
            }
            out<<"show moon ?"<<endl;
            if(true){
                for(int j=0;j<star.moon_size;j++){
                    out<<star.moon[j];
                
                }
            
            
            }
            
            
        }else{
            out<<"moon:       none"<<endl;
        }
        out<<"============================="<<endl;
        return out;
        
        
        
        
    }

std::istream& operator >> (std::istream& in, Star& star){
    using std::cout;
    using std::endl;
    cout<<"name:   ";
    std::string name;
    in>>name;
    star.name=name;
    cout<<"mass:   ";
    double mass;
    in>>mass;
    star.mass=mass;
    double velocity;
    cout<<"velocity: ";
    in>>velocity;
    star.velocity=velocity;
    star.calKinetic_energy();
    cout<<"how many moons?"<<endl;
    int moons_number;
    in>>moons_number;
    if(moons_number!=0){
        Star* moons_head=new Star[moons_number];
        for(int i=0;i<moons_number;i++){
            in>>moons_head[i];
        }
        star.createmoon(moons_head,moons_number);
    }
    
    
    return in;


}



