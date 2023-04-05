# ch02-copy-assignment
## This example implements a copy constructor and assignment operator for a class with a pointer data member.

In this program, the **MyClass** class has a pointer data member **data**. The copy constructor is implemented using dynamic memory allocation to create a new int array and copy the value of data from the other object. The assignment operator is implemented to first check if the objects are the same (by comparing memory addresses), then deleting the current data array and creating a new one to copy the value of data from the other object. Finally, the destructor is implemented to delete the data array.

The program creates three **MyClass** objects, **obj1**, **obj2**, and **obj3**, and demonstrates the use of the copy constructor and assignment operator by creating **obj2** as a copy of **obj1**, and then assigning **obj3** to **obj2**.

**Initialization and assignment are different operations in C++.** Initialization happens when an object is created with an initial value, while assignment happens when an existing object is given a new value.

When an object is initialized with the value of another object, the copy constructor is called. When an object is assigned the value of another object, the assignment operator is called. However, both the copy constructor and assignment operator must be defined for this behavior to occur.
