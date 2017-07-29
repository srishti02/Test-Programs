#include "client.h"
void Client::start()
{
  _clientSessionBase = new FIX8::ClientSession<CLIENT_session_client>(
      FIX8::CLIENT::ctx(),
      "fix8client.xml",
      "SRISHTI"
      ) ;

  _clientSession = static_cast < CLIENT_session_client* >( _clientSessionBase->session_ptr() );
  _clientSessionBase->session_ptr()->control() |= FIX8::Session::printnohb;
  _clientSessionBase->start(false,1,2,_clientSessionBase->session_ptr()->get_login_parameters()._davi()) ;
  
  const FIX8::ProcessModel pm(_clientSessionBase->get_process_model(_clientSessionBase->_ses));
  if (pm == FIX8::pm_coro)
  {
    std::cout << "Coroutine mode." << std::endl ;
  }
  else
  {
    std::cout << "No Coroutine mode."  << std::endl;
  }
  while(!_clientSessionBase->session_ptr()->is_shutdown())
  {}
  std::cout << "Session shut down !!" << std::endl ;
}

bool Client::operator() (const class Message *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Heartbeat *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class TestRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class ResendRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Reject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class SequenceReset *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Logout *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class IndicationofInterest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Advertisement *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class ExecutionReport *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class OrderCancelReject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Logon *msg) const
{
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class News *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Email *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class NewOrderSingle *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class NewOrderList *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class OrderCancelRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class OrderCancelReplaceRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class OrderStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Allocation *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class ListCancelRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class ListExecute *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class ListStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class ListStatus *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class AllocationACK *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class DontKnowTrade *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class QuoteRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class Quote *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class SettlementInstructions *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class MarketDataRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class MarketDataSnapshotFullRefresh *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class MarketDataIncrementalRefresh *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class MarketDataRequestReject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class QuoteCancel *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class QuoteStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class QuoteAcknowledgement *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class SecurityDefinitionRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class SecurityDefinition *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class SecurityStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class SecurityStatus *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class TradingSessionStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class TradingSessionStatus *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class MassQuote *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class BusinessMessageReject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class BidRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class BidResponse *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Client::operator() (const class ListStrikePrice *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool CLIENT_session_client::handle_logon(const unsigned seqnum, const FIX8::Message *msg)
{
  FIX8::Session::handle_logon(seqnum, msg);
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool CLIENT_session_client::handle_logout(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool CLIENT_session_client::handle_heartbeat(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool CLIENT_session_client::handle_resend_request(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool CLIENT_session_client::handle_sequence_reset(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool CLIENT_session_client::handle_test_request(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool CLIENT_session_client::handle_reject(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool CLIENT_session_client::handle_admin(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

void CLIENT_session_client::modify_outbound(FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
  std::cout << "HERE : " << __LINE__ <<std::endl ;
  FIX8::Session::modify_outbound(msg) ;
  std::cout << "HERE : " << __LINE__ <<std::endl ;
}

bool CLIENT_session_client::authenticate(FIX8::SessionID& id, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

//Message CLIENT_session_client::*generate_reject(const unsigned seqnum, const char *what)
//{
//	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
//}
//
//Message CLIENT_session_client::*generate_test_request(const FIX8::f8String& testReqID)
//{
//	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
//}
//
//Message CLIENT_session_client::*generate_sequence_reset(const unsigned newseqnum, const bool gapfillflag=false)
//{
//	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
//}
//
//Message CLIENT_session_client::*generate_logon(const unsigned heartbeat_interval, 
//    const FIX8::f8String davi=FIX8::f8String())
//{
//	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
//}
//
//Message CLIENT_session_client::*generate_logout()
//{
//	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
//}
//
//Message CLIENT_session_client::*generate_heartbeat(const FIX8::f8String& testReqID)
//{
//	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
//}
//
//Message CLIENT_session_client::*generate_resend_request(const unsigned begin, const unsigned end=0)
//{
//  std::cout << __PRETTY_FUNCTION__ << std::endl ; 
//}
//
bool CLIENT_session_client::handle_application(const unsigned seqnum, const FIX8::Message *&msg)
{
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
  return enforce(seqnum, msg) || msg->process(_router);
}
