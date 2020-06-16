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
## Problem 35
##### This problem was asked by Google.
##### Given an array of strictly the characters ``'R', 'G', and 'B'``,
#####   segregate the values of the array so that all the ``Rs`` come first, the ``Gs`` come second, and the ``Bs`` come last. 
##### You can only swap elements of the array.
##### Do this in linear time and in-place.
##### For example, given the array ``['G', 'B', 'R', 'R', 'B', 'R', 'G']``,
##### it should become ``['R', 'R', 'R', 'G', 'G', 'B', 'B']``.

#### Click [__*here*__](Solution/Day-035.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/sort-colors/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 36
##### This problem was asked by Dropbox.
##### Given the root to a binary search tree, find the second largest node in the tree.

#### Click [__*here*__](Solution/Day-036.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/kth-smallest-element-in-a-bst/) to visit [*LeetCode*](https://leetcode.com/) for this question.
#### __NOTE__ in the above question we have to find kth smallest number , so after a little bit of change we can also find k-th largest number and for this question k=2.
---
## Problem 45
##### This problem was asked by Two Sigma.
##### Using a function ``rand7()`` that returns an integer from ``1`` to ``7`` (inclusive) with uniform probability, implement a function ``rand5()`` that returns an integer from ``1`` to ``5`` (inclusive).

#### Click [__*here*__](Solution/Day-045.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/implement-rand10-using-rand7/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 64
##### This problem was asked by Google.
##### A knight's tour is a sequence of moves by a knight on a chessboard such that all squares are visited once.
##### Given N, write a function to return the number of knight's tours on an N by N chessboard.
##### My Testcase :
##### 
``` 
      input : 1 , Output : 1
      input : 2 , Output : 0 
      input : 3 , Output : 0
      input : 4 , Output : 0
      input : 5 , Output : 1728 (it took 23 seconds) 
```

#### Click [__*here*__](Solution/Day-064.cpp) for solution.
---
## Problem 65
##### This problem was asked by Amazon.
##### Given a N by M matrix of numbers, print out the matrix in a clockwise spiral.
##### For example, given the following matrix:
#####
```
         [[1,  2,  3,  4,  5],
         [6,  7,  8,  9,  10],
         [11, 12, 13, 14, 15],
         [16, 17, 18, 19, 20]]
```   
##### You should print out the following:
#####
```   
      1
      2
      3
      4
      5
      10
      15
      20
      19
      18
      17
      16
      11
      6
      7
      8
      9
      14
      13
      12
```

#### Click [__*here*__](Solution/Day-065.cpp) for solution.
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

|     |     |     |     |     |     |
| --- | --- | --- | --- | --- | --- |
| 1   | 2   | 3   | 4   | 5   | 6   |
| 2   | 4   | 6   | 8   | 10  | 12  |
| 3   | 6   | 9   | 12  | 15  | 18  |
| 4   | 8   | 12  | 16  | 20  | 24  |
| 5   | 10  | 15  | 20  | 25  | 30  |
| 6   | 12  | 18  | 24  | 30  | 36  |

##### And there are ``4`` ``12's`` in the table.

#### Click [__*here*__](Solution/Day-074.cpp) for solution.
---
## Problem 75
##### This problem was asked by Microsoft.
##### Given an array of numbers, find the length of the longest increasing subsequence in the array. The subsequence does not necessarily have to be contiguous.
##### For example, given the array ``[0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15]``, the longest increasing subsequence has length ``6``: it is ``0, 2, 6, 9, 11, 15``.

#### Click [__*here*__](Solution/Day-075.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/longest-increasing-subsequence/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 76
##### This problem was asked by Google.
##### You are given an ``N `` by ``M `` 2D matrix of lowercase letters. Determine the minimum number of columns that can be removed to ensure that each row is ordered from top to bottom lexicographically. That is, the letter at each column is lexicographically later as you go down each row. It does not matter whether each row itself is ordered lexicographically.
##### For example, given the following table:
``
        cba
        daf
        ghi
``
##### This is not ordered because of the ``a`` in the center. We can remove the second column to make it ordered:
``
         ca
         df
         gi
``
##### So your function should return ``1``, since we only needed to remove ``1`` column.
##### As another example, given the following table:
``     abcdef``  
##### Your function should return ``0``, since the rows are already ordered (there's only one row).
##### As another example, given the following table:
 ``
         zyx
         wvu
         tsr
 ``
##### Your function should return ``3``, since we would need to remove all the columns to order it.

#### Click [__*here*__](Solution/Day-076.cpp) for solution.
---
## Problem 77
##### This problem was asked by Snapchat.
##### Given a list of possibly overlapping intervals, return a new list of intervals where all overlapping intervals have been merged.
##### The input list is not necessarily ordered in any way.
##### For example, given ``[(1, 3), (5, 8), (4, 10), (20, 25)]``, you should return ``[(1, 3), (4, 10), (20, 25)]``.

#### Click [__*here*__](Solution/Day-077.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/merge-intervals/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 78
##### This problem was asked by Google.
##### Given ``k`` sorted singly linked lists, write a function to merge all the lists into ``one`` sorted singly linked list.

#### Click [__*here*__](Solution/Day-078.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/merge-k-sorted-lists/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 79
##### This problem was asked by Facebook.
##### Given an array of integers, write a function to determine whether the array could become non-decreasing by modifying at most 1 element.
##### For example, given the array ``[10, 5, 7]``, you should return true, since we can modify the ``10`` into a ``1`` to make the array non-decreasing.
##### Given the array ``[10, 5, 1]``, you should return false, since we can't modify any one element to get a non-decreasing array.

#### Click [__*here*__](Solution/Day-079.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/non-decreasing-array/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 80
##### This problem was asked by Google.
##### Given the root of a binary tree, return a deepest node. For example, in the following tree, return ``d``.
```
            a
           / \
          b   c
         /
        d
```
#### Click [__*here*__](Solution/Day-080.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/maximum-depth-of-binary-tree/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 81
##### This problem was asked by Yelp.
##### Given a mapping of digits to letters ``(as in a phone number)``, and a digit string, return all possible letters the number could represent. You can assume each valid number in the mapping is a single digit.
##### For example if ``{“2”: [“a”, “b”, “c”], 3: [“d”, “e”, “f”], …}`` then ``“23”`` should return ``[“ad”, “ae”, “af”, “bd”, “be”, “bf”, “cd”, “ce”, “cf"]``.

#### Click [__*here*__](Solution/Day-081.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 82
##### This problem was asked Microsoft.
##### Using a ``read7()`` method that returns ``7`` characters from a file, implement ``readN(n)`` which reads ``n`` characters.
##### For example, given a file with the content “``Hello world``”, _three_ ``read7()`` returns “``Hello w``”, “``orld``” and then “”.

#### Click [__*here*__](Solution/Day-082.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/read-n-characters-given-read4/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 83
##### This problem was asked by Google.
##### Invert a binary tree.
##### For example, given the following tree:
```
          a
         / \
        b   c
       / \  /
      d   e f
```
##### should become:
```
        a
       / \
       c  b
       \  / \
        f e  d
```

#### Click [__*here*__](Solution/Day-083.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/invert-binary-tree/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 84
##### This problem was asked by Amazon.
##### Given a matrix of 1s and 0s, return the number of "islands" in the matrix. A ``1`` represents land and ``0`` represents water, so an island is a group of 1s that are neighboring whose perimeter is surrounded by water.
##### For example, this matrix has ``4`` islands.
```
      0 0 1 1 0
      0 1 1 0 0
      0 0 0 0 0
      1 1 0 0 1
      1 1 0 0 1
```

#### Click [__*here*__](Solution/Day-084.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/number-of-islands/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 85
##### This problem was asked by Facebook.
##### Given three ``32``-bit integers ``x``, ``y``, and ``b``, return ``x`` if ``b`` is ``1`` and ``y`` if ``b`` is ``0``, using only mathematical or bit operations. You can assume ``b`` can only be ``1`` or ``0``.

#### Click [__*here*__](Solution/Day-085.cpp) for solution.
---
## Problem 86
##### This problem was asked by Google.
##### Given a string of parentheses, write a function to compute the minimum number of parentheses to be removed to make the string valid (i.e. each open parenthesis is eventually closed).
##### For example, given the string ``"()())()"``, you should return ``1``. Given the string ``")("``, you should return ``2``, since we must remove all of them.

#### Click [__*here*__](Solution/Day-086.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 87
##### This problem was asked by Uber.
##### A rule looks like this:
##### ``A NE B`` 
##### This means this means point ``A`` is located ``northeast`` of point ``B``.
##### ``A SW C``
##### means that point ``A`` is ``southwest`` of ``C``.
##### Given a list of rules, check if the sum of the rules validate. For example:
```
      A N B
      B NE C
      C N A
```
##### does not validate, since ``A`` cannot be both ``north`` and ``south`` of ``C``.
```
      A NW B
      A N B
```
##### is considered valid.

#### Click [__*here*__](Solution/Day-087.cpp) for solution.
---
## Problem 88
##### This question was asked by ContextLogic.
##### Implement division of two positive integers without using the division, multiplication, or modulus operators. Return the quotient as an integer, ignoring the remainder.

#### Click [__*here*__](Solution/Day-088.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/divide-two-integers/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 89
##### This problem was asked by LinkedIn.
##### Determine whether a tree is a valid ``binary search tree``.
##### A binary search tree is a tree with two children, ``left`` and ``right``, and satisfies the constraint that the key in the left child must be ``less than or equal to`` the root and the key in the ``right child must be greater than or equal to`` the root.

#### Click [__*here*__](Solution/Day-089.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/validate-binary-search-tree/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 90
##### This question was asked by Google.
##### Given an integer ``n`` and a list of integers ``l``, write a function that randomly generates a number from ``0`` to ``n-1`` that isn't in ``l (uniform)``.

#### Click [__*here*__](Solution/Day-090.cpp) for solution.
---
## Problem 91
##### This problem was asked by Dropbox.
##### What does the below code snippet print out? How can we fix the anonymous functions to behave as we'd expect?
```
    functions = []
    for i in range(10):
        functions.append(lambda : i)

    for f in functions:
        print(f())
```
#### Click [__*here*__](Solution/Day-091.py) for solution.
---
## Problem 92
##### This problem was asked by Airbnb.
##### We're given a ``hashmap`` associating each ``courseId key`` with a ``list of courseIds values``, which represents that the ``prerequisites`` of courseId are courseIds. Return a ``sorted ordering of courses`` such that we can finish all courses.
##### Return ``null`` if there is no such ordering.
##### For example, given 
```
    {
        'CSC300': ['CSC100', 'CSC200'], 
        'CSC200': ['CSC100'], 
        'CSC100': []
    }
```
##### should return ``['CSC100', 'CSC200', 'CSCS300']``.

#### Click [__*here*__](Solution/Day-092.cpp) for solution.
#### I didn't find any matching problem on LeetCode but you can try [__*course schedule*__](https://leetcode.com/problems/course-schedule/),[__*course schedule II*__](https://leetcode.com/problems/course-schedule-ii/).
---
## Problem 93
##### This problem was asked by Apple.
##### Given a tree, find the largest tree/subtree that is a BST.
##### Given a tree, return the ``size`` of the ``largest`` tree/subtree that is a ``BST``.

#### Click [__*here*__](Solution/Day-093.cpp) for solution.
---
## Problem 94
##### This problem was asked by Google.
##### Given a binary tree of integers, find the maximum path sum between two nodes. 
##### The path must go through at least one node, and does not need to go through the root.

#### Click [__*here*__](Solution/Day-094.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/binary-tree-maximum-path-sum/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 95
##### This problem was asked by Palantir.
##### Given a number represented by a list of digits, find the next greater permutation of a number, in terms of lexicographic ordering. If there is not greater permutation possible, return the permutation with the ``lowest value/ordering``.
##### For example, the list ``[1,2,3]`` should return ``[1,3,2]``. The list ``[1,3,2]`` should return ``[2,1,3]``. The list ``[3,2,1]`` should return ``[1,2,3]``.
##### Can you perform the operation without allocating extra memory (disregarding the input memory)?

#### Click [__*here*__](Solution/Day-095.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/next-permutation/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 96
##### This problem was asked by Microsoft.
##### Given a number in the form of a list of digits, return all possible permutations.
##### For example, given ``[1,2,3]``, return ``[[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]``.

#### Click [__*here*__](Solution/Day-096.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/permutations/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 97
##### This problem was asked by Stripe.
##### Write a map implementation with a get function that lets you retrieve the value of a key at a particular time.
##### It should contain the following methods:
##### ``set(key, value, time)``: sets key to value for ``t = time``.
##### ``get(key, time)``: gets the key at ``t = time``.
##### The map should work like this. If we set a key at a particular time, it will maintain that value forever or until it gets set at a later time. In other words, when we get a key at a time, it should ``return the value that was set for that key set at the most recent time``.
##### Consider the following examples:
```
    d.set(1, 1, 0) # set key 1 to value 1 at time 0
    d.set(1, 2, 2) # set key 1 to value 2 at time 2
    d.get(1, 1) # get key 1 at time 1 should be 1
    d.get(1, 3) # get key 1 at time 3 should be 2
```
```
    d.set(1, 1, 5) # set key 1 to value 1 at time 5
    d.get(1, 0) # get key 1 at time 0 should be null
    d.get(1, 10) # get key 1 at time 10 should be 1
```
```
    d.set(1, 1, 0) # set key 1 to value 1 at time 0
    d.set(1, 2, 0) # set key 1 to value 2 at time 0
    d.get(1, 0) # get key 1 at time 0 should be 2
```

#### Click [__*here*__](Solution/Day-097.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/time-based-key-value-store/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 98
##### This problem was asked by Coursera.
##### Given a 2D board of characters and a word, find if the word exists in the grid.
##### The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.
##### For example, given the following board:
```
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]
```
##### ``exists(board, "ABCCED")`` returns ``true``, 
##### ``exists(board, "SEE")`` returns ``true``, 
##### ``exists(board, "ABCB")`` returns ``false``.

#### Click [__*here*__](Solution/Day-098.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/word-search/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 99
##### This problem was asked by Microsoft.
##### Given an unsorted array of integers, find the length of the longest consecutive elements sequence.
##### For example, given ``[100, 4, 200, 1, 3, 2]``, the longest consecutive element sequence is ``[1, 2, 3, 4]``. Return its length: ``4``.
##### Your algorithm should run in ``O(n)`` complexity.

#### Click [__*here*__](Solution/Day-099.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/longest-consecutive-sequence/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 100
##### This problem was asked by Google.
##### You are in an infinite 2D grid where you can move in any of the 8 directions:
``(x,y)`` to
```
        (x+1, y),
        (x - 1, y),
        (x, y+1),
        (x, y-1),
        (x-1, y-1),
        (x+1,y+1),
        (x-1,y+1),
        (x+1,y-1)
```
##### You are given a sequence of points and the order in which you need to cover the points. Give the minimum number of steps in which you can achieve it. You start from the first point.
##### Example:
##### Input: ``[(0, 0), (1, 1), (1, 2)]``  
##### Output: ``2``  
##### It takes ``1`` step to move from ``(0, 0)`` to ``(1, 1)``. It takes one more step to move from ``(1, 1)`` to ``(1, 2)``.

#### Click [__*here*__](Solution/Day-100.cpp) for solution.
---
