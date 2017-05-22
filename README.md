# AltImpact

## What is *** ?

Here are implementations of emptiness check of alternating data automata (ADA) with two different (semi) algorithms, IMPAC and Lazy Predicate Abstraction.

## How to use *** ?

`./empty model_to_check -option`

Here are available options:

#### -print
> This option allows to print out all the steps.

#### -stack
> This option allows to use stack as the data structure of WorkList instead of using queue.

#### -setk k
> Set the minimum back step when check the satisfiability.

* Example: Check if example1.ada is empty, by using stack as the data structure of WorkList, and setting the minimum back step to 5 for satisfiability check. (And not print out any step.)

`./empty example1.ada -stack -setk 5`

* Example: Check if example2.ada is empty by printing all the steps.

`./empty example2.ada -print`

## Any questions?

Please contact `xiao.xu@outlook.be`. Thanks.
