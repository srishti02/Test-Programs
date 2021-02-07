#ifndef SIMULATOR_H
#define SIMULATOR_H

namespace ELEVATOR_SYSTEM
{
  /**
   * @description Acts as a state invoker 
   */
  class Simulator
  {
    private:

      /** command interface object*/
      Action* _actionToSimulate;

    public:

      setActionToSimulate(Action* action)
      {
        _actionToSimulate = action;
      }

      /**
       * @brief Execute an action preset for simulation.
       */
      void executeAction(...)
      {
        if(_actionToSimulate != nullptr)
          _actionToSimulate->execute(...);
      }
  };
}
