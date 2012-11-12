#include "Starbucks.h"
#include "Tree.h"


class StarbucksWolf : public Starbucks {
public:
    //Destructor
    ~StarbucksWolf(){
        delete tree;
        tree = NULL;
    }
    //Binary search tree where every other level is sorted on x and y
    Tree* tree;
    //Build the tree with a specified list
    Node* buildTree(List* list, bool onX);
    //Builds a KD tree and a linked list when given an array of entries
	virtual void build(Entry* c, int n);
    //Finds the nearest location when given an x and y coordinate
    virtual Entry* getNearest(double x, double y);    
     
};