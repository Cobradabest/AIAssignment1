#pragma once
#include "glm.hpp"

class Node
{
public:
	void createNode();
private:
	glm::vec2 position;
	int weight;
};

