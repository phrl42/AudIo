#pragma once

class Neuron
{
public:
  Neuron() = default;
  ~Neuron() = default;

  void Trigger(float val, float weight);
  void Leave();
  
  float value = 0;
  float bias = 0;
};
