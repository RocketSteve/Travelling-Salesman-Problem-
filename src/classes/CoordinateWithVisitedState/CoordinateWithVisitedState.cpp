#include "CoordinateWithVisitedState.h"

CoordinateWithVisitedState::CoordinateWithVisitedState(double latitude, double longitude)
        : Coordinate(latitude, longitude) {
}

void CoordinateWithVisitedState::visitCoordinate() {
    this->visited = true;
}

bool CoordinateWithVisitedState::getVisited() const {
    return this->visited;
}