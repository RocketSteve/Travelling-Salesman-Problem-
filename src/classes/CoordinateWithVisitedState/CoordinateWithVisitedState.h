#ifndef TRAVELLING_SALESMAN_PROBLEM_COORDINATEWITHVISTIEDSTATE_H
#define TRAVELLING_SALESMAN_PROBLEM_COORDINATEWITHVISTIEDSTATE_H

#include "../Coordinate/Coordinate.h"

class CoordinateWithVisitedState : public Coordinate {
private:
    bool visited = false;

public:
    explicit CoordinateWithVisitedState(double latitude, double longitude);

    CoordinateWithVisitedState();

    void visitCoordinate();

    bool getVisited() const;
};


#endif//TRAVELLING_SALESMAN_PROBLEM_COORDINATEWITHVISTIEDSTATE_H
