// project.c ... project scan functions
// part of Multi-attribute Linear-hashed Files
// Manage creating and using Projection objects
// Last modified by Xiangjun Zai, Mar 2025

#include <stdbool.h>
#include "defs.h"
#include "project.h"
#include "reln.h"
#include "tuple.h"
#include "util.h"



// A suggestion ... you can change however you like

struct ProjectionRep {
	Reln    rel;       // need to remember Relation info
	//TODO
};

// take a string of 1-based attribute indexes (e.g. "1,3,4")
// set up a ProjectionRep object for the Projection
Projection startProjection(Reln r, char *attrstr)
{
    Projection new = malloc(sizeof(struct ProjectionRep));
    assert(new != NULL);
    //TODO

    return new;
}

void projectTuple(Projection p, Tuple t, char *buf)
{
    // TODO: Implement projection of tuple 't' according to 'p' and store result in 'buf'
}

void closeProjection(Projection p)
{
    // TODO
}
