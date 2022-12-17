#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers.hpp>
#include "../../../src/classes/SimulatedAnnealingSolver/SimulatedAnnealingSolver.h"
#include "src/classes/InstanceFileReader/InstanceFileReader.h"

using namespace Catch::Matchers;

TEST_CASE("constructor", "[SimulatedAnnealingSolver]") {
    Instance *instance = new InstanceFileReader("resources/instance.txt");
    auto simulatedAnnealing = new SimulatedAnnealingSolver(instance);
    vector<int> validAnswer = {0, 27, 5, 11, 8, 4, 20, 1, 19, 9, 3, 14, 17, 13, 21, 16, 10, 18, 24, 6, 22, 26, 7, 23,
                               15, 12, 28, 25, 2, 0};
    vector<int> answerFromGreedy = {};
    for (auto i: simulatedAnnealing->answer) {
        answerFromGreedy.push_back(i->getId());
    }
    REQUIRE(answerFromGreedy == validAnswer);
}

TEST_CASE("calculateDistance", "[SimulatedAnnealingSolver]") {
    Instance *instance = new InstanceFileReader("resources/instance.txt");
    auto simulatedAnnealing = new SimulatedAnnealingSolver(instance);
    auto distance = simulatedAnnealing->getDistance();
    simulatedAnnealing->calculateDistance();
    REQUIRE(distance == simulatedAnnealing->getDistance());
}