#ifndef STAR_H
#define STAR_H
/* build your own milk way */
#include <iostream>
#include <cmath>
#include <string>
class Star{
private:
    std::string name;
    double mass;
    double velocity;
    double kinetic_energy;
    Star* moon;
    int moon_size;//moon_size repersent the number of moons
    bool end;
    void calKinetic_energy();
    
    
public:
    /* constructors */
    Star();
    Star(std::string name);
    Star(std::string name,double mass);
    Star(std::string name,double mass,double velocity);
    /* copy constructor */
    Star(const Star&);
    /* copy assignment */
    Star& operator = (const Star&);
    /* deconstructor */
    ~Star();
    /* mutators */
    void setName(std::string name);
    void setMass(double mass);
    void setVelocity(double velocity);
    void setMoon(Star* moon, int moon_size);
    void setMoon(int moon_size);
    void createmoon(Star* head,int num);
    /* accessors */
    std::string getName();
    double getMass();
    double getVelocity();
    double getKinetic_energy();
    Star* getMoon();
    int getMoonnum();
    /* function */
    /* friend function */
    friend std::ostream& operator << (std::ostream&, const Star&);
    friend std::istream& operator >> (std::istream&, Star&);

};

#endif //STAR_H