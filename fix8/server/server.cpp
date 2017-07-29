#include "server.h"

void Server::start()
{
  std::cout << "Creating Session : SRISHTI" << std::endl;
  std::string sci = "SERVER" ;
  std::string file = "fix8server.xml" ;
  std::string sessionName = "SRISHTI" ;
  _serverSessionBase = new FIX8::ServerSession<SERVER_session_server>(
      FIX8::SERVER::ctx(),
      file,
      sessionName
      ) ;

  _inst = _serverSessionBase->create_server_instance();
  _inst->session_ptr()->control() |= FIX8::Session::print;
  const FIX8::ProcessModel pm(_serverSessionBase->get_process_model(_serverSessionBase->_ses));
  std::cout << (pm == FIX8::pm_pipeline ? "Pipelined" : "Threaded") << " mode." << std::endl;
  _inst->start(pm == FIX8::pm_pipeline, 1, 2);
  std::cout << "Session Started" << std::endl;
  while(!_inst->session_ptr()->is_shutdown())
  {
  }
  std::cout << "Session shut down !!" << std::endl ;
}

bool Server::operator() (const class Message *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Heartbeat *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class TestRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class ResendRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Reject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class SequenceReset *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Logout *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class IndicationofInterest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Advertisement *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class ExecutionReport *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class OrderCancelReject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Logon *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class News *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Email *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class NewOrderSingle *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class NewOrderList *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class OrderCancelRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class OrderCancelReplaceRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class OrderStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Allocation *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class ListCancelRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class ListExecute *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class ListStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class ListStatus *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class AllocationACK *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class DontKnowTrade *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class QuoteRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class Quote *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class SettlementInstructions *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class MarketDataRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class MarketDataSnapshotFullRefresh *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class MarketDataIncrementalRefresh *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class MarketDataRequestReject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class QuoteCancel *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class QuoteStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class QuoteAcknowledgement *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class SecurityDefinitionRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class SecurityDefinition *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class SecurityStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class SecurityStatus *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class TradingSessionStatusRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class TradingSessionStatus *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class MassQuote *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class BusinessMessageReject *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class BidRequest *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class BidResponse *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool Server::operator() (const class ListStrikePrice *msg) const
{ 
  std::cout << __PRETTY_FUNCTION__ << std::endl ;
}

bool SERVER_session_server::handle_logon(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
  FIX8::Session::handle_logon(seqnum, msg);
}

bool SERVER_session_server::handle_logout(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::handle_heartbeat(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::handle_resend_request(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::handle_sequence_reset(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::handle_test_request(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::handle_reject(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::handle_admin(const unsigned seqnum, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

void SERVER_session_server::modify_outbound(FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::authenticate(FIX8::SessionID& id, const FIX8::Message *msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
}

bool SERVER_session_server::handle_application(const unsigned seqnum, const FIX8::Message *&msg)
{
	std::cout << __PRETTY_FUNCTION__ << std::endl ; 
  return enforce(seqnum, msg) || msg->process(_router);
}
