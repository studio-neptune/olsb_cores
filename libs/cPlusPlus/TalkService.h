/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef TalkService_H
#define TalkService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "litecore_types.h"



#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class TalkServiceIf {
 public:
  virtual ~TalkServiceIf() {}
  virtual void acceptGroupInvitation(const int32_t reqSeq, const std::string& groupId) = 0;
  virtual void createGroup(Group& _return, const int32_t seq, const std::string& name, const std::vector<std::string> & contactIds) = 0;
  virtual void createQrcodeBase64Image(std::string& _return, const std::string& url, const std::string& characterSet, const int32_t imageSize, const int32_t x, const int32_t y, const int32_t width, const int32_t height) = 0;
  virtual void createRoom(Room& _return, const int32_t reqSeq, const std::vector<std::string> & contactIds) = 0;
  virtual void createSession(std::string& _return) = 0;
  virtual void fetchOperations(std::vector<Operation> & _return, const int64_t localRev, const int32_t count) = 0;
  virtual void getProfile(Profile& _return) = 0;
  virtual void findAndAddContactsByEmail(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & emails) = 0;
  virtual void findAndAddContactsByMid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& mid) = 0;
  virtual void findAndAddContactsByPhone(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & phones) = 0;
  virtual void findAndAddContactsByUserid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& userid) = 0;
  virtual void findContactByUserid(Contact& _return, const std::string& userid) = 0;
  virtual void findContactByUserTicket(Contact& _return, const std::string& ticketId) = 0;
  virtual void findContactsByEmail(std::map<std::string, Contact> & _return, const std::set<std::string> & emails) = 0;
  virtual void findContactsByPhone(std::map<std::string, Contact> & _return, const std::set<std::string> & phones) = 0;
  virtual void generateUserTicket(Ticket& _return, const int64_t expirationTime, const int32_t maxUseCount) = 0;
  virtual void getAllContactIds(std::vector<std::string> & _return) = 0;
  virtual void getBlockedContactIds(std::vector<std::string> & _return) = 0;
  virtual void getBlockedContactIdsByRange(std::vector<std::string> & _return, const int32_t start, const int32_t count) = 0;
  virtual void getBlockedRecommendationIds(std::vector<std::string> & _return) = 0;
  virtual void getContact(Contact& _return, const std::string& id) = 0;
  virtual void getContacts(std::vector<Contact> & _return, const std::vector<std::string> & ids) = 0;
  virtual void getGroup(Group& _return, const std::string& groupId) = 0;
  virtual void getGroupIdsInvited(std::vector<std::string> & _return) = 0;
  virtual void getGroupIdsJoined(std::vector<std::string> & _return) = 0;
  virtual void getGroups(std::vector<Group> & _return, const std::vector<std::string> & groupIds) = 0;
  virtual void getFavoriteMids(std::vector<std::string> & _return) = 0;
  virtual void getHiddenContactMids(std::vector<std::string> & _return) = 0;
  virtual int64_t getLastOpRevision() = 0;
  virtual void getRoom(Room& _return, const std::string& roomId) = 0;
  virtual void getRSAKeyInfo(RSAKey& _return, const IdentityProvider::type provider) = 0;
  virtual int64_t getServerTime() = 0;
  virtual void getSessions(std::vector<LoginSession> & _return) = 0;
  virtual void leaveGroup(const int32_t reqSeq, const std::string& groupId) = 0;
  virtual void loginZ(LoginResult& _return, const loginRequest& LoginRequest) = 0;
  virtual void logout() = 0;
  virtual void logoutSession(const std::string& tokenKey) = 0;
  virtual void sendMessage(Message& _return, const int32_t seq, const Message& message) = 0;
};

class TalkServiceIfFactory {
 public:
  typedef TalkServiceIf Handler;

  virtual ~TalkServiceIfFactory() {}

  virtual TalkServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(TalkServiceIf* /* handler */) = 0;
};

class TalkServiceIfSingletonFactory : virtual public TalkServiceIfFactory {
 public:
  TalkServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<TalkServiceIf>& iface) : iface_(iface) {}
  virtual ~TalkServiceIfSingletonFactory() {}

  virtual TalkServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(TalkServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<TalkServiceIf> iface_;
};

class TalkServiceNull : virtual public TalkServiceIf {
 public:
  virtual ~TalkServiceNull() {}
  void acceptGroupInvitation(const int32_t /* reqSeq */, const std::string& /* groupId */) {
    return;
  }
  void createGroup(Group& /* _return */, const int32_t /* seq */, const std::string& /* name */, const std::vector<std::string> & /* contactIds */) {
    return;
  }
  void createQrcodeBase64Image(std::string& /* _return */, const std::string& /* url */, const std::string& /* characterSet */, const int32_t /* imageSize */, const int32_t /* x */, const int32_t /* y */, const int32_t /* width */, const int32_t /* height */) {
    return;
  }
  void createRoom(Room& /* _return */, const int32_t /* reqSeq */, const std::vector<std::string> & /* contactIds */) {
    return;
  }
  void createSession(std::string& /* _return */) {
    return;
  }
  void fetchOperations(std::vector<Operation> & /* _return */, const int64_t /* localRev */, const int32_t /* count */) {
    return;
  }
  void getProfile(Profile& /* _return */) {
    return;
  }
  void findAndAddContactsByEmail(std::map<std::string, Contact> & /* _return */, const int32_t /* reqSeq */, const std::set<std::string> & /* emails */) {
    return;
  }
  void findAndAddContactsByMid(std::map<std::string, Contact> & /* _return */, const int32_t /* reqSeq */, const std::string& /* mid */) {
    return;
  }
  void findAndAddContactsByPhone(std::map<std::string, Contact> & /* _return */, const int32_t /* reqSeq */, const std::set<std::string> & /* phones */) {
    return;
  }
  void findAndAddContactsByUserid(std::map<std::string, Contact> & /* _return */, const int32_t /* reqSeq */, const std::string& /* userid */) {
    return;
  }
  void findContactByUserid(Contact& /* _return */, const std::string& /* userid */) {
    return;
  }
  void findContactByUserTicket(Contact& /* _return */, const std::string& /* ticketId */) {
    return;
  }
  void findContactsByEmail(std::map<std::string, Contact> & /* _return */, const std::set<std::string> & /* emails */) {
    return;
  }
  void findContactsByPhone(std::map<std::string, Contact> & /* _return */, const std::set<std::string> & /* phones */) {
    return;
  }
  void generateUserTicket(Ticket& /* _return */, const int64_t /* expirationTime */, const int32_t /* maxUseCount */) {
    return;
  }
  void getAllContactIds(std::vector<std::string> & /* _return */) {
    return;
  }
  void getBlockedContactIds(std::vector<std::string> & /* _return */) {
    return;
  }
  void getBlockedContactIdsByRange(std::vector<std::string> & /* _return */, const int32_t /* start */, const int32_t /* count */) {
    return;
  }
  void getBlockedRecommendationIds(std::vector<std::string> & /* _return */) {
    return;
  }
  void getContact(Contact& /* _return */, const std::string& /* id */) {
    return;
  }
  void getContacts(std::vector<Contact> & /* _return */, const std::vector<std::string> & /* ids */) {
    return;
  }
  void getGroup(Group& /* _return */, const std::string& /* groupId */) {
    return;
  }
  void getGroupIdsInvited(std::vector<std::string> & /* _return */) {
    return;
  }
  void getGroupIdsJoined(std::vector<std::string> & /* _return */) {
    return;
  }
  void getGroups(std::vector<Group> & /* _return */, const std::vector<std::string> & /* groupIds */) {
    return;
  }
  void getFavoriteMids(std::vector<std::string> & /* _return */) {
    return;
  }
  void getHiddenContactMids(std::vector<std::string> & /* _return */) {
    return;
  }
  int64_t getLastOpRevision() {
    int64_t _return = 0;
    return _return;
  }
  void getRoom(Room& /* _return */, const std::string& /* roomId */) {
    return;
  }
  void getRSAKeyInfo(RSAKey& /* _return */, const IdentityProvider::type /* provider */) {
    return;
  }
  int64_t getServerTime() {
    int64_t _return = 0;
    return _return;
  }
  void getSessions(std::vector<LoginSession> & /* _return */) {
    return;
  }
  void leaveGroup(const int32_t /* reqSeq */, const std::string& /* groupId */) {
    return;
  }
  void loginZ(LoginResult& /* _return */, const loginRequest& /* LoginRequest */) {
    return;
  }
  void logout() {
    return;
  }
  void logoutSession(const std::string& /* tokenKey */) {
    return;
  }
  void sendMessage(Message& /* _return */, const int32_t /* seq */, const Message& /* message */) {
    return;
  }
};

typedef struct _TalkService_acceptGroupInvitation_args__isset {
  _TalkService_acceptGroupInvitation_args__isset() : reqSeq(false), groupId(false) {}
  bool reqSeq :1;
  bool groupId :1;
} _TalkService_acceptGroupInvitation_args__isset;

class TalkService_acceptGroupInvitation_args {
 public:

  TalkService_acceptGroupInvitation_args(const TalkService_acceptGroupInvitation_args&);
  TalkService_acceptGroupInvitation_args& operator=(const TalkService_acceptGroupInvitation_args&);
  TalkService_acceptGroupInvitation_args() : reqSeq(0), groupId() {
  }

  virtual ~TalkService_acceptGroupInvitation_args() throw();
  int32_t reqSeq;
  std::string groupId;

  _TalkService_acceptGroupInvitation_args__isset __isset;

  void __set_reqSeq(const int32_t val);

  void __set_groupId(const std::string& val);

  bool operator == (const TalkService_acceptGroupInvitation_args & rhs) const
  {
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(groupId == rhs.groupId))
      return false;
    return true;
  }
  bool operator != (const TalkService_acceptGroupInvitation_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_acceptGroupInvitation_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_acceptGroupInvitation_pargs {
 public:


  virtual ~TalkService_acceptGroupInvitation_pargs() throw();
  const int32_t* reqSeq;
  const std::string* groupId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_acceptGroupInvitation_result__isset {
  _TalkService_acceptGroupInvitation_result__isset() : e(false) {}
  bool e :1;
} _TalkService_acceptGroupInvitation_result__isset;

class TalkService_acceptGroupInvitation_result {
 public:

  TalkService_acceptGroupInvitation_result(const TalkService_acceptGroupInvitation_result&);
  TalkService_acceptGroupInvitation_result& operator=(const TalkService_acceptGroupInvitation_result&);
  TalkService_acceptGroupInvitation_result() {
  }

  virtual ~TalkService_acceptGroupInvitation_result() throw();
  TalkException e;

  _TalkService_acceptGroupInvitation_result__isset __isset;

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_acceptGroupInvitation_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_acceptGroupInvitation_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_acceptGroupInvitation_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_acceptGroupInvitation_presult__isset {
  _TalkService_acceptGroupInvitation_presult__isset() : e(false) {}
  bool e :1;
} _TalkService_acceptGroupInvitation_presult__isset;

class TalkService_acceptGroupInvitation_presult {
 public:


  virtual ~TalkService_acceptGroupInvitation_presult() throw();
  TalkException e;

  _TalkService_acceptGroupInvitation_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_createGroup_args__isset {
  _TalkService_createGroup_args__isset() : seq(false), name(false), contactIds(false) {}
  bool seq :1;
  bool name :1;
  bool contactIds :1;
} _TalkService_createGroup_args__isset;

class TalkService_createGroup_args {
 public:

  TalkService_createGroup_args(const TalkService_createGroup_args&);
  TalkService_createGroup_args& operator=(const TalkService_createGroup_args&);
  TalkService_createGroup_args() : seq(0), name() {
  }

  virtual ~TalkService_createGroup_args() throw();
  int32_t seq;
  std::string name;
  std::vector<std::string>  contactIds;

  _TalkService_createGroup_args__isset __isset;

  void __set_seq(const int32_t val);

  void __set_name(const std::string& val);

  void __set_contactIds(const std::vector<std::string> & val);

  bool operator == (const TalkService_createGroup_args & rhs) const
  {
    if (!(seq == rhs.seq))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(contactIds == rhs.contactIds))
      return false;
    return true;
  }
  bool operator != (const TalkService_createGroup_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createGroup_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_createGroup_pargs {
 public:


  virtual ~TalkService_createGroup_pargs() throw();
  const int32_t* seq;
  const std::string* name;
  const std::vector<std::string> * contactIds;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createGroup_result__isset {
  _TalkService_createGroup_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createGroup_result__isset;

class TalkService_createGroup_result {
 public:

  TalkService_createGroup_result(const TalkService_createGroup_result&);
  TalkService_createGroup_result& operator=(const TalkService_createGroup_result&);
  TalkService_createGroup_result() {
  }

  virtual ~TalkService_createGroup_result() throw();
  Group success;
  TalkException e;

  _TalkService_createGroup_result__isset __isset;

  void __set_success(const Group& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_createGroup_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_createGroup_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createGroup_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createGroup_presult__isset {
  _TalkService_createGroup_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createGroup_presult__isset;

class TalkService_createGroup_presult {
 public:


  virtual ~TalkService_createGroup_presult() throw();
  Group* success;
  TalkException e;

  _TalkService_createGroup_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_createQrcodeBase64Image_args__isset {
  _TalkService_createQrcodeBase64Image_args__isset() : url(false), characterSet(false), imageSize(false), x(false), y(false), width(false), height(false) {}
  bool url :1;
  bool characterSet :1;
  bool imageSize :1;
  bool x :1;
  bool y :1;
  bool width :1;
  bool height :1;
} _TalkService_createQrcodeBase64Image_args__isset;

class TalkService_createQrcodeBase64Image_args {
 public:

  TalkService_createQrcodeBase64Image_args(const TalkService_createQrcodeBase64Image_args&);
  TalkService_createQrcodeBase64Image_args& operator=(const TalkService_createQrcodeBase64Image_args&);
  TalkService_createQrcodeBase64Image_args() : url(), characterSet(), imageSize(0), x(0), y(0), width(0), height(0) {
  }

  virtual ~TalkService_createQrcodeBase64Image_args() throw();
  std::string url;
  std::string characterSet;
  int32_t imageSize;
  int32_t x;
  int32_t y;
  int32_t width;
  int32_t height;

  _TalkService_createQrcodeBase64Image_args__isset __isset;

  void __set_url(const std::string& val);

  void __set_characterSet(const std::string& val);

  void __set_imageSize(const int32_t val);

  void __set_x(const int32_t val);

  void __set_y(const int32_t val);

  void __set_width(const int32_t val);

  void __set_height(const int32_t val);

  bool operator == (const TalkService_createQrcodeBase64Image_args & rhs) const
  {
    if (!(url == rhs.url))
      return false;
    if (!(characterSet == rhs.characterSet))
      return false;
    if (!(imageSize == rhs.imageSize))
      return false;
    if (!(x == rhs.x))
      return false;
    if (!(y == rhs.y))
      return false;
    if (!(width == rhs.width))
      return false;
    if (!(height == rhs.height))
      return false;
    return true;
  }
  bool operator != (const TalkService_createQrcodeBase64Image_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createQrcodeBase64Image_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_createQrcodeBase64Image_pargs {
 public:


  virtual ~TalkService_createQrcodeBase64Image_pargs() throw();
  const std::string* url;
  const std::string* characterSet;
  const int32_t* imageSize;
  const int32_t* x;
  const int32_t* y;
  const int32_t* width;
  const int32_t* height;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createQrcodeBase64Image_result__isset {
  _TalkService_createQrcodeBase64Image_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createQrcodeBase64Image_result__isset;

class TalkService_createQrcodeBase64Image_result {
 public:

  TalkService_createQrcodeBase64Image_result(const TalkService_createQrcodeBase64Image_result&);
  TalkService_createQrcodeBase64Image_result& operator=(const TalkService_createQrcodeBase64Image_result&);
  TalkService_createQrcodeBase64Image_result() : success() {
  }

  virtual ~TalkService_createQrcodeBase64Image_result() throw();
  std::string success;
  TalkException e;

  _TalkService_createQrcodeBase64Image_result__isset __isset;

  void __set_success(const std::string& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_createQrcodeBase64Image_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_createQrcodeBase64Image_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createQrcodeBase64Image_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createQrcodeBase64Image_presult__isset {
  _TalkService_createQrcodeBase64Image_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createQrcodeBase64Image_presult__isset;

class TalkService_createQrcodeBase64Image_presult {
 public:


  virtual ~TalkService_createQrcodeBase64Image_presult() throw();
  std::string* success;
  TalkException e;

  _TalkService_createQrcodeBase64Image_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_createRoom_args__isset {
  _TalkService_createRoom_args__isset() : reqSeq(false), contactIds(false) {}
  bool reqSeq :1;
  bool contactIds :1;
} _TalkService_createRoom_args__isset;

class TalkService_createRoom_args {
 public:

  TalkService_createRoom_args(const TalkService_createRoom_args&);
  TalkService_createRoom_args& operator=(const TalkService_createRoom_args&);
  TalkService_createRoom_args() : reqSeq(0) {
  }

  virtual ~TalkService_createRoom_args() throw();
  int32_t reqSeq;
  std::vector<std::string>  contactIds;

  _TalkService_createRoom_args__isset __isset;

  void __set_reqSeq(const int32_t val);

  void __set_contactIds(const std::vector<std::string> & val);

  bool operator == (const TalkService_createRoom_args & rhs) const
  {
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(contactIds == rhs.contactIds))
      return false;
    return true;
  }
  bool operator != (const TalkService_createRoom_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createRoom_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_createRoom_pargs {
 public:


  virtual ~TalkService_createRoom_pargs() throw();
  const int32_t* reqSeq;
  const std::vector<std::string> * contactIds;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createRoom_result__isset {
  _TalkService_createRoom_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createRoom_result__isset;

class TalkService_createRoom_result {
 public:

  TalkService_createRoom_result(const TalkService_createRoom_result&);
  TalkService_createRoom_result& operator=(const TalkService_createRoom_result&);
  TalkService_createRoom_result() {
  }

  virtual ~TalkService_createRoom_result() throw();
  Room success;
  TalkException e;

  _TalkService_createRoom_result__isset __isset;

  void __set_success(const Room& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_createRoom_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_createRoom_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createRoom_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createRoom_presult__isset {
  _TalkService_createRoom_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createRoom_presult__isset;

class TalkService_createRoom_presult {
 public:


  virtual ~TalkService_createRoom_presult() throw();
  Room* success;
  TalkException e;

  _TalkService_createRoom_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_createSession_args {
 public:

  TalkService_createSession_args(const TalkService_createSession_args&);
  TalkService_createSession_args& operator=(const TalkService_createSession_args&);
  TalkService_createSession_args() {
  }

  virtual ~TalkService_createSession_args() throw();

  bool operator == (const TalkService_createSession_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_createSession_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createSession_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_createSession_pargs {
 public:


  virtual ~TalkService_createSession_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createSession_result__isset {
  _TalkService_createSession_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createSession_result__isset;

class TalkService_createSession_result {
 public:

  TalkService_createSession_result(const TalkService_createSession_result&);
  TalkService_createSession_result& operator=(const TalkService_createSession_result&);
  TalkService_createSession_result() : success() {
  }

  virtual ~TalkService_createSession_result() throw();
  std::string success;
  TalkException e;

  _TalkService_createSession_result__isset __isset;

  void __set_success(const std::string& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_createSession_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_createSession_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_createSession_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_createSession_presult__isset {
  _TalkService_createSession_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_createSession_presult__isset;

class TalkService_createSession_presult {
 public:


  virtual ~TalkService_createSession_presult() throw();
  std::string* success;
  TalkException e;

  _TalkService_createSession_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_fetchOperations_args__isset {
  _TalkService_fetchOperations_args__isset() : localRev(false), count(false) {}
  bool localRev :1;
  bool count :1;
} _TalkService_fetchOperations_args__isset;

class TalkService_fetchOperations_args {
 public:

  TalkService_fetchOperations_args(const TalkService_fetchOperations_args&);
  TalkService_fetchOperations_args& operator=(const TalkService_fetchOperations_args&);
  TalkService_fetchOperations_args() : localRev(0), count(0) {
  }

  virtual ~TalkService_fetchOperations_args() throw();
  int64_t localRev;
  int32_t count;

  _TalkService_fetchOperations_args__isset __isset;

  void __set_localRev(const int64_t val);

  void __set_count(const int32_t val);

  bool operator == (const TalkService_fetchOperations_args & rhs) const
  {
    if (!(localRev == rhs.localRev))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const TalkService_fetchOperations_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_fetchOperations_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_fetchOperations_pargs {
 public:


  virtual ~TalkService_fetchOperations_pargs() throw();
  const int64_t* localRev;
  const int32_t* count;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_fetchOperations_result__isset {
  _TalkService_fetchOperations_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_fetchOperations_result__isset;

class TalkService_fetchOperations_result {
 public:

  TalkService_fetchOperations_result(const TalkService_fetchOperations_result&);
  TalkService_fetchOperations_result& operator=(const TalkService_fetchOperations_result&);
  TalkService_fetchOperations_result() {
  }

  virtual ~TalkService_fetchOperations_result() throw();
  std::vector<Operation>  success;
  TalkException e;

  _TalkService_fetchOperations_result__isset __isset;

  void __set_success(const std::vector<Operation> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_fetchOperations_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_fetchOperations_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_fetchOperations_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_fetchOperations_presult__isset {
  _TalkService_fetchOperations_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_fetchOperations_presult__isset;

class TalkService_fetchOperations_presult {
 public:


  virtual ~TalkService_fetchOperations_presult() throw();
  std::vector<Operation> * success;
  TalkException e;

  _TalkService_fetchOperations_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getProfile_args {
 public:

  TalkService_getProfile_args(const TalkService_getProfile_args&);
  TalkService_getProfile_args& operator=(const TalkService_getProfile_args&);
  TalkService_getProfile_args() {
  }

  virtual ~TalkService_getProfile_args() throw();

  bool operator == (const TalkService_getProfile_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getProfile_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getProfile_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getProfile_pargs {
 public:


  virtual ~TalkService_getProfile_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getProfile_result__isset {
  _TalkService_getProfile_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getProfile_result__isset;

class TalkService_getProfile_result {
 public:

  TalkService_getProfile_result(const TalkService_getProfile_result&);
  TalkService_getProfile_result& operator=(const TalkService_getProfile_result&);
  TalkService_getProfile_result() {
  }

  virtual ~TalkService_getProfile_result() throw();
  Profile success;
  TalkException e;

  _TalkService_getProfile_result__isset __isset;

  void __set_success(const Profile& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getProfile_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getProfile_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getProfile_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getProfile_presult__isset {
  _TalkService_getProfile_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getProfile_presult__isset;

class TalkService_getProfile_presult {
 public:


  virtual ~TalkService_getProfile_presult() throw();
  Profile* success;
  TalkException e;

  _TalkService_getProfile_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findAndAddContactsByEmail_args__isset {
  _TalkService_findAndAddContactsByEmail_args__isset() : reqSeq(false), emails(false) {}
  bool reqSeq :1;
  bool emails :1;
} _TalkService_findAndAddContactsByEmail_args__isset;

class TalkService_findAndAddContactsByEmail_args {
 public:

  TalkService_findAndAddContactsByEmail_args(const TalkService_findAndAddContactsByEmail_args&);
  TalkService_findAndAddContactsByEmail_args& operator=(const TalkService_findAndAddContactsByEmail_args&);
  TalkService_findAndAddContactsByEmail_args() : reqSeq(0) {
  }

  virtual ~TalkService_findAndAddContactsByEmail_args() throw();
  int32_t reqSeq;
  std::set<std::string>  emails;

  _TalkService_findAndAddContactsByEmail_args__isset __isset;

  void __set_reqSeq(const int32_t val);

  void __set_emails(const std::set<std::string> & val);

  bool operator == (const TalkService_findAndAddContactsByEmail_args & rhs) const
  {
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(emails == rhs.emails))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByEmail_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByEmail_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findAndAddContactsByEmail_pargs {
 public:


  virtual ~TalkService_findAndAddContactsByEmail_pargs() throw();
  const int32_t* reqSeq;
  const std::set<std::string> * emails;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByEmail_result__isset {
  _TalkService_findAndAddContactsByEmail_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByEmail_result__isset;

class TalkService_findAndAddContactsByEmail_result {
 public:

  TalkService_findAndAddContactsByEmail_result(const TalkService_findAndAddContactsByEmail_result&);
  TalkService_findAndAddContactsByEmail_result& operator=(const TalkService_findAndAddContactsByEmail_result&);
  TalkService_findAndAddContactsByEmail_result() {
  }

  virtual ~TalkService_findAndAddContactsByEmail_result() throw();
  std::map<std::string, Contact>  success;
  TalkException e;

  _TalkService_findAndAddContactsByEmail_result__isset __isset;

  void __set_success(const std::map<std::string, Contact> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findAndAddContactsByEmail_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByEmail_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByEmail_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByEmail_presult__isset {
  _TalkService_findAndAddContactsByEmail_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByEmail_presult__isset;

class TalkService_findAndAddContactsByEmail_presult {
 public:


  virtual ~TalkService_findAndAddContactsByEmail_presult() throw();
  std::map<std::string, Contact> * success;
  TalkException e;

  _TalkService_findAndAddContactsByEmail_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findAndAddContactsByMid_args__isset {
  _TalkService_findAndAddContactsByMid_args__isset() : reqSeq(false), mid(false) {}
  bool reqSeq :1;
  bool mid :1;
} _TalkService_findAndAddContactsByMid_args__isset;

class TalkService_findAndAddContactsByMid_args {
 public:

  TalkService_findAndAddContactsByMid_args(const TalkService_findAndAddContactsByMid_args&);
  TalkService_findAndAddContactsByMid_args& operator=(const TalkService_findAndAddContactsByMid_args&);
  TalkService_findAndAddContactsByMid_args() : reqSeq(0), mid() {
  }

  virtual ~TalkService_findAndAddContactsByMid_args() throw();
  int32_t reqSeq;
  std::string mid;

  _TalkService_findAndAddContactsByMid_args__isset __isset;

  void __set_reqSeq(const int32_t val);

  void __set_mid(const std::string& val);

  bool operator == (const TalkService_findAndAddContactsByMid_args & rhs) const
  {
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(mid == rhs.mid))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByMid_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByMid_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findAndAddContactsByMid_pargs {
 public:


  virtual ~TalkService_findAndAddContactsByMid_pargs() throw();
  const int32_t* reqSeq;
  const std::string* mid;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByMid_result__isset {
  _TalkService_findAndAddContactsByMid_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByMid_result__isset;

class TalkService_findAndAddContactsByMid_result {
 public:

  TalkService_findAndAddContactsByMid_result(const TalkService_findAndAddContactsByMid_result&);
  TalkService_findAndAddContactsByMid_result& operator=(const TalkService_findAndAddContactsByMid_result&);
  TalkService_findAndAddContactsByMid_result() {
  }

  virtual ~TalkService_findAndAddContactsByMid_result() throw();
  std::map<std::string, Contact>  success;
  TalkException e;

  _TalkService_findAndAddContactsByMid_result__isset __isset;

  void __set_success(const std::map<std::string, Contact> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findAndAddContactsByMid_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByMid_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByMid_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByMid_presult__isset {
  _TalkService_findAndAddContactsByMid_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByMid_presult__isset;

class TalkService_findAndAddContactsByMid_presult {
 public:


  virtual ~TalkService_findAndAddContactsByMid_presult() throw();
  std::map<std::string, Contact> * success;
  TalkException e;

  _TalkService_findAndAddContactsByMid_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findAndAddContactsByPhone_args__isset {
  _TalkService_findAndAddContactsByPhone_args__isset() : reqSeq(false), phones(false) {}
  bool reqSeq :1;
  bool phones :1;
} _TalkService_findAndAddContactsByPhone_args__isset;

class TalkService_findAndAddContactsByPhone_args {
 public:

  TalkService_findAndAddContactsByPhone_args(const TalkService_findAndAddContactsByPhone_args&);
  TalkService_findAndAddContactsByPhone_args& operator=(const TalkService_findAndAddContactsByPhone_args&);
  TalkService_findAndAddContactsByPhone_args() : reqSeq(0) {
  }

  virtual ~TalkService_findAndAddContactsByPhone_args() throw();
  int32_t reqSeq;
  std::set<std::string>  phones;

  _TalkService_findAndAddContactsByPhone_args__isset __isset;

  void __set_reqSeq(const int32_t val);

  void __set_phones(const std::set<std::string> & val);

  bool operator == (const TalkService_findAndAddContactsByPhone_args & rhs) const
  {
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(phones == rhs.phones))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByPhone_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByPhone_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findAndAddContactsByPhone_pargs {
 public:


  virtual ~TalkService_findAndAddContactsByPhone_pargs() throw();
  const int32_t* reqSeq;
  const std::set<std::string> * phones;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByPhone_result__isset {
  _TalkService_findAndAddContactsByPhone_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByPhone_result__isset;

class TalkService_findAndAddContactsByPhone_result {
 public:

  TalkService_findAndAddContactsByPhone_result(const TalkService_findAndAddContactsByPhone_result&);
  TalkService_findAndAddContactsByPhone_result& operator=(const TalkService_findAndAddContactsByPhone_result&);
  TalkService_findAndAddContactsByPhone_result() {
  }

  virtual ~TalkService_findAndAddContactsByPhone_result() throw();
  std::map<std::string, Contact>  success;
  TalkException e;

  _TalkService_findAndAddContactsByPhone_result__isset __isset;

  void __set_success(const std::map<std::string, Contact> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findAndAddContactsByPhone_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByPhone_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByPhone_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByPhone_presult__isset {
  _TalkService_findAndAddContactsByPhone_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByPhone_presult__isset;

class TalkService_findAndAddContactsByPhone_presult {
 public:


  virtual ~TalkService_findAndAddContactsByPhone_presult() throw();
  std::map<std::string, Contact> * success;
  TalkException e;

  _TalkService_findAndAddContactsByPhone_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findAndAddContactsByUserid_args__isset {
  _TalkService_findAndAddContactsByUserid_args__isset() : reqSeq(false), userid(false) {}
  bool reqSeq :1;
  bool userid :1;
} _TalkService_findAndAddContactsByUserid_args__isset;

class TalkService_findAndAddContactsByUserid_args {
 public:

  TalkService_findAndAddContactsByUserid_args(const TalkService_findAndAddContactsByUserid_args&);
  TalkService_findAndAddContactsByUserid_args& operator=(const TalkService_findAndAddContactsByUserid_args&);
  TalkService_findAndAddContactsByUserid_args() : reqSeq(0), userid() {
  }

  virtual ~TalkService_findAndAddContactsByUserid_args() throw();
  int32_t reqSeq;
  std::string userid;

  _TalkService_findAndAddContactsByUserid_args__isset __isset;

  void __set_reqSeq(const int32_t val);

  void __set_userid(const std::string& val);

  bool operator == (const TalkService_findAndAddContactsByUserid_args & rhs) const
  {
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(userid == rhs.userid))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByUserid_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByUserid_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findAndAddContactsByUserid_pargs {
 public:


  virtual ~TalkService_findAndAddContactsByUserid_pargs() throw();
  const int32_t* reqSeq;
  const std::string* userid;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByUserid_result__isset {
  _TalkService_findAndAddContactsByUserid_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByUserid_result__isset;

class TalkService_findAndAddContactsByUserid_result {
 public:

  TalkService_findAndAddContactsByUserid_result(const TalkService_findAndAddContactsByUserid_result&);
  TalkService_findAndAddContactsByUserid_result& operator=(const TalkService_findAndAddContactsByUserid_result&);
  TalkService_findAndAddContactsByUserid_result() {
  }

  virtual ~TalkService_findAndAddContactsByUserid_result() throw();
  std::map<std::string, Contact>  success;
  TalkException e;

  _TalkService_findAndAddContactsByUserid_result__isset __isset;

  void __set_success(const std::map<std::string, Contact> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findAndAddContactsByUserid_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findAndAddContactsByUserid_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findAndAddContactsByUserid_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findAndAddContactsByUserid_presult__isset {
  _TalkService_findAndAddContactsByUserid_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findAndAddContactsByUserid_presult__isset;

class TalkService_findAndAddContactsByUserid_presult {
 public:


  virtual ~TalkService_findAndAddContactsByUserid_presult() throw();
  std::map<std::string, Contact> * success;
  TalkException e;

  _TalkService_findAndAddContactsByUserid_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findContactByUserid_args__isset {
  _TalkService_findContactByUserid_args__isset() : userid(false) {}
  bool userid :1;
} _TalkService_findContactByUserid_args__isset;

class TalkService_findContactByUserid_args {
 public:

  TalkService_findContactByUserid_args(const TalkService_findContactByUserid_args&);
  TalkService_findContactByUserid_args& operator=(const TalkService_findContactByUserid_args&);
  TalkService_findContactByUserid_args() : userid() {
  }

  virtual ~TalkService_findContactByUserid_args() throw();
  std::string userid;

  _TalkService_findContactByUserid_args__isset __isset;

  void __set_userid(const std::string& val);

  bool operator == (const TalkService_findContactByUserid_args & rhs) const
  {
    if (!(userid == rhs.userid))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactByUserid_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactByUserid_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findContactByUserid_pargs {
 public:


  virtual ~TalkService_findContactByUserid_pargs() throw();
  const std::string* userid;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactByUserid_result__isset {
  _TalkService_findContactByUserid_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactByUserid_result__isset;

class TalkService_findContactByUserid_result {
 public:

  TalkService_findContactByUserid_result(const TalkService_findContactByUserid_result&);
  TalkService_findContactByUserid_result& operator=(const TalkService_findContactByUserid_result&);
  TalkService_findContactByUserid_result() {
  }

  virtual ~TalkService_findContactByUserid_result() throw();
  Contact success;
  TalkException e;

  _TalkService_findContactByUserid_result__isset __isset;

  void __set_success(const Contact& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findContactByUserid_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactByUserid_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactByUserid_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactByUserid_presult__isset {
  _TalkService_findContactByUserid_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactByUserid_presult__isset;

class TalkService_findContactByUserid_presult {
 public:


  virtual ~TalkService_findContactByUserid_presult() throw();
  Contact* success;
  TalkException e;

  _TalkService_findContactByUserid_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findContactByUserTicket_args__isset {
  _TalkService_findContactByUserTicket_args__isset() : ticketId(false) {}
  bool ticketId :1;
} _TalkService_findContactByUserTicket_args__isset;

class TalkService_findContactByUserTicket_args {
 public:

  TalkService_findContactByUserTicket_args(const TalkService_findContactByUserTicket_args&);
  TalkService_findContactByUserTicket_args& operator=(const TalkService_findContactByUserTicket_args&);
  TalkService_findContactByUserTicket_args() : ticketId() {
  }

  virtual ~TalkService_findContactByUserTicket_args() throw();
  std::string ticketId;

  _TalkService_findContactByUserTicket_args__isset __isset;

  void __set_ticketId(const std::string& val);

  bool operator == (const TalkService_findContactByUserTicket_args & rhs) const
  {
    if (!(ticketId == rhs.ticketId))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactByUserTicket_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactByUserTicket_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findContactByUserTicket_pargs {
 public:


  virtual ~TalkService_findContactByUserTicket_pargs() throw();
  const std::string* ticketId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactByUserTicket_result__isset {
  _TalkService_findContactByUserTicket_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactByUserTicket_result__isset;

class TalkService_findContactByUserTicket_result {
 public:

  TalkService_findContactByUserTicket_result(const TalkService_findContactByUserTicket_result&);
  TalkService_findContactByUserTicket_result& operator=(const TalkService_findContactByUserTicket_result&);
  TalkService_findContactByUserTicket_result() {
  }

  virtual ~TalkService_findContactByUserTicket_result() throw();
  Contact success;
  TalkException e;

  _TalkService_findContactByUserTicket_result__isset __isset;

  void __set_success(const Contact& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findContactByUserTicket_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactByUserTicket_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactByUserTicket_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactByUserTicket_presult__isset {
  _TalkService_findContactByUserTicket_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactByUserTicket_presult__isset;

class TalkService_findContactByUserTicket_presult {
 public:


  virtual ~TalkService_findContactByUserTicket_presult() throw();
  Contact* success;
  TalkException e;

  _TalkService_findContactByUserTicket_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findContactsByEmail_args__isset {
  _TalkService_findContactsByEmail_args__isset() : emails(false) {}
  bool emails :1;
} _TalkService_findContactsByEmail_args__isset;

class TalkService_findContactsByEmail_args {
 public:

  TalkService_findContactsByEmail_args(const TalkService_findContactsByEmail_args&);
  TalkService_findContactsByEmail_args& operator=(const TalkService_findContactsByEmail_args&);
  TalkService_findContactsByEmail_args() {
  }

  virtual ~TalkService_findContactsByEmail_args() throw();
  std::set<std::string>  emails;

  _TalkService_findContactsByEmail_args__isset __isset;

  void __set_emails(const std::set<std::string> & val);

  bool operator == (const TalkService_findContactsByEmail_args & rhs) const
  {
    if (!(emails == rhs.emails))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactsByEmail_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactsByEmail_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findContactsByEmail_pargs {
 public:


  virtual ~TalkService_findContactsByEmail_pargs() throw();
  const std::set<std::string> * emails;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactsByEmail_result__isset {
  _TalkService_findContactsByEmail_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactsByEmail_result__isset;

class TalkService_findContactsByEmail_result {
 public:

  TalkService_findContactsByEmail_result(const TalkService_findContactsByEmail_result&);
  TalkService_findContactsByEmail_result& operator=(const TalkService_findContactsByEmail_result&);
  TalkService_findContactsByEmail_result() {
  }

  virtual ~TalkService_findContactsByEmail_result() throw();
  std::map<std::string, Contact>  success;
  TalkException e;

  _TalkService_findContactsByEmail_result__isset __isset;

  void __set_success(const std::map<std::string, Contact> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findContactsByEmail_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactsByEmail_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactsByEmail_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactsByEmail_presult__isset {
  _TalkService_findContactsByEmail_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactsByEmail_presult__isset;

class TalkService_findContactsByEmail_presult {
 public:


  virtual ~TalkService_findContactsByEmail_presult() throw();
  std::map<std::string, Contact> * success;
  TalkException e;

  _TalkService_findContactsByEmail_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_findContactsByPhone_args__isset {
  _TalkService_findContactsByPhone_args__isset() : phones(false) {}
  bool phones :1;
} _TalkService_findContactsByPhone_args__isset;

class TalkService_findContactsByPhone_args {
 public:

  TalkService_findContactsByPhone_args(const TalkService_findContactsByPhone_args&);
  TalkService_findContactsByPhone_args& operator=(const TalkService_findContactsByPhone_args&);
  TalkService_findContactsByPhone_args() {
  }

  virtual ~TalkService_findContactsByPhone_args() throw();
  std::set<std::string>  phones;

  _TalkService_findContactsByPhone_args__isset __isset;

  void __set_phones(const std::set<std::string> & val);

  bool operator == (const TalkService_findContactsByPhone_args & rhs) const
  {
    if (!(phones == rhs.phones))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactsByPhone_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactsByPhone_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_findContactsByPhone_pargs {
 public:


  virtual ~TalkService_findContactsByPhone_pargs() throw();
  const std::set<std::string> * phones;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactsByPhone_result__isset {
  _TalkService_findContactsByPhone_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactsByPhone_result__isset;

class TalkService_findContactsByPhone_result {
 public:

  TalkService_findContactsByPhone_result(const TalkService_findContactsByPhone_result&);
  TalkService_findContactsByPhone_result& operator=(const TalkService_findContactsByPhone_result&);
  TalkService_findContactsByPhone_result() {
  }

  virtual ~TalkService_findContactsByPhone_result() throw();
  std::map<std::string, Contact>  success;
  TalkException e;

  _TalkService_findContactsByPhone_result__isset __isset;

  void __set_success(const std::map<std::string, Contact> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_findContactsByPhone_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_findContactsByPhone_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_findContactsByPhone_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_findContactsByPhone_presult__isset {
  _TalkService_findContactsByPhone_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_findContactsByPhone_presult__isset;

class TalkService_findContactsByPhone_presult {
 public:


  virtual ~TalkService_findContactsByPhone_presult() throw();
  std::map<std::string, Contact> * success;
  TalkException e;

  _TalkService_findContactsByPhone_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_generateUserTicket_args__isset {
  _TalkService_generateUserTicket_args__isset() : expirationTime(false), maxUseCount(false) {}
  bool expirationTime :1;
  bool maxUseCount :1;
} _TalkService_generateUserTicket_args__isset;

class TalkService_generateUserTicket_args {
 public:

  TalkService_generateUserTicket_args(const TalkService_generateUserTicket_args&);
  TalkService_generateUserTicket_args& operator=(const TalkService_generateUserTicket_args&);
  TalkService_generateUserTicket_args() : expirationTime(0), maxUseCount(0) {
  }

  virtual ~TalkService_generateUserTicket_args() throw();
  int64_t expirationTime;
  int32_t maxUseCount;

  _TalkService_generateUserTicket_args__isset __isset;

  void __set_expirationTime(const int64_t val);

  void __set_maxUseCount(const int32_t val);

  bool operator == (const TalkService_generateUserTicket_args & rhs) const
  {
    if (!(expirationTime == rhs.expirationTime))
      return false;
    if (!(maxUseCount == rhs.maxUseCount))
      return false;
    return true;
  }
  bool operator != (const TalkService_generateUserTicket_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_generateUserTicket_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_generateUserTicket_pargs {
 public:


  virtual ~TalkService_generateUserTicket_pargs() throw();
  const int64_t* expirationTime;
  const int32_t* maxUseCount;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_generateUserTicket_result__isset {
  _TalkService_generateUserTicket_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_generateUserTicket_result__isset;

class TalkService_generateUserTicket_result {
 public:

  TalkService_generateUserTicket_result(const TalkService_generateUserTicket_result&);
  TalkService_generateUserTicket_result& operator=(const TalkService_generateUserTicket_result&);
  TalkService_generateUserTicket_result() {
  }

  virtual ~TalkService_generateUserTicket_result() throw();
  Ticket success;
  TalkException e;

  _TalkService_generateUserTicket_result__isset __isset;

  void __set_success(const Ticket& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_generateUserTicket_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_generateUserTicket_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_generateUserTicket_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_generateUserTicket_presult__isset {
  _TalkService_generateUserTicket_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_generateUserTicket_presult__isset;

class TalkService_generateUserTicket_presult {
 public:


  virtual ~TalkService_generateUserTicket_presult() throw();
  Ticket* success;
  TalkException e;

  _TalkService_generateUserTicket_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getAllContactIds_args {
 public:

  TalkService_getAllContactIds_args(const TalkService_getAllContactIds_args&);
  TalkService_getAllContactIds_args& operator=(const TalkService_getAllContactIds_args&);
  TalkService_getAllContactIds_args() {
  }

  virtual ~TalkService_getAllContactIds_args() throw();

  bool operator == (const TalkService_getAllContactIds_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getAllContactIds_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getAllContactIds_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getAllContactIds_pargs {
 public:


  virtual ~TalkService_getAllContactIds_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getAllContactIds_result__isset {
  _TalkService_getAllContactIds_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getAllContactIds_result__isset;

class TalkService_getAllContactIds_result {
 public:

  TalkService_getAllContactIds_result(const TalkService_getAllContactIds_result&);
  TalkService_getAllContactIds_result& operator=(const TalkService_getAllContactIds_result&);
  TalkService_getAllContactIds_result() {
  }

  virtual ~TalkService_getAllContactIds_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getAllContactIds_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getAllContactIds_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getAllContactIds_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getAllContactIds_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getAllContactIds_presult__isset {
  _TalkService_getAllContactIds_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getAllContactIds_presult__isset;

class TalkService_getAllContactIds_presult {
 public:


  virtual ~TalkService_getAllContactIds_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getAllContactIds_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getBlockedContactIds_args {
 public:

  TalkService_getBlockedContactIds_args(const TalkService_getBlockedContactIds_args&);
  TalkService_getBlockedContactIds_args& operator=(const TalkService_getBlockedContactIds_args&);
  TalkService_getBlockedContactIds_args() {
  }

  virtual ~TalkService_getBlockedContactIds_args() throw();

  bool operator == (const TalkService_getBlockedContactIds_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getBlockedContactIds_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getBlockedContactIds_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getBlockedContactIds_pargs {
 public:


  virtual ~TalkService_getBlockedContactIds_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getBlockedContactIds_result__isset {
  _TalkService_getBlockedContactIds_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getBlockedContactIds_result__isset;

class TalkService_getBlockedContactIds_result {
 public:

  TalkService_getBlockedContactIds_result(const TalkService_getBlockedContactIds_result&);
  TalkService_getBlockedContactIds_result& operator=(const TalkService_getBlockedContactIds_result&);
  TalkService_getBlockedContactIds_result() {
  }

  virtual ~TalkService_getBlockedContactIds_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getBlockedContactIds_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getBlockedContactIds_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getBlockedContactIds_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getBlockedContactIds_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getBlockedContactIds_presult__isset {
  _TalkService_getBlockedContactIds_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getBlockedContactIds_presult__isset;

class TalkService_getBlockedContactIds_presult {
 public:


  virtual ~TalkService_getBlockedContactIds_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getBlockedContactIds_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_getBlockedContactIdsByRange_args__isset {
  _TalkService_getBlockedContactIdsByRange_args__isset() : start(false), count(false) {}
  bool start :1;
  bool count :1;
} _TalkService_getBlockedContactIdsByRange_args__isset;

class TalkService_getBlockedContactIdsByRange_args {
 public:

  TalkService_getBlockedContactIdsByRange_args(const TalkService_getBlockedContactIdsByRange_args&);
  TalkService_getBlockedContactIdsByRange_args& operator=(const TalkService_getBlockedContactIdsByRange_args&);
  TalkService_getBlockedContactIdsByRange_args() : start(0), count(0) {
  }

  virtual ~TalkService_getBlockedContactIdsByRange_args() throw();
  int32_t start;
  int32_t count;

  _TalkService_getBlockedContactIdsByRange_args__isset __isset;

  void __set_start(const int32_t val);

  void __set_count(const int32_t val);

  bool operator == (const TalkService_getBlockedContactIdsByRange_args & rhs) const
  {
    if (!(start == rhs.start))
      return false;
    if (!(count == rhs.count))
      return false;
    return true;
  }
  bool operator != (const TalkService_getBlockedContactIdsByRange_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getBlockedContactIdsByRange_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getBlockedContactIdsByRange_pargs {
 public:


  virtual ~TalkService_getBlockedContactIdsByRange_pargs() throw();
  const int32_t* start;
  const int32_t* count;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getBlockedContactIdsByRange_result__isset {
  _TalkService_getBlockedContactIdsByRange_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getBlockedContactIdsByRange_result__isset;

class TalkService_getBlockedContactIdsByRange_result {
 public:

  TalkService_getBlockedContactIdsByRange_result(const TalkService_getBlockedContactIdsByRange_result&);
  TalkService_getBlockedContactIdsByRange_result& operator=(const TalkService_getBlockedContactIdsByRange_result&);
  TalkService_getBlockedContactIdsByRange_result() {
  }

  virtual ~TalkService_getBlockedContactIdsByRange_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getBlockedContactIdsByRange_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getBlockedContactIdsByRange_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getBlockedContactIdsByRange_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getBlockedContactIdsByRange_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getBlockedContactIdsByRange_presult__isset {
  _TalkService_getBlockedContactIdsByRange_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getBlockedContactIdsByRange_presult__isset;

class TalkService_getBlockedContactIdsByRange_presult {
 public:


  virtual ~TalkService_getBlockedContactIdsByRange_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getBlockedContactIdsByRange_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getBlockedRecommendationIds_args {
 public:

  TalkService_getBlockedRecommendationIds_args(const TalkService_getBlockedRecommendationIds_args&);
  TalkService_getBlockedRecommendationIds_args& operator=(const TalkService_getBlockedRecommendationIds_args&);
  TalkService_getBlockedRecommendationIds_args() {
  }

  virtual ~TalkService_getBlockedRecommendationIds_args() throw();

  bool operator == (const TalkService_getBlockedRecommendationIds_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getBlockedRecommendationIds_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getBlockedRecommendationIds_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getBlockedRecommendationIds_pargs {
 public:


  virtual ~TalkService_getBlockedRecommendationIds_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getBlockedRecommendationIds_result__isset {
  _TalkService_getBlockedRecommendationIds_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getBlockedRecommendationIds_result__isset;

class TalkService_getBlockedRecommendationIds_result {
 public:

  TalkService_getBlockedRecommendationIds_result(const TalkService_getBlockedRecommendationIds_result&);
  TalkService_getBlockedRecommendationIds_result& operator=(const TalkService_getBlockedRecommendationIds_result&);
  TalkService_getBlockedRecommendationIds_result() {
  }

  virtual ~TalkService_getBlockedRecommendationIds_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getBlockedRecommendationIds_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getBlockedRecommendationIds_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getBlockedRecommendationIds_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getBlockedRecommendationIds_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getBlockedRecommendationIds_presult__isset {
  _TalkService_getBlockedRecommendationIds_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getBlockedRecommendationIds_presult__isset;

class TalkService_getBlockedRecommendationIds_presult {
 public:


  virtual ~TalkService_getBlockedRecommendationIds_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getBlockedRecommendationIds_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_getContact_args__isset {
  _TalkService_getContact_args__isset() : id(false) {}
  bool id :1;
} _TalkService_getContact_args__isset;

class TalkService_getContact_args {
 public:

  TalkService_getContact_args(const TalkService_getContact_args&);
  TalkService_getContact_args& operator=(const TalkService_getContact_args&);
  TalkService_getContact_args() : id() {
  }

  virtual ~TalkService_getContact_args() throw();
  std::string id;

  _TalkService_getContact_args__isset __isset;

  void __set_id(const std::string& val);

  bool operator == (const TalkService_getContact_args & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    return true;
  }
  bool operator != (const TalkService_getContact_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getContact_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getContact_pargs {
 public:


  virtual ~TalkService_getContact_pargs() throw();
  const std::string* id;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getContact_result__isset {
  _TalkService_getContact_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getContact_result__isset;

class TalkService_getContact_result {
 public:

  TalkService_getContact_result(const TalkService_getContact_result&);
  TalkService_getContact_result& operator=(const TalkService_getContact_result&);
  TalkService_getContact_result() {
  }

  virtual ~TalkService_getContact_result() throw();
  Contact success;
  TalkException e;

  _TalkService_getContact_result__isset __isset;

  void __set_success(const Contact& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getContact_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getContact_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getContact_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getContact_presult__isset {
  _TalkService_getContact_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getContact_presult__isset;

class TalkService_getContact_presult {
 public:


  virtual ~TalkService_getContact_presult() throw();
  Contact* success;
  TalkException e;

  _TalkService_getContact_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_getContacts_args__isset {
  _TalkService_getContacts_args__isset() : ids(false) {}
  bool ids :1;
} _TalkService_getContacts_args__isset;

class TalkService_getContacts_args {
 public:

  TalkService_getContacts_args(const TalkService_getContacts_args&);
  TalkService_getContacts_args& operator=(const TalkService_getContacts_args&);
  TalkService_getContacts_args() {
  }

  virtual ~TalkService_getContacts_args() throw();
  std::vector<std::string>  ids;

  _TalkService_getContacts_args__isset __isset;

  void __set_ids(const std::vector<std::string> & val);

  bool operator == (const TalkService_getContacts_args & rhs) const
  {
    if (!(ids == rhs.ids))
      return false;
    return true;
  }
  bool operator != (const TalkService_getContacts_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getContacts_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getContacts_pargs {
 public:


  virtual ~TalkService_getContacts_pargs() throw();
  const std::vector<std::string> * ids;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getContacts_result__isset {
  _TalkService_getContacts_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getContacts_result__isset;

class TalkService_getContacts_result {
 public:

  TalkService_getContacts_result(const TalkService_getContacts_result&);
  TalkService_getContacts_result& operator=(const TalkService_getContacts_result&);
  TalkService_getContacts_result() {
  }

  virtual ~TalkService_getContacts_result() throw();
  std::vector<Contact>  success;
  TalkException e;

  _TalkService_getContacts_result__isset __isset;

  void __set_success(const std::vector<Contact> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getContacts_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getContacts_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getContacts_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getContacts_presult__isset {
  _TalkService_getContacts_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getContacts_presult__isset;

class TalkService_getContacts_presult {
 public:


  virtual ~TalkService_getContacts_presult() throw();
  std::vector<Contact> * success;
  TalkException e;

  _TalkService_getContacts_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_getGroup_args__isset {
  _TalkService_getGroup_args__isset() : groupId(false) {}
  bool groupId :1;
} _TalkService_getGroup_args__isset;

class TalkService_getGroup_args {
 public:

  TalkService_getGroup_args(const TalkService_getGroup_args&);
  TalkService_getGroup_args& operator=(const TalkService_getGroup_args&);
  TalkService_getGroup_args() : groupId() {
  }

  virtual ~TalkService_getGroup_args() throw();
  std::string groupId;

  _TalkService_getGroup_args__isset __isset;

  void __set_groupId(const std::string& val);

  bool operator == (const TalkService_getGroup_args & rhs) const
  {
    if (!(groupId == rhs.groupId))
      return false;
    return true;
  }
  bool operator != (const TalkService_getGroup_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroup_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getGroup_pargs {
 public:


  virtual ~TalkService_getGroup_pargs() throw();
  const std::string* groupId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroup_result__isset {
  _TalkService_getGroup_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroup_result__isset;

class TalkService_getGroup_result {
 public:

  TalkService_getGroup_result(const TalkService_getGroup_result&);
  TalkService_getGroup_result& operator=(const TalkService_getGroup_result&);
  TalkService_getGroup_result() {
  }

  virtual ~TalkService_getGroup_result() throw();
  Group success;
  TalkException e;

  _TalkService_getGroup_result__isset __isset;

  void __set_success(const Group& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getGroup_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getGroup_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroup_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroup_presult__isset {
  _TalkService_getGroup_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroup_presult__isset;

class TalkService_getGroup_presult {
 public:


  virtual ~TalkService_getGroup_presult() throw();
  Group* success;
  TalkException e;

  _TalkService_getGroup_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getGroupIdsInvited_args {
 public:

  TalkService_getGroupIdsInvited_args(const TalkService_getGroupIdsInvited_args&);
  TalkService_getGroupIdsInvited_args& operator=(const TalkService_getGroupIdsInvited_args&);
  TalkService_getGroupIdsInvited_args() {
  }

  virtual ~TalkService_getGroupIdsInvited_args() throw();

  bool operator == (const TalkService_getGroupIdsInvited_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getGroupIdsInvited_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroupIdsInvited_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getGroupIdsInvited_pargs {
 public:


  virtual ~TalkService_getGroupIdsInvited_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroupIdsInvited_result__isset {
  _TalkService_getGroupIdsInvited_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroupIdsInvited_result__isset;

class TalkService_getGroupIdsInvited_result {
 public:

  TalkService_getGroupIdsInvited_result(const TalkService_getGroupIdsInvited_result&);
  TalkService_getGroupIdsInvited_result& operator=(const TalkService_getGroupIdsInvited_result&);
  TalkService_getGroupIdsInvited_result() {
  }

  virtual ~TalkService_getGroupIdsInvited_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getGroupIdsInvited_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getGroupIdsInvited_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getGroupIdsInvited_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroupIdsInvited_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroupIdsInvited_presult__isset {
  _TalkService_getGroupIdsInvited_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroupIdsInvited_presult__isset;

class TalkService_getGroupIdsInvited_presult {
 public:


  virtual ~TalkService_getGroupIdsInvited_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getGroupIdsInvited_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getGroupIdsJoined_args {
 public:

  TalkService_getGroupIdsJoined_args(const TalkService_getGroupIdsJoined_args&);
  TalkService_getGroupIdsJoined_args& operator=(const TalkService_getGroupIdsJoined_args&);
  TalkService_getGroupIdsJoined_args() {
  }

  virtual ~TalkService_getGroupIdsJoined_args() throw();

  bool operator == (const TalkService_getGroupIdsJoined_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getGroupIdsJoined_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroupIdsJoined_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getGroupIdsJoined_pargs {
 public:


  virtual ~TalkService_getGroupIdsJoined_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroupIdsJoined_result__isset {
  _TalkService_getGroupIdsJoined_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroupIdsJoined_result__isset;

class TalkService_getGroupIdsJoined_result {
 public:

  TalkService_getGroupIdsJoined_result(const TalkService_getGroupIdsJoined_result&);
  TalkService_getGroupIdsJoined_result& operator=(const TalkService_getGroupIdsJoined_result&);
  TalkService_getGroupIdsJoined_result() {
  }

  virtual ~TalkService_getGroupIdsJoined_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getGroupIdsJoined_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getGroupIdsJoined_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getGroupIdsJoined_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroupIdsJoined_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroupIdsJoined_presult__isset {
  _TalkService_getGroupIdsJoined_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroupIdsJoined_presult__isset;

class TalkService_getGroupIdsJoined_presult {
 public:


  virtual ~TalkService_getGroupIdsJoined_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getGroupIdsJoined_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_getGroups_args__isset {
  _TalkService_getGroups_args__isset() : groupIds(false) {}
  bool groupIds :1;
} _TalkService_getGroups_args__isset;

class TalkService_getGroups_args {
 public:

  TalkService_getGroups_args(const TalkService_getGroups_args&);
  TalkService_getGroups_args& operator=(const TalkService_getGroups_args&);
  TalkService_getGroups_args() {
  }

  virtual ~TalkService_getGroups_args() throw();
  std::vector<std::string>  groupIds;

  _TalkService_getGroups_args__isset __isset;

  void __set_groupIds(const std::vector<std::string> & val);

  bool operator == (const TalkService_getGroups_args & rhs) const
  {
    if (!(groupIds == rhs.groupIds))
      return false;
    return true;
  }
  bool operator != (const TalkService_getGroups_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroups_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getGroups_pargs {
 public:


  virtual ~TalkService_getGroups_pargs() throw();
  const std::vector<std::string> * groupIds;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroups_result__isset {
  _TalkService_getGroups_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroups_result__isset;

class TalkService_getGroups_result {
 public:

  TalkService_getGroups_result(const TalkService_getGroups_result&);
  TalkService_getGroups_result& operator=(const TalkService_getGroups_result&);
  TalkService_getGroups_result() {
  }

  virtual ~TalkService_getGroups_result() throw();
  std::vector<Group>  success;
  TalkException e;

  _TalkService_getGroups_result__isset __isset;

  void __set_success(const std::vector<Group> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getGroups_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getGroups_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getGroups_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getGroups_presult__isset {
  _TalkService_getGroups_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getGroups_presult__isset;

class TalkService_getGroups_presult {
 public:


  virtual ~TalkService_getGroups_presult() throw();
  std::vector<Group> * success;
  TalkException e;

  _TalkService_getGroups_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getFavoriteMids_args {
 public:

  TalkService_getFavoriteMids_args(const TalkService_getFavoriteMids_args&);
  TalkService_getFavoriteMids_args& operator=(const TalkService_getFavoriteMids_args&);
  TalkService_getFavoriteMids_args() {
  }

  virtual ~TalkService_getFavoriteMids_args() throw();

  bool operator == (const TalkService_getFavoriteMids_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getFavoriteMids_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getFavoriteMids_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getFavoriteMids_pargs {
 public:


  virtual ~TalkService_getFavoriteMids_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getFavoriteMids_result__isset {
  _TalkService_getFavoriteMids_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getFavoriteMids_result__isset;

class TalkService_getFavoriteMids_result {
 public:

  TalkService_getFavoriteMids_result(const TalkService_getFavoriteMids_result&);
  TalkService_getFavoriteMids_result& operator=(const TalkService_getFavoriteMids_result&);
  TalkService_getFavoriteMids_result() {
  }

  virtual ~TalkService_getFavoriteMids_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getFavoriteMids_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getFavoriteMids_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getFavoriteMids_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getFavoriteMids_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getFavoriteMids_presult__isset {
  _TalkService_getFavoriteMids_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getFavoriteMids_presult__isset;

class TalkService_getFavoriteMids_presult {
 public:


  virtual ~TalkService_getFavoriteMids_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getFavoriteMids_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getHiddenContactMids_args {
 public:

  TalkService_getHiddenContactMids_args(const TalkService_getHiddenContactMids_args&);
  TalkService_getHiddenContactMids_args& operator=(const TalkService_getHiddenContactMids_args&);
  TalkService_getHiddenContactMids_args() {
  }

  virtual ~TalkService_getHiddenContactMids_args() throw();

  bool operator == (const TalkService_getHiddenContactMids_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getHiddenContactMids_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getHiddenContactMids_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getHiddenContactMids_pargs {
 public:


  virtual ~TalkService_getHiddenContactMids_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getHiddenContactMids_result__isset {
  _TalkService_getHiddenContactMids_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getHiddenContactMids_result__isset;

class TalkService_getHiddenContactMids_result {
 public:

  TalkService_getHiddenContactMids_result(const TalkService_getHiddenContactMids_result&);
  TalkService_getHiddenContactMids_result& operator=(const TalkService_getHiddenContactMids_result&);
  TalkService_getHiddenContactMids_result() {
  }

  virtual ~TalkService_getHiddenContactMids_result() throw();
  std::vector<std::string>  success;
  TalkException e;

  _TalkService_getHiddenContactMids_result__isset __isset;

  void __set_success(const std::vector<std::string> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getHiddenContactMids_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getHiddenContactMids_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getHiddenContactMids_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getHiddenContactMids_presult__isset {
  _TalkService_getHiddenContactMids_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getHiddenContactMids_presult__isset;

class TalkService_getHiddenContactMids_presult {
 public:


  virtual ~TalkService_getHiddenContactMids_presult() throw();
  std::vector<std::string> * success;
  TalkException e;

  _TalkService_getHiddenContactMids_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getLastOpRevision_args {
 public:

  TalkService_getLastOpRevision_args(const TalkService_getLastOpRevision_args&);
  TalkService_getLastOpRevision_args& operator=(const TalkService_getLastOpRevision_args&);
  TalkService_getLastOpRevision_args() {
  }

  virtual ~TalkService_getLastOpRevision_args() throw();

  bool operator == (const TalkService_getLastOpRevision_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getLastOpRevision_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getLastOpRevision_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getLastOpRevision_pargs {
 public:


  virtual ~TalkService_getLastOpRevision_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getLastOpRevision_result__isset {
  _TalkService_getLastOpRevision_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getLastOpRevision_result__isset;

class TalkService_getLastOpRevision_result {
 public:

  TalkService_getLastOpRevision_result(const TalkService_getLastOpRevision_result&);
  TalkService_getLastOpRevision_result& operator=(const TalkService_getLastOpRevision_result&);
  TalkService_getLastOpRevision_result() : success(0) {
  }

  virtual ~TalkService_getLastOpRevision_result() throw();
  int64_t success;
  TalkException e;

  _TalkService_getLastOpRevision_result__isset __isset;

  void __set_success(const int64_t val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getLastOpRevision_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getLastOpRevision_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getLastOpRevision_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getLastOpRevision_presult__isset {
  _TalkService_getLastOpRevision_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getLastOpRevision_presult__isset;

class TalkService_getLastOpRevision_presult {
 public:


  virtual ~TalkService_getLastOpRevision_presult() throw();
  int64_t* success;
  TalkException e;

  _TalkService_getLastOpRevision_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_getRoom_args__isset {
  _TalkService_getRoom_args__isset() : roomId(false) {}
  bool roomId :1;
} _TalkService_getRoom_args__isset;

class TalkService_getRoom_args {
 public:

  TalkService_getRoom_args(const TalkService_getRoom_args&);
  TalkService_getRoom_args& operator=(const TalkService_getRoom_args&);
  TalkService_getRoom_args() : roomId() {
  }

  virtual ~TalkService_getRoom_args() throw();
  std::string roomId;

  _TalkService_getRoom_args__isset __isset;

  void __set_roomId(const std::string& val);

  bool operator == (const TalkService_getRoom_args & rhs) const
  {
    if (!(roomId == rhs.roomId))
      return false;
    return true;
  }
  bool operator != (const TalkService_getRoom_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getRoom_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getRoom_pargs {
 public:


  virtual ~TalkService_getRoom_pargs() throw();
  const std::string* roomId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getRoom_result__isset {
  _TalkService_getRoom_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getRoom_result__isset;

class TalkService_getRoom_result {
 public:

  TalkService_getRoom_result(const TalkService_getRoom_result&);
  TalkService_getRoom_result& operator=(const TalkService_getRoom_result&);
  TalkService_getRoom_result() {
  }

  virtual ~TalkService_getRoom_result() throw();
  Room success;
  TalkException e;

  _TalkService_getRoom_result__isset __isset;

  void __set_success(const Room& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getRoom_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getRoom_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getRoom_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getRoom_presult__isset {
  _TalkService_getRoom_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getRoom_presult__isset;

class TalkService_getRoom_presult {
 public:


  virtual ~TalkService_getRoom_presult() throw();
  Room* success;
  TalkException e;

  _TalkService_getRoom_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_getRSAKeyInfo_args__isset {
  _TalkService_getRSAKeyInfo_args__isset() : provider(false) {}
  bool provider :1;
} _TalkService_getRSAKeyInfo_args__isset;

class TalkService_getRSAKeyInfo_args {
 public:

  TalkService_getRSAKeyInfo_args(const TalkService_getRSAKeyInfo_args&);
  TalkService_getRSAKeyInfo_args& operator=(const TalkService_getRSAKeyInfo_args&);
  TalkService_getRSAKeyInfo_args() : provider((IdentityProvider::type)0) {
  }

  virtual ~TalkService_getRSAKeyInfo_args() throw();
  IdentityProvider::type provider;

  _TalkService_getRSAKeyInfo_args__isset __isset;

  void __set_provider(const IdentityProvider::type val);

  bool operator == (const TalkService_getRSAKeyInfo_args & rhs) const
  {
    if (!(provider == rhs.provider))
      return false;
    return true;
  }
  bool operator != (const TalkService_getRSAKeyInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getRSAKeyInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getRSAKeyInfo_pargs {
 public:


  virtual ~TalkService_getRSAKeyInfo_pargs() throw();
  const IdentityProvider::type* provider;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getRSAKeyInfo_result__isset {
  _TalkService_getRSAKeyInfo_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getRSAKeyInfo_result__isset;

class TalkService_getRSAKeyInfo_result {
 public:

  TalkService_getRSAKeyInfo_result(const TalkService_getRSAKeyInfo_result&);
  TalkService_getRSAKeyInfo_result& operator=(const TalkService_getRSAKeyInfo_result&);
  TalkService_getRSAKeyInfo_result() {
  }

  virtual ~TalkService_getRSAKeyInfo_result() throw();
  RSAKey success;
  TalkException e;

  _TalkService_getRSAKeyInfo_result__isset __isset;

  void __set_success(const RSAKey& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getRSAKeyInfo_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getRSAKeyInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getRSAKeyInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getRSAKeyInfo_presult__isset {
  _TalkService_getRSAKeyInfo_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getRSAKeyInfo_presult__isset;

class TalkService_getRSAKeyInfo_presult {
 public:


  virtual ~TalkService_getRSAKeyInfo_presult() throw();
  RSAKey* success;
  TalkException e;

  _TalkService_getRSAKeyInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getServerTime_args {
 public:

  TalkService_getServerTime_args(const TalkService_getServerTime_args&);
  TalkService_getServerTime_args& operator=(const TalkService_getServerTime_args&);
  TalkService_getServerTime_args() {
  }

  virtual ~TalkService_getServerTime_args() throw();

  bool operator == (const TalkService_getServerTime_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getServerTime_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getServerTime_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getServerTime_pargs {
 public:


  virtual ~TalkService_getServerTime_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getServerTime_result__isset {
  _TalkService_getServerTime_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getServerTime_result__isset;

class TalkService_getServerTime_result {
 public:

  TalkService_getServerTime_result(const TalkService_getServerTime_result&);
  TalkService_getServerTime_result& operator=(const TalkService_getServerTime_result&);
  TalkService_getServerTime_result() : success(0) {
  }

  virtual ~TalkService_getServerTime_result() throw();
  int64_t success;
  TalkException e;

  _TalkService_getServerTime_result__isset __isset;

  void __set_success(const int64_t val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getServerTime_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getServerTime_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getServerTime_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getServerTime_presult__isset {
  _TalkService_getServerTime_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getServerTime_presult__isset;

class TalkService_getServerTime_presult {
 public:


  virtual ~TalkService_getServerTime_presult() throw();
  int64_t* success;
  TalkException e;

  _TalkService_getServerTime_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_getSessions_args {
 public:

  TalkService_getSessions_args(const TalkService_getSessions_args&);
  TalkService_getSessions_args& operator=(const TalkService_getSessions_args&);
  TalkService_getSessions_args() {
  }

  virtual ~TalkService_getSessions_args() throw();

  bool operator == (const TalkService_getSessions_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_getSessions_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getSessions_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_getSessions_pargs {
 public:


  virtual ~TalkService_getSessions_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getSessions_result__isset {
  _TalkService_getSessions_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getSessions_result__isset;

class TalkService_getSessions_result {
 public:

  TalkService_getSessions_result(const TalkService_getSessions_result&);
  TalkService_getSessions_result& operator=(const TalkService_getSessions_result&);
  TalkService_getSessions_result() {
  }

  virtual ~TalkService_getSessions_result() throw();
  std::vector<LoginSession>  success;
  TalkException e;

  _TalkService_getSessions_result__isset __isset;

  void __set_success(const std::vector<LoginSession> & val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_getSessions_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_getSessions_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_getSessions_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_getSessions_presult__isset {
  _TalkService_getSessions_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_getSessions_presult__isset;

class TalkService_getSessions_presult {
 public:


  virtual ~TalkService_getSessions_presult() throw();
  std::vector<LoginSession> * success;
  TalkException e;

  _TalkService_getSessions_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_leaveGroup_args__isset {
  _TalkService_leaveGroup_args__isset() : reqSeq(false), groupId(false) {}
  bool reqSeq :1;
  bool groupId :1;
} _TalkService_leaveGroup_args__isset;

class TalkService_leaveGroup_args {
 public:

  TalkService_leaveGroup_args(const TalkService_leaveGroup_args&);
  TalkService_leaveGroup_args& operator=(const TalkService_leaveGroup_args&);
  TalkService_leaveGroup_args() : reqSeq(0), groupId() {
  }

  virtual ~TalkService_leaveGroup_args() throw();
  int32_t reqSeq;
  std::string groupId;

  _TalkService_leaveGroup_args__isset __isset;

  void __set_reqSeq(const int32_t val);

  void __set_groupId(const std::string& val);

  bool operator == (const TalkService_leaveGroup_args & rhs) const
  {
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(groupId == rhs.groupId))
      return false;
    return true;
  }
  bool operator != (const TalkService_leaveGroup_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_leaveGroup_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_leaveGroup_pargs {
 public:


  virtual ~TalkService_leaveGroup_pargs() throw();
  const int32_t* reqSeq;
  const std::string* groupId;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_leaveGroup_result__isset {
  _TalkService_leaveGroup_result__isset() : e(false) {}
  bool e :1;
} _TalkService_leaveGroup_result__isset;

class TalkService_leaveGroup_result {
 public:

  TalkService_leaveGroup_result(const TalkService_leaveGroup_result&);
  TalkService_leaveGroup_result& operator=(const TalkService_leaveGroup_result&);
  TalkService_leaveGroup_result() {
  }

  virtual ~TalkService_leaveGroup_result() throw();
  TalkException e;

  _TalkService_leaveGroup_result__isset __isset;

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_leaveGroup_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_leaveGroup_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_leaveGroup_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_leaveGroup_presult__isset {
  _TalkService_leaveGroup_presult__isset() : e(false) {}
  bool e :1;
} _TalkService_leaveGroup_presult__isset;

class TalkService_leaveGroup_presult {
 public:


  virtual ~TalkService_leaveGroup_presult() throw();
  TalkException e;

  _TalkService_leaveGroup_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_loginZ_args__isset {
  _TalkService_loginZ_args__isset() : LoginRequest(false) {}
  bool LoginRequest :1;
} _TalkService_loginZ_args__isset;

class TalkService_loginZ_args {
 public:

  TalkService_loginZ_args(const TalkService_loginZ_args&);
  TalkService_loginZ_args& operator=(const TalkService_loginZ_args&);
  TalkService_loginZ_args() {
  }

  virtual ~TalkService_loginZ_args() throw();
  loginRequest LoginRequest;

  _TalkService_loginZ_args__isset __isset;

  void __set_LoginRequest(const loginRequest& val);

  bool operator == (const TalkService_loginZ_args & rhs) const
  {
    if (!(LoginRequest == rhs.LoginRequest))
      return false;
    return true;
  }
  bool operator != (const TalkService_loginZ_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_loginZ_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_loginZ_pargs {
 public:


  virtual ~TalkService_loginZ_pargs() throw();
  const loginRequest* LoginRequest;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_loginZ_result__isset {
  _TalkService_loginZ_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_loginZ_result__isset;

class TalkService_loginZ_result {
 public:

  TalkService_loginZ_result(const TalkService_loginZ_result&);
  TalkService_loginZ_result& operator=(const TalkService_loginZ_result&);
  TalkService_loginZ_result() {
  }

  virtual ~TalkService_loginZ_result() throw();
  LoginResult success;
  TalkException e;

  _TalkService_loginZ_result__isset __isset;

  void __set_success(const LoginResult& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_loginZ_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_loginZ_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_loginZ_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_loginZ_presult__isset {
  _TalkService_loginZ_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_loginZ_presult__isset;

class TalkService_loginZ_presult {
 public:


  virtual ~TalkService_loginZ_presult() throw();
  LoginResult* success;
  TalkException e;

  _TalkService_loginZ_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class TalkService_logout_args {
 public:

  TalkService_logout_args(const TalkService_logout_args&);
  TalkService_logout_args& operator=(const TalkService_logout_args&);
  TalkService_logout_args() {
  }

  virtual ~TalkService_logout_args() throw();

  bool operator == (const TalkService_logout_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const TalkService_logout_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_logout_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_logout_pargs {
 public:


  virtual ~TalkService_logout_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_logout_result__isset {
  _TalkService_logout_result__isset() : e(false) {}
  bool e :1;
} _TalkService_logout_result__isset;

class TalkService_logout_result {
 public:

  TalkService_logout_result(const TalkService_logout_result&);
  TalkService_logout_result& operator=(const TalkService_logout_result&);
  TalkService_logout_result() {
  }

  virtual ~TalkService_logout_result() throw();
  TalkException e;

  _TalkService_logout_result__isset __isset;

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_logout_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_logout_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_logout_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_logout_presult__isset {
  _TalkService_logout_presult__isset() : e(false) {}
  bool e :1;
} _TalkService_logout_presult__isset;

class TalkService_logout_presult {
 public:


  virtual ~TalkService_logout_presult() throw();
  TalkException e;

  _TalkService_logout_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_logoutSession_args__isset {
  _TalkService_logoutSession_args__isset() : tokenKey(false) {}
  bool tokenKey :1;
} _TalkService_logoutSession_args__isset;

class TalkService_logoutSession_args {
 public:

  TalkService_logoutSession_args(const TalkService_logoutSession_args&);
  TalkService_logoutSession_args& operator=(const TalkService_logoutSession_args&);
  TalkService_logoutSession_args() : tokenKey() {
  }

  virtual ~TalkService_logoutSession_args() throw();
  std::string tokenKey;

  _TalkService_logoutSession_args__isset __isset;

  void __set_tokenKey(const std::string& val);

  bool operator == (const TalkService_logoutSession_args & rhs) const
  {
    if (!(tokenKey == rhs.tokenKey))
      return false;
    return true;
  }
  bool operator != (const TalkService_logoutSession_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_logoutSession_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_logoutSession_pargs {
 public:


  virtual ~TalkService_logoutSession_pargs() throw();
  const std::string* tokenKey;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_logoutSession_result__isset {
  _TalkService_logoutSession_result__isset() : e(false) {}
  bool e :1;
} _TalkService_logoutSession_result__isset;

class TalkService_logoutSession_result {
 public:

  TalkService_logoutSession_result(const TalkService_logoutSession_result&);
  TalkService_logoutSession_result& operator=(const TalkService_logoutSession_result&);
  TalkService_logoutSession_result() {
  }

  virtual ~TalkService_logoutSession_result() throw();
  TalkException e;

  _TalkService_logoutSession_result__isset __isset;

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_logoutSession_result & rhs) const
  {
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_logoutSession_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_logoutSession_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_logoutSession_presult__isset {
  _TalkService_logoutSession_presult__isset() : e(false) {}
  bool e :1;
} _TalkService_logoutSession_presult__isset;

class TalkService_logoutSession_presult {
 public:


  virtual ~TalkService_logoutSession_presult() throw();
  TalkException e;

  _TalkService_logoutSession_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _TalkService_sendMessage_args__isset {
  _TalkService_sendMessage_args__isset() : seq(false), message(false) {}
  bool seq :1;
  bool message :1;
} _TalkService_sendMessage_args__isset;

class TalkService_sendMessage_args {
 public:

  TalkService_sendMessage_args(const TalkService_sendMessage_args&);
  TalkService_sendMessage_args& operator=(const TalkService_sendMessage_args&);
  TalkService_sendMessage_args() : seq(0) {
  }

  virtual ~TalkService_sendMessage_args() throw();
  int32_t seq;
  Message message;

  _TalkService_sendMessage_args__isset __isset;

  void __set_seq(const int32_t val);

  void __set_message(const Message& val);

  bool operator == (const TalkService_sendMessage_args & rhs) const
  {
    if (!(seq == rhs.seq))
      return false;
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const TalkService_sendMessage_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_sendMessage_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class TalkService_sendMessage_pargs {
 public:


  virtual ~TalkService_sendMessage_pargs() throw();
  const int32_t* seq;
  const Message* message;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_sendMessage_result__isset {
  _TalkService_sendMessage_result__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_sendMessage_result__isset;

class TalkService_sendMessage_result {
 public:

  TalkService_sendMessage_result(const TalkService_sendMessage_result&);
  TalkService_sendMessage_result& operator=(const TalkService_sendMessage_result&);
  TalkService_sendMessage_result() {
  }

  virtual ~TalkService_sendMessage_result() throw();
  Message success;
  TalkException e;

  _TalkService_sendMessage_result__isset __isset;

  void __set_success(const Message& val);

  void __set_e(const TalkException& val);

  bool operator == (const TalkService_sendMessage_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(e == rhs.e))
      return false;
    return true;
  }
  bool operator != (const TalkService_sendMessage_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkService_sendMessage_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _TalkService_sendMessage_presult__isset {
  _TalkService_sendMessage_presult__isset() : success(false), e(false) {}
  bool success :1;
  bool e :1;
} _TalkService_sendMessage_presult__isset;

class TalkService_sendMessage_presult {
 public:


  virtual ~TalkService_sendMessage_presult() throw();
  Message* success;
  TalkException e;

  _TalkService_sendMessage_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class TalkServiceClient : virtual public TalkServiceIf {
 public:
  TalkServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TalkServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void acceptGroupInvitation(const int32_t reqSeq, const std::string& groupId);
  void send_acceptGroupInvitation(const int32_t reqSeq, const std::string& groupId);
  void recv_acceptGroupInvitation();
  void createGroup(Group& _return, const int32_t seq, const std::string& name, const std::vector<std::string> & contactIds);
  void send_createGroup(const int32_t seq, const std::string& name, const std::vector<std::string> & contactIds);
  void recv_createGroup(Group& _return);
  void createQrcodeBase64Image(std::string& _return, const std::string& url, const std::string& characterSet, const int32_t imageSize, const int32_t x, const int32_t y, const int32_t width, const int32_t height);
  void send_createQrcodeBase64Image(const std::string& url, const std::string& characterSet, const int32_t imageSize, const int32_t x, const int32_t y, const int32_t width, const int32_t height);
  void recv_createQrcodeBase64Image(std::string& _return);
  void createRoom(Room& _return, const int32_t reqSeq, const std::vector<std::string> & contactIds);
  void send_createRoom(const int32_t reqSeq, const std::vector<std::string> & contactIds);
  void recv_createRoom(Room& _return);
  void createSession(std::string& _return);
  void send_createSession();
  void recv_createSession(std::string& _return);
  void fetchOperations(std::vector<Operation> & _return, const int64_t localRev, const int32_t count);
  void send_fetchOperations(const int64_t localRev, const int32_t count);
  void recv_fetchOperations(std::vector<Operation> & _return);
  void getProfile(Profile& _return);
  void send_getProfile();
  void recv_getProfile(Profile& _return);
  void findAndAddContactsByEmail(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & emails);
  void send_findAndAddContactsByEmail(const int32_t reqSeq, const std::set<std::string> & emails);
  void recv_findAndAddContactsByEmail(std::map<std::string, Contact> & _return);
  void findAndAddContactsByMid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& mid);
  void send_findAndAddContactsByMid(const int32_t reqSeq, const std::string& mid);
  void recv_findAndAddContactsByMid(std::map<std::string, Contact> & _return);
  void findAndAddContactsByPhone(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & phones);
  void send_findAndAddContactsByPhone(const int32_t reqSeq, const std::set<std::string> & phones);
  void recv_findAndAddContactsByPhone(std::map<std::string, Contact> & _return);
  void findAndAddContactsByUserid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& userid);
  void send_findAndAddContactsByUserid(const int32_t reqSeq, const std::string& userid);
  void recv_findAndAddContactsByUserid(std::map<std::string, Contact> & _return);
  void findContactByUserid(Contact& _return, const std::string& userid);
  void send_findContactByUserid(const std::string& userid);
  void recv_findContactByUserid(Contact& _return);
  void findContactByUserTicket(Contact& _return, const std::string& ticketId);
  void send_findContactByUserTicket(const std::string& ticketId);
  void recv_findContactByUserTicket(Contact& _return);
  void findContactsByEmail(std::map<std::string, Contact> & _return, const std::set<std::string> & emails);
  void send_findContactsByEmail(const std::set<std::string> & emails);
  void recv_findContactsByEmail(std::map<std::string, Contact> & _return);
  void findContactsByPhone(std::map<std::string, Contact> & _return, const std::set<std::string> & phones);
  void send_findContactsByPhone(const std::set<std::string> & phones);
  void recv_findContactsByPhone(std::map<std::string, Contact> & _return);
  void generateUserTicket(Ticket& _return, const int64_t expirationTime, const int32_t maxUseCount);
  void send_generateUserTicket(const int64_t expirationTime, const int32_t maxUseCount);
  void recv_generateUserTicket(Ticket& _return);
  void getAllContactIds(std::vector<std::string> & _return);
  void send_getAllContactIds();
  void recv_getAllContactIds(std::vector<std::string> & _return);
  void getBlockedContactIds(std::vector<std::string> & _return);
  void send_getBlockedContactIds();
  void recv_getBlockedContactIds(std::vector<std::string> & _return);
  void getBlockedContactIdsByRange(std::vector<std::string> & _return, const int32_t start, const int32_t count);
  void send_getBlockedContactIdsByRange(const int32_t start, const int32_t count);
  void recv_getBlockedContactIdsByRange(std::vector<std::string> & _return);
  void getBlockedRecommendationIds(std::vector<std::string> & _return);
  void send_getBlockedRecommendationIds();
  void recv_getBlockedRecommendationIds(std::vector<std::string> & _return);
  void getContact(Contact& _return, const std::string& id);
  void send_getContact(const std::string& id);
  void recv_getContact(Contact& _return);
  void getContacts(std::vector<Contact> & _return, const std::vector<std::string> & ids);
  void send_getContacts(const std::vector<std::string> & ids);
  void recv_getContacts(std::vector<Contact> & _return);
  void getGroup(Group& _return, const std::string& groupId);
  void send_getGroup(const std::string& groupId);
  void recv_getGroup(Group& _return);
  void getGroupIdsInvited(std::vector<std::string> & _return);
  void send_getGroupIdsInvited();
  void recv_getGroupIdsInvited(std::vector<std::string> & _return);
  void getGroupIdsJoined(std::vector<std::string> & _return);
  void send_getGroupIdsJoined();
  void recv_getGroupIdsJoined(std::vector<std::string> & _return);
  void getGroups(std::vector<Group> & _return, const std::vector<std::string> & groupIds);
  void send_getGroups(const std::vector<std::string> & groupIds);
  void recv_getGroups(std::vector<Group> & _return);
  void getFavoriteMids(std::vector<std::string> & _return);
  void send_getFavoriteMids();
  void recv_getFavoriteMids(std::vector<std::string> & _return);
  void getHiddenContactMids(std::vector<std::string> & _return);
  void send_getHiddenContactMids();
  void recv_getHiddenContactMids(std::vector<std::string> & _return);
  int64_t getLastOpRevision();
  void send_getLastOpRevision();
  int64_t recv_getLastOpRevision();
  void getRoom(Room& _return, const std::string& roomId);
  void send_getRoom(const std::string& roomId);
  void recv_getRoom(Room& _return);
  void getRSAKeyInfo(RSAKey& _return, const IdentityProvider::type provider);
  void send_getRSAKeyInfo(const IdentityProvider::type provider);
  void recv_getRSAKeyInfo(RSAKey& _return);
  int64_t getServerTime();
  void send_getServerTime();
  int64_t recv_getServerTime();
  void getSessions(std::vector<LoginSession> & _return);
  void send_getSessions();
  void recv_getSessions(std::vector<LoginSession> & _return);
  void leaveGroup(const int32_t reqSeq, const std::string& groupId);
  void send_leaveGroup(const int32_t reqSeq, const std::string& groupId);
  void recv_leaveGroup();
  void loginZ(LoginResult& _return, const loginRequest& LoginRequest);
  void send_loginZ(const loginRequest& LoginRequest);
  void recv_loginZ(LoginResult& _return);
  void logout();
  void send_logout();
  void recv_logout();
  void logoutSession(const std::string& tokenKey);
  void send_logoutSession(const std::string& tokenKey);
  void recv_logoutSession();
  void sendMessage(Message& _return, const int32_t seq, const Message& message);
  void send_sendMessage(const int32_t seq, const Message& message);
  void recv_sendMessage(Message& _return);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class TalkServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<TalkServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (TalkServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_acceptGroupInvitation(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_createGroup(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_createQrcodeBase64Image(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_createRoom(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_createSession(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_fetchOperations(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getProfile(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findAndAddContactsByEmail(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findAndAddContactsByMid(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findAndAddContactsByPhone(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findAndAddContactsByUserid(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findContactByUserid(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findContactByUserTicket(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findContactsByEmail(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_findContactsByPhone(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_generateUserTicket(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getAllContactIds(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getBlockedContactIds(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getBlockedContactIdsByRange(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getBlockedRecommendationIds(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getContact(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getContacts(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getGroup(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getGroupIdsInvited(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getGroupIdsJoined(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getGroups(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getFavoriteMids(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getHiddenContactMids(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getLastOpRevision(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getRoom(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getRSAKeyInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getServerTime(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_getSessions(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_leaveGroup(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_loginZ(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_logout(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_logoutSession(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_sendMessage(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  TalkServiceProcessor(::apache::thrift::stdcxx::shared_ptr<TalkServiceIf> iface) :
    iface_(iface) {
    processMap_["acceptGroupInvitation"] = &TalkServiceProcessor::process_acceptGroupInvitation;
    processMap_["createGroup"] = &TalkServiceProcessor::process_createGroup;
    processMap_["createQrcodeBase64Image"] = &TalkServiceProcessor::process_createQrcodeBase64Image;
    processMap_["createRoom"] = &TalkServiceProcessor::process_createRoom;
    processMap_["createSession"] = &TalkServiceProcessor::process_createSession;
    processMap_["fetchOperations"] = &TalkServiceProcessor::process_fetchOperations;
    processMap_["getProfile"] = &TalkServiceProcessor::process_getProfile;
    processMap_["findAndAddContactsByEmail"] = &TalkServiceProcessor::process_findAndAddContactsByEmail;
    processMap_["findAndAddContactsByMid"] = &TalkServiceProcessor::process_findAndAddContactsByMid;
    processMap_["findAndAddContactsByPhone"] = &TalkServiceProcessor::process_findAndAddContactsByPhone;
    processMap_["findAndAddContactsByUserid"] = &TalkServiceProcessor::process_findAndAddContactsByUserid;
    processMap_["findContactByUserid"] = &TalkServiceProcessor::process_findContactByUserid;
    processMap_["findContactByUserTicket"] = &TalkServiceProcessor::process_findContactByUserTicket;
    processMap_["findContactsByEmail"] = &TalkServiceProcessor::process_findContactsByEmail;
    processMap_["findContactsByPhone"] = &TalkServiceProcessor::process_findContactsByPhone;
    processMap_["generateUserTicket"] = &TalkServiceProcessor::process_generateUserTicket;
    processMap_["getAllContactIds"] = &TalkServiceProcessor::process_getAllContactIds;
    processMap_["getBlockedContactIds"] = &TalkServiceProcessor::process_getBlockedContactIds;
    processMap_["getBlockedContactIdsByRange"] = &TalkServiceProcessor::process_getBlockedContactIdsByRange;
    processMap_["getBlockedRecommendationIds"] = &TalkServiceProcessor::process_getBlockedRecommendationIds;
    processMap_["getContact"] = &TalkServiceProcessor::process_getContact;
    processMap_["getContacts"] = &TalkServiceProcessor::process_getContacts;
    processMap_["getGroup"] = &TalkServiceProcessor::process_getGroup;
    processMap_["getGroupIdsInvited"] = &TalkServiceProcessor::process_getGroupIdsInvited;
    processMap_["getGroupIdsJoined"] = &TalkServiceProcessor::process_getGroupIdsJoined;
    processMap_["getGroups"] = &TalkServiceProcessor::process_getGroups;
    processMap_["getFavoriteMids"] = &TalkServiceProcessor::process_getFavoriteMids;
    processMap_["getHiddenContactMids"] = &TalkServiceProcessor::process_getHiddenContactMids;
    processMap_["getLastOpRevision"] = &TalkServiceProcessor::process_getLastOpRevision;
    processMap_["getRoom"] = &TalkServiceProcessor::process_getRoom;
    processMap_["getRSAKeyInfo"] = &TalkServiceProcessor::process_getRSAKeyInfo;
    processMap_["getServerTime"] = &TalkServiceProcessor::process_getServerTime;
    processMap_["getSessions"] = &TalkServiceProcessor::process_getSessions;
    processMap_["leaveGroup"] = &TalkServiceProcessor::process_leaveGroup;
    processMap_["loginZ"] = &TalkServiceProcessor::process_loginZ;
    processMap_["logout"] = &TalkServiceProcessor::process_logout;
    processMap_["logoutSession"] = &TalkServiceProcessor::process_logoutSession;
    processMap_["sendMessage"] = &TalkServiceProcessor::process_sendMessage;
  }

  virtual ~TalkServiceProcessor() {}
};

class TalkServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  TalkServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< TalkServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< TalkServiceIfFactory > handlerFactory_;
};

class TalkServiceMultiface : virtual public TalkServiceIf {
 public:
  TalkServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<TalkServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~TalkServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<TalkServiceIf> > ifaces_;
  TalkServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<TalkServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void acceptGroupInvitation(const int32_t reqSeq, const std::string& groupId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->acceptGroupInvitation(reqSeq, groupId);
    }
    ifaces_[i]->acceptGroupInvitation(reqSeq, groupId);
  }

  void createGroup(Group& _return, const int32_t seq, const std::string& name, const std::vector<std::string> & contactIds) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->createGroup(_return, seq, name, contactIds);
    }
    ifaces_[i]->createGroup(_return, seq, name, contactIds);
    return;
  }

  void createQrcodeBase64Image(std::string& _return, const std::string& url, const std::string& characterSet, const int32_t imageSize, const int32_t x, const int32_t y, const int32_t width, const int32_t height) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->createQrcodeBase64Image(_return, url, characterSet, imageSize, x, y, width, height);
    }
    ifaces_[i]->createQrcodeBase64Image(_return, url, characterSet, imageSize, x, y, width, height);
    return;
  }

  void createRoom(Room& _return, const int32_t reqSeq, const std::vector<std::string> & contactIds) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->createRoom(_return, reqSeq, contactIds);
    }
    ifaces_[i]->createRoom(_return, reqSeq, contactIds);
    return;
  }

  void createSession(std::string& _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->createSession(_return);
    }
    ifaces_[i]->createSession(_return);
    return;
  }

  void fetchOperations(std::vector<Operation> & _return, const int64_t localRev, const int32_t count) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->fetchOperations(_return, localRev, count);
    }
    ifaces_[i]->fetchOperations(_return, localRev, count);
    return;
  }

  void getProfile(Profile& _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getProfile(_return);
    }
    ifaces_[i]->getProfile(_return);
    return;
  }

  void findAndAddContactsByEmail(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & emails) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findAndAddContactsByEmail(_return, reqSeq, emails);
    }
    ifaces_[i]->findAndAddContactsByEmail(_return, reqSeq, emails);
    return;
  }

  void findAndAddContactsByMid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& mid) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findAndAddContactsByMid(_return, reqSeq, mid);
    }
    ifaces_[i]->findAndAddContactsByMid(_return, reqSeq, mid);
    return;
  }

  void findAndAddContactsByPhone(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & phones) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findAndAddContactsByPhone(_return, reqSeq, phones);
    }
    ifaces_[i]->findAndAddContactsByPhone(_return, reqSeq, phones);
    return;
  }

  void findAndAddContactsByUserid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& userid) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findAndAddContactsByUserid(_return, reqSeq, userid);
    }
    ifaces_[i]->findAndAddContactsByUserid(_return, reqSeq, userid);
    return;
  }

  void findContactByUserid(Contact& _return, const std::string& userid) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findContactByUserid(_return, userid);
    }
    ifaces_[i]->findContactByUserid(_return, userid);
    return;
  }

  void findContactByUserTicket(Contact& _return, const std::string& ticketId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findContactByUserTicket(_return, ticketId);
    }
    ifaces_[i]->findContactByUserTicket(_return, ticketId);
    return;
  }

  void findContactsByEmail(std::map<std::string, Contact> & _return, const std::set<std::string> & emails) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findContactsByEmail(_return, emails);
    }
    ifaces_[i]->findContactsByEmail(_return, emails);
    return;
  }

  void findContactsByPhone(std::map<std::string, Contact> & _return, const std::set<std::string> & phones) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->findContactsByPhone(_return, phones);
    }
    ifaces_[i]->findContactsByPhone(_return, phones);
    return;
  }

  void generateUserTicket(Ticket& _return, const int64_t expirationTime, const int32_t maxUseCount) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->generateUserTicket(_return, expirationTime, maxUseCount);
    }
    ifaces_[i]->generateUserTicket(_return, expirationTime, maxUseCount);
    return;
  }

  void getAllContactIds(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getAllContactIds(_return);
    }
    ifaces_[i]->getAllContactIds(_return);
    return;
  }

  void getBlockedContactIds(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getBlockedContactIds(_return);
    }
    ifaces_[i]->getBlockedContactIds(_return);
    return;
  }

  void getBlockedContactIdsByRange(std::vector<std::string> & _return, const int32_t start, const int32_t count) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getBlockedContactIdsByRange(_return, start, count);
    }
    ifaces_[i]->getBlockedContactIdsByRange(_return, start, count);
    return;
  }

  void getBlockedRecommendationIds(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getBlockedRecommendationIds(_return);
    }
    ifaces_[i]->getBlockedRecommendationIds(_return);
    return;
  }

  void getContact(Contact& _return, const std::string& id) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getContact(_return, id);
    }
    ifaces_[i]->getContact(_return, id);
    return;
  }

  void getContacts(std::vector<Contact> & _return, const std::vector<std::string> & ids) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getContacts(_return, ids);
    }
    ifaces_[i]->getContacts(_return, ids);
    return;
  }

  void getGroup(Group& _return, const std::string& groupId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getGroup(_return, groupId);
    }
    ifaces_[i]->getGroup(_return, groupId);
    return;
  }

  void getGroupIdsInvited(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getGroupIdsInvited(_return);
    }
    ifaces_[i]->getGroupIdsInvited(_return);
    return;
  }

  void getGroupIdsJoined(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getGroupIdsJoined(_return);
    }
    ifaces_[i]->getGroupIdsJoined(_return);
    return;
  }

  void getGroups(std::vector<Group> & _return, const std::vector<std::string> & groupIds) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getGroups(_return, groupIds);
    }
    ifaces_[i]->getGroups(_return, groupIds);
    return;
  }

  void getFavoriteMids(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getFavoriteMids(_return);
    }
    ifaces_[i]->getFavoriteMids(_return);
    return;
  }

  void getHiddenContactMids(std::vector<std::string> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getHiddenContactMids(_return);
    }
    ifaces_[i]->getHiddenContactMids(_return);
    return;
  }

  int64_t getLastOpRevision() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getLastOpRevision();
    }
    return ifaces_[i]->getLastOpRevision();
  }

  void getRoom(Room& _return, const std::string& roomId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getRoom(_return, roomId);
    }
    ifaces_[i]->getRoom(_return, roomId);
    return;
  }

  void getRSAKeyInfo(RSAKey& _return, const IdentityProvider::type provider) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getRSAKeyInfo(_return, provider);
    }
    ifaces_[i]->getRSAKeyInfo(_return, provider);
    return;
  }

  int64_t getServerTime() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getServerTime();
    }
    return ifaces_[i]->getServerTime();
  }

  void getSessions(std::vector<LoginSession> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->getSessions(_return);
    }
    ifaces_[i]->getSessions(_return);
    return;
  }

  void leaveGroup(const int32_t reqSeq, const std::string& groupId) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->leaveGroup(reqSeq, groupId);
    }
    ifaces_[i]->leaveGroup(reqSeq, groupId);
  }

  void loginZ(LoginResult& _return, const loginRequest& LoginRequest) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->loginZ(_return, LoginRequest);
    }
    ifaces_[i]->loginZ(_return, LoginRequest);
    return;
  }

  void logout() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->logout();
    }
    ifaces_[i]->logout();
  }

  void logoutSession(const std::string& tokenKey) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->logoutSession(tokenKey);
    }
    ifaces_[i]->logoutSession(tokenKey);
  }

  void sendMessage(Message& _return, const int32_t seq, const Message& message) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->sendMessage(_return, seq, message);
    }
    ifaces_[i]->sendMessage(_return, seq, message);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class TalkServiceConcurrentClient : virtual public TalkServiceIf {
 public:
  TalkServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  TalkServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void acceptGroupInvitation(const int32_t reqSeq, const std::string& groupId);
  int32_t send_acceptGroupInvitation(const int32_t reqSeq, const std::string& groupId);
  void recv_acceptGroupInvitation(const int32_t seqid);
  void createGroup(Group& _return, const int32_t seq, const std::string& name, const std::vector<std::string> & contactIds);
  int32_t send_createGroup(const int32_t seq, const std::string& name, const std::vector<std::string> & contactIds);
  void recv_createGroup(Group& _return, const int32_t seqid);
  void createQrcodeBase64Image(std::string& _return, const std::string& url, const std::string& characterSet, const int32_t imageSize, const int32_t x, const int32_t y, const int32_t width, const int32_t height);
  int32_t send_createQrcodeBase64Image(const std::string& url, const std::string& characterSet, const int32_t imageSize, const int32_t x, const int32_t y, const int32_t width, const int32_t height);
  void recv_createQrcodeBase64Image(std::string& _return, const int32_t seqid);
  void createRoom(Room& _return, const int32_t reqSeq, const std::vector<std::string> & contactIds);
  int32_t send_createRoom(const int32_t reqSeq, const std::vector<std::string> & contactIds);
  void recv_createRoom(Room& _return, const int32_t seqid);
  void createSession(std::string& _return);
  int32_t send_createSession();
  void recv_createSession(std::string& _return, const int32_t seqid);
  void fetchOperations(std::vector<Operation> & _return, const int64_t localRev, const int32_t count);
  int32_t send_fetchOperations(const int64_t localRev, const int32_t count);
  void recv_fetchOperations(std::vector<Operation> & _return, const int32_t seqid);
  void getProfile(Profile& _return);
  int32_t send_getProfile();
  void recv_getProfile(Profile& _return, const int32_t seqid);
  void findAndAddContactsByEmail(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & emails);
  int32_t send_findAndAddContactsByEmail(const int32_t reqSeq, const std::set<std::string> & emails);
  void recv_findAndAddContactsByEmail(std::map<std::string, Contact> & _return, const int32_t seqid);
  void findAndAddContactsByMid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& mid);
  int32_t send_findAndAddContactsByMid(const int32_t reqSeq, const std::string& mid);
  void recv_findAndAddContactsByMid(std::map<std::string, Contact> & _return, const int32_t seqid);
  void findAndAddContactsByPhone(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::set<std::string> & phones);
  int32_t send_findAndAddContactsByPhone(const int32_t reqSeq, const std::set<std::string> & phones);
  void recv_findAndAddContactsByPhone(std::map<std::string, Contact> & _return, const int32_t seqid);
  void findAndAddContactsByUserid(std::map<std::string, Contact> & _return, const int32_t reqSeq, const std::string& userid);
  int32_t send_findAndAddContactsByUserid(const int32_t reqSeq, const std::string& userid);
  void recv_findAndAddContactsByUserid(std::map<std::string, Contact> & _return, const int32_t seqid);
  void findContactByUserid(Contact& _return, const std::string& userid);
  int32_t send_findContactByUserid(const std::string& userid);
  void recv_findContactByUserid(Contact& _return, const int32_t seqid);
  void findContactByUserTicket(Contact& _return, const std::string& ticketId);
  int32_t send_findContactByUserTicket(const std::string& ticketId);
  void recv_findContactByUserTicket(Contact& _return, const int32_t seqid);
  void findContactsByEmail(std::map<std::string, Contact> & _return, const std::set<std::string> & emails);
  int32_t send_findContactsByEmail(const std::set<std::string> & emails);
  void recv_findContactsByEmail(std::map<std::string, Contact> & _return, const int32_t seqid);
  void findContactsByPhone(std::map<std::string, Contact> & _return, const std::set<std::string> & phones);
  int32_t send_findContactsByPhone(const std::set<std::string> & phones);
  void recv_findContactsByPhone(std::map<std::string, Contact> & _return, const int32_t seqid);
  void generateUserTicket(Ticket& _return, const int64_t expirationTime, const int32_t maxUseCount);
  int32_t send_generateUserTicket(const int64_t expirationTime, const int32_t maxUseCount);
  void recv_generateUserTicket(Ticket& _return, const int32_t seqid);
  void getAllContactIds(std::vector<std::string> & _return);
  int32_t send_getAllContactIds();
  void recv_getAllContactIds(std::vector<std::string> & _return, const int32_t seqid);
  void getBlockedContactIds(std::vector<std::string> & _return);
  int32_t send_getBlockedContactIds();
  void recv_getBlockedContactIds(std::vector<std::string> & _return, const int32_t seqid);
  void getBlockedContactIdsByRange(std::vector<std::string> & _return, const int32_t start, const int32_t count);
  int32_t send_getBlockedContactIdsByRange(const int32_t start, const int32_t count);
  void recv_getBlockedContactIdsByRange(std::vector<std::string> & _return, const int32_t seqid);
  void getBlockedRecommendationIds(std::vector<std::string> & _return);
  int32_t send_getBlockedRecommendationIds();
  void recv_getBlockedRecommendationIds(std::vector<std::string> & _return, const int32_t seqid);
  void getContact(Contact& _return, const std::string& id);
  int32_t send_getContact(const std::string& id);
  void recv_getContact(Contact& _return, const int32_t seqid);
  void getContacts(std::vector<Contact> & _return, const std::vector<std::string> & ids);
  int32_t send_getContacts(const std::vector<std::string> & ids);
  void recv_getContacts(std::vector<Contact> & _return, const int32_t seqid);
  void getGroup(Group& _return, const std::string& groupId);
  int32_t send_getGroup(const std::string& groupId);
  void recv_getGroup(Group& _return, const int32_t seqid);
  void getGroupIdsInvited(std::vector<std::string> & _return);
  int32_t send_getGroupIdsInvited();
  void recv_getGroupIdsInvited(std::vector<std::string> & _return, const int32_t seqid);
  void getGroupIdsJoined(std::vector<std::string> & _return);
  int32_t send_getGroupIdsJoined();
  void recv_getGroupIdsJoined(std::vector<std::string> & _return, const int32_t seqid);
  void getGroups(std::vector<Group> & _return, const std::vector<std::string> & groupIds);
  int32_t send_getGroups(const std::vector<std::string> & groupIds);
  void recv_getGroups(std::vector<Group> & _return, const int32_t seqid);
  void getFavoriteMids(std::vector<std::string> & _return);
  int32_t send_getFavoriteMids();
  void recv_getFavoriteMids(std::vector<std::string> & _return, const int32_t seqid);
  void getHiddenContactMids(std::vector<std::string> & _return);
  int32_t send_getHiddenContactMids();
  void recv_getHiddenContactMids(std::vector<std::string> & _return, const int32_t seqid);
  int64_t getLastOpRevision();
  int32_t send_getLastOpRevision();
  int64_t recv_getLastOpRevision(const int32_t seqid);
  void getRoom(Room& _return, const std::string& roomId);
  int32_t send_getRoom(const std::string& roomId);
  void recv_getRoom(Room& _return, const int32_t seqid);
  void getRSAKeyInfo(RSAKey& _return, const IdentityProvider::type provider);
  int32_t send_getRSAKeyInfo(const IdentityProvider::type provider);
  void recv_getRSAKeyInfo(RSAKey& _return, const int32_t seqid);
  int64_t getServerTime();
  int32_t send_getServerTime();
  int64_t recv_getServerTime(const int32_t seqid);
  void getSessions(std::vector<LoginSession> & _return);
  int32_t send_getSessions();
  void recv_getSessions(std::vector<LoginSession> & _return, const int32_t seqid);
  void leaveGroup(const int32_t reqSeq, const std::string& groupId);
  int32_t send_leaveGroup(const int32_t reqSeq, const std::string& groupId);
  void recv_leaveGroup(const int32_t seqid);
  void loginZ(LoginResult& _return, const loginRequest& LoginRequest);
  int32_t send_loginZ(const loginRequest& LoginRequest);
  void recv_loginZ(LoginResult& _return, const int32_t seqid);
  void logout();
  int32_t send_logout();
  void recv_logout(const int32_t seqid);
  void logoutSession(const std::string& tokenKey);
  int32_t send_logoutSession(const std::string& tokenKey);
  void recv_logoutSession(const int32_t seqid);
  void sendMessage(Message& _return, const int32_t seq, const Message& message);
  int32_t send_sendMessage(const int32_t seq, const Message& message);
  void recv_sendMessage(Message& _return, const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif



#endif
