#pragma once
#include "incs.h"
#include "Neuron.h"

class Layer
{
public:
  Layer();
  ~Layer();

  std::vector<Neuron> neurons;
};
