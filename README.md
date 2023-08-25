# Flow Network
My coursework on Data Structures and Algorithmes. 
Purpose of the coursework was to write [FlowNetwork](cw4/FlowNetwork.h) class with possibility to insert arcs and calculate maximum flow from the source to the sink. 
The coursework contains self-written [Queue](cw4/Queue.h) and [TreeMap](cw4/TreeMap.h) (Red-black tree) classes, that need to implement flow network. Also, [unit tests](cw4_unittest/cw4_unittest.cpp) are provided.


### Example

Take a look on the simple flow network. It's obvious that its maximum flow is 5.

![FlowNetwork](FlowNetwork%20example.drawio.png)

Let's see how to build this network in code, using my FlowNetwork class.

```cpp
FlowNetwork* network = new FlowNetwork();
network->add_arc('S', 'O', 3);
network->add_arc('S', 'P', 3);
network->add_arc('O', 'Q', 3);
network->add_arc('O', 'P', 2);
network->add_arc('P', 'R', 2);
network->add_arc('Q', 'R', 4);
network->add_arc('Q', 'T', 2);
network->add_arc('R', 'T', 3);
network->maximize_flow(); // returns 5
```

If run this code, ``maximize_flow()`` function returns 5, which is what it should be.
