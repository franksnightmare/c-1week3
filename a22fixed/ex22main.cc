#include "ex22.ih"

int main()
{
    Demo demo;
    demo.run();
    caller(demo);        // 1

    const Demo constdemo;
    constdemo.run();
    caller(constdemo);   // 2

    Demo().run();
    caller(Demo());  // 3
}
