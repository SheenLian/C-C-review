# C-review,
# C-plus-plus-review,
pass_pointer: since I always confused when I see something like "void function(int/* (*)a)", I used two small functions to show the diff between: 1. passing a pointer into fuction when the pointer is the name of a array.
         2. passing a pointer into function when the pointer is just the address of some variable.
         
As a result, remember that the name of an array is actually a pointer points to the first element in the array.
But what I am not understand is, when we pass the name of array (the pointer) into a function, why is it possible to use this name as a array format?
