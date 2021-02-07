#ifndef CABIN_STATE_H
#define CABIN_STATE_H

namespace ELEVATOR_SYSTEM
{
  /**
   * @description state pattern interface
   */
  class CabinState
  {
    public:

      /**
       * @brief Method to be implemented by derived classes. 
       */
      virtual void performAction(...) = 0;
  };

  /**
   * @description concrete state interface implementation
   */
  class ActiveState : public CabinState
  {
    public:

      void performAction(...) override
      {
        ...
      }
  };
  
  /**
   * @description concrete state interface implementation
   */
  class InActiveState : public CabinState
  {
    public:

      void performAction(...) override
      {
        ...
      }
  };
}
