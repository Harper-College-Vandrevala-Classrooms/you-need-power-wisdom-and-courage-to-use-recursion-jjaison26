#include <iostream>

using namespace std;

class TriangleNumbers {
        public:
                int value(int n) {
                        if(n==1) {
                                return 1;
                        }
                        else{
                                return n + value(n-1);
                        }
                }
                int add(int a, int b) {
                        return value(a) + value(b);
                }
                int subtract(int a, int b) {
                        return value(a) - value(b);
                }

};

int main() {
        TriangleNumbers calculator;

cout << calculator.value(1) << endl;
cout << calculator.value(2)<< endl;
cout << calculator.value(4)<< endl;

cout << calculator.add(1, 1)<<endl;
cout << calculator.add(2, 3)<<endl;
cout << calculator.add(4, 2)<<endl;

cout << calculator.subtract(1, 1)<<endl;
cout << calculator.subtract(2, 3)<<endl;
cout << calculator.subtract(4, 2)<<endl;
        return 0;
}
