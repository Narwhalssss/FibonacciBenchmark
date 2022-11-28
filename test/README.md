# Fibonacci

The time and space complexity of Fibonacci(Iterative) and Fibonacci will now be compared (Recursive) 

## Fibonacci iterative

```c
int fibonacciIterative(int N){
    int F0 = 0;
    int F1 = 1;
    int F2;

    if (N == 0){
        return F0;
    }
    else if (N == 1){
        return F1;
    } 
    else {
        for(int i=2; i <= N; i++){
            F2 = F0 + F1;
            F0 = F1;
            F1 = F2;
        }
        return F2;
    }
}
```

## Fibonacci recursive

```c
int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    }
    else if (N == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}
```

# Testing

![RESULT](images/result.png)

# Benchmark

Benchmarking is to test the code and helps to improve our code by comparing each approach's time and space complexity.

# Time Complexity

## How to run

using command make time

```bash
make time
```

## Time Comparison

In this case i use N = 30
![TimeComplex](images/timecomplex.png)


# Space Complexity

## How to run

```bash
make space
./space_recursive.out
```

```bash
make space
./space_iterative.out
```

## Space Comparison

(using task manager)

N = 10000
![SpaceComplex](images/recursive.png)
![SpaceComplex](images/iterative.png)
