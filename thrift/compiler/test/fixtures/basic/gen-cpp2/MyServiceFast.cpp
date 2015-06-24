/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "MyServiceFast.h"

#include "MyServiceFast.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

std::unique_ptr<apache::thrift::AsyncProcessor> MyServiceFastSvIf::getProcessor() {
  return std::unique_ptr<apache::thrift::AsyncProcessor>(new MyServiceFastAsyncProcessor((MyServiceFastSvIf*)this));
}

void MyServiceFastSvIf::ping() {
  throw apache::thrift::TApplicationException("Function ping is unimplemented");
}

folly::Future<void> MyServiceFastSvIf::future_ping() {
  folly::Promise<void> promise40;
  try {
    ping();
    promise40.setValue();
  } catch(const std::exception& ex) {
    promise40.setException(folly::exception_wrapper(std::current_exception()));
  }
  return promise40.getFuture();
}

void MyServiceFastSvIf::async_eb_ping(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  auto callbackp = callback.release();
  setEventBase(callbackp->getEventBase());
  setThreadManager(callbackp->getThreadManager());
  callbackp->runFuncInQueue([this, callbackp]() mutable {
    setConnectionContext(callbackp->getConnectionContext());
    try {
      auto future41 = future_ping();
      future41.then([=](folly::Try<void>&& t) {
        try {
          t.throwIfFailed();
          callbackp->doneInThread();
        } catch(...) {
          callbackp->exceptionInThread(std::current_exception());
        }
      }
      );
    } catch(const std::exception& ex) {
      callbackp->exceptionInThread(std::current_exception());
    }
  }
  );
}

void MyServiceFastSvIf::getRandomData(std::string& _return) {
  throw apache::thrift::TApplicationException("Function getRandomData is unimplemented");
}

folly::Future<std::unique_ptr<std::string>> MyServiceFastSvIf::future_getRandomData() {
  folly::Promise<std::unique_ptr<std::string>> promise42;
  try {
    std::unique_ptr<std::string> _return(new std::string);
    getRandomData(*_return);
    promise42.setValue(std::move(_return));
  } catch(const std::exception& ex) {
    promise42.setException(folly::exception_wrapper(std::current_exception()));
  }
  return promise42.getFuture();
}

void MyServiceFastSvIf::async_eb_getRandomData(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback) {
  auto callbackp = callback.release();
  setEventBase(callbackp->getEventBase());
  setThreadManager(callbackp->getThreadManager());
  callbackp->runFuncInQueue([this, callbackp]() mutable {
    setConnectionContext(callbackp->getConnectionContext());
    try {
      auto future43 = future_getRandomData();
      future43.then([=](folly::Try<std::unique_ptr<std::string>>&& _return) {
        try {
          callbackp->resultInThread(std::move(_return.value()));
        } catch(...) {
          callbackp->exceptionInThread(std::current_exception());
        }
      }
      );
    } catch(const std::exception& ex) {
      callbackp->exceptionInThread(std::current_exception());
    }
  }
  );
}

bool MyServiceFastSvIf::hasDataById(int64_t id) {
  throw apache::thrift::TApplicationException("Function hasDataById is unimplemented");
  return 0;
}

folly::Future<bool> MyServiceFastSvIf::future_hasDataById(int64_t id) {
  folly::Promise<bool> promise44;
  try {
    promise44.setValue(hasDataById(id));
  } catch(const std::exception& ex) {
    promise44.setException(folly::exception_wrapper(std::current_exception()));
  }
  return promise44.getFuture();
}

void MyServiceFastSvIf::async_eb_hasDataById(std::unique_ptr<apache::thrift::HandlerCallback<bool>> callback, int64_t id) {
  auto callbackp = callback.release();
  setEventBase(callbackp->getEventBase());
  setThreadManager(callbackp->getThreadManager());
  callbackp->runFuncInQueue([this, callbackp, id]() mutable {
    setConnectionContext(callbackp->getConnectionContext());
    try {
      auto future45 = future_hasDataById(id);
      future45.then([=](folly::Try<bool>&& _return) {
        try {
          callbackp->resultInThread(std::move(_return.value()));
        } catch(...) {
          callbackp->exceptionInThread(std::current_exception());
        }
      }
      );
    } catch(const std::exception& ex) {
      callbackp->exceptionInThread(std::current_exception());
    }
  }
  );
}

void MyServiceFastSvIf::getDataById(std::string& _return, int64_t id) {
  throw apache::thrift::TApplicationException("Function getDataById is unimplemented");
}

folly::Future<std::unique_ptr<std::string>> MyServiceFastSvIf::future_getDataById(int64_t id) {
  folly::Promise<std::unique_ptr<std::string>> promise46;
  try {
    std::unique_ptr<std::string> _return(new std::string);
    getDataById(*_return, id);
    promise46.setValue(std::move(_return));
  } catch(const std::exception& ex) {
    promise46.setException(folly::exception_wrapper(std::current_exception()));
  }
  return promise46.getFuture();
}

void MyServiceFastSvIf::async_eb_getDataById(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr<std::string>>> callback, int64_t id) {
  auto callbackp = callback.release();
  setEventBase(callbackp->getEventBase());
  setThreadManager(callbackp->getThreadManager());
  callbackp->runFuncInQueue([this, callbackp, id]() mutable {
    setConnectionContext(callbackp->getConnectionContext());
    try {
      auto future47 = future_getDataById(id);
      future47.then([=](folly::Try<std::unique_ptr<std::string>>&& _return) {
        try {
          callbackp->resultInThread(std::move(_return.value()));
        } catch(...) {
          callbackp->exceptionInThread(std::current_exception());
        }
      }
      );
    } catch(const std::exception& ex) {
      callbackp->exceptionInThread(std::current_exception());
    }
  }
  );
}

void MyServiceFastSvIf::putDataById(int64_t id, std::unique_ptr<std::string> data) {
  throw apache::thrift::TApplicationException("Function putDataById is unimplemented");
}

folly::Future<void> MyServiceFastSvIf::future_putDataById(int64_t id, std::unique_ptr<std::string> data) {
  folly::Promise<void> promise48;
  try {
    putDataById(id, std::move(data));
    promise48.setValue();
  } catch(const std::exception& ex) {
    promise48.setException(folly::exception_wrapper(std::current_exception()));
  }
  return promise48.getFuture();
}

void MyServiceFastSvIf::async_eb_putDataById(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int64_t id, std::unique_ptr<std::string> data) {
  auto callbackp = callback.release();
  setEventBase(callbackp->getEventBase());
  setThreadManager(callbackp->getThreadManager());
  auto tmp_move_data49 = std::move(data);
  auto move_data50 = folly::makeMoveWrapper(std::move(tmp_move_data49));
  callbackp->runFuncInQueue([this, callbackp, id, move_data50]() mutable {
    setConnectionContext(callbackp->getConnectionContext());
    try {
      auto future51 = future_putDataById(id, std::move(*move_data50));
      future51.then([=](folly::Try<void>&& t) {
        try {
          t.throwIfFailed();
          callbackp->doneInThread();
        } catch(...) {
          callbackp->exceptionInThread(std::current_exception());
        }
      }
      );
    } catch(const std::exception& ex) {
      callbackp->exceptionInThread(std::current_exception());
    }
  }
  );
}

void MyServiceFastSvIf::lobDataById(int64_t id, std::unique_ptr<std::string> data) {
  throw apache::thrift::TApplicationException("Function lobDataById is unimplemented");
}

folly::Future<void> MyServiceFastSvIf::future_lobDataById(int64_t id, std::unique_ptr<std::string> data) {
  folly::Promise<void> promise52;
  try {
    lobDataById(id, std::move(data));
    promise52.setValue();
  } catch(const std::exception& ex) {
    promise52.setException(folly::exception_wrapper(std::current_exception()));
  }
  return promise52.getFuture();
}

void MyServiceFastSvIf::async_eb_lobDataById(std::unique_ptr<apache::thrift::HandlerCallbackBase> callback, int64_t id, std::unique_ptr<std::string> data) {
  auto callbackp = callback.release();
  setEventBase(callbackp->getEventBase());
  setThreadManager(callbackp->getThreadManager());
  auto tmp_move_data53 = std::move(data);
  auto move_data54 = folly::makeMoveWrapper(std::move(tmp_move_data53));
  callbackp->runFuncInQueue([this, callbackp, id, move_data54]() mutable {
    setConnectionContext(callbackp->getConnectionContext());
    try {
      auto future55 = future_lobDataById(id, std::move(*move_data54));
      delete callbackp;
    } catch(const std::exception& ex) {
      delete callbackp;
    }
  }
  );
}

const char* MyServiceFastAsyncProcessor::getServiceName() {
  return "MyServiceFast";
}

folly::Optional<std::string> MyServiceFastAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  std::string fname;
  apache::thrift::MessageType mtype;
  int32_t protoSeqId = 0;
  std::string pname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;
  try {
    switch(protType) {
      case apache::thrift::protocol::T_BINARY_PROTOCOL:
      {
        std::unique_ptr<apache::thrift::BinaryProtocolReader> iprot(new apache::thrift::BinaryProtocolReader());
        iprot->setInput(buf);
        iprot->readMessageBegin(fname, mtype, protoSeqId);
        auto pfn = CacheKeyMap.find(fname);
        if (pfn == CacheKeyMap.end()) {
          return folly::none;
        }
        auto cacheKeyParamId = pfn->second;
        uint32_t xfer = 0;
        xfer += iprot->readStructBegin(pname);
        while(true) {
          xfer += iprot->readFieldBegin(pname, ftype, fid);
          if (ftype == apache::thrift::protocol::T_STOP) {
            break;
          }
          if (fid == cacheKeyParamId) {
            std::string cacheKey;
            iprot->readString(cacheKey);
            return folly::Optional<std::string>(std::move(cacheKey));
          }
          xfer += iprot->skip(ftype);
          xfer += iprot->readFieldEnd();
        }
        return folly::none;
      }
      case apache::thrift::protocol::T_COMPACT_PROTOCOL:
      {
        std::unique_ptr<apache::thrift::CompactProtocolReader> iprot(new apache::thrift::CompactProtocolReader());
        iprot->setInput(buf);
        iprot->readMessageBegin(fname, mtype, protoSeqId);
        auto pfn = CacheKeyMap.find(fname);
        if (pfn == CacheKeyMap.end()) {
          return folly::none;
        }
        auto cacheKeyParamId = pfn->second;
        uint32_t xfer = 0;
        xfer += iprot->readStructBegin(pname);
        while(true) {
          xfer += iprot->readFieldBegin(pname, ftype, fid);
          if (ftype == apache::thrift::protocol::T_STOP) {
            break;
          }
          if (fid == cacheKeyParamId) {
            std::string cacheKey;
            iprot->readString(cacheKey);
            return folly::Optional<std::string>(std::move(cacheKey));
          }
          xfer += iprot->skip(ftype);
          xfer += iprot->readFieldEnd();
        }
        return folly::none;
      }
      default:
      {
        return folly::none;
        break;
      }
    }
  } catch(const std::exception& e) {
    LOG(ERROR) << "Caught an exception parsing buffer:" << e.what();
    return folly::none;
  }
  return folly::none;
}

void MyServiceFastAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType,apache::thrift::Cpp2RequestContext* context,apache::thrift::async::TEventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  std::string fname;
  apache::thrift::MessageType mtype;
  int32_t protoSeqId = 0;
  switch(protType) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      std::unique_ptr<apache::thrift::BinaryProtocolReader> iprot(new apache::thrift::BinaryProtocolReader());
      iprot->setInput(buf.get());
      try {
        iprot->readMessageBegin(fname, mtype, protoSeqId);
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        apache::thrift::BinaryProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message from client" << " in function process";
          apache::thrift::TApplicationException x("invalid message from client");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message from client" << " in oneway function process";
        }
        return;
      }
      if (mtype != apache::thrift::T_CALL && mtype != apache::thrift::T_ONEWAY) {
        LOG(ERROR) << "received invalid message of type " << mtype;
        apache::thrift::BinaryProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message arguments" << " in function process";
          apache::thrift::TApplicationException x("invalid message arguments");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message arguments" << " in oneway function process";
        }
      }
      auto pfn = binaryProcessMap_.find(fname);
      if (pfn == binaryProcessMap_.end()) {
        const std::string exMsg = folly::stringPrintf( "Method name %s not found", fname.c_str());
        apache::thrift::BinaryProtocolWriter prot;
        if (req) {
          LOG(ERROR) << exMsg << " in function process";
          apache::thrift::TApplicationException x(exMsg);
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << exMsg << " in oneway function process";
        }
        return;
      }
      (this->*(pfn->second))(std::move(req), std::move(buf), std::move(iprot), context, eb, tm);
      return;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      std::unique_ptr<apache::thrift::CompactProtocolReader> iprot(new apache::thrift::CompactProtocolReader());
      iprot->setInput(buf.get());
      try {
        iprot->readMessageBegin(fname, mtype, protoSeqId);
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        apache::thrift::CompactProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message from client" << " in function process";
          apache::thrift::TApplicationException x("invalid message from client");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message from client" << " in oneway function process";
        }
        return;
      }
      if (mtype != apache::thrift::T_CALL && mtype != apache::thrift::T_ONEWAY) {
        LOG(ERROR) << "received invalid message of type " << mtype;
        apache::thrift::CompactProtocolWriter prot;
        if (req) {
          LOG(ERROR) << "invalid message arguments" << " in function process";
          apache::thrift::TApplicationException x("invalid message arguments");
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << "invalid message arguments" << " in oneway function process";
        }
      }
      auto pfn = compactProcessMap_.find(fname);
      if (pfn == compactProcessMap_.end()) {
        const std::string exMsg = folly::stringPrintf( "Method name %s not found", fname.c_str());
        apache::thrift::CompactProtocolWriter prot;
        if (req) {
          LOG(ERROR) << exMsg << " in function process";
          apache::thrift::TApplicationException x(exMsg);
          folly::IOBufQueue queue = serializeException("process", &prot, protoSeqId, nullptr, x);
          queue.append(apache::thrift::transport::THeader::transform(queue.move(), context->getTransforms(), context->getMinCompressBytes()));
          auto queue_mw = folly::makeMoveWrapper(std::move(queue));
          auto req_mw = folly::makeMoveWrapper(std::move(req));
          eb->runInEventBaseThread([=]() mutable {
            (*req_mw)->sendReply(queue_mw->move());
          }
          );
          return;
        }
        else {
          LOG(ERROR) << exMsg << " in oneway function process";
        }
        return;
      }
      (this->*(pfn->second))(std::move(req), std::move(buf), std::move(iprot), context, eb, tm);
      return;
    }
    default:
    {
      LOG(ERROR) << "invalid protType: " << protType;
      return;
      break;
    }
  }
}

bool MyServiceFastAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  std::string fname;
  apache::thrift::MessageType mtype;
  int32_t protoSeqId = 0;
  apache::thrift::protocol::PROTOCOL_TYPES protType = static_cast<apache::thrift::protocol::PROTOCOL_TYPES>(header->getProtocolId());
  switch(protType) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader iprot;
      iprot.setInput(buf);
      try {
        iprot.readMessageBegin(fname, mtype, protoSeqId);
        auto it = onewayMethods.find(fname);
        return it != onewayMethods.end();
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        return false;
      }
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader iprot;
      iprot.setInput(buf);
      try {
        iprot.readMessageBegin(fname, mtype, protoSeqId);
        auto it = onewayMethods.find(fname);
        return it != onewayMethods.end();
      } catch(const apache::thrift::TException& ex) {
        LOG(ERROR) << "received invalid message from client: " << ex.what();
        return false;
      }
    }
    default:
    {
      LOG(ERROR) << "invalid protType: " << protType;
      break;
    }
  }
  return false;
}

std::unordered_set<std::string> MyServiceFastAsyncProcessor::onewayMethods {
  "lobDataById"
};
std::unordered_map<std::string, int16_t> MyServiceFastAsyncProcessor::CacheKeyMap {};
MyServiceFastAsyncProcessor::binaryProcessMap MyServiceFastAsyncProcessor::binaryProcessMap_ {
  {"ping", &MyServiceFastAsyncProcessor::process_ping<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getRandomData", &MyServiceFastAsyncProcessor::process_getRandomData<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"hasDataById", &MyServiceFastAsyncProcessor::process_hasDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getDataById", &MyServiceFastAsyncProcessor::process_getDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"putDataById", &MyServiceFastAsyncProcessor::process_putDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"lobDataById", &MyServiceFastAsyncProcessor::process_lobDataById<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}
};
MyServiceFastAsyncProcessor::compactProcessMap MyServiceFastAsyncProcessor::compactProcessMap_ {
  {"ping", &MyServiceFastAsyncProcessor::process_ping<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getRandomData", &MyServiceFastAsyncProcessor::process_getRandomData<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"hasDataById", &MyServiceFastAsyncProcessor::process_hasDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getDataById", &MyServiceFastAsyncProcessor::process_getDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"putDataById", &MyServiceFastAsyncProcessor::process_putDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"lobDataById", &MyServiceFastAsyncProcessor::process_lobDataById<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>}
};

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift