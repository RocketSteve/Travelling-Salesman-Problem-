#ifndef TRAVELLING_SALESMAN_PROBLEM_GREEDYSOLVER_H
#define TRAVELLING_SALESMAN_PROBLEM_GREEDYSOLVER_H

#include "../Instance/Instance.h"
#include "../GraphAdjacencyLists/GraphAdjacencyLists.h"
#include "../GraphAdjacencyLists/AdjacencyList/AdjacencyList.h"
#include "../CoordinateWithVisitedState/CoordinateWithVisitedState.h"

class GreedySolver {
private:
    Instance instance;
    double distance = 0;
public:
    vector<AdjacencyList<CoordinateWithVisitedState> *> answer = {};

    explicit GreedySolver(Instance instance);

    AdjacencyList<CoordinateWithVisitedState> *findFirstVertex() const;

    static pair<AdjacencyList<struct CoordinateWithVisitedState> *, double> nextVertex(
            AdjacencyList<CoordinateWithVisitedState> *currentVertex);

    void solve();

    void addVertexToAnswer(AdjacencyList<CoordinateWithVisitedState> *vertex);

    double getDistance() const;
};


#endif //TRAVELLING_SALESMAN_PROBLEM_GREEDYSOLVER_H
