#include <iostream>

namespace example {
    class Example{
    private:
        int h;
        void add(int r);
    public:
        
        void set(int r);
        int get();
        friend std::ostream& operator << (std::ostream& out, Example j);
    
    };
}