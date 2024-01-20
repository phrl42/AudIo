#include "Train.h"

void Train::Start()
{
  Init();
  Run();
}

float input[][2] =
{
  0, 0,
  0, 1,
  1, 0,
  1, 1
};

void Train::Init()
{
  input_layer = Layer();
  output_layer = Layer();

  for(uint8_t i = 0; i < INPUT_NEURONS; i++)
  {
    Neuron neuron = Neuron();
    neuron.value = input[0][i];
    
    input_layer.neurons.push_back(neuron);
  }

  for(uint8_t i = 0; i < OUTPUT_NEURONS; i++)
  {
    Neuron neuron = Neuron();
    neuron.bias = 0;
    output_layer.neurons.push_back(neuron);
  }

}

void Train::Run()
{
  for(uint32_t i = 0; i < OUTPUT_NEURONS; i++)
  {
    Neuron &output = output_layer.neurons[i];
    
    for(uint32_t j = 0; j < INPUT_NEURONS; j++)
    {
      Neuron input = input_layer.neurons[j];
      
      output.Trigger(input.value, 1);
    }

    output.Leave();
  }
}
