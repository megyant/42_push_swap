# Push_swap

*This project has been created as part of the 42 curriculum by <mbotelho>[mbotelho].*

## Description
Push_swap is an efficient sorting utility designed to order a set of integers using two stacks and a restricted set of operations. The primary objective is to implement a sorting algorithm optimized for minimal instruction counts.
Algorithmic Efficiency

In computer science, algorithm efficiency is measured via Big O notation, which describes how resource consumption—both time and space—scales with input size (n). While a theoretical ideal is O(1) (constant complexity), practical sorting typically requires logarithmic or linearithmic time.

In this implementation, space complexity is constant (O(1)) as the number of stacks is fixed. Therefore, the primary metric for performance is the total number of operations executed.  

### Actions

The project permits only a specific set of operations to manipulate the stacks:

|   Movement          |   Output     |  Description                                                                |
| ------------------- | ------------ | --------------------------------------------------------------------------- |
| Swap a              | sa           | Swap the first 2 elements at the top of stack a                             |
| Swap b              | sb           | Swap the first 2 elements at the top of stack b                             |
| Swap both           | ss           | sa and sb at the same time                                                  |
| Push a              | pa           | Take the first element at the top of b and put it at the top of a           |
| Push b              | pb           | Take the first element at the top of a and put it at the top of b           |
| Rotate a            | ra           | Shift up all elements of stack a by 1. The first element becomes the last   |
| Rotate b            | rb           | Shift up all elements of stack b by 1. The first element becomes the last   |
| Rotate both         | rr           | ra and rb at the same time                                                  |
| Reverse rotate a    | rra          | Shift down all elements of stack a by 1. The last element becomes the first |
| Reverse rotate b    | rrb          | Shift down all elements of stack b by 1. The last element becomes the first |
| Reverse rotate both | rrr          | rra and rrb at the same time                                                |

### The Turk Algorithm

The chosen implementation is the Turk Algorithm, a greedy-partitioning strategy that prioritizes cost-effective movements.

1. **Initialization:** The first two numbers are pushed from Stack A to Stack B to establish an initial range (maximum and minimum).

2. **Greedy Partitioning:** Elements are pushed from Stack A to Stack B based on their calculated "cost." In this context, cost refers to the number of rotations required to position a specific element and its target destination at the top of their respective stacks.

3. **Descending Order:** Stack B is maintained in descending order during these transfers, ensuring that the elements are pre-positioned for a more efficient return to Stack A.

4. **The Base Case:** Pushing continues until only three elements remain in Stack A. These three are sorted using a specialized algorithm in a maximum of two operations.

5. **Reconciliation:** Elements are pushed back from Stack B to Stack A. Finally, Stack A is rotated until the minimum value is at the top, resulting in a fully sorted sequence.


**Key Optimization: The "Cost" Calculation**

The efficiency of this implementation relies on finding the least costly element to move. The algorithm calculates the moves for two different rotation scenarios:

  1. Both stacks rotate clockwise (rr).

  2. Both stacks rotate counter-clockwise (rrr).

By picking the path with the fewest total instructions, the algorithm minimizes the overhead of moving elements between the stacks.

## Instructions

Clone this repository
```
git clone git@github.com:megyant/42_push_swap.git push_swap
```
```
cd push_swap
```

Build the executable using the provided Makefile
```
make
```

Run the program with a list of integers:
```
./push_swap 2 1 3 6 5 8
```

```
ARG= "4 67 3 87 23"; ./push_swap $ARG
```


## Resources 
- [Push_swap roadmap](https://github.com/ricardoferreirax/PUSH_SWAP/blob/main/roadmap.c)  
- [Push_swap playlist](https://www.youtube.com/watch?v=rO-JjtgpX2U&list=PLdqJJidIgFEjLfbSaqLlZr70DLgx5IFLF)  
- [Push_swap overview](https://github.com/f-corvaro/PUSH_SWAP)  
- [Push_swap movements explained](https://www.scribd.com/document/636999723/Untitled?v=0.198)  
- [Push_swap radix sort](https://medium.com/@julien-ctx/push-swap-an-easy-and-efficient-algorithm-to-sort-numbers-4b7049c2639a)  
- [Push_swap guide](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap/algorithms)
- [Turk algorithm guide](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)  
- [Turk algorithm github](https://github.com/ayogun/push_swap/) 
- [Push_swap memory tester](https://github.com/gemartin99/Push-Swap-Tester)
- [Push_swap movements tester](https://github.com/LeoFu9487/push_swap_tester)

### Use of Artificial Intelligence
Gemini was used to optimize the development workflow of this project. Some usages included:
- Assist with testing the program
- Logical improvement of functions
- Improve understanding of some concepts
- Quick and small debbugg checks throgout the making of this program
- Makefile adjustments
- Improve this README wording

All algorithm and implementation of the logic in this program are the author's own work.

## IMPORTANT MESSAGE

DO NOT COPY OR CHEAT, YOU WILL NOT BE HELPING YOURSELF.
