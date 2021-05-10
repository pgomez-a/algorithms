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

<img width="750" align="center" alt="Linked List" src="https://user-images.githubusercontent.com/74931024/117706399-86a05a80-b1cd-11eb-9934-73741c26ce9d.png">

* **Arrays:** there are two different types of arrays: static and dynamic arrays. Static arrays have a fixed length, while dynamic arrays are not. Dynamic arrays are much more flexible but can be slower or take up more memory than static arrays.
* **Linked Lists:** similar to arrays if we consider that both are lists of items, although the implementation is different. A linked list is made up of nodes, where each node has a value and a pointer to the next node in the list. The advantage over arrays is that inserting an element is very easy, you just have to change the references of the nodes while in arrays you have to move all the elements of the list (in case you want to insert an element at the top of the list). The problem is that, with linked lists, it is impossible to read the list randomly, so we always have to read the list from top to bottom to get the value of some position.
* **Qeues:** data structure consisting of a FIFO (First input, first output) structure. This means that we can only insert one item at the bottom of the list and delete the item that is at the top of the list. Any different insertion or extraction operation is prohibited.
* **Stacks:** data structure consisting of a LIFO (Last In, First Out) structure. This means that we can only stack and unstack the item at the top of the list. If we want to unstack the last item, we must first unstack (or rotate) all the items in the stack until the "last" is on top.
* **Dictionary:** composed of keys and values. The main characteristic is that when we search for an element with a key, the time complexity is 0 (1).
* **Tree:** made by nodes. A tree has a root node with a pointer to NULL or with more child nodes. These nodes also point to other child nodes, and so on. Nodes that do not have nodes are leaf nodes; and binary trees are those whose nodes can only have two child nodes.
* **Graphs:** graphs are nodes interrelated with each other through connections. The nodes are known as vertices, while the connections are known as edges.
* **Sets:** data structure of elements that cannot be duplicated.

### Dynamic Programming

### Stack

### Efficiency of an algorithm

### Binary Search
Also know as <b>half-interval search</b>, is a <b>search</b> algorithm that finds the position of a target value within a sorted array. Binary search compares the target value to the middle element of the array.<br>
<img width="493" alt="binary_search" src="https://user-images.githubusercontent.com/74931024/115127964-e2b2fd00-9fda-11eb-86af-b7aeb18ad017.png">


### Selection Sort
This algorithm sorts an array by repeatedly finding the minimun element (considering ascending order) from unsorted part and putting it at the beginning.<br>
<img width="493" alt="selection_sort" src="https://user-images.githubusercontent.com/74931024/115128053-64a32600-9fdb-11eb-86c0-08bfbef7d1cb.png">
