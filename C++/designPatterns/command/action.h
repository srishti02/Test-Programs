#ifndef ACTION_H
#define ACTION_H

namespace ELEVATOR_SYSTEM
{
  /**
   * @brief Acts as command interface
   */
  class Action
  {
    public:

      /**
       * @brief Method to be implemented by derived classes. 
       */
      virtual void execute(...) = 0;
  };
}
