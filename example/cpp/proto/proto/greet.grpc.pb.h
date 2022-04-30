// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greet.proto
#ifndef GRPC_greet_2eproto__INCLUDED
#define GRPC_greet_2eproto__INCLUDED

#include "greet.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace proto {

class Greeting final {
 public:
  static constexpr char const* service_full_name() {
    return "proto.Greeting";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::proto::GreetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::proto::GreetResponse>> AsyncGreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::proto::GreetResponse>>(AsyncGreetPingRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::proto::GreetResponse>> PrepareAsyncGreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::proto::GreetResponse>>(PrepareAsyncGreetPingRaw(context, request, cq));
    }
    class async_interface {
     public:
      virtual ~async_interface() {}
      virtual void GreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest* request, ::proto::GreetResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest* request, ::proto::GreetResponse* response, ::grpc::ClientUnaryReactor* reactor) = 0;
    };
    typedef class async_interface experimental_async_interface;
    virtual class async_interface* async() { return nullptr; }
    class async_interface* experimental_async() { return async(); }
   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::proto::GreetResponse>* AsyncGreetPingRaw(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::proto::GreetResponse>* PrepareAsyncGreetPingRaw(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
    ::grpc::Status GreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::proto::GreetResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::proto::GreetResponse>> AsyncGreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::proto::GreetResponse>>(AsyncGreetPingRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::proto::GreetResponse>> PrepareAsyncGreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::proto::GreetResponse>>(PrepareAsyncGreetPingRaw(context, request, cq));
    }
    class async final :
      public StubInterface::async_interface {
     public:
      void GreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest* request, ::proto::GreetResponse* response, std::function<void(::grpc::Status)>) override;
      void GreetPing(::grpc::ClientContext* context, const ::proto::GreetRequest* request, ::proto::GreetResponse* response, ::grpc::ClientUnaryReactor* reactor) override;
     private:
      friend class Stub;
      explicit async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class async* async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::proto::GreetResponse>* AsyncGreetPingRaw(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::proto::GreetResponse>* PrepareAsyncGreetPingRaw(::grpc::ClientContext* context, const ::proto::GreetRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GreetPing_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GreetPing(::grpc::ServerContext* context, const ::proto::GreetRequest* request, ::proto::GreetResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GreetPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GreetPing() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_GreetPing() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GreetPing(::grpc::ServerContext* /*context*/, const ::proto::GreetRequest* /*request*/, ::proto::GreetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGreetPing(::grpc::ServerContext* context, ::proto::GreetRequest* request, ::grpc::ServerAsyncResponseWriter< ::proto::GreetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GreetPing<Service > AsyncService;
  template <class BaseClass>
  class WithCallbackMethod_GreetPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithCallbackMethod_GreetPing() {
      ::grpc::Service::MarkMethodCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::proto::GreetRequest, ::proto::GreetResponse>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::proto::GreetRequest* request, ::proto::GreetResponse* response) { return this->GreetPing(context, request, response); }));}
    void SetMessageAllocatorFor_GreetPing(
        ::grpc::MessageAllocator< ::proto::GreetRequest, ::proto::GreetResponse>* allocator) {
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
      static_cast<::grpc::internal::CallbackUnaryHandler< ::proto::GreetRequest, ::proto::GreetResponse>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~WithCallbackMethod_GreetPing() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GreetPing(::grpc::ServerContext* /*context*/, const ::proto::GreetRequest* /*request*/, ::proto::GreetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GreetPing(
      ::grpc::CallbackServerContext* /*context*/, const ::proto::GreetRequest* /*request*/, ::proto::GreetResponse* /*response*/)  { return nullptr; }
  };
  typedef WithCallbackMethod_GreetPing<Service > CallbackService;
  typedef CallbackService ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GreetPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GreetPing() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GreetPing() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GreetPing(::grpc::ServerContext* /*context*/, const ::proto::GreetRequest* /*request*/, ::proto::GreetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GreetPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GreetPing() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_GreetPing() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GreetPing(::grpc::ServerContext* /*context*/, const ::proto::GreetRequest* /*request*/, ::proto::GreetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGreetPing(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawCallbackMethod_GreetPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawCallbackMethod_GreetPing() {
      ::grpc::Service::MarkMethodRawCallback(0,
          new ::grpc::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
                   ::grpc::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GreetPing(context, request, response); }));
    }
    ~WithRawCallbackMethod_GreetPing() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GreetPing(::grpc::ServerContext* /*context*/, const ::proto::GreetRequest* /*request*/, ::proto::GreetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::ServerUnaryReactor* GreetPing(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)  { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GreetPing : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GreetPing() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::proto::GreetRequest, ::proto::GreetResponse>(
            [this](::grpc::ServerContext* context,
                   ::grpc::ServerUnaryStreamer<
                     ::proto::GreetRequest, ::proto::GreetResponse>* streamer) {
                       return this->StreamedGreetPing(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_GreetPing() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GreetPing(::grpc::ServerContext* /*context*/, const ::proto::GreetRequest* /*request*/, ::proto::GreetResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGreetPing(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::proto::GreetRequest,::proto::GreetResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GreetPing<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GreetPing<Service > StreamedService;
};

}  // namespace proto


#endif  // GRPC_greet_2eproto__INCLUDED