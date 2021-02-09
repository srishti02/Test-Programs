#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../state/cabinContext.h"

namespace ELEVATOR_SYSTEM
{
  /**
   * @description A singleton class to control the elevator system. 
   */
  class Controller
  {
    private :
      
      CabinContext* _cabinContext = nullptr;

      /**
       * @brief constructor 
       */
      Controller();
     
      // make class non copyable
      Controller(const Controller&) = delete;
      Controller& operator=(const Controller&) = delete;
      
      // make class non moveable
      Controller(Controller&&) = delete;
      Controller& operator=(Controller&&) = delete;

    public :
    
      /**
       * @brief method to ensure single instance of the class is returned.
       *
       * @return static instance of class
       */
      static Controller& getInstance()
      {
        static Controller instance;
        return instance;
      }

      /**
       * @brief Method to handle user actions.
       */
      void handleUserAction(...)
      {
        ...;
        _cabinContext->performAction(...);
      }

      /**
       * @brief getter for cabin context
       *
       * @return CabinContext*
       */
      CabinContext* getCabinContext()
      {
        return _cabinContext;
      }

      /**
       * @brief setter for cabinContext
       *
       * @param CabinContext*
       */
      void setCabinContext(CabinContext* cabinContext)
      {
        _cabinContext = cabinContext;
      }

      /**
       * @brief set cabin's state
       *
       * @param state: state of cabin to be set
       */
      void setCabinState(CabinState* state)
      {
        _cabinContext->setCabinState(state);
      }
  };
}
