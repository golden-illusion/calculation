#Calculator
Simple calculator written by C for Ruby

##Requirements:
* rake-compiler

##How to test
* clone sourcecode
* compile by yourself (or run test directly with precompiled **calculator.so**)

> cd calculator  
> rake compile

* test

> irb -r ./lib/calculator.so  
> 2.1.1 :001> Calculator.sum 1, 2  
> 2.1.1 :002> 3  
> ...


##API
1. sum: Calculator.sum(x, y)
2. subtraction: Calculator.sub(x, y)
3. multiplication: Calculator.mul(x, y)
4. division: Calculator.div(x, y)
