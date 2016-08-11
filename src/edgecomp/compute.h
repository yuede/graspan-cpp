#ifndef COMPUTE_H
#define COMPUTE_H

#include <iostream>
#include <string>
#include <ctime>
#include <utility>

#include "edgemerger.h"
#include "../datastructures/vertex.h"
#include "../datastructures/loadedvertexinterval.h"
#include "../datastructures/computationset.h"
#include "../datastructures/context.h"
#include "../utilities/globalDefinitions.hpp"


typedef unsigned long long ull;

long updateEdges(int vertInd, ComputationSet compsets[], LoadedVertexInterval intervals[], Context &context, short numRules, ull mergeTime, ull addEdgesTime);

#endif
