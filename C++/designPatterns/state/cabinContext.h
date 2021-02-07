#ifndef CABIN_CONTEXT_H
#define CABIN_CONTEXT_H

namespace ELEVATOR_SYSTEM
{
  /**
   * @description state pattern context  
   */
  class CabinContext
  {
    private:

      /** state interface object*/
      CabinState* state = nullptr;

    public:

      CabinState* getState()
      {
        return state;
      }

      void setCabinState(CabinState* newState)
      {
        state = newState;
      }

      void performAction(...)
      {
        state->performAction(...);
      }
  };
}
