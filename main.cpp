class Treenode{
  dataType;	//Gets and sets the node's data type.
  first;	//Gets the node's first subnode.
  labelProperties;	//Use your own named properties to get/set label values.
  labels;	//Accesses the node's labels as nodes.
  last;	//Gets the node's last subnode.
  name;	//Gets and sets the node's name.
  next;	//Gets the next node after the node in the tree.
  prev;	//Gets the node before the node in the tree.
  rank;	//Gets/sets the rank of the node in its parent's sub-tree
  subnodes;	//Accesses the node's subnodes
  up;	//Gets and sets the node "above" the node in the tree, or in other words, its parent node.
  value;	//Gets and sets the value on the node.

  destroy();	//Destroys the node
  evaluate();	//Evaluates the node.
  find();	//Finds a node in the node's subtree by its path.
  getPath();	//Gets the node's path, optionally relative to some other node.
}

class Object{
  animations;	//Accesses an object's animations.
  attrs;	//Accesses object attribute nodes.
  centerObjects;	//Accesses objects connected through center port connections.
  color;	//Get and set the Color of the object.
  flags;	//Get and set flags of the object.
  inObjects;	//Accesses objects connected through input ports connections.
  input;	//Access methods on the object's input ports connections.
  location;	//Get and set the position of the object.
  outObjects;	//Accesses objects connected through output ports connections.
  output;	//Access methods on the object's output ports connections.
  rotation;	//Get and set the rotation of the object.
  size;	//Get and set the size of the object.
  stats;	//Allows access to an object's statistics.

  getLocation();	//Gets the object's location.
  getVariable();	//Gets the value of an object's variable.
  message();	//Send a message to the object.
  resume();	//Return the object to its state prior to stop().
  setLocation();	//Sets the object's location.
  setRotation();	//Sets the object's rotation.
  setSize();	//Sets the object's size.
  setState();	//Sets the object's state.
  setVariable();	//Sets the value of an object's variable.
  stop();	//Stops the object, sets its state, and waits for resume().
}
