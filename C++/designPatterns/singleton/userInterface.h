#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include "controller.h"

namespace ELEVATOR_SYSTEM
{
  /**
   * @description Class to act as interface between user and controller. 
   */
  class UserInterface
  {
    public:

      /**
       * @brief this method shall forward the user actions to controller for
       *        processing.
       */
      void handleUserAction(...)
      {
        Controller::getInstance().handleUserAction(...);
      }
  };
}
