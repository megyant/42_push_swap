# Push_swap

*This project has been created as part of the 42 curriculum by <mbotelho>[mbotelho].*

## Description
Push_swap is an efficient algorithm that, resorting to limited movements, sorts numbers using two stacks.  
  
The aim of this project was to create such an algorithm or adapt an existing one. Algorithms can be measured by the amount of resources they consume using the Big O Notation. Such resources will increase an algorithm complexity, either in time or in space. Ideally, a perfect algorithm should have a O(1) notation, this would mean that complexity is constant in both time and space.  
  
In this project since space is unvariable, as there are always two stacks to be used, time and the number of actions performance must be accounted for. I first read on the radix sort, then I stumbled uppon the work of a previous student using an algorithm that he himself named "Turk Sort". Since such algorithm seemed logical, I decided to pursue that one.  

### Actions

In this project we were only allowed to use a pre-defined set of actions:

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

## Instructions

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
