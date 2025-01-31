## STLs 1 Session: 
### `Pairs, Arrays, Vectors, Deque, Queue, Stack, Priority Queue, Monotonic Stack`
[Session Video...🎞](https://www.youtube.com/watch?v=HqlQ-FNt_wA&ab_channel=AhmedHany)

---
## What is Stls
Standard Template Library set of template that provides the implementation of common data structures and algorithms

## Components of STL
- Containers
- Algorithms
- Iterators

## Ask this question
- Why? when?
- How To use?
- How does it work? (Data Structure)

## 1. Arrays (`T arr_name[size];`)
- Fixed-size containers
- Random access in O(1)
- Memory: Contiguous
---


# 2. Pair (`pair<T1,T2> pairName`)

- A **pair** is a container that stores two elements as a single unit.
- It is part of the `<utility>` header (included in `<iostream>` and other STL headers).
- Useful for combining two values (e.g., coordinates, key-value pairs).

**Practice Problems (Sort People by Name and Salary)**
- 
- [ ] Given n people with their names and salaries, sort them in ascending order of names. If two people have the same name, sort them in ascending order of salary.


- Input :
  - An integer n (number of people).
  - n pairs of (name, salary).

- Output 
  - Print the sorted list of people.
  
****[Soluotion](https://gist.github.com/Ahmedhany-1/1661a5f8a6485d7de1c56bc469459249)****
---
---
## 3. Vectors (`vector<T> vec_name(size, value);`)

- Dynamic arrays which can be resized automatically when new elements are added or removed.

**Operations && Complexity**

| **Operation**           | **Description**                       | **Time Complexity**         |
|-------------------------|---------------------------------------|-----------------------------|
| **Access**              |                                       |                             |
| `v[i]`                  | Access element at index `i`           | **O(1)**                    |
| `v.front()`             | First element                         | **O(1)**                    |
| `v.back()`              | Last element                          | **O(1)**                    |
|                         |                                       |                             |
| **Add Elements**        |                                       |                             |
| `v.push_back(x)`        | Add to the end                        | **O(1)** (amortized)        |
| `v.emplace_back(args)`  | Construct element in-place at the end | **O(1)** (amortized)        |
| `v.insert(pos, x)`      | Insert at position `pos`              | **O(n)** (elements shifted) |
|                         |                                       |                             |
| **Remove Elements**     |                                       |                             |
| `v.pop_back()`          | Remove last element                   | **O(1)**                    |
| `v.erase(pos)`          | Remove element at `pos`               | **O(n)** (elements shifted) |
| `v.erase(start, end)`   | Remove range of elements              | **O(n)**                    |
| `v.clear()`             | Remove all elements                   | **O(n)** (destructors)      |
|                         |                                       |                             |
| **Size/algo**           |                                       |                             |
| `v.size()`              | Current number of elements            | **O(1)**                    |
| `v.empty()`             | Check if vector is empty              | **O(1)**                    |
| `reserve(start, end)`   | Reverse elements                      | **O(n)**                    |    
| `sort(start, end)`      | Sort elements                         | **O(nlog(n))**              |    


**Problem: Max Consecutive Ones**  
- [ ] [LeetCode 485](https://leetcode.com/problems/max-consecutive-ones/)

  - **[Soluotion](https://leetcode.com/problems/max-consecutive-ones/submissions/1525884070)**

**Problem: Array**  
- [ ] [vjudge. Array](https://vjudge.net/problem/CodeForces-300A)
  - **[Soluotion](https://vjudge.net/solution/57967861)**
---
# 4. Iterators: 
- begin(), end(), rbegin(), rend()

- Used to traverse containers in STL.
### Forward Iteration `begin()` and `end()`
### Reverse Iteration `rbegin()` and `rend()`

| Function   | Description                                | 
|------------|--------------------------------------------|
| `begin()`  | Points to the **first element**            |
| `end()`    | Points to **one past the last element**    | 
| `rbegin()` | Points to the **last element**             | 
| `rend()`   | Points to **one before the first element** |

- ++it moves backward in the Reverse container .
---

## 5. Deque (`deque<T> deq_name(size, value);`)

- Double-ended queue
- same Operations in vector
- `push_front()`, `pop_front()` O(1) access time

**Problem: Ada and Queue**  
- [ ] [vjudge. Ada and Queue](https://vjudge.net/problem/SPOJ-ADAQUEUE)
  - **[Soluotion](https://vjudge.net/solution/57968750)**


**Problem: Rotate Array**  
- [ ] [LeetCode 189. Rotate Array](https://leetcode.com/problems/rotate-array/)
    - **[Soluotion](https://leetcode.com/problems/rotate-array/submissions/1525880305)**

---


## 6. Queue (`queue<T> queue_name;`)

- FIFO (First-In First-Out)
- O(1) enqueue and dequeue operations.
- Implemented with deque

**Operations**
- `push()`, `front()`, `pop()`

### **Problem: Sum of Last K Numbers in a Stream (interview Problem)**

### **Description**  
Design a data structure that efficiently returns the sum of the last `k` numbers from an infinite stream of integers. For each new number added, return the sum of the most recent `k` numbers.

### **Example**

```
k = 4
Stream: 1, 2, 3, 4, 5, 6, 7, 8, 9, ...
Returns: 1, 3, 6, 10, 14, 18, 22, 26, 30, ...
```
**[Soluotion](https://gist.github.com/Ahmedhany-1/5a120639f28fe02be50c16d3094397b0)**
---
---

## 7. Stack (`stack<T> stack_name;`)

- LIFO (Last-In First-Out)
- O(1) push/pop operations.

**Operations**
- `push()`, `top()`, `pop()`

**Problem: Valid Parentheses**  
- [ ] [LeetCode 20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
  - **[Soluotion](https://leetcode.com/problems/valid-parentheses/submissions/1526864234)**


**Problem: Remove All Adjacent Duplicates In String (interview Problem)**
- [ ] [LeetCode 1047.  Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/)
    - **[Soluotion](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/1526813753)**

**Problem: Implement Queue using Stacks (Micrsoft interview 2024)**  
- [ ] [LeetCode 232. Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/description/)
    - **[Soluotion](https://leetcode.com/problems/implement-queue-using-stacks/submissions/1526865036)**

---

## 8. Priority Queue (`std::priority_queue`)
**Overview**
- designed such that the first element of the queue is either the greatest or the smallest
- O(log n) insert/extract

**Operations**
- `push()`, `top()`, `pop()`

**Problem: Kth Largest Element (Micrsoft interview 2024)**  
- [ ] [LeetCode 215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)
    - **[Soluotion](https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/1526672800)**
  
**Problem: Potions (Hard Version)**  
- [ ] [vjudge. Potions (Hard Version) ](https://vjudge.net/problem/CodeForces-1526C2)
    - **[Soluotion](https://vjudge.net/solution/55459389)**
---

## 9. Monotonic Stack
**Overview**
- Maintains sorted (asc/desc) order
- Used for "ext/previous greater/smaller" element problems.

**Pattern**
```cpp
stack<int> st;
for(int num : nums) {
    while(!st.empty() && st.top() < num) {
        st.pop();
        // Process
    }
    st.push(num);
}
```

**Problem: Next Greater Element (interview Problem)**  
- [ ] [LeetCode 496. Next Greater Element I](https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1?itm_source=geeksforgeeks)
    - **[Soluotion](https://gist.github.com/Ahmedhany-1/4463544ec6f75860ead20e009c960450)**

---

