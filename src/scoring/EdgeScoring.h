/*
 * EdgeScoring.h
 *
 *  Created on: 15.10.2012
 *      Author: cls
 */

#ifndef EDGESCORING_H_
#define EDGESCORING_H_

#include "../graph/Graph.h"

namespace EnsembleClustering {


class EdgeScoring {

protected:

	Graph* G;	//!< pointer to the graph

public:

	EdgeScoring(Graph& G);

	virtual ~EdgeScoring();

	virtual double scoreEdge(node u, node v) = 0;
};

} /* namespace EnsembleClustering */
#endif /* EDGESCORING_H_ */
