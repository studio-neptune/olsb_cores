/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef litecore_TYPES_H
#define litecore_TYPES_H

#include <iosfwd>

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/TBase.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/stdcxx.h>




struct ApplicationType {
  enum type {
    DESKTOPWIN = 96,
    DESKTOPWIN_RC = 97,
    DESKTOPWIN_BETA = 98,
    DESKTOPWIN_ALPHA = 99,
    DESKTOPMAC = 112,
    DESKTOPMAC_RC = 113,
    DESKTOPMAC_BETA = 114,
    DESKTOPMAC_ALPHA = 115
  };
};

extern const std::map<int, const char*> _ApplicationType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const ApplicationType::type& val);

struct LoginType {
  enum type {
    ID_CREDENTIAL = 0,
    QRCODE = 1,
    ID_CREDENTIAL_WITH_E2EE = 2
  };
};

extern const std::map<int, const char*> _LoginType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const LoginType::type& val);

struct ContactType {
  enum type {
    MID = 0,
    PHONE = 1,
    EMAIL = 2,
    USERID = 3,
    PROXIMITY = 4,
    GROUP = 5,
    USER = 6,
    QRCODE = 7,
    PROMOTION_BOT = 8,
    CONTACT_MESSAGE = 9,
    FRIEND_REQUEST = 10,
    REPAIR = 128,
    FACEBOOK = 2305,
    SINA = 2306,
    RENREN = 2307,
    FEIXIN = 2308,
    BBM = 2309,
    BEACON = 11
  };
};

extern const std::map<int, const char*> _ContactType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const ContactType::type& val);

struct ContentType {
  enum type {
    NONE = 0,
    IMAGE = 1,
    VIDEO = 2,
    AUDIO = 3,
    HTML = 4,
    PDF = 5,
    CALL = 6,
    STICKER = 7,
    PRESENCE = 8,
    GIFT = 9,
    GROUPBOARD = 10,
    APPLINK = 11,
    LINK = 12,
    CONTACT = 13,
    FILE = 14,
    LOCATION = 15,
    POSTNOTIFICATION = 16,
    RICH = 17,
    CHATEVENT = 18,
    MUSIC = 19,
    PAYMENT = 20,
    EXTIMAGE = 21
  };
};

extern const std::map<int, const char*> _ContentType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const ContentType::type& val);

struct ErrorCode {
  enum type {
    ILLEGAL_ARGUMENT = 0,
    AUTHENTICATION_FAILED = 1,
    DB_FAILED = 2,
    INVALID_STATE = 3,
    EXCESSIVE_ACCESS = 4,
    NOT_FOUND = 5,
    INVALID_MID = 9,
    NOT_A_MEMBER = 10,
    INVALID_LENGTH = 6,
    NOT_AVAILABLE_USER = 7,
    NOT_AUTHORIZED_DEVICE = 8,
    NOT_AUTHORIZED_SESSION = 14,
    INCOMPATIBLE_APP_VERSION = 11,
    NOT_READY = 12,
    NOT_AVAILABLE_SESSION = 13,
    SYSTEM_ERROR = 15,
    NO_AVAILABLE_VERIFICATION_METHOD = 16,
    NOT_AUTHENTICATED = 17,
    INVALID_IDENTITY_CREDENTIAL = 18,
    NOT_AVAILABLE_IDENTITY_IDENTIFIER = 19,
    INTERNAL_ERROR = 20,
    NO_SUCH_IDENTITY_IDENFIER = 21,
    DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY = 22,
    ILLEGAL_IDENTITY_CREDENTIAL = 23,
    UNKNOWN_CHANNEL = 24,
    NO_SUCH_MESSAGE_BOX = 25,
    NOT_AVAILABLE_MESSAGE_BOX = 26,
    CHANNEL_DOES_NOT_MATCH = 27,
    NOT_YOUR_MESSAGE = 28,
    MESSAGE_DEFINED_ERROR = 29,
    USER_CANNOT_ACCEPT_PRESENTS = 30,
    USER_NOT_STICKER_OWNER = 32,
    MAINTENANCE_ERROR = 33,
    ACCOUNT_NOT_MATCHED = 34,
    ABUSE_BLOCK = 35,
    NOT_FRIEND = 36,
    NOT_ALLOWED_CALL = 37,
    BLOCK_FRIEND = 38,
    INCOMPATIBLE_VOIP_VERSION = 39,
    INVALID_SNS_ACCESS_TOKEN = 40,
    EXTERNAL_SERVICE_NOT_AVAILABLE = 41,
    NOT_ALLOWED_ADD_CONTACT = 42,
    NOT_CERTIFICATED = 43,
    NOT_ALLOWED_SECONDARY_DEVICE = 44,
    INVALID_PIN_CODE = 45,
    NOT_FOUND_IDENTITY_CREDENTIAL = 46,
    EXCEED_FILE_MAX_SIZE = 47,
    EXCEED_DAILY_QUOTA = 48,
    NOT_SUPPORT_SEND_FILE = 49,
    MUST_UPGRADE = 50,
    NOT_AVAILABLE_PIN_CODE_SESSION = 51,
    EXPIRED_REVISION = 52,
    NOT_YET_PHONE_NUMBER = 54,
    BAD_CALL_NUMBER = 55,
    UNAVAILABLE_CALL_NUMBER = 56,
    NOT_SUPPORT_CALL_SERVICE = 57,
    CONGESTION_CONTROL = 58,
    NO_BALANCE = 59,
    NOT_PERMITTED_CALLER_ID = 60,
    NO_CALLER_ID_LIMIT_EXCEEDED = 61,
    CALLER_ID_VERIFICATION_REQUIRED = 62,
    NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED = 63,
    MESSAGE_NOT_FOUND = 64,
    INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT = 65,
    ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED = 66,
    ACCOUNT_MIGRATION_PINCODE_BLOCKED = 67,
    INVALID_PASSWORD_FORMAT = 69,
    FEATURE_RESTRICTED = 70,
    MESSAGE_NOT_DESTRUCTIBLE = 71,
    PAID_CALL_REDEEM_FAILED = 72,
    PREVENTED_JOIN_BY_TICKET = 73,
    SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT = 75,
    SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY = 76,
    SECURITY_CENTER_NOT_VERIFIED = 77,
    SECURITY_CENTER_BLOCKED_BY_SETTING = 78,
    SECURITY_CENTER_BLOCKED = 79,
    TALK_PROXY_EXCEPTION = 80,
    E2EE_INVALID_PROTOCOL = 81,
    E2EE_RETRY_ENCRYPT = 82,
    E2EE_UPDATE_SENDER_KEY = 83,
    E2EE_UPDATE_RECEIVER_KEY = 84,
    E2EE_INVALID_ARGUMENT = 85,
    E2EE_INVALID_VERSION = 86,
    E2EE_SENDER_DISABLED = 87,
    E2EE_RECEIVER_DISABLED = 88,
    E2EE_SENDER_NOT_ALLOWED = 89,
    E2EE_RECEIVER_NOT_ALLOWED = 90,
    E2EE_RESEND_FAIL = 91,
    E2EE_RESEND_OK = 92,
    HITOKOTO_BACKUP_NO_AVAILABLE_DATA = 93,
    E2EE_UPDATE_PRIMARY_DEVICE = 94,
    SUCCESS = 95,
    CANCEL = 96,
    E2EE_PRIMARY_NOT_SUPPORT = 97,
    E2EE_RETRY_PLAIN = 98,
    E2EE_RECREATE_GROUP_KEY = 99,
    E2EE_GROUP_TOO_MANY_MEMBERS = 100,
    SERVER_BUSY = 101,
    NOT_ALLOWED_ADD_FOLLOW = 102,
    INCOMING_FRIEND_REQUEST_LIMIT = 103,
    OUTGOING_FRIEND_REQUEST_LIMIT = 104,
    OUTGOING_FRIEND_REQUEST_QUOTA = 105,
    DUPLICATED = 106,
    BANNED = 107
  };
};

extern const std::map<int, const char*> _ErrorCode_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const ErrorCode::type& val);

struct IdentityProvider {
  enum type {
    UNKNOWN = 0,
    LINE = 1,
    NAVER_KR = 2,
    LINE_PHONE = 3
  };
};

extern const std::map<int, const char*> _IdentityProvider_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const IdentityProvider::type& val);

struct LoginResultType {
  enum type {
    SUCCESS = 1,
    REQUIRE_QRCODE = 2,
    REQUIRE_DEVICE_CONFIRM = 3,
    REQUIRE_SMS_CONFIRM = 4
  };
};

extern const std::map<int, const char*> _LoginResultType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const LoginResultType::type& val);

struct MessageOperationType {
  enum type {
    SEND_MESSAGE = 1,
    RECEIVE_MESSAGE = 2,
    READ_MESSAGE = 3,
    NOTIFIED_READ_MESSAGE = 4,
    NOTIFIED_JOIN_CHAT = 5,
    FAILED_SEND_MESSAGE = 6,
    SEND_CONTENT = 7,
    SEND_CONTENT_RECEIPT = 8,
    SEND_CHAT_REMOVED = 9,
    REMOVE_ALL_MESSAGES = 10
  };
};

extern const std::map<int, const char*> _MessageOperationType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const MessageOperationType::type& val);

struct MIDType {
  enum type {
    USER = 0,
    ROOM = 1,
    GROUP = 2,
    SQUARE = 3,
    SQUARE_CHAT = 4,
    SQUARE_MEMBER = 5,
    BOT = 6
  };
};

extern const std::map<int, const char*> _MIDType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const MIDType::type& val);

struct ServiceCode {
  enum type {
    UNKNOWN = 0,
    TALK = 1,
    SQUARE = 2
  };
};

extern const std::map<int, const char*> _ServiceCode_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const ServiceCode::type& val);

struct OpStatus {
  enum type {
    NORMAL = 0,
    ALERT_DISABLED = 1,
    ALWAYS = 2
  };
};

extern const std::map<int, const char*> _OpStatus_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const OpStatus::type& val);

struct OpType {
  enum type {
    END_OF_OPERATION = 0,
    UPDATE_PROFILE = 1,
    UPDATE_SETTINGS = 36,
    NOTIFIED_UPDATE_PROFILE = 2,
    REGISTER_USERID = 3,
    ADD_CONTACT = 4,
    NOTIFIED_ADD_CONTACT = 5,
    BLOCK_CONTACT = 6,
    UNBLOCK_CONTACT = 7,
    NOTIFIED_RECOMMEND_CONTACT = 8,
    CREATE_GROUP = 9,
    UPDATE_GROUP = 10,
    NOTIFIED_UPDATE_GROUP = 11,
    INVITE_INTO_GROUP = 12,
    NOTIFIED_INVITE_INTO_GROUP = 13,
    CANCEL_INVITATION_GROUP = 31,
    NOTIFIED_CANCEL_INVITATION_GROUP = 32,
    LEAVE_GROUP = 14,
    NOTIFIED_LEAVE_GROUP = 15,
    ACCEPT_GROUP_INVITATION = 16,
    NOTIFIED_ACCEPT_GROUP_INVITATION = 17,
    REJECT_GROUP_INVITATION = 34,
    NOTIFIED_REJECT_GROUP_INVITATION = 35,
    KICKOUT_FROM_GROUP = 18,
    NOTIFIED_KICKOUT_FROM_GROUP = 19,
    CREATE_ROOM = 20,
    INVITE_INTO_ROOM = 21,
    NOTIFIED_INVITE_INTO_ROOM = 22,
    LEAVE_ROOM = 23,
    NOTIFIED_LEAVE_ROOM = 24,
    SEND_MESSAGE = 25,
    RECEIVE_MESSAGE = 26,
    SEND_MESSAGE_RECEIPT = 27,
    RECEIVE_MESSAGE_RECEIPT = 28,
    SEND_CONTENT_RECEIPT = 29,
    SEND_CHAT_CHECKED = 40,
    SEND_CHAT_REMOVED = 41,
    RECEIVE_ANNOUNCEMENT = 30,
    INVITE_VIA_EMAIL = 38,
    NOTIFIED_REGISTER_USER = 37,
    NOTIFIED_UNREGISTER_USER = 33,
    NOTIFIED_REQUEST_RECOVERY = 39,
    NOTIFIED_FORCE_SYNC = 42,
    SEND_CONTENT = 43,
    SEND_MESSAGE_MYHOME = 44,
    NOTIFIED_UPDATE_CONTENT_PREVIEW = 45,
    REMOVE_ALL_MESSAGES = 46,
    NOTIFIED_UPDATE_PURCHASES = 47,
    DUMMY = 48,
    UPDATE_CONTACT = 49,
    NOTIFIED_RECEIVED_CALL = 50,
    CANCEL_CALL = 51,
    NOTIFIED_REDIRECT = 52,
    NOTIFIED_CHANNEL_SYNC = 53,
    FAILED_SEND_MESSAGE = 54,
    NOTIFIED_READ_MESSAGE = 55,
    FAILED_EMAIL_CONFIRMATION = 56,
    NOTIFIED_PUSH_NOTICENTER_ITEM = 59,
    NOTIFIED_CHAT_CONTENT = 58,
    NOTIFIED_JOIN_CHAT = 60,
    NOTIFIED_LEAVE_CHAT = 61,
    NOTIFIED_TYPING = 62,
    FRIEND_REQUEST_ACCEPTED = 63,
    DESTROY_MESSAGE = 64,
    NOTIFIED_DESTROY_MESSAGE = 65,
    UPDATE_PUBLICKEYCHAIN = 66,
    NOTIFIED_UPDATE_PUBLICKEYCHAIN = 67,
    NOTIFIED_BLOCK_CONTACT = 68,
    NOTIFIED_UNBLOCK_CONTACT = 69,
    UPDATE_GROUPPREFERENCE = 70,
    NOTIFIED_PAYMENT_EVENT = 71,
    REGISTER_E2EE_PUBLICKEY = 72,
    NOTIFIED_E2EE_KEY_EXCHANGE_REQ = 73,
    NOTIFIED_E2EE_KEY_EXCHANGE_RESP = 74,
    NOTIFIED_E2EE_MESSAGE_RESEND_REQ = 75,
    NOTIFIED_E2EE_MESSAGE_RESEND_RESP = 76,
    NOTIFIED_E2EE_KEY_UPDATE = 77,
    NOTIFIED_BUDDY_UPDATE_PROFILE = 78,
    NOTIFIED_UPDATE_LINEAT_TABS = 79,
    UPDATE_ROOM = 80,
    NOTIFIED_BEACON_DETECTED = 81,
    UPDATE_EXTENDED_PROFILE = 82,
    ADD_FOLLOW = 83,
    NOTIFIED_ADD_FOLLOW = 84,
    DELETE_FOLLOW = 85,
    NOTIFIED_DELETE_FOLLOW = 86,
    UPDATE_TIMELINE_SETTINGS = 87,
    NOTIFIED_FRIEND_REQUEST = 88,
    UPDATE_RINGBACK_TONE = 89,
    NOTIFIED_POSTBACK = 90,
    RECEIVE_READ_WATERMARK = 91,
    NOTIFIED_MESSAGE_DELIVERED = 92,
    NOTIFIED_UPDATE_CHAT_BAR = 93,
    NOTIFIED_CHATAPP_INSTALLED = 94,
    NOTIFIED_CHATAPP_UPDATED = 95,
    NOTIFIED_CHATAPP_NEW_MARK = 96,
    NOTIFIED_CHATAPP_DELETED = 97,
    NOTIFIED_CHATAPP_SYNC = 98,
    NOTIFIED_UPDATE_MESSAGE = 99
  };
};

extern const std::map<int, const char*> _OpType_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const OpType::type& val);

struct ContactStatus {
  enum type {
    UNSPECIFIED = 0,
    FRIEND = 1,
    FRIEND_BLOCKED = 2,
    RECOMMEND = 3,
    RECOMMEND_BLOCKED = 4,
    DELETED = 5,
    DELETED_BLOCKED = 6
  };
};

extern const std::map<int, const char*> _ContactStatus_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const ContactStatus::type& val);

struct ContactRelation {
  enum type {
    ONEWAY = 0,
    BOTH = 1,
    NOT_REGISTERED = 2
  };
};

extern const std::map<int, const char*> _ContactRelation_VALUES_TO_NAMES;

std::ostream& operator<<(std::ostream& out, const ContactRelation::type& val);

class LoginResult;

class Contact;

class Location;

class GroupPreference;

class Group;

class loginRequest;

class LoginSession;

class Message;

class MessageOperation;

class MessageOperations;

class Operation;

class Profile;

class Room;

class RSAKey;

class TalkException;

class Ticket;

typedef struct _LoginResult__isset {
  _LoginResult__isset() : authToken(false), certificate(false), verifier(false), pinCode(false), type(false) {}
  bool authToken :1;
  bool certificate :1;
  bool verifier :1;
  bool pinCode :1;
  bool type :1;
} _LoginResult__isset;

class LoginResult : public virtual ::apache::thrift::TBase {
 public:

  LoginResult(const LoginResult&);
  LoginResult& operator=(const LoginResult&);
  LoginResult() : authToken(), certificate(), verifier(), pinCode(), type((LoginResultType::type)0) {
  }

  virtual ~LoginResult() throw();
  std::string authToken;
  std::string certificate;
  std::string verifier;
  std::string pinCode;
  LoginResultType type;

  _LoginResult__isset __isset;

  void __set_authToken(const std::string& val);

  void __set_certificate(const std::string& val);

  void __set_verifier(const std::string& val);

  void __set_pinCode(const std::string& val);

  void __set_type(const LoginResultType val);

  bool operator == (const LoginResult & rhs) const
  {
    if (!(authToken == rhs.authToken))
      return false;
    if (!(certificate == rhs.certificate))
      return false;
    if (!(verifier == rhs.verifier))
      return false;
    if (!(pinCode == rhs.pinCode))
      return false;
    if (!(type == rhs.type))
      return false;
    return true;
  }
  bool operator != (const LoginResult &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LoginResult & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LoginResult &a, LoginResult &b);

std::ostream& operator<<(std::ostream& out, const LoginResult& obj);

typedef struct _Contact__isset {
  _Contact__isset() : mid(false), createdTime(false), type(false), status(false), relation(false), displayName(false), phoneticName(false), pictureStatus(false), thumbnailUrl(false), statusMessage(false), displayNameOverridden(false), favoriteTime(false), capableVoiceCall(false), capableVideoCall(false), capableMyhome(false), capableBuddy(false), attributes(false), settings(false), picturePath(false), recommendParams(false), friendRequestStatus(false), musicProfile(false), videoProfile(false) {}
  bool mid :1;
  bool createdTime :1;
  bool type :1;
  bool status :1;
  bool relation :1;
  bool displayName :1;
  bool phoneticName :1;
  bool pictureStatus :1;
  bool thumbnailUrl :1;
  bool statusMessage :1;
  bool displayNameOverridden :1;
  bool favoriteTime :1;
  bool capableVoiceCall :1;
  bool capableVideoCall :1;
  bool capableMyhome :1;
  bool capableBuddy :1;
  bool attributes :1;
  bool settings :1;
  bool picturePath :1;
  bool recommendParams :1;
  bool friendRequestStatus :1;
  bool musicProfile :1;
  bool videoProfile :1;
} _Contact__isset;

class Contact : public virtual ::apache::thrift::TBase {
 public:

  Contact(const Contact&);
  Contact& operator=(const Contact&);
  Contact() : mid(), createdTime(0), type((ContactType::type)0), status((ContactStatus::type)0), relation((ContactRelation::type)0), displayName(), phoneticName(), pictureStatus(), thumbnailUrl(), statusMessage(), displayNameOverridden(), favoriteTime(0), capableVoiceCall(0), capableVideoCall(0), capableMyhome(0), capableBuddy(0), attributes(0), settings(0), picturePath(), recommendParams(), friendRequestStatus(0), musicProfile(), videoProfile() {
  }

  virtual ~Contact() throw();
  std::string mid;
  int64_t createdTime;
  ContactType::type type;
  ContactStatus::type status;
  ContactRelation::type relation;
  std::string displayName;
  std::string phoneticName;
  std::string pictureStatus;
  std::string thumbnailUrl;
  std::string statusMessage;
  std::string displayNameOverridden;
  int64_t favoriteTime;
  bool capableVoiceCall;
  bool capableVideoCall;
  bool capableMyhome;
  bool capableBuddy;
  int32_t attributes;
  int64_t settings;
  std::string picturePath;
  std::string recommendParams;
  int32_t friendRequestStatus;
  std::string musicProfile;
  std::string videoProfile;

  _Contact__isset __isset;

  void __set_mid(const std::string& val);

  void __set_createdTime(const int64_t val);

  void __set_type(const ContactType::type val);

  void __set_status(const ContactStatus::type val);

  void __set_relation(const ContactRelation::type val);

  void __set_displayName(const std::string& val);

  void __set_phoneticName(const std::string& val);

  void __set_pictureStatus(const std::string& val);

  void __set_thumbnailUrl(const std::string& val);

  void __set_statusMessage(const std::string& val);

  void __set_displayNameOverridden(const std::string& val);

  void __set_favoriteTime(const int64_t val);

  void __set_capableVoiceCall(const bool val);

  void __set_capableVideoCall(const bool val);

  void __set_capableMyhome(const bool val);

  void __set_capableBuddy(const bool val);

  void __set_attributes(const int32_t val);

  void __set_settings(const int64_t val);

  void __set_picturePath(const std::string& val);

  void __set_recommendParams(const std::string& val);

  void __set_friendRequestStatus(const int32_t val);

  void __set_musicProfile(const std::string& val);

  void __set_videoProfile(const std::string& val);

  bool operator == (const Contact & rhs) const
  {
    if (!(mid == rhs.mid))
      return false;
    if (!(createdTime == rhs.createdTime))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(relation == rhs.relation))
      return false;
    if (!(displayName == rhs.displayName))
      return false;
    if (!(phoneticName == rhs.phoneticName))
      return false;
    if (!(pictureStatus == rhs.pictureStatus))
      return false;
    if (!(thumbnailUrl == rhs.thumbnailUrl))
      return false;
    if (!(statusMessage == rhs.statusMessage))
      return false;
    if (!(displayNameOverridden == rhs.displayNameOverridden))
      return false;
    if (!(favoriteTime == rhs.favoriteTime))
      return false;
    if (!(capableVoiceCall == rhs.capableVoiceCall))
      return false;
    if (!(capableVideoCall == rhs.capableVideoCall))
      return false;
    if (!(capableMyhome == rhs.capableMyhome))
      return false;
    if (!(capableBuddy == rhs.capableBuddy))
      return false;
    if (!(attributes == rhs.attributes))
      return false;
    if (!(settings == rhs.settings))
      return false;
    if (!(picturePath == rhs.picturePath))
      return false;
    if (!(recommendParams == rhs.recommendParams))
      return false;
    if (!(friendRequestStatus == rhs.friendRequestStatus))
      return false;
    if (!(musicProfile == rhs.musicProfile))
      return false;
    if (!(videoProfile == rhs.videoProfile))
      return false;
    return true;
  }
  bool operator != (const Contact &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Contact & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Contact &a, Contact &b);

std::ostream& operator<<(std::ostream& out, const Contact& obj);

typedef struct _Location__isset {
  _Location__isset() : title(false), address(false), latitude(false), longitude(false), phone(false) {}
  bool title :1;
  bool address :1;
  bool latitude :1;
  bool longitude :1;
  bool phone :1;
} _Location__isset;

class Location : public virtual ::apache::thrift::TBase {
 public:

  Location(const Location&);
  Location& operator=(const Location&);
  Location() : title(), address(), latitude(0), longitude(0), phone() {
  }

  virtual ~Location() throw();
  std::string title;
  std::string address;
  double latitude;
  double longitude;
  std::string phone;

  _Location__isset __isset;

  void __set_title(const std::string& val);

  void __set_address(const std::string& val);

  void __set_latitude(const double val);

  void __set_longitude(const double val);

  void __set_phone(const std::string& val);

  bool operator == (const Location & rhs) const
  {
    if (!(title == rhs.title))
      return false;
    if (!(address == rhs.address))
      return false;
    if (!(latitude == rhs.latitude))
      return false;
    if (!(longitude == rhs.longitude))
      return false;
    if (!(phone == rhs.phone))
      return false;
    return true;
  }
  bool operator != (const Location &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Location & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Location &a, Location &b);

std::ostream& operator<<(std::ostream& out, const Location& obj);

typedef struct _GroupPreference__isset {
  _GroupPreference__isset() : invitationTicket(false), favoriteTimestamp(false) {}
  bool invitationTicket :1;
  bool favoriteTimestamp :1;
} _GroupPreference__isset;

class GroupPreference : public virtual ::apache::thrift::TBase {
 public:

  GroupPreference(const GroupPreference&);
  GroupPreference& operator=(const GroupPreference&);
  GroupPreference() : invitationTicket(), favoriteTimestamp(0) {
  }

  virtual ~GroupPreference() throw();
  std::string invitationTicket;
  int64_t favoriteTimestamp;

  _GroupPreference__isset __isset;

  void __set_invitationTicket(const std::string& val);

  void __set_favoriteTimestamp(const int64_t val);

  bool operator == (const GroupPreference & rhs) const
  {
    if (!(invitationTicket == rhs.invitationTicket))
      return false;
    if (!(favoriteTimestamp == rhs.favoriteTimestamp))
      return false;
    return true;
  }
  bool operator != (const GroupPreference &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const GroupPreference & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(GroupPreference &a, GroupPreference &b);

std::ostream& operator<<(std::ostream& out, const GroupPreference& obj);

typedef struct _Group__isset {
  _Group__isset() : id(false), createdTime(false), name(false), pictureStatus(false), preventedJoinByTicket(false), groupPreference(false), members(false), creator(false), invitee(false), notificationDisabled(false) {}
  bool id :1;
  bool createdTime :1;
  bool name :1;
  bool pictureStatus :1;
  bool preventedJoinByTicket :1;
  bool groupPreference :1;
  bool members :1;
  bool creator :1;
  bool invitee :1;
  bool notificationDisabled :1;
} _Group__isset;

class Group : public virtual ::apache::thrift::TBase {
 public:

  Group(const Group&);
  Group& operator=(const Group&);
  Group() : id(), createdTime(0), name(), pictureStatus(), preventedJoinByTicket(0), notificationDisabled(0) {
  }

  virtual ~Group() throw();
  std::string id;
  int64_t createdTime;
  std::string name;
  std::string pictureStatus;
  bool preventedJoinByTicket;
  GroupPreference groupPreference;
  std::vector<Contact>  members;
  Contact creator;
  std::vector<Contact>  invitee;
  bool notificationDisabled;

  _Group__isset __isset;

  void __set_id(const std::string& val);

  void __set_createdTime(const int64_t val);

  void __set_name(const std::string& val);

  void __set_pictureStatus(const std::string& val);

  void __set_preventedJoinByTicket(const bool val);

  void __set_groupPreference(const GroupPreference& val);

  void __set_members(const std::vector<Contact> & val);

  void __set_creator(const Contact& val);

  void __set_invitee(const std::vector<Contact> & val);

  void __set_notificationDisabled(const bool val);

  bool operator == (const Group & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(createdTime == rhs.createdTime))
      return false;
    if (!(name == rhs.name))
      return false;
    if (!(pictureStatus == rhs.pictureStatus))
      return false;
    if (!(preventedJoinByTicket == rhs.preventedJoinByTicket))
      return false;
    if (!(groupPreference == rhs.groupPreference))
      return false;
    if (!(members == rhs.members))
      return false;
    if (!(creator == rhs.creator))
      return false;
    if (!(invitee == rhs.invitee))
      return false;
    if (!(notificationDisabled == rhs.notificationDisabled))
      return false;
    return true;
  }
  bool operator != (const Group &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Group & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Group &a, Group &b);

std::ostream& operator<<(std::ostream& out, const Group& obj);

typedef struct _loginRequest__isset {
  _loginRequest__isset() : type(false), identityProvider(false), identifier(false), password(false), keepLoggedIn(false), accessLocation(false), systemName(false), certificate(false), verifier(false), secret(false), e2eeVersion(false) {}
  bool type :1;
  bool identityProvider :1;
  bool identifier :1;
  bool password :1;
  bool keepLoggedIn :1;
  bool accessLocation :1;
  bool systemName :1;
  bool certificate :1;
  bool verifier :1;
  bool secret :1;
  bool e2eeVersion :1;
} _loginRequest__isset;

class loginRequest : public virtual ::apache::thrift::TBase {
 public:

  loginRequest(const loginRequest&);
  loginRequest& operator=(const loginRequest&);
  loginRequest() : type(0), identityProvider(0), identifier(), password(), keepLoggedIn(0), accessLocation(), systemName(), certificate(), verifier(), secret(), e2eeVersion(0) {
  }

  virtual ~loginRequest() throw();
  int32_t type;
  int32_t identityProvider;
  std::string identifier;
  std::string password;
  bool keepLoggedIn;
  std::string accessLocation;
  std::string systemName;
  std::string certificate;
  std::string verifier;
  std::string secret;
  int32_t e2eeVersion;

  _loginRequest__isset __isset;

  void __set_type(const int32_t val);

  void __set_identityProvider(const int32_t val);

  void __set_identifier(const std::string& val);

  void __set_password(const std::string& val);

  void __set_keepLoggedIn(const bool val);

  void __set_accessLocation(const std::string& val);

  void __set_systemName(const std::string& val);

  void __set_certificate(const std::string& val);

  void __set_verifier(const std::string& val);

  void __set_secret(const std::string& val);

  void __set_e2eeVersion(const int32_t val);

  bool operator == (const loginRequest & rhs) const
  {
    if (!(type == rhs.type))
      return false;
    if (!(identityProvider == rhs.identityProvider))
      return false;
    if (!(identifier == rhs.identifier))
      return false;
    if (!(password == rhs.password))
      return false;
    if (!(keepLoggedIn == rhs.keepLoggedIn))
      return false;
    if (!(accessLocation == rhs.accessLocation))
      return false;
    if (!(systemName == rhs.systemName))
      return false;
    if (!(certificate == rhs.certificate))
      return false;
    if (!(verifier == rhs.verifier))
      return false;
    if (!(secret == rhs.secret))
      return false;
    if (!(e2eeVersion == rhs.e2eeVersion))
      return false;
    return true;
  }
  bool operator != (const loginRequest &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const loginRequest & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(loginRequest &a, loginRequest &b);

std::ostream& operator<<(std::ostream& out, const loginRequest& obj);

typedef struct _LoginSession__isset {
  _LoginSession__isset() : tokenKey(false), expirationTime(false), applicationType(false), systemName(false), accessLocation(false) {}
  bool tokenKey :1;
  bool expirationTime :1;
  bool applicationType :1;
  bool systemName :1;
  bool accessLocation :1;
} _LoginSession__isset;

class LoginSession : public virtual ::apache::thrift::TBase {
 public:

  LoginSession(const LoginSession&);
  LoginSession& operator=(const LoginSession&);
  LoginSession() : tokenKey(), expirationTime(0), applicationType((ApplicationType::type)0), systemName(), accessLocation() {
  }

  virtual ~LoginSession() throw();
  std::string tokenKey;
  int64_t expirationTime;
  ApplicationType::type applicationType;
  std::string systemName;
  std::string accessLocation;

  _LoginSession__isset __isset;

  void __set_tokenKey(const std::string& val);

  void __set_expirationTime(const int64_t val);

  void __set_applicationType(const ApplicationType::type val);

  void __set_systemName(const std::string& val);

  void __set_accessLocation(const std::string& val);

  bool operator == (const LoginSession & rhs) const
  {
    if (!(tokenKey == rhs.tokenKey))
      return false;
    if (!(expirationTime == rhs.expirationTime))
      return false;
    if (!(applicationType == rhs.applicationType))
      return false;
    if (!(systemName == rhs.systemName))
      return false;
    if (!(accessLocation == rhs.accessLocation))
      return false;
    return true;
  }
  bool operator != (const LoginSession &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const LoginSession & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(LoginSession &a, LoginSession &b);

std::ostream& operator<<(std::ostream& out, const LoginSession& obj);

typedef struct _Message__isset {
  _Message__isset() : _from(false), to(false), toType(false), id(false), createdTime(false), deliveredTime(false), text(false), location(false), hasContent(false), contentType(false), contentPreview(false), contentMetadata(false), sessionId(false), chunks(false), relatedMessageId(false), messageRelationType(false), readCount(false), relatedMessageServiceCode(false) {}
  bool _from :1;
  bool to :1;
  bool toType :1;
  bool id :1;
  bool createdTime :1;
  bool deliveredTime :1;
  bool text :1;
  bool location :1;
  bool hasContent :1;
  bool contentType :1;
  bool contentPreview :1;
  bool contentMetadata :1;
  bool sessionId :1;
  bool chunks :1;
  bool relatedMessageId :1;
  bool messageRelationType :1;
  bool readCount :1;
  bool relatedMessageServiceCode :1;
} _Message__isset;

class Message : public virtual ::apache::thrift::TBase {
 public:

  Message(const Message&);
  Message& operator=(const Message&);
  Message() : _from(), to(), toType((MIDType::type)0), id(), createdTime(0), deliveredTime(0), text(), hasContent(0), contentType((ContentType::type)0), contentPreview(), sessionId(0), relatedMessageId(), messageRelationType(0), readCount(0), relatedMessageServiceCode(0) {
  }

  virtual ~Message() throw();
  std::string _from;
  std::string to;
  MIDType::type toType;
  std::string id;
  int64_t createdTime;
  int64_t deliveredTime;
  std::string text;
  Location location;
  bool hasContent;
  ContentType::type contentType;
  std::string contentPreview;
  std::map<std::string, std::string>  contentMetadata;
  int64_t sessionId;
  std::vector<std::string>  chunks;
  std::string relatedMessageId;
  int64_t messageRelationType;
  int64_t readCount;
  int64_t relatedMessageServiceCode;

  _Message__isset __isset;

  void __set__from(const std::string& val);

  void __set_to(const std::string& val);

  void __set_toType(const MIDType::type val);

  void __set_id(const std::string& val);

  void __set_createdTime(const int64_t val);

  void __set_deliveredTime(const int64_t val);

  void __set_text(const std::string& val);

  void __set_location(const Location& val);

  void __set_hasContent(const bool val);

  void __set_contentType(const ContentType::type val);

  void __set_contentPreview(const std::string& val);

  void __set_contentMetadata(const std::map<std::string, std::string> & val);

  void __set_sessionId(const int64_t val);

  void __set_chunks(const std::vector<std::string> & val);

  void __set_relatedMessageId(const std::string& val);

  void __set_messageRelationType(const int64_t val);

  void __set_readCount(const int64_t val);

  void __set_relatedMessageServiceCode(const int64_t val);

  bool operator == (const Message & rhs) const
  {
    if (!(_from == rhs._from))
      return false;
    if (!(to == rhs.to))
      return false;
    if (!(toType == rhs.toType))
      return false;
    if (!(id == rhs.id))
      return false;
    if (!(createdTime == rhs.createdTime))
      return false;
    if (!(deliveredTime == rhs.deliveredTime))
      return false;
    if (!(text == rhs.text))
      return false;
    if (!(location == rhs.location))
      return false;
    if (!(hasContent == rhs.hasContent))
      return false;
    if (!(contentType == rhs.contentType))
      return false;
    if (!(contentPreview == rhs.contentPreview))
      return false;
    if (!(contentMetadata == rhs.contentMetadata))
      return false;
    if (!(sessionId == rhs.sessionId))
      return false;
    if (!(chunks == rhs.chunks))
      return false;
    if (!(relatedMessageId == rhs.relatedMessageId))
      return false;
    if (!(messageRelationType == rhs.messageRelationType))
      return false;
    if (!(readCount == rhs.readCount))
      return false;
    if (!(relatedMessageServiceCode == rhs.relatedMessageServiceCode))
      return false;
    return true;
  }
  bool operator != (const Message &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Message & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Message &a, Message &b);

std::ostream& operator<<(std::ostream& out, const Message& obj);

typedef struct _MessageOperation__isset {
  _MessageOperation__isset() : revision(false), createdTime(false), type(false), reqSeq(false), status(false), param1(false), param2(false), param3(false), message(false) {}
  bool revision :1;
  bool createdTime :1;
  bool type :1;
  bool reqSeq :1;
  bool status :1;
  bool param1 :1;
  bool param2 :1;
  bool param3 :1;
  bool message :1;
} _MessageOperation__isset;

class MessageOperation : public virtual ::apache::thrift::TBase {
 public:

  MessageOperation(const MessageOperation&);
  MessageOperation& operator=(const MessageOperation&);
  MessageOperation() : revision(0), createdTime(0), type((MessageOperationType::type)0), reqSeq(0), status((OpStatus::type)0), param1(), param2(), param3() {
  }

  virtual ~MessageOperation() throw();
  int64_t revision;
  int64_t createdTime;
  MessageOperationType::type type;
  int32_t reqSeq;
  OpStatus::type status;
  std::string param1;
  std::string param2;
  std::string param3;
  Message message;

  _MessageOperation__isset __isset;

  void __set_revision(const int64_t val);

  void __set_createdTime(const int64_t val);

  void __set_type(const MessageOperationType::type val);

  void __set_reqSeq(const int32_t val);

  void __set_status(const OpStatus::type val);

  void __set_param1(const std::string& val);

  void __set_param2(const std::string& val);

  void __set_param3(const std::string& val);

  void __set_message(const Message& val);

  bool operator == (const MessageOperation & rhs) const
  {
    if (!(revision == rhs.revision))
      return false;
    if (!(createdTime == rhs.createdTime))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(param1 == rhs.param1))
      return false;
    if (!(param2 == rhs.param2))
      return false;
    if (!(param3 == rhs.param3))
      return false;
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const MessageOperation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageOperation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MessageOperation &a, MessageOperation &b);

std::ostream& operator<<(std::ostream& out, const MessageOperation& obj);

typedef struct _MessageOperations__isset {
  _MessageOperations__isset() : operations(false), endFlag(false) {}
  bool operations :1;
  bool endFlag :1;
} _MessageOperations__isset;

class MessageOperations : public virtual ::apache::thrift::TBase {
 public:

  MessageOperations(const MessageOperations&);
  MessageOperations& operator=(const MessageOperations&);
  MessageOperations() : endFlag(0) {
  }

  virtual ~MessageOperations() throw();
  std::vector<MessageOperation>  operations;
  bool endFlag;

  _MessageOperations__isset __isset;

  void __set_operations(const std::vector<MessageOperation> & val);

  void __set_endFlag(const bool val);

  bool operator == (const MessageOperations & rhs) const
  {
    if (!(operations == rhs.operations))
      return false;
    if (!(endFlag == rhs.endFlag))
      return false;
    return true;
  }
  bool operator != (const MessageOperations &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MessageOperations & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(MessageOperations &a, MessageOperations &b);

std::ostream& operator<<(std::ostream& out, const MessageOperations& obj);

typedef struct _Operation__isset {
  _Operation__isset() : revision(false), createdTime(false), type(false), reqSeq(false), checksum(false), status(false), param1(false), param2(false), param3(false), message(false) {}
  bool revision :1;
  bool createdTime :1;
  bool type :1;
  bool reqSeq :1;
  bool checksum :1;
  bool status :1;
  bool param1 :1;
  bool param2 :1;
  bool param3 :1;
  bool message :1;
} _Operation__isset;

class Operation : public virtual ::apache::thrift::TBase {
 public:

  Operation(const Operation&);
  Operation& operator=(const Operation&);
  Operation() : revision(0), createdTime(0), type((OpType::type)0), reqSeq(0), checksum(), status((OpStatus::type)0), param1(), param2(), param3() {
  }

  virtual ~Operation() throw();
  int64_t revision;
  int64_t createdTime;
  OpType::type type;
  int32_t reqSeq;
  std::string checksum;
  OpStatus::type status;
  std::string param1;
  std::string param2;
  std::string param3;
  Message message;

  _Operation__isset __isset;

  void __set_revision(const int64_t val);

  void __set_createdTime(const int64_t val);

  void __set_type(const OpType::type val);

  void __set_reqSeq(const int32_t val);

  void __set_checksum(const std::string& val);

  void __set_status(const OpStatus::type val);

  void __set_param1(const std::string& val);

  void __set_param2(const std::string& val);

  void __set_param3(const std::string& val);

  void __set_message(const Message& val);

  bool operator == (const Operation & rhs) const
  {
    if (!(revision == rhs.revision))
      return false;
    if (!(createdTime == rhs.createdTime))
      return false;
    if (!(type == rhs.type))
      return false;
    if (!(reqSeq == rhs.reqSeq))
      return false;
    if (!(checksum == rhs.checksum))
      return false;
    if (!(status == rhs.status))
      return false;
    if (!(param1 == rhs.param1))
      return false;
    if (!(param2 == rhs.param2))
      return false;
    if (!(param3 == rhs.param3))
      return false;
    if (!(message == rhs.message))
      return false;
    return true;
  }
  bool operator != (const Operation &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Operation & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Operation &a, Operation &b);

std::ostream& operator<<(std::ostream& out, const Operation& obj);

typedef struct _Profile__isset {
  _Profile__isset() : mid(false), userid(false), phone(false), email(false), regionCode(false), displayName(false), phoneticName(false), pictureStatus(false), thumbnailUrl(false), statusMessage(false), allowSearchByUserid(false), allowSearchByEmail(false), picturePath(false), musicProfile(false) {}
  bool mid :1;
  bool userid :1;
  bool phone :1;
  bool email :1;
  bool regionCode :1;
  bool displayName :1;
  bool phoneticName :1;
  bool pictureStatus :1;
  bool thumbnailUrl :1;
  bool statusMessage :1;
  bool allowSearchByUserid :1;
  bool allowSearchByEmail :1;
  bool picturePath :1;
  bool musicProfile :1;
} _Profile__isset;

class Profile : public virtual ::apache::thrift::TBase {
 public:

  Profile(const Profile&);
  Profile& operator=(const Profile&);
  Profile() : mid(), userid(), phone(), email(), regionCode(), displayName(), phoneticName(), pictureStatus(), thumbnailUrl(), statusMessage(), allowSearchByUserid(0), allowSearchByEmail(0), picturePath(), musicProfile() {
  }

  virtual ~Profile() throw();
  std::string mid;
  std::string userid;
  std::string phone;
  std::string email;
  std::string regionCode;
  std::string displayName;
  std::string phoneticName;
  std::string pictureStatus;
  std::string thumbnailUrl;
  std::string statusMessage;
  bool allowSearchByUserid;
  bool allowSearchByEmail;
  std::string picturePath;
  std::string musicProfile;

  _Profile__isset __isset;

  void __set_mid(const std::string& val);

  void __set_userid(const std::string& val);

  void __set_phone(const std::string& val);

  void __set_email(const std::string& val);

  void __set_regionCode(const std::string& val);

  void __set_displayName(const std::string& val);

  void __set_phoneticName(const std::string& val);

  void __set_pictureStatus(const std::string& val);

  void __set_thumbnailUrl(const std::string& val);

  void __set_statusMessage(const std::string& val);

  void __set_allowSearchByUserid(const bool val);

  void __set_allowSearchByEmail(const bool val);

  void __set_picturePath(const std::string& val);

  void __set_musicProfile(const std::string& val);

  bool operator == (const Profile & rhs) const
  {
    if (!(mid == rhs.mid))
      return false;
    if (!(userid == rhs.userid))
      return false;
    if (!(phone == rhs.phone))
      return false;
    if (!(email == rhs.email))
      return false;
    if (!(regionCode == rhs.regionCode))
      return false;
    if (!(displayName == rhs.displayName))
      return false;
    if (!(phoneticName == rhs.phoneticName))
      return false;
    if (!(pictureStatus == rhs.pictureStatus))
      return false;
    if (!(thumbnailUrl == rhs.thumbnailUrl))
      return false;
    if (!(statusMessage == rhs.statusMessage))
      return false;
    if (!(allowSearchByUserid == rhs.allowSearchByUserid))
      return false;
    if (!(allowSearchByEmail == rhs.allowSearchByEmail))
      return false;
    if (!(picturePath == rhs.picturePath))
      return false;
    if (!(musicProfile == rhs.musicProfile))
      return false;
    return true;
  }
  bool operator != (const Profile &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Profile & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Profile &a, Profile &b);

std::ostream& operator<<(std::ostream& out, const Profile& obj);

typedef struct _Room__isset {
  _Room__isset() : mid(false), createdTime(false), contacts(false), notificationDisabled(false) {}
  bool mid :1;
  bool createdTime :1;
  bool contacts :1;
  bool notificationDisabled :1;
} _Room__isset;

class Room : public virtual ::apache::thrift::TBase {
 public:

  Room(const Room&);
  Room& operator=(const Room&);
  Room() : mid(), createdTime(0), notificationDisabled(0) {
  }

  virtual ~Room() throw();
  std::string mid;
  int64_t createdTime;
  std::vector<Contact>  contacts;
  bool notificationDisabled;

  _Room__isset __isset;

  void __set_mid(const std::string& val);

  void __set_createdTime(const int64_t val);

  void __set_contacts(const std::vector<Contact> & val);

  void __set_notificationDisabled(const bool val);

  bool operator == (const Room & rhs) const
  {
    if (!(mid == rhs.mid))
      return false;
    if (!(createdTime == rhs.createdTime))
      return false;
    if (!(contacts == rhs.contacts))
      return false;
    if (!(notificationDisabled == rhs.notificationDisabled))
      return false;
    return true;
  }
  bool operator != (const Room &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Room & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Room &a, Room &b);

std::ostream& operator<<(std::ostream& out, const Room& obj);

typedef struct _RSAKey__isset {
  _RSAKey__isset() : keynm(false), nvalue(false), evalue(false), sessionKey(false) {}
  bool keynm :1;
  bool nvalue :1;
  bool evalue :1;
  bool sessionKey :1;
} _RSAKey__isset;

class RSAKey : public virtual ::apache::thrift::TBase {
 public:

  RSAKey(const RSAKey&);
  RSAKey& operator=(const RSAKey&);
  RSAKey() : keynm(), nvalue(), evalue(), sessionKey() {
  }

  virtual ~RSAKey() throw();
  std::string keynm;
  std::string nvalue;
  std::string evalue;
  std::string sessionKey;

  _RSAKey__isset __isset;

  void __set_keynm(const std::string& val);

  void __set_nvalue(const std::string& val);

  void __set_evalue(const std::string& val);

  void __set_sessionKey(const std::string& val);

  bool operator == (const RSAKey & rhs) const
  {
    if (!(keynm == rhs.keynm))
      return false;
    if (!(nvalue == rhs.nvalue))
      return false;
    if (!(evalue == rhs.evalue))
      return false;
    if (!(sessionKey == rhs.sessionKey))
      return false;
    return true;
  }
  bool operator != (const RSAKey &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const RSAKey & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(RSAKey &a, RSAKey &b);

std::ostream& operator<<(std::ostream& out, const RSAKey& obj);

typedef struct _TalkException__isset {
  _TalkException__isset() : code(false), reason(false), parameterMap(false) {}
  bool code :1;
  bool reason :1;
  bool parameterMap :1;
} _TalkException__isset;

class TalkException : public ::apache::thrift::TException {
 public:

  TalkException(const TalkException&);
  TalkException& operator=(const TalkException&);
  TalkException() : code((ErrorCode::type)0), reason() {
  }

  virtual ~TalkException() throw();
  ErrorCode::type code;
  std::string reason;
  std::map<std::string, std::string>  parameterMap;

  _TalkException__isset __isset;

  void __set_code(const ErrorCode::type val);

  void __set_reason(const std::string& val);

  void __set_parameterMap(const std::map<std::string, std::string> & val);

  bool operator == (const TalkException & rhs) const
  {
    if (!(code == rhs.code))
      return false;
    if (!(reason == rhs.reason))
      return false;
    if (!(parameterMap == rhs.parameterMap))
      return false;
    return true;
  }
  bool operator != (const TalkException &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const TalkException & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
  mutable std::string thriftTExceptionMessageHolder_;
  const char* what() const throw();
};

void swap(TalkException &a, TalkException &b);

std::ostream& operator<<(std::ostream& out, const TalkException& obj);

typedef struct _Ticket__isset {
  _Ticket__isset() : id(false), expirationTime(false), maxUseCount(false) {}
  bool id :1;
  bool expirationTime :1;
  bool maxUseCount :1;
} _Ticket__isset;

class Ticket : public virtual ::apache::thrift::TBase {
 public:

  Ticket(const Ticket&);
  Ticket& operator=(const Ticket&);
  Ticket() : id(), expirationTime(0), maxUseCount(0) {
  }

  virtual ~Ticket() throw();
  std::string id;
  int64_t expirationTime;
  int32_t maxUseCount;

  _Ticket__isset __isset;

  void __set_id(const std::string& val);

  void __set_expirationTime(const int64_t val);

  void __set_maxUseCount(const int32_t val);

  bool operator == (const Ticket & rhs) const
  {
    if (!(id == rhs.id))
      return false;
    if (!(expirationTime == rhs.expirationTime))
      return false;
    if (!(maxUseCount == rhs.maxUseCount))
      return false;
    return true;
  }
  bool operator != (const Ticket &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Ticket & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

  virtual void printTo(std::ostream& out) const;
};

void swap(Ticket &a, Ticket &b);

std::ostream& operator<<(std::ostream& out, const Ticket& obj);



#endif
