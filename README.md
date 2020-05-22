# Daily Coding Problem
###### This are solution to **Daily Coding Problem**.
###### Most of These problem are found on [*LeetCode*](https://leetcode.com/) with minor changes in **Output/Input**.
###### Solutions might not be the *optimised* one , but they passed all leetcode testcase within given *time limit*.

---
## Problem 1
##### This problem was recently asked by Google.
##### Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
##### For example, given ```[10, 15, 3, 7]``` and k of ```17```, return true since ```10 + 7``` is ```17```.
##### __*Bonus*__: Can you do this in one pass?

#### Click [__*here*__](Solution/Day-001.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/two-sum/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 2
##### This problem was asked by Uber.
##### Given an array of integers, return a new array such that each element at index i of 
##### the new array is the product of all the numbers in the original array except the one at i.  
##### For example, if our input was ``[1, 2, 3, 4, 5]``, the expected output would be ``[120, 60, 40, 30, 24]``. 
##### If our input was ``[3, 2, 1]``, the expected output would be ``[2, 3, 6]``.  
##### Follow-up: what if you __can't use division__?

#### Click [__*here*__](Solution/Day-002.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/product-of-array-except-self/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 25
##### Implement regular expression matching with the following special characters:
#####  . (period) which matches any single character
#####  * (asterisk) which matches zero or more of the preceding element
##### That is, implement a function that takes in a string and a valid regular expression and 
##### returns whether or not the string matches the regular expression.
##### For example, given the regular expression ``"ra."`` and the string ``"ray"``, your function should return ``true``.
##### The same regular expression on the string ``"raymond"`` should return ``false``.
##### Given the regular expression ``".*at"`` and the string ``"chat"``, your function should return ``true``. 
##### The same regular expression on the string "chats" should return false.

#### Click [__*here*__](Solution/Day-025.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/regular-expression-matching/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 36
##### This problem was asked by Dropbox.
##### Given the root to a binary search tree, find the second largest node in the tree.

#### Click [__*here*__](Solution/Day-035.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) to visit [*LeetCode*](https://leetcode.com/) for this question.
#### __NOTE__ in the above question we have to find kth smallest number , so after a little bit of change we can also find k-th largest number and for this question k=2.
---
## Problem 45
##### This problem was asked by Two Sigma.
##### Using a function ``rand7()`` that returns an integer from ``1`` to ``7`` (inclusive) with uniform probability, implement a function ``rand5()`` that returns an integer from ``1`` to ``5`` (inclusive).

#### Click [__*here*__](Solution/Day-045.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/implement-rand10-using-rand7/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 68
#####  This problem was asked by Google.
#####  On our special chessboard, two bishops attack each other if they share the same diagonal. This includes bishops that have another bishop located between them, i.e. bishops can attack through pieces.
#####  You are given N bishops, represented as (row, column) tuples on a M by M chessboard. Write a function to count the number of pairs of bishops that attack each other. The ordering of the pair doesn't matter: ``(1, 2)`` is considered the same as ``(2, 1)``.
#####  For example, given ``M = 5`` and the list of bishops:
 ```
          (0, 0)
          (1, 2)
          (2, 2)
          (4, 0)
```
#####  The board would look like this:
#####
```
        [b 0 0 0 0]
        [0 0 b 0 0]
        [0 0 b 0 0]
        [0 0 0 0 0]
        [b 0 0 0 0]
```
##### You should return ``2``, since bishops ``1`` and ``3`` attack each other, as well as bishops ``3`` and ``4``.

#### Click [__*here*__](Solution/Day-068.cpp/) for solution.
---
## Problem 69
##### This problem was asked by Facebook.
##### Given a list of integers, return the __largest__ product that can be made by multiplying any _three integers_.
##### For example, if the list is ``[-10, -10, 5, 2]``, we should return ``500``, since that's ``-10 * -10 * 5``.
##### You can assume the list has at least three integers.

#### Click [__*here*__](Solution/Day-069.cpp) for solution. 
#### Click [__*here*__](https://leetcode.com/problems/maximum-product-of-three-numbers/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 70
##### This problem was asked by Microsoft.
##### A number is considered perfect if its __digits sum__ up to exactly ``10``.
##### Given a positive integer ``n``, return the ``n-th`` perfect number.
##### For example, given ``1``, you should return ``19``. Given ``2``, you should return ``28``.

#### Click [__*here*__](Solution/Day-070.cpp) for solution. 
---
## Problem 71
##### This problem was asked by Two Sigma.
##### Using a function ``rand7()`` that returns an integer from ``1`` to ``7`` (inclusive) with uniform probability, implement a function ``rand5()`` that returns an integer from ``1`` to ``5`` (inclusive).

#### Click [__*here*__](Solution/Day-071.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/implement-rand10-using-rand7/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 72
##### This problem was asked by Google.
##### In a directed graph, each node is assigned an uppercase letter. We define a path's value as the number of most frequently-occurring letter along that path. For example, if a path in the graph goes through ``"ABACA"``, the value of the path is ``3``, since there are ``3`` occurrences of ``'A'`` on the path.
##### Given a graph with ``n`` nodes and ``m`` directed edges, return the largest value path of the graph. If the largest value is infinite, then return ``null``.
##### The graph is represented with a string and an edge list. The i-th character represents the uppercase letter of the i-th node. Each tuple in the edge list ``(i, j)`` means there is a directed edge from the i-th node to the j-th node. Self-edges are possible, as well as multi-edges.
##### For example, the following input graph:
```
        ABACA
```
```
      [ (0, 1),
        (0, 2),
        (2, 3),
        (3, 4)  ]
```
##### Would have maximum value ``3`` using the path of vertices ``[0, 2, 3, 4], (A, A, C, A)``.
##### The following input graph:
```
        A
```
```
    [ (0, 0) ]
```
##### Should return ``null``, since we have an infinite loop.

#### Click [__*here*__](Solution/Day-072.cpp) for solution.
---
## Problem 73
##### This problem was asked by Google.
##### Given the head of a singly linked list, reverse it in-place.

#### Click [__*here*__](Solution/Day-073.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/reverse-linked-list/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 74
##### This problem was asked by Apple.
##### Suppose you have a multiplication table that is ``N`` by ``N``. That is, a 2D array where the value at the ``i-th`` row and ``j-th`` column is ``(i + 1) * (j + 1)`` (if 0-indexed) or ``i * j`` (if 1-indexed).
##### Given integers ``N`` and ``X``, write a function that returns the number of times ``X`` appears as a value in an ``N`` by ``N`` multiplication table.
##### For example, given ``N = 6`` and ``X = 12``, you should return ``4``, since the multiplication table looks like this:
``
| --- | --- | --- | --- | --- | --- |
|     |     |     |     |     |     |
| 1   | 2   | 3   | 4   | 5   | 6   |
| 2   | 4   | 6   | 8   | 10  | 12  |
| 3   | 6   | 9   | 12  | 15  | 18  |
| 4   | 8   | 12  | 16  | 20  | 24  |
| 5   | 10  | 15  | 20  | 25  | 30  |
| 6   | 12  | 18  | 24  | 30  | 36  |
``
##### And there are ``4`` ``12's`` in the table.

#### Click [__*here*__](Solution/Day-074.cpp) for solution.
---
