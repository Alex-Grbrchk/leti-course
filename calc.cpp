#include <iostream>

class Calculator
{
public:
    void calcAndPrint(int x, int y, Operation *op) { std::cout << op->calculate(x, y) << '\n'; }
};

class Operation
{
public:
    virtual int calculate(int x, int y) = 0;
};

class SumOperation : public Operation
{
public:
    int calculate(int x, int y) { return (x + y); }
};

class ProdOperation : public Operation
{
public:
    int calculate(int x, int y) { return (x * y); }
};
