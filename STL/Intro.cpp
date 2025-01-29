/*
STL in cpp:

full form of STL is Standard Template Library
It is a library of generic libraries and functions
STL allows us to use various algorithms for sorting and searching which are
very common. It also implements some of the well known data structures

    Helps us to reuse well tested components
    Helps to save time and resources(since many algo. are implemented in more 
    efficient way than we can implement)
*/

/*
STL has following four components : 
1. Containers
2. Algorithms
3. Iterators
4. Functors(not functions)

1. Container :
    Container is an object which stores data. They use template classes hence 
    we can make them container of character, integer, etc. Ex: vectors, arrays, etc

    Types of Containers:
        - Sequence continers : They store data in linear fashion
        Ex : arrays, vectors, deque(double ended queue), list, forward set

        - Associative containers  : Are desinged in a way to allow for faster access
        allow for elemrnt access using keys
        Ex : Set, Map, multiset, multimap

        - Unordered Associative Containers: 
        
        - Container Adaptors: These provide a different interface for existing containers. 
        Allow for real word modeling of data structure
        Ex : Stack, Queue, Priority Queue


2. Algorithms: 
    These are various algorithms for searching, sorting, merging, etc. And are
    made using template functions. (These are better as they are much more tested
    and made by experienced programmers)

3. Iterators: 
    It is an object that points to an element in a container. Handled just like 
    pointers(But is an object). It connects algorithms to containers    
    The iterator is made to move as instructed by the algorithm

*/

/*
Uses of each datatype : 
- Vector : Used for faster random access but insertion/deletion is slow
(here we are compairing to array). However insertion at end of array is faster

- List : Random access is slow since we have to move through each item. 
In vector, arrays random access is easy since they are stored in contiguous location
Insertion in middle is faster since we need to create node and change pointers
In arrays however, we will have to shift elements in order to create new location

- In associative containers, all operations are faster except for random access 
(since it uses tree structure)

*/