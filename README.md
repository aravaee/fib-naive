# Fibonacci number

> In mathematics, the Fibonacci numbers, commonly denoted F<sub>n</sub>, form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.
> [More on Wikipedia](https://en.wikipedia.org/wiki/Fibonacci_number)

## The sequence F<sub>n</sub> of Fibonacci numbers is defined by the recurrence relation:

F<sub>n</sub> = F<sub>n-1</sub> + F<sub>n-1</sub>, Where F<sub>0</sub> = 0 and F<sub>1</sub> = 1

## Direct recursive implementation mathematical recurrence relation:

```c++
long fib(int num)
{
    if (num <= 1)
        return num;
    return fib(num - 1) + fib(num - 2);
}
```

### Time Complexity

The time taken by recursive Fibonacci is O(2<sup>n</sup>)

## Compile and Run:

```
make
./main
```
