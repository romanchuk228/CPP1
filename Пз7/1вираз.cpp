#include iostream

int main() {
    int c0;
    int steps = 0;
    
    stdcout  Enter a natural number ;
    stdcin  c0;

    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = 2;
        } else {
            c0 = 3  c0 + 1;
        }
        stdcout  c0  stdendl;
        steps++;
    }
    
    stdcout  steps =   steps  stdendl;
    
    return 0;
}
