#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <memory>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
#include <typeinfo>
#include <thread>
#ifdef _MSC_VER
#include <signal.h>
#include <conio.h>
#else
#include <sys/ioctl.h>
#include <signal.h>
#include <termios.h>
#endif

#include <errno.h>
#include <string.h>
#include <fix8/f8includes.hpp>

#include "CLIENT_types.hpp"
#include "CLIENT_router.hpp"
#include "CLIENT_classes.hpp"
#include "CLIENT_session.hpp"
namespace FIX8 
{ 
  class ClientSessionBase ; 
}

class Client : public FIX8::CLIENT::CLIENT_Router
{
  public:

    void start() ;
    static Client* getInstance()
    {
      std::cout << __PRETTY_FUNCTION__ << std::endl ;
      static Client _instance ;
      return &_instance ;
    }

    bool operator() (const class Message *msg) const;
    bool operator() (const class Heartbeat *msg) const;
    bool operator() (const class TestRequest *msg) const;
    bool operator() (const class ResendRequest *msg) const;
    bool operator() (const class Reject *msg) const;
    bool operator() (const class SequenceReset *msg) const;
    bool operator() (const class Logout *msg) const;
    bool operator() (const class IndicationofInterest *msg) const;
    bool operator() (const class Advertisement *msg) const;
    bool operator() (const class ExecutionReport *msg) const;
    bool operator() (const class OrderCancelReject *msg) const;
    bool operator() (const class Logon *msg) const;
    bool operator() (const class News *msg) const;
    bool operator() (const class Email *msg) const;
    bool operator() (const class NewOrderSingle *msg) const;
    bool operator() (const class NewOrderList *msg) const;
    bool operator() (const class OrderCancelRequest *msg) const;
    bool operator() (const class OrderCancelReplaceRequest *msg) const;
    bool operator() (const class OrderStatusRequest *msg) const;
    bool operator() (const class Allocation *msg) const;
    bool operator() (const class ListCancelRequest *msg) const;
    bool operator() (const class ListExecute *msg) const;
    bool operator() (const class ListStatusRequest *msg) const;
    bool operator() (const class ListStatus *msg) const;
    bool operator() (const class AllocationACK *msg) const;
    bool operator() (const class DontKnowTrade *msg) const;
    bool operator() (const class QuoteRequest *msg) const;
    bool operator() (const class Quote *msg) const;
    bool operator() (const class SettlementInstructions *msg) const;
    bool operator() (const class MarketDataRequest *msg) const;
    bool operator() (const class MarketDataSnapshotFullRefresh *msg) const;
    bool operator() (const class MarketDataIncrementalRefresh *msg) const;
    bool operator() (const class MarketDataRequestReject *msg) const;
    bool operator() (const class QuoteCancel *msg) const;
    bool operator() (const class QuoteStatusRequest *msg) const;
    bool operator() (const class QuoteAcknowledgement *msg) const;
    bool operator() (const class SecurityDefinitionRequest *msg) const;
    bool operator() (const class SecurityDefinition *msg) const;
    bool operator() (const class SecurityStatusRequest *msg) const;
    bool operator() (const class SecurityStatus *msg) const;
    bool operator() (const class TradingSessionStatusRequest *msg) const;
    bool operator() (const class TradingSessionStatus *msg) const;
    bool operator() (const class MassQuote *msg) const;
    bool operator() (const class BusinessMessageReject *msg) const;
    bool operator() (const class BidRequest *msg) const;
    bool operator() (const class BidResponse *msg) const;
    bool operator() (const class ListStrikePrice *msg) const;

  private :
    FIX8::ClientSessionBase *_clientSessionBase ;
    CLIENT_session_client *_clientSession ;
} ;
#endif
