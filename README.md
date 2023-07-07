#Daily Coding Problem
###### This are solution to **[Daily Coding Problem](https://www.dailycodingproblem.com)**.
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
## Problem 3
##### This problem was asked by Google.  
##### Given the root to a binary tree, implement serialize(root), which serializes the tree into a string, and deserialize(s), which deserializes the string back into the tree.  
##### For example, given the following Node class
##### class Node:
```
def __init__(self, val, left=None, right=None):
     self.val = val
     self.left = left
     self.right = right
```
##### The following test should be passed
##### node = Node('root', Node('left', Node('left.left')), Node('right'))
##### assert deserialize(serialize(node)).left.left.val == 'left.left'
#### Click [__*here*__](Solution/Day-003.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/serialize-and-deserialize-bst/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 5 
##### This problem was asked by Jane Street.
##### ```cons(a, b)``` constructs a pair, and ```car(pair)``` and ```cdr(pair)``` returns the first and last element of that pair. For example, ```car(cons(3, 4))``` returns ```3```, and ```cdr(cons(3, 4))``` returns ```4```.
##### Given this implementation of cons:
##### def cons(a, b):
#####     def pair(f):
#####         return f(a, b)
#####     return pair
##### Implement car and cdr.
#### Click [__*here*__](Solution/Day-005.cpp/) for solution.
---
## Problem 6
##### This problem was asked by Google.
##### An XOR linked list is a more memory efficient doubly linked list. Instead of each node holding ```next``` and ```prev``` fields, it holds a field named ```both```, which is an XOR of the next node and the previous node. Implement an XOR linked list; it has an ```add(element)``` which adds the element to the end, and a ```get(index)``` which returns the node at index.
##### If using a language that has no pointers (such as Python), you can assume you have access to ```get_pointer``` and ```dereference_pointer``` functions that converts between nodes and memory addresses.
#### Click [__*here*__](Solution/Day-006.cpp/) for solution.
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
## Problem 33
##### This problem was asked by Microsoft.
##### Compute the running median of a sequence of numbers.
##### That is, given a stream of numbers, print out the median of the list so far on each new element.
##### Recall that the median of an even-numbered list is the average of the two middle numbers.
##### For example, given the sequence [2, 1, 5, 7, 2, 0, 5], your algorithm should print out:
```
   2
   1.5
   2
   3.5
   2
   2
   2
```
#### Click [__*here*__](Solution/Day-033.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/find-median-from-data-stream/) to visit [*LeetCode*](https://leetcode.com/) for this question.
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
## Problem 101
##### This problem was asked by Alibaba.
##### Given an even number (greater than ``2``), return two prime numbers whose sum will be equal to the given number.
##### A solution will always exist. See [Goldbach’s conjecture](https://en.wikipedia.org/wiki/Goldbach%27s_conjecture).
##### Example:
##### Input: ``4`` 
##### Output: ``2 + 2 = 4``  
##### If there are more than one solution possible, return the lexicographically smaller solution.
##### If ``[a, b]`` is one solution with ``a <= b``, and ``[c, d]`` is another solution with ``c <= d``, then
##### ``[a, b] < [c, d]``
##### ``If a < c OR a==c AND b < d.``

#### Click [__*here*__](Solution/Day-101.cpp) for solution.
---
## Problem 102
##### This problem was asked by Lyft.
##### Given a list of integers and a number ``K``, return which contiguous elements of the list sum to ``K``.
##### For example, if the list is ``[1, 2, 3, 4, 5]`` and ``K`` is ``9``, then it should return ``[2, 3, 4]``, since ``2 + 3 + 4 = 9``.

#### Click [__*here*__](Solution/Day-102.cpp) for solution.
---
## Problem 103
##### This problem was asked by Square.
##### Given a string and a set of characters, return the shortest substring containing all the characters in the set.
##### For example, given the string ``"figehaeci"`` and the set of characters ``{a, e, i}``, you should return ``"aeci"``.
##### If there is no substring containing all the characters in the set, return ``null``.

#### Click [__*here*__](Solution/Day-103.cpp) for solution.
---
## Problem 104
##### This problem was asked by Google.
##### Determine whether a doubly linked list is a palindrome. What if it’s singly linked?
##### For example, ``1 -> 4 -> 3 -> 4 -> 1`` returns ``True`` while ``1 -> 4`` returns ``False``.

#### Click [__*here*__](Solution/Day-104.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/palindrome-linked-list/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 105
##### This problem was asked by Facebook.
##### Given a function ``f``, and ``N`` return a debounced ``f`` of ``N`` milliseconds.
##### That is, as long as the debounced ``f`` continues to be invoked, ``f`` itself will not be called for ``N`` milliseconds.
#### Click [__*here*__](Solution/Day-105.cpp) for solution.
---
## Problem 106
##### This problem was asked by Pinterest.
##### Given an integer list where each number represents the number of hops you can make, determine whether you can reach to the last index starting at index `0`.
##### For example, ``[2, 0, 1, 0]`` returns ``True`` while ``[1, 1, 0, 1]`` returns ``False``.
#### Click [__*here*__](Solution/Day-106.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/jump-game/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 107
##### This problem was asked by Microsoft.
##### Print the nodes in a binary tree level-wise. For example, the following should print ``1, 2, 3, 4, 5``.
```
          1
         / \
        2   3
           / \
          4   5
```
#### Click [__*here*__](Solution/Day-107.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/binary-tree-level-order-traversal/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 108
##### This problem was asked by Google.
##### Given two strings ``A`` and ``B``, return whether or not ``A`` can be shifted some number of times to get ``B``.
##### For example, if ``A`` is ``abcde`` and ``B`` is ``cdeab``, return ``true``. If ``A`` is ``abc`` and ``B`` is ``acb``, return ``false``.
#### Click [__*here*__](Solution/Day-108.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/rotate-string/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 109
##### This problem was asked by Cisco.
##### Given an unsigned `8-bit integer`, swap its `even and odd bits`. The 1st and 2nd bit should be swapped, the 3rd and 4th bit should be swapped, and so on.
##### For example, `10101010` should be `01010101`.`11100010` should be `11010001`.
##### Bonus: Can you do this in one line?
#### Click [__*here*__](Solution/Day-109.cpp) for solution.
---
### Problem 110 
##### This problem was asked by Facebook.
##### Given a binary tree, `return all paths from the root to leaves`.
##### For example, given the tree:
```
           1
          / \
         2   3
            / \
           4   5

```
##### Return `[[1, 2], [1, 3, 4], [1, 3, 5]]`.
#### Click [__*here*__](Solution/Day-110.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/binary-tree-paths/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 111
##### This problem was asked by Google.
##### Given a word `W` and a string `S`, find all starting indices in `S` which are anagrams of `W`.
##### For example, given that `W` is `"ab"`, and `S` is `"abxaba"`, return `0`, `3`, and `4`.
#### Click [__*here*__](Solution/Day-111.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/find-all-anagrams-in-a-string/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 112 
##### This problem was asked by Twitter.
##### Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree. Assume that each node in the tree also has a pointer to its parent.
##### According to the [definition of LCA on Wikipedia](https://en.wikipedia.org/wiki/Lowest_common_ancestor): “The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).”
#### Click [__*here*__](Solution/Day-112.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 113
##### This problem was asked by Google.
##### Given a string of words delimited by spaces, reverse the words in string. For example, given `"hello world here"`, return `"here world hello"`
##### Follow-up: given a mutable string representation, can you perform this operation in-place?
#### Click [__*here*__](Solution/Day-113.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/reverse-words-in-a-string/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 114
##### This problem was asked by Facebook.
##### Given a string and a set of delimiters, reverse the words in the string while maintaining the `relative order of the delimiters`. For example, given `"hello/world:here"`, return `"here/world:hello"`
##### Follow-up: Does your solution work for the following cases: `"hello/world:here/"`, `"hello//world:here"`
#### Click [__*here*__](Solution/Day-114.cpp) for solution.
---
## Problem 115
##### This problem was asked by Google.
##### Given two non-empty binary trees `s` and `t`, check whether tree `t` has exactly the same structure and node values with a subtree of `s`. A subtree of `s` is a tree consists of a node in `s` and all of this node’s descendants. The tree `s` could also be considered as a subtree of itself.
#### Click [__*here*__](Solution/Day-115.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/same-tree/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 116
##### This problem was asked by Jane Street.
##### Generate a finite, but an arbitrarily large binary tree quickly in `O(1)`.
##### That is, `generate()` should return a tree whose size is unbounded but finite.
#### Click [__*here*__](Solution/Day-116.cpp) for solution.
---
## Problem 117
##### This problem was asked by Facebook.
##### Given a binary tree, return the level of the tree with minimum sum.
#### Click [__*here*__](Solution/Day-117.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 118
##### This problem was asked by Google.
##### Given a sorted list of integers, square the elements and give the output in sorted order.
#### Click [__*here*__](Solution/Day-118.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/squares-of-a-sorted-array/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 119
##### This problem was asked by Google.
##### Given a set of closed intervals, find the smallest set of numbers that covers all the intervals. If there are multiple smallest sets, return any of them.
##### For example, given the intervals `[0, 3], [2, 6], [3, 4], [6, 9]` one set of numbers that covers all these intervals is `{3, 6}`.
#### Click [__*here*__](Solution/Day-119.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/squares-of-a-sorted-array/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 122 
##### This question was asked by Zillow.
##### You are given a 2-d matrix where each cell represents number of coins in that cell. Assuming we start at matrix[0][0], and can only move right or down, find the maximum number of coins you can collect by the bottom right corner.
##### For example, in this matrix
```
0 3 1 1
2 0 0 4
1 5 3 1
```
##### The most we can collect is 0 + 2 + 1 + 5 + 3 + 1 = 12 coins.
#### Click [__*here*__](Solution/Day-122.cpp) for solution.
#### Click [__*here*__](https://binarysearch.com/problems/Collecting-Coins) to visit for this question.
---
## Problem 124 
##### This problem was asked by Microsoft.
##### You have ```n``` fair coins and you flip them all at the same time. Any that come up tails you set aside. The ones that come up heads you flip again. How many rounds do you expect to play before only one coin remains?
##### Write a function that, given ```n```, returns the number of rounds you'd expect to play until one coin remains.
#### Click [__*here*__](Solution/Day-124.cpp) for solution.
---
## Problem 128
##### The Tower of Hanoi is a puzzle game with three rods and n disks, each a different size.
##### All the disks start off on the first rod in a stack. They are ordered by size, with the largest disk on the bottom and the smallest one at the top.
##### The goal of this puzzle is to move all the disks from the first rod to the last rod while following these rules:
##### You can only move one disk at a time.
##### A move consists of taking the uppermost disk from one of the stacks and placing it on top of another stack.
##### You cannot place a larger disk on top of a smaller disk.
##### Write a function that prints out all the steps necessary to complete the Tower of Hanoi. You should assume that the rods are numbered, with the first rod being ```1```, the second (auxiliary) rod being ```2```, and the last (goal) rod being ```3```.
##### For example, with ```n = 3```, we can do this in ```7``` moves:
```
Move 1 to 3
Move 1 to 2
Move 3 to 2
Move 1 to 3
Move 2 to 1
Move 2 to 3
Move 1 to 3
```
#### Click [__*here*__](Solution/Day-128.cpp) for solution.
---
## Problem 133
##### This problem was asked by Amazon.
##### Given a node in a binary search tree, return the next bigger element, also known as the inorder successor.
##### For example, the inorder successor of 22 is 30.
```
       10
      /  \
     5    30
         /  \
       22    35
```
##### You can assume each node has a parent pointer.
#### Click [__*here*__](Solution/Day-133.cpp) for solution.
#### Click [__*here*__](https://practice.geeksforgeeks.org/problems/inorder-successor-in-bst/1#) to visit for this question.
---
## Problem 134 
##### This problem was asked by Facebook.
##### You have a large array with most of the elements as zero.
##### Use a more space-efficient data structure, ```SparseArray```, that implements the same interface:
##### * ```init(arr, size)```: initialize with the original large array and size.
##### * ```set(i, val)```: updates index at ```i``` with ```val```.
##### * ```get(i)```: gets the value at index ```i```.
#### Click [__*here*__](Solution/Day-134.cpp) for solution.
---
## Problem 136
##### This question was asked by Google.
##### Given an N by M matrix consisting only of 1's and 0's, find the largest rectangle containing only 1's and return its area.
##### For example, given the following matrix:
```
[[1, 0, 0, 0],
 [1, 0, 1, 1],
 [1, 0, 1, 1],
 [0, 1, 0, 0]]
```
##### Return ```4```.
#### Click [__*here*__](Solution/Day-136.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/maximal-rectangle/) to visit for this question.
---
## Problem 166 
##### This problem was asked by Uber.
##### Implement a 2D iterator class. It will be initialized with an array of arrays, and should implement the following methods:
##### * ```next()```: returns the next element in the array of arrays. If there are no more elements, raise an exception.
##### * ```has_next()```: returns whether or not the iterator still has elements left.
##### For example, given the input ```[[1, 2], [3], [], [4, 5, 6]]```, calling ```next()``` repeatedly should output ```1, 2, 3, 4, 5, 6```.
##### Do not use ```flatten``` or otherwise clone the arrays. Some of the arrays can be empty.
#### Click [__*here*__](Solution/Day-166.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/flatten-nested-list-iterator/) to visit for this question.
--- 
## Problem 170
##### This problem was asked by Facebook.
##### Given a start word, an end word, and a dictionary of valid words, find the shortest transformation sequence from start to end such that only one letter is changed at each step of the sequence, and each transformed word exists in the dictionary. If there is no possible transformation, return null. Each word in the dictionary have the same length as start and end and is lowercase.
##### For example, given ```start = "dog"```, ```end = "cat"```, and ```dictionary = {"dot", "dop", "dat", "cat"}, return ["dog", "dot", "dat", "cat"]```.
##### Given ```start = "dog"```, ```end = "cat"```, and ```dictionary = {"dot", "tod", "dat", "dar"}```, return ```null``` as there is no possible transformation from ```dog``` to ```cat```.
#### Click [__*here*__](Solution/Day-170.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/word-ladder-ii/) to visit for this question.
---
## Problem 178
##### This problem was asked by Two Sigma.
##### Alice wants to join her school's Probability Student Club. Membership dues are computed via one of two simple probabilistic games.
##### The first game: roll a die repeatedly. Stop rolling once you get a five followed by a six. Your number of rolls is the amount you pay, in dollars.
##### The second game: same, except that the stopping condition is a five followed by a five.
##### Which of the two games should Alice elect to play? Does it even matter? Write a program to simulate the two games and calculate their expected value.
#### Click [__*here*__](Solution/Day-178.cpp) for solution.
---
## Problem 180
##### This problem was asked by Google.
##### Given a stack of ```N``` elements, interleave the first half of the stack with the second half reversed using only one other queue. This should be done in-place.
##### Recall that you can only ```push``` or ```pop``` from a ```stack```, and ```enqueue``` or ```dequeue``` from a ```queue```.
##### For example, if the stack is ```[1, 2, 3, 4, 5]```, it should become ```[1, 5, 2, 4, 3]```. If the stack is ```[1, 2, 3, 4]```, it should become ```[1, 4, 2, 3]```.
##### Hint: Try working backwards from the end state.
#### Click [__*here*__](Solution/Day-180.cpp) for solution.
---
## Problem 185
##### This problem was asked by Google.
##### Given two rectangles on a 2D graph, return the area of their intersection. If the rectangles don't intersect, return 0.
##### For example, given the following rectangles:
```
{
    "top_left": (1, 4),
    "dimensions": (3, 3) # width, height
}
```
and
```
{
    "top_left": (0, 5),
    "dimensions": (4, 3) # width, height
}
```
##### return ```6```.
#### Click [__*here*__](Solution/Day-185.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/rectangle-area/) to visit [*LeetCode*](https://leetcode.com/) for similar question.
---
## Problem 191 
##### This problem was asked by Stripe.
##### Given a collection of intervals, find the minimum number of intervals you need to remove to make the rest of the intervals non-overlapping.
##### Intervals can "touch", such as ```[0, 1]``` and ```[1, 2]```, but they won't be considered overlapping.
##### For example, given the intervals ```(7, 9), (2, 4), (5, 8)```, return ```1``` as the last interval can be removed and the first two won't overlap.
##### The intervals are not necessarily ```sorted``` in any order.
#### Click [__*here*__](Solution/Day-191.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/non-overlapping-intervals/) to visit [*LeetCode*](https://leetcode.com/) for similar question.
---
## Problem 200 
##### This problem was asked by Microsoft.
##### Let X be a set of n intervals on the real line. We say that a set of points P "stabs" X if every interval in X contains at least one point in P. Compute the smallest set of points that stabs X.
##### For example, given the intervals ```[(1, 4), (4, 5), (7, 9), (9, 12)]```, you should return ```[4, 9]```.
#### Click [__*here*__](Solution/Day-200.cpp) for solution.
---
## Problem 214
##### This problem was asked by Stripe.
##### Given an integer `n`, return the length of the longest consecutive run of `1s` in its binary representation.
##### For example, given `156`, you should return `3`.
#### Click [__*here*__](Solution/Day-214.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/max-consecutive-ones/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 231
##### This problem was asked by IBM.
##### Given a string with repeated characters, rearrange the string so that no two adjacent characters are the same. If this is not possible, return None.
##### For example, given ```"aaabbc"```, you could return ```"ababac"```. Given ```"aaab"```, return ```None```.
#### Click [__*here*__](Solution/Day-231.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/reorganize-string/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 232
##### This problem was asked by Google.
##### Implement a PrefixMapSum class with the following methods:
```insert(key: str, value: int)```: Set a given key's value in the map. If the key already exists, overwrite the value.
```sum(prefix: str)```: Return the sum of all values of keys that begin with a given prefix.
##### For example, you should be able to run the following code:
```
mapsum.insert("columnar", 3)
assert mapsum.sum("col") == 3
mapsum.insert("column", 2)
assert mapsum.sum("col") == 5
```
#### Click [__*here*__](Solution/Day-232.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/map-sum-pairs/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 241
##### This problem was asked by Palantir.
##### In academia, the h-index is a metric used to calculate the impact of a researcher's papers. It is calculated as follows:
##### A researcher has index ```h``` if at least ```h``` of her ```N``` papers have ```h``` citations each. If there are multiple ```h``` satisfying this formula, the maximum is chosen.
##### For example, suppose ```N = 5```, and the respective citations of each paper are ```[4, 3, 0, 1, 5]```. Then the ```h-index``` would be ```3```, since the researcher has ```3``` papers with at least ```3``` citations.
##### Given a list of paper citations of a researcher, calculate their h-index.
#### Click [__*here*__](Solution/Day-241.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/h-index-ii/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 242
##### You are given an array of length 24, where each element represents the number of new subscribers during the corresponding hour. Implement a data structure that efficiently supports the following:
##### `update(hour: int, value: int)`: Increment the element at index hour by value.
##### `query(start: int, end: int)`: Retrieve the number of subscribers that have signed up between `start` and `end` (inclusive).
##### You can assume that all values get cleared at the end of the day, and that you will not be asked for start and end values that wrap around midnight.
#### Click [__*here*__](Solution/Day-242.cpp) for solution.
---
## Problem 244
##### The Sieve of Eratosthenes is an algorithm used to generate all prime numbers smaller than N. The method is to take increasingly larger prime numbers, and mark their multiples as composite.
##### 
##### For example, to find all primes less than 100, we would first mark [4, 6, 8, ...] (multiples of two), then [6, 9, 12, ...] (multiples of three), and so on. Once we have done this for all primes less than N, the unmarked numbers that remain will be prime.
##### 
##### Implement this algorithm.
##### 
##### Bonus: Create a generator that produces primes indefinitely (that is, without taking `N` as an input).
#### Click [__*here*__](Solution/Day-244.cpp) for solution.
---
## Problem 255
##### This problem was asked by Microsoft.
##### The transitive closure of a graph is a measure of which vertices are reachable from other vertices. It can be represented as a matrix M, where ```M[i][j] == 1``` if there is a path between vertices ```i``` and ```j```, and otherwise ```0```.
##### For example, suppose we are given the following graph in adjacency list form:
```
      graph = [
          [0, 1, 3],
          [1, 2],
          [2],
          [3]
      ]
```
##### The transitive closure of this graph would be:
```
  [1, 1, 1, 1]
  [0, 1, 1, 0]
  [0, 0, 1, 0]
  [0, 0, 0, 1]
```
##### Given a graph, find its transitive closure.
#### Click [__*here*__](Solution/Day-255.cpp) for solution.
---
## Problem 256
##### This problem was asked by Fitbit.
##### Given a linked list, rearrange the node values such that they appear in alternating ```low -> high -> low -> high ...``` form. For example, given ```1 -> 2 -> 3 -> 4 -> 5```, you should return ```1 -> 3 -> 2 -> 5 -> 4```.
#### Click [__*here*__](Solution/Day-256.cpp) for solution.
---
## Problem 257
##### This problem was asked by WhatsApp.
##### Given an array of integers out of order, determine the bounds of the smallest window that must be sorted in order for the entire array to be sorted. For example, given ```[3, 7, 5, 6, 9]```, you should return ```(1, 3)```.
#### Click [__*here*__](Solution/Day-257.cpp) for solution.
---
## Problem 258
##### This problem was asked by Morgan Stanley.
##### In Ancient Greece, it was common to write text with the first line going left to right, the second line going right to left, and continuing to go back and forth. This style was called "boustrophedon".
##### Given a binary tree, write an algorithm to print the nodes in boustrophedon order.
##### For example, given the following tree:
```
           1
        /     \
      2         3
     / \       / \
    4   5     6   7
```
##### You should return ```[1, 3, 2, 4, 5, 6, 7]```.
#### Click [__*here*__](Solution/Day-258.cpp) for solution.
---
## Problem 259
##### This problem was asked by Two Sigma.
##### Ghost is a two-person word game where players alternate appending letters to a word. The first person who spells out a word, or creates a prefix for which there is no possible continuation, loses. Here is a sample game:
##### 
##### * Player 1: ```g``` 
##### * Player 2: ```h```  
##### * Player 1: ```o```
##### * Player 2: ```s``` 
##### * Player 1: ```t [loses]``` 
##### Given a dictionary of words, determine the letters the first player should start with, such that with optimal play they cannot lose.
##### For example, if the dictionary is ```["cat", "calf", "dog", "bear"]```, the only winning start letter would be ```b```.
#### Click [__*here*__](Solution/Day-259.cpp) for solution.
---
## Problem 260
##### This problem was asked by Pinterest.
##### The sequence ```[0, 1, ..., N]``` has been jumbled, and the only clue you have for its order is an array representing whether each number is larger or smaller than the last. Given this information, reconstruct an array that is consistent with it. For example, given ```[None, +, +, -, +]```, you could return ```[1, 2, 3, 0, 4]```.

#### Click [__*here*__](Solution/Day-260.cpp) for solution.
---
## Problem 261
##### This problem was asked by Amazon.
##### Huffman coding is a method of encoding characters based on their frequency. Each letter is assigned a variable-length binary string, such as ```0101``` or ```111110```, where shorter lengths correspond to more common letters. To accomplish this, a binary tree is built such that the path from the root to any leaf uniquely maps to a character. When traversing the path, descending to a left child corresponds to a ```0``` in the prefix, while descending right corresponds to ```1```.
##### Here is an example tree (note that only the leaf nodes have letters):
```      
              *
            /   \
          *       *
         / \     / \
        *   a   t   *
       /             \
      c               s
```
##### With this encoding, cats would be represented as ```0000110111```.
##### Given a dictionary of character frequencies, build a Huffman tree, and use it to determine a mapping between characters and their encoded binary strings.
#### Click [__*here*__](Solution/Day-261.cpp) for solution.
---
## Problem 262 
##### This problem was asked by Mozilla.
##### A bridge in a connected (undirected) graph is an edge that, if removed, causes the graph to become disconnected. Find all the bridges in a graph.
#### Click [__*here*__](Solution/Day-262.cpp) for solution.
---
## Problem 263
##### This problem was asked by Nest.
##### Create a basic sentence checker that takes in a stream of characters and determines whether they form valid sentences. If a sentence is valid, the program should print it out.
##### We can consider a sentence valid if it conforms to the following rules:
##### 1. The sentence must start with a capital letter, followed by a lowercase letter or a space.
##### 2. All other characters must be lowercase letters, separators (```,```,```;```,```:```) or terminal marks (```.```,```?```,```!```,```‽```).
##### 3. There must be a single space between each word.
##### 4. The sentence must end with a terminal mark immediately following a word.
#### Click [__*here*__](Solution/Day-263.cpp) for solution.
---
## Problem 265
##### This problem was asked by Atlassian.
##### MegaCorp wants to give bonuses to its employees based on how many lines of codes they have written. They would like to give the smallest positive amount to each worker consistent with the constraint that if a developer has written more lines of code than their neighbor, they should receive more money.
##### Given an array representing a line of seats of employees at MegaCorp, determine how much each one should get paid.
##### For example, given ```[10, 40, 200, 1000, 60, 30]```, you should return ```[1, 2, 3, 4, 2, 1]```.
#### Click [__*here*__](Solution/Day-265.cpp) for solution.
---
## Problem 269
##### This problem was asked by Microsoft.
##### You are given an string representing the initial conditions of some dominoes. Each element can take one of three values:
##### * ```L```, meaning the domino has just been pushed to the left,
##### * ```R```, meaning the domino has just been pushed to the right, or
##### * ```.```, meaning the domino is standing still.
##### Determine the orientation of each tile when the dominoes stop falling. Note that if a domino receives a force from the left and right side simultaneously, it will remain upright.
##### For example, given the string ```.L.R....L```, you should return ```LL.RRRLLL```.
##### Given the string ```..R...L.L```, you should return ```..RR.LLLL```.
#### Click [__*here*__](Solution/Day-269.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/push-dominoes/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 272
##### This problem was asked by Spotify.
##### Write a function, ```throw_dice(N, faces, total)```, that determines how many ways it is possible to throw ```N``` dice with some number of faces each to get a specific total.
##### For example, ```throw_dice(3, 6, 7)``` should equal ```15```.
#### Click [__*here*__](Solution/Day-272.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/number-of-dice-rolls-with-target-sum/) to visit [*LeetCode*](https://leetcode.com/) for this question.
---
## Problem 273
##### This problem was asked by Apple.
##### A fixed point in an array is an element whose value is equal to its index. Given a sorted array of distinct elements, return ```a fixed point```, if one exists. Otherwise, return ```False```.
##### For example, given ```[-6, 0, 2, 40]```, you should return ```2```. Given ```[1, 5, 7, 8]```, you should return ```False```.
#### Click [__*here*__](Solution/Day-273.cpp) for solution.
---
## Problem 285
##### This problem was asked by Mailchimp.
##### You are given an array representing the heights of neighboring buildings on a city street, from east to west. The city assessor would like you to write an algorithm that returns how many of these buildings have a view of the setting sun, in order to properly value the street.
##### For example, given the array ```[3, 7, 8, 3, 6, 1]```, you should return ```3```, since the top floors of the buildings with heights ```8, 6, and 1``` all have an unobstructed view to the west.
##### Can you do this using just one forward pass through the array?
#### Click [__*here*__](Solution/Day-285.cpp) for solution.
#### Click [__*here*__](https://practice.geeksforgeeks.org/problems/buildings-receiving-sunlight3032/1) for this question.
---
## Problem 282 
##### This problem was asked by Netflix.
##### Given an array of integers, determine whether it contains a Pythagorean triplet. Recall that a Pythogorean triplet ```(a, b, c)``` is defined by the equation ```a^2```+ ```b^2```= ```c^2```.
#### Click [__*here*__](Solution/Day-282.cpp) for solution.
#### Click [__*here*__](https://www.geeksforgeeks.org/find-pythagorean-triplet-in-an-unsorted-array/) for this question.
---
## Problem 287
##### This problem was asked by Quora.
##### You are given a list of ```(website, user)``` pairs that represent users visiting websites. Come up with a program that identifies the top k pairs of websites with the greatest similarity.
##### For example, suppose ```k = 1```, and the list of tuples is:
```
[('a', 1), ('a', 3), ('a', 5),
 ('b', 2), ('b', 6),
 ('c', 1), ('c', 2), ('c', 3), ('c', 4), ('c', 5)
 ('d', 4), ('d', 5), ('d', 6), ('d', 7),
 ('e', 1), ('e', 3), ('e': 5), ('e', 6)]
``` 
##### Then a reasonable similarity metric would most likely conclude that a and e are the most similar, so your program should return ```[('a', 'e')]```.
#### Click [__*here*__](Solution/Day-287.cpp) for solution.
---
## Problem 288
##### This problem was asked by Salesforce.
##### The number ```6174``` is known as Kaprekar's contant, after the mathematician who discovered an associated property: for all four-digit numbers with at least two distinct digits, repeatedly applying a simple procedure eventually results in this value. The procedure is as follows:
##### For a given input ```x```, create two new numbers that consist of the digits in ```x``` in ascending and descending order.
##### Subtract the smaller number from the larger number.
##### For example, this algorithm terminates in three steps when starting from ```1234```:
##### 
##### * ```4321 - 1234 = 3087```
##### * ```8730 - 0378 = 8352```
##### * ```8532 - 2358 = 6174```
##### Write a function that returns how many steps this will take for a given input ```N```.
#### Click [__*here*__](Solution/Day-288.cpp) for solution.
---
## Problem 340
##### This problem was asked by Google.
##### Given a set of points ```(x, y)``` on a ```2D``` cartesian plane, find the two closest points. For example, given the points ```[(1, 1), (-1, -1), (3, 4), (6, 1), (-1, -6), (-4, -3)]```, return ```[(-1, -1), (1, 1)]```.
#### Click [__*here*__](Solution/Day-340.cpp) for solution.
---
## Problem 341
##### This problem was asked by Google.
##### You are given an N by N matrix of random letters and a dictionary of words. Find the maximum number of words that can be packed on the board from the given dictionary.
##### A word is considered to be able to be packed on the board if:
##### It can be found in the dictionary
##### It can be constructed from untaken letters by other words found so far on the board
##### The letters are adjacent to each other (vertically and horizontally, not diagonally).
##### Each tile can be visited only once by any word.
##### For example, given the following dictionary:
```
{ 'eat', 'rain', 'in', 'rat' }
```
and matrix:
```
[['e', 'a', 'n'],
 ['t', 't', 'i'],
 ['a', 'r', 'a']]
```
##### Your function should return ```3```, since we can make the words ```'eat', 'in', and 'rat'``` without them touching each other. We could have alternatively made ```'eat'``` and ```'rain'```, but that would be incorrect since that's only ```2``` words. 
#### Click [__*here*__](Solution/Day-341.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/word-search-ii/) for this question.
---
## Problem 351 
##### This problem was asked by Quora.
##### Word sense disambiguation is the problem of determining which sense a word takes on in a particular setting, if that word has multiple meanings. For example, in the sentence "I went to get money from the bank", bank probably means the place where people deposit money, not the land beside a river or lake.
##### Suppose you are given a list of meanings for several words, formatted like so:
```
{
    "word_1": ["meaning one", "meaning two", ...],
    ...
    "word_n": ["meaning one", "meaning two", ...]
}
```
##### Given a sentence, most of whose words are contained in the meaning list above, create an algorithm that determines the likely sense of each possibly ambiguous word.
#### Click [__*here*__](Solution/Day-351.cpp) for solution.
---
## Problem 362 
##### This problem was asked by Twitter.
##### A ```strobogrammatic``` number is a positive number that appears the same after being rotated ```180``` degrees. For example, ```16891``` is strobogrammatic.
##### Create a program that finds all strobogrammatic numbers with ```N digits```.
#### Click [__*here*__](Solution/Day-273.cpp) for solution.
----
## Problem 547
##### This problem was asked by Salesforce.
##### Given an array of integers, find the maximum XOR of any two elements.
#### Click [__*here*__](Solution/Day-547.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 558
##### This problem was asked by Google.
##### The area of a circle is defined as πr^2. Estimate π to 3 decimal places using a Monte Carlo method.
##### Hint: The basic equation of a circle is x^2 + y^2 = r^2.
#### Click [__*here*__](Solution/Day-558.cpp) for solution.
----
## Problem 559
##### This problem was asked by Google.
##### Given k sorted singly linked lists, write a function to merge all the lists into one sorted singly linked list.
#### Click [__*here*__](Solution/Day-559.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/merge-k-sorted-lists/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 560
##### This problem was recently asked by Google.
##### Given a list of numbers and ```a``` number ```k```, return whether any two numbers from the list add up to ```k```.
##### For example, given ```[10, 15, 3, 7]``` and ```k``` of ```17```, return true since ```10 + 7``` is ```17```.
##### Bonus: Can you do this in one pass?
#### Click [__*here*__](Solution/Day-560.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/two-sum/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 561 
##### This problem was asked by Etsy.
##### Given a sorted array, convert it into a height-balanced binary search tree.
#### Click [__*here*__](Solution/Day-561.cpp) for solution.
#### Click [__*here*__](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 562
##### This problem was asked by Uber.
##### Given an array of integers, return a new array such that each element at index i of 
##### the new array is the product of all the numbers in the original array except the one at i.  
##### For example, if our input was ``[1, 2, 3, 4, 5]``, the expected output would be ``[120, 60, 40, 30, 24]``. 
##### If our input was ``[3, 2, 1]``, the expected output would be ``[2, 3, 6]``.  
##### Follow-up: what if you __can't use division__?
#### Click [__*here*__](Solution/Day-562.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/product-of-array-except-self/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 567
##### This problem was asked by Jane Street.
##### ```cons(a, b)``` constructs a pair, and ```car(pair)``` and ```cdr(pair)``` returns the first and last element of that pair. For example, ```car(cons(3, 4))``` returns ```3```, and ```cdr(cons(3, 4))``` returns ```4```.
##### Given this implementation of cons:
##### def cons(a, b):
#####     def pair(f):
#####         return f(a, b)
#####     return pair
##### Implement car and cdr.
#### Click [__*here*__](Solution/Day-00567.cpp/) for solution.
---
## Problem 568 
##### This problem was asked by Google.
##### Given a sorted list of integers, square the elements and give the output in sorted order.
##### For example, given ```[-9, -2, 0, 2, 3]```, return ```[0, 4, 4, 9, 81]```.
#### Click [__*here*__](Solution/Day-568.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/squares-of-a-sorted-array/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 574
##### This problem was asked by Amazon.
##### Implement a bit array.
##### A bit array is a space efficient array that holds a value of ```1``` or ```0``` at each index.
#####   ```init(size)```: initialize the array with size
#####   ```set(i, val)```: updates index at ```i``` with ```val``` where ```val``` is either ```1``` or ```0```.
#####   ```get(i)```: gets the value at index ```i```.
#### Click [__*here*__](Solution/Day-574.cpp) for solution.
----
## Problem 577
##### This problem was asked by Dropbox.
##### Given a list of words, determine whether the words can be chained to form a circle. A word ```X``` can be placed in front of another word ```Y``` in a circle if the last character of ```X``` is same as the first character of ```Y```.
##### For example, the words ```['chair', 'height', 'racket', touch', 'tunic']``` can form the following circle: ```chair --> racket --> touch --> height --> tunic --> chair```
#### Click [__*here*__](Solution/Day-577.cpp/) for solution.
----
## Problem 578
##### This problem was asked by Bloomberg.
##### Determine whether there exists a one-to-one character mapping from one string ```s1``` to another ```s2```.
##### For example, given ```s1 = abc``` and ```s2 = bcd```, return ```true``` since we can map ```a``` to ```b```,``` b``` to ```c```, and ```c``` to ```d```.
##### Given ```s1 = foo``` and ```s2 = bar```, return ```false``` since the ```o``` cannot map to two characters.
#### Click [__*here*__](Solution/Day-578.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/isomorphic-strings/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 579
##### This problem was asked by Flipkart.
##### Starting from ```0``` on a number line, you would like to make a series of jumps that lead to the integer ```N```.
##### On the ith jump, you may move exactly ```i``` places to the left or right.
##### Find a path with the fewest number of jumps required to get from ```0``` to ```N```.
#### Click [__*here*__](Solution/Day-579.cpp/) for solution.
#### Click [__*here*__](https://leetcode.com/problems/reach-a-number/) to visit [*LeetCode*](https://leetcode.com/) for this question.
----
## Problem 580
##### This question was asked by Apple.
##### Given a binary tree, find a minimum path sum from root to a leaf.
##### For example, the minimum path in this tree is [10, 5, 1, -1], which has sum 15.
```
           10
          /  \
         5    5
          \     \
            2    1
                /
              -1 
```
#### Click [__*here*__](Solution/Day-580.cpp/) for solution.
---
## Problem 582
##### This problem was asked by Microsoft.
##### Let X be a set of n intervals on the real line. We say that a set of points P "stabs" X if every interval in X contains at least one point in P. Compute the smallest set of points that stabs X.
##### For example, given the intervals ```[(1, 4), (4, 5), (7, 9), (9, 12)]```, you should return ```[4, 9]```.
#### Click [__*here*__](Solution/Day-582.cpp) for solution.
---
