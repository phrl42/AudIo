#pragma once

#define INPUT_NEURONS 2 
#define OUTPUT_NEURONS 1

#include "Layer.h"

class Train
{
public:
  Train() = default;
  ~Train() = default;

  void Start();

private:
  void Init();
  void Run();

  Layer input_layer;

  Layer output_layer;
};
