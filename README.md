# algorithms
<img width="275" align="right" alt="Algorithm of success" src="https://user-images.githubusercontent.com/74931024/117683441-5c8e6e80-b1b4-11eb-9571-9f82d40606d4.png">

An **algorithm** is a process or set of rules that must be followed in calculations or other troubleshooting operations, especially by a computer. As programmers, most of the time we need to use some algorithms to improve our programs and make them better and more efficient.<br>
I have decided to make a notebook with some of the most useful algorithms you might need for your programs, so you don't need to break your head to find an optimized solution for your code. Feel free to use, manipulate, and do whatever you want with this repository. If you find any errors or want to improve it, <a href="https://github.com/pgomez-a">please do not hesitate to contact me.</a><br>

    > An algorithm must be seen to be believed
    >                            Donald Knuth

### Algorithm Analysis
In Computer Science, **_algorithm analysis is about finding and studying their complexity_** (amount of time, storage, resources, etc. that are needed for their execution time). Typically this involves using a function that relates the length of the input to the number of steps the algorithm needs to run (temporal complexity) or the memory storage it requires (spatial complexity). The algorithm is said to be efficient if the function returns low outputs or if they grow slowly compared to the growth of the input values. However, different inputs have different outputs, so it's a good idea to consider best-case, worst-case, and average-case.<br>
<br>
Algorithm analysis is part of a broad theory of computational complexity, which provides theoretical estimates of the resources an algorithm needs to solve a computational problem. When doing a theoretical analysis of algorithms, it is normal to use an asymptotic sense to study the complexity function related to large inputs. To this end, we use **notations**. 

### Asymptotic Notation
<img width="417" align="right" alt="Asymptotic Graphic" src="https://user-images.githubusercontent.com/74931024/117694441-72556100-b1bf-11eb-9f98-cb442d5d418d.png">

When analyzing whether an algorithm is optimized or not, one of the most important points to study is the time required to execute it successfully. We are interested in time, so we have to distinguish some aspects of this part. The running time of an algorithm depends on how long the computer takes to execute the code, it depends on the programming language, and it depends on the compiler, etc. But this is not what we are trying to study, we are interested in the [**time that the algorithm needs to run**](https://es.khanacademy.org/computing/computer-science/algorithms) regardless of the medium that supports it.<br>
To do this, we think about how much the complexity function grows as the input grows. We call this **run-time growth rate** and this is when we use the **_asymptotic notation_**. Since we want a function that can always receive an input, without worrying about its length, the fact of being asymptotic ensures that it will never go outside the limits of the function.

### Big O
Therefore, the complexity of an algorithm tells us how the algorithm behaves when the input grows. The complexity of an algorithm is independent of the computer where it is executed and is defined with Big O notation (how many operations do we need while the input is increasing).<br>
<br>
<img width="450" align="right" alt="Complexity Graphic" src="https://user-images.githubusercontent.com/74931024/117700076-dbd86e00-b1c5-11eb-8aaa-df674b6f61f1.png">
* **Linear Complexity:** as data grows, the number of operations grows proportionally.        **O(n)**
* **Exponential Complexity:** as data grows, the number of operations grows exponentailly.    **O(n^2)**
* **Logarithmic Complexity:** as data grows, the number of operations grows logarithmically.  **O(logn)**
* **Constant Complexity:** as data grows, the number of operations remains constant.          **O(1)**

### Data Structures
They allow us to store data and manipulate complex information made up of basic data or other data structures in our programs and algorithms. The most important data structures that we can learn as beginners are:

* **Arrays:** there are two different types of arrays: static and dynamic arrays. Static arrays have a fixed length, while dynamic arrays are not. Dynamic arrays are much more flexible but can be slower or take up more memory than static arrays.
* **Linked Lists:** similar to arrays if we consider that both are lists of items, although the implementation is different. A linked list is made up of nodes, where each node has a value and a pointer to the next node in the list. The advantage over arrays is that inserting an element is very easy, you just have to change the references of the nodes while in arrays you have to move all the elements of the list (in case you want to insert an element at the top of the list). The problem is that, with linked lists, it is impossible to read the list randomly, so we always have to read the list from top to bottom to get the value of some position.
* **Qeues:** data structure consisting of a FIFO (First input, first output) structure. This means that we can only insert one item at the bottom of the list and delete the item that is at the top of the list. Any different insertion or extraction operation is prohibited.
* **Stacks:** data structure consisting of a LIFO (Last In, First Out) structure. This means that we can only stack and unstack the item at the top of the list. If we want to unstack the last item, we must first unstack (or rotate) all the items in the stack until the "last" is on top.
* **Dictionary:** composed of keys and values. The main characteristic is that when we search for an element with a key, the time complexity is 0 (1).
* **Tree:** made by nodes. A tree has a root node with a pointer to NULL or with more child nodes. These nodes also point to other child nodes, and so on. Nodes that do not have nodes are leaf nodes; and binary trees are those whose nodes can only have two child nodes.
* **Graphs:** graphs are nodes interrelated with each other through connections. The nodes are known as vertices, while the connections are known as edges.
* **Sets:** data structure of elements that cannot be duplicated.

### Dynamic Programming
Technique used to improve some algorithms. The algorithms that can be optimized with this technique are those that use the same operations several times. Despite doing the same operations each time, **the algorithm can be optimized if the result of the operations is stored to have it for the next time**. This could be very useful in a recursive Fibonacci function, where we have to calculate the same values many times.

### Stack
If you have seen my [**_push_swap repository_**](https://github.com/pgomez-a/push_swap), you may want to know the things we can do with a stack. A stack is an ordered list or data structure that allows storing and retrieving data, with a LIFO structure. The operations that we can do with a stack are the following:
* **create_stack():** creates a stack.
* **stack_size(stack):** returns the size of the given stack.
* **stack(elem, stack):** stacks item to the given stack.
* **unstack(stack):** unstack the item at the top of the stack.
* **read_last(stack):** read the element from the bottom of the stack.
* **stack_empty(stack):** return 1 if empty, 0 otherwise.

### Efficiency of an algorithm
Lastly, before showing you the algorithms I'm going to cover, I'd like to show you a table that compares the efficiency of all these algorithms. With this table, we compare the length of the input with the return value of the complexity function:

<img width="931" alt="Efficiency Table" src="https://user-images.githubusercontent.com/74931024/117777989-74f69b80-b23d-11eb-8bc1-aadc98340b0e.png">

### Linear Search O(n)
Algorithm used to find an item in a list. It looks from position 0 to the length of the stack, and when it finds the element, it returns the position where the element was found.

<img width="500" alt="Linear Seach" src="https://user-images.githubusercontent.com/74931024/117796134-133f2d00-b24f-11eb-8505-546b8c12e68c.png">

### Binary Search O(log n)
Efficient algorithm when we want to search for an item in an ordered list. It works by repeatedly halving the part of the list where we want to find the item, until there is only one part to divide, which is the worst case where we can find the item.

<img width="500" alt="Binary Search" src="https://user-images.githubusercontent.com/74931024/117793192-47fdb500-b24c-11eb-8ba4-fe6ec8e0040c.png">

### Selection Sort O(n^2)
Algorithm that sorts an unordered list by finding the smallest number in the list and placing it in the first part, then the second, etc. It does this repeatedly until the list is sorted.

<img width="500" alt="Selection Sort" src="https://user-images.githubusercontent.com/74931024/117800081-150aef80-b253-11eb-8e9c-ea677f5a9d9f.png">

