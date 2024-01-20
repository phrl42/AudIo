#include "Neuron.h"
#include "incs.h"

void Neuron::Trigger(float val, float weight)
{
  value += val * weight;
}

void Neuron::Leave()
{
  value += bias;

  value = activation(value);
}
