// select.c ... select scan functions
// part of Multi-attribute Linear-hashed Files
// Manage creating and using Selection objects
// Credit: John Shepherd
// Last modified by Xiangjun Zai, Mar 2025

#include "defs.h"
#include "select.h"
#include "reln.h"
#include "tuple.h"
#include "bits.h"
#include "hash.h"

// A suggestion ... you can change however you like

struct SelectionRep {
	Reln    rel;       // need to remember Relation info
	Bits    known;     // the hash value from MAH
	Bits    unknown;   // the unknown bits from MAH
	Page    curpage;   // current page in scan
	int     is_ovflow; // are we in the overflow pages?
	Offset  curtupOffset;    // offset of current tuple within page
	//TODO
};

// take a query string (e.g. "1234,?,abc,?")
// set up a SelectionRep object for the scan

Selection startSelection(Reln r, char *q)
{
    Selection new = malloc(sizeof(struct SelectionRep));
    assert(new != NULL);
    // TODO
	// Partial algorithm:
	// form known bits from known attributes
	// form unknown bits from '?' and '%' attributes
	// compute PageID of first page
	//   using known bits and first "unknown" value
	// set all values in SelectionRep object
    return new;
}

// get next tuple during a scan

Tuple getNextTuple(Selection q)
{
    // TODO
	// Partial algorithm:
    // if (more tuples in current page)
    //    get next matching tuple from current page
    // else if (current page has overflow)
    //    move to overflow page
    //    grab first matching tuple from page
    // else
    //    move to "next" bucket
    //    grab first matching tuple from data page
    // endif
    // if (current page has no matching tuples)
    //    go to next page (try again)
    // endif
    return NULL;
}

// clean up a SelectionRep object and associated data

void closeSelection(Selection q)
{
    // TODO
}
