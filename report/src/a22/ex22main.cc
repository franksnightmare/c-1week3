#include "ex22.ih"

int main() 
{
    Demo d;
    d.run()
    caller(d);        // 1

    Demo const constd;
    constd.run()
    caller(constd);   // 2

    Demo(d).run();    
    caller(Demo(d));  // 3
}

