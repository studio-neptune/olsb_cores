/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "litecore_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>



int _kApplicationTypeValues[] = {
  ApplicationType::DESKTOPWIN,
  ApplicationType::DESKTOPWIN_RC,
  ApplicationType::DESKTOPWIN_BETA,
  ApplicationType::DESKTOPWIN_ALPHA,
  ApplicationType::DESKTOPMAC,
  ApplicationType::DESKTOPMAC_RC,
  ApplicationType::DESKTOPMAC_BETA,
  ApplicationType::DESKTOPMAC_ALPHA
};
const char* _kApplicationTypeNames[] = {
  "DESKTOPWIN",
  "DESKTOPWIN_RC",
  "DESKTOPWIN_BETA",
  "DESKTOPWIN_ALPHA",
  "DESKTOPMAC",
  "DESKTOPMAC_RC",
  "DESKTOPMAC_BETA",
  "DESKTOPMAC_ALPHA"
};
const std::map<int, const char*> _ApplicationType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(8, _kApplicationTypeValues, _kApplicationTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ApplicationType::type& val) {
  std::map<int, const char*>::const_iterator it = _ApplicationType_VALUES_TO_NAMES.find(val);
  if (it != _ApplicationType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kLoginTypeValues[] = {
  LoginType::ID_CREDENTIAL,
  LoginType::QRCODE,
  LoginType::ID_CREDENTIAL_WITH_E2EE
};
const char* _kLoginTypeNames[] = {
  "ID_CREDENTIAL",
  "QRCODE",
  "ID_CREDENTIAL_WITH_E2EE"
};
const std::map<int, const char*> _LoginType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kLoginTypeValues, _kLoginTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const LoginType::type& val) {
  std::map<int, const char*>::const_iterator it = _LoginType_VALUES_TO_NAMES.find(val);
  if (it != _LoginType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kContactTypeValues[] = {
  ContactType::MID,
  ContactType::PHONE,
  ContactType::EMAIL,
  ContactType::USERID,
  ContactType::PROXIMITY,
  ContactType::GROUP,
  ContactType::USER,
  ContactType::QRCODE,
  ContactType::PROMOTION_BOT,
  ContactType::CONTACT_MESSAGE,
  ContactType::FRIEND_REQUEST,
  ContactType::REPAIR,
  ContactType::FACEBOOK,
  ContactType::SINA,
  ContactType::RENREN,
  ContactType::FEIXIN,
  ContactType::BBM,
  ContactType::BEACON
};
const char* _kContactTypeNames[] = {
  "MID",
  "PHONE",
  "EMAIL",
  "USERID",
  "PROXIMITY",
  "GROUP",
  "USER",
  "QRCODE",
  "PROMOTION_BOT",
  "CONTACT_MESSAGE",
  "FRIEND_REQUEST",
  "REPAIR",
  "FACEBOOK",
  "SINA",
  "RENREN",
  "FEIXIN",
  "BBM",
  "BEACON"
};
const std::map<int, const char*> _ContactType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(18, _kContactTypeValues, _kContactTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ContactType::type& val) {
  std::map<int, const char*>::const_iterator it = _ContactType_VALUES_TO_NAMES.find(val);
  if (it != _ContactType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kContentTypeValues[] = {
  ContentType::NONE,
  ContentType::IMAGE,
  ContentType::VIDEO,
  ContentType::AUDIO,
  ContentType::HTML,
  ContentType::PDF,
  ContentType::CALL,
  ContentType::STICKER,
  ContentType::PRESENCE,
  ContentType::GIFT,
  ContentType::GROUPBOARD,
  ContentType::APPLINK,
  ContentType::LINK,
  ContentType::CONTACT,
  ContentType::FILE,
  ContentType::LOCATION,
  ContentType::POSTNOTIFICATION,
  ContentType::RICH,
  ContentType::CHATEVENT,
  ContentType::MUSIC,
  ContentType::PAYMENT,
  ContentType::EXTIMAGE
};
const char* _kContentTypeNames[] = {
  "NONE",
  "IMAGE",
  "VIDEO",
  "AUDIO",
  "HTML",
  "PDF",
  "CALL",
  "STICKER",
  "PRESENCE",
  "GIFT",
  "GROUPBOARD",
  "APPLINK",
  "LINK",
  "CONTACT",
  "FILE",
  "LOCATION",
  "POSTNOTIFICATION",
  "RICH",
  "CHATEVENT",
  "MUSIC",
  "PAYMENT",
  "EXTIMAGE"
};
const std::map<int, const char*> _ContentType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(22, _kContentTypeValues, _kContentTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ContentType::type& val) {
  std::map<int, const char*>::const_iterator it = _ContentType_VALUES_TO_NAMES.find(val);
  if (it != _ContentType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kErrorCodeValues[] = {
  ErrorCode::ILLEGAL_ARGUMENT,
  ErrorCode::AUTHENTICATION_FAILED,
  ErrorCode::DB_FAILED,
  ErrorCode::INVALID_STATE,
  ErrorCode::EXCESSIVE_ACCESS,
  ErrorCode::NOT_FOUND,
  ErrorCode::INVALID_MID,
  ErrorCode::NOT_A_MEMBER,
  ErrorCode::INVALID_LENGTH,
  ErrorCode::NOT_AVAILABLE_USER,
  ErrorCode::NOT_AUTHORIZED_DEVICE,
  ErrorCode::NOT_AUTHORIZED_SESSION,
  ErrorCode::INCOMPATIBLE_APP_VERSION,
  ErrorCode::NOT_READY,
  ErrorCode::NOT_AVAILABLE_SESSION,
  ErrorCode::SYSTEM_ERROR,
  ErrorCode::NO_AVAILABLE_VERIFICATION_METHOD,
  ErrorCode::NOT_AUTHENTICATED,
  ErrorCode::INVALID_IDENTITY_CREDENTIAL,
  ErrorCode::NOT_AVAILABLE_IDENTITY_IDENTIFIER,
  ErrorCode::INTERNAL_ERROR,
  ErrorCode::NO_SUCH_IDENTITY_IDENFIER,
  ErrorCode::DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY,
  ErrorCode::ILLEGAL_IDENTITY_CREDENTIAL,
  ErrorCode::UNKNOWN_CHANNEL,
  ErrorCode::NO_SUCH_MESSAGE_BOX,
  ErrorCode::NOT_AVAILABLE_MESSAGE_BOX,
  ErrorCode::CHANNEL_DOES_NOT_MATCH,
  ErrorCode::NOT_YOUR_MESSAGE,
  ErrorCode::MESSAGE_DEFINED_ERROR,
  ErrorCode::USER_CANNOT_ACCEPT_PRESENTS,
  ErrorCode::USER_NOT_STICKER_OWNER,
  ErrorCode::MAINTENANCE_ERROR,
  ErrorCode::ACCOUNT_NOT_MATCHED,
  ErrorCode::ABUSE_BLOCK,
  ErrorCode::NOT_FRIEND,
  ErrorCode::NOT_ALLOWED_CALL,
  ErrorCode::BLOCK_FRIEND,
  ErrorCode::INCOMPATIBLE_VOIP_VERSION,
  ErrorCode::INVALID_SNS_ACCESS_TOKEN,
  ErrorCode::EXTERNAL_SERVICE_NOT_AVAILABLE,
  ErrorCode::NOT_ALLOWED_ADD_CONTACT,
  ErrorCode::NOT_CERTIFICATED,
  ErrorCode::NOT_ALLOWED_SECONDARY_DEVICE,
  ErrorCode::INVALID_PIN_CODE,
  ErrorCode::NOT_FOUND_IDENTITY_CREDENTIAL,
  ErrorCode::EXCEED_FILE_MAX_SIZE,
  ErrorCode::EXCEED_DAILY_QUOTA,
  ErrorCode::NOT_SUPPORT_SEND_FILE,
  ErrorCode::MUST_UPGRADE,
  ErrorCode::NOT_AVAILABLE_PIN_CODE_SESSION,
  ErrorCode::EXPIRED_REVISION,
  ErrorCode::NOT_YET_PHONE_NUMBER,
  ErrorCode::BAD_CALL_NUMBER,
  ErrorCode::UNAVAILABLE_CALL_NUMBER,
  ErrorCode::NOT_SUPPORT_CALL_SERVICE,
  ErrorCode::CONGESTION_CONTROL,
  ErrorCode::NO_BALANCE,
  ErrorCode::NOT_PERMITTED_CALLER_ID,
  ErrorCode::NO_CALLER_ID_LIMIT_EXCEEDED,
  ErrorCode::CALLER_ID_VERIFICATION_REQUIRED,
  ErrorCode::NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED,
  ErrorCode::MESSAGE_NOT_FOUND,
  ErrorCode::INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT,
  ErrorCode::ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED,
  ErrorCode::ACCOUNT_MIGRATION_PINCODE_BLOCKED,
  ErrorCode::INVALID_PASSWORD_FORMAT,
  ErrorCode::FEATURE_RESTRICTED,
  ErrorCode::MESSAGE_NOT_DESTRUCTIBLE,
  ErrorCode::PAID_CALL_REDEEM_FAILED,
  ErrorCode::PREVENTED_JOIN_BY_TICKET,
  ErrorCode::SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT,
  ErrorCode::SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY,
  ErrorCode::SECURITY_CENTER_NOT_VERIFIED,
  ErrorCode::SECURITY_CENTER_BLOCKED_BY_SETTING,
  ErrorCode::SECURITY_CENTER_BLOCKED,
  ErrorCode::TALK_PROXY_EXCEPTION,
  ErrorCode::E2EE_INVALID_PROTOCOL,
  ErrorCode::E2EE_RETRY_ENCRYPT,
  ErrorCode::E2EE_UPDATE_SENDER_KEY,
  ErrorCode::E2EE_UPDATE_RECEIVER_KEY,
  ErrorCode::E2EE_INVALID_ARGUMENT,
  ErrorCode::E2EE_INVALID_VERSION,
  ErrorCode::E2EE_SENDER_DISABLED,
  ErrorCode::E2EE_RECEIVER_DISABLED,
  ErrorCode::E2EE_SENDER_NOT_ALLOWED,
  ErrorCode::E2EE_RECEIVER_NOT_ALLOWED,
  ErrorCode::E2EE_RESEND_FAIL,
  ErrorCode::E2EE_RESEND_OK,
  ErrorCode::HITOKOTO_BACKUP_NO_AVAILABLE_DATA,
  ErrorCode::E2EE_UPDATE_PRIMARY_DEVICE,
  ErrorCode::SUCCESS,
  ErrorCode::CANCEL,
  ErrorCode::E2EE_PRIMARY_NOT_SUPPORT,
  ErrorCode::E2EE_RETRY_PLAIN,
  ErrorCode::E2EE_RECREATE_GROUP_KEY,
  ErrorCode::E2EE_GROUP_TOO_MANY_MEMBERS,
  ErrorCode::SERVER_BUSY,
  ErrorCode::NOT_ALLOWED_ADD_FOLLOW,
  ErrorCode::INCOMING_FRIEND_REQUEST_LIMIT,
  ErrorCode::OUTGOING_FRIEND_REQUEST_LIMIT,
  ErrorCode::OUTGOING_FRIEND_REQUEST_QUOTA,
  ErrorCode::DUPLICATED,
  ErrorCode::BANNED
};
const char* _kErrorCodeNames[] = {
  "ILLEGAL_ARGUMENT",
  "AUTHENTICATION_FAILED",
  "DB_FAILED",
  "INVALID_STATE",
  "EXCESSIVE_ACCESS",
  "NOT_FOUND",
  "INVALID_MID",
  "NOT_A_MEMBER",
  "INVALID_LENGTH",
  "NOT_AVAILABLE_USER",
  "NOT_AUTHORIZED_DEVICE",
  "NOT_AUTHORIZED_SESSION",
  "INCOMPATIBLE_APP_VERSION",
  "NOT_READY",
  "NOT_AVAILABLE_SESSION",
  "SYSTEM_ERROR",
  "NO_AVAILABLE_VERIFICATION_METHOD",
  "NOT_AUTHENTICATED",
  "INVALID_IDENTITY_CREDENTIAL",
  "NOT_AVAILABLE_IDENTITY_IDENTIFIER",
  "INTERNAL_ERROR",
  "NO_SUCH_IDENTITY_IDENFIER",
  "DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY",
  "ILLEGAL_IDENTITY_CREDENTIAL",
  "UNKNOWN_CHANNEL",
  "NO_SUCH_MESSAGE_BOX",
  "NOT_AVAILABLE_MESSAGE_BOX",
  "CHANNEL_DOES_NOT_MATCH",
  "NOT_YOUR_MESSAGE",
  "MESSAGE_DEFINED_ERROR",
  "USER_CANNOT_ACCEPT_PRESENTS",
  "USER_NOT_STICKER_OWNER",
  "MAINTENANCE_ERROR",
  "ACCOUNT_NOT_MATCHED",
  "ABUSE_BLOCK",
  "NOT_FRIEND",
  "NOT_ALLOWED_CALL",
  "BLOCK_FRIEND",
  "INCOMPATIBLE_VOIP_VERSION",
  "INVALID_SNS_ACCESS_TOKEN",
  "EXTERNAL_SERVICE_NOT_AVAILABLE",
  "NOT_ALLOWED_ADD_CONTACT",
  "NOT_CERTIFICATED",
  "NOT_ALLOWED_SECONDARY_DEVICE",
  "INVALID_PIN_CODE",
  "NOT_FOUND_IDENTITY_CREDENTIAL",
  "EXCEED_FILE_MAX_SIZE",
  "EXCEED_DAILY_QUOTA",
  "NOT_SUPPORT_SEND_FILE",
  "MUST_UPGRADE",
  "NOT_AVAILABLE_PIN_CODE_SESSION",
  "EXPIRED_REVISION",
  "NOT_YET_PHONE_NUMBER",
  "BAD_CALL_NUMBER",
  "UNAVAILABLE_CALL_NUMBER",
  "NOT_SUPPORT_CALL_SERVICE",
  "CONGESTION_CONTROL",
  "NO_BALANCE",
  "NOT_PERMITTED_CALLER_ID",
  "NO_CALLER_ID_LIMIT_EXCEEDED",
  "CALLER_ID_VERIFICATION_REQUIRED",
  "NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED",
  "MESSAGE_NOT_FOUND",
  "INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT",
  "ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED",
  "ACCOUNT_MIGRATION_PINCODE_BLOCKED",
  "INVALID_PASSWORD_FORMAT",
  "FEATURE_RESTRICTED",
  "MESSAGE_NOT_DESTRUCTIBLE",
  "PAID_CALL_REDEEM_FAILED",
  "PREVENTED_JOIN_BY_TICKET",
  "SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT",
  "SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY",
  "SECURITY_CENTER_NOT_VERIFIED",
  "SECURITY_CENTER_BLOCKED_BY_SETTING",
  "SECURITY_CENTER_BLOCKED",
  "TALK_PROXY_EXCEPTION",
  "E2EE_INVALID_PROTOCOL",
  "E2EE_RETRY_ENCRYPT",
  "E2EE_UPDATE_SENDER_KEY",
  "E2EE_UPDATE_RECEIVER_KEY",
  "E2EE_INVALID_ARGUMENT",
  "E2EE_INVALID_VERSION",
  "E2EE_SENDER_DISABLED",
  "E2EE_RECEIVER_DISABLED",
  "E2EE_SENDER_NOT_ALLOWED",
  "E2EE_RECEIVER_NOT_ALLOWED",
  "E2EE_RESEND_FAIL",
  "E2EE_RESEND_OK",
  "HITOKOTO_BACKUP_NO_AVAILABLE_DATA",
  "E2EE_UPDATE_PRIMARY_DEVICE",
  "SUCCESS",
  "CANCEL",
  "E2EE_PRIMARY_NOT_SUPPORT",
  "E2EE_RETRY_PLAIN",
  "E2EE_RECREATE_GROUP_KEY",
  "E2EE_GROUP_TOO_MANY_MEMBERS",
  "SERVER_BUSY",
  "NOT_ALLOWED_ADD_FOLLOW",
  "INCOMING_FRIEND_REQUEST_LIMIT",
  "OUTGOING_FRIEND_REQUEST_LIMIT",
  "OUTGOING_FRIEND_REQUEST_QUOTA",
  "DUPLICATED",
  "BANNED"
};
const std::map<int, const char*> _ErrorCode_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(104, _kErrorCodeValues, _kErrorCodeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ErrorCode::type& val) {
  std::map<int, const char*>::const_iterator it = _ErrorCode_VALUES_TO_NAMES.find(val);
  if (it != _ErrorCode_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kIdentityProviderValues[] = {
  IdentityProvider::UNKNOWN,
  IdentityProvider::LINE,
  IdentityProvider::NAVER_KR,
  IdentityProvider::LINE_PHONE
};
const char* _kIdentityProviderNames[] = {
  "UNKNOWN",
  "LINE",
  "NAVER_KR",
  "LINE_PHONE"
};
const std::map<int, const char*> _IdentityProvider_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kIdentityProviderValues, _kIdentityProviderNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const IdentityProvider::type& val) {
  std::map<int, const char*>::const_iterator it = _IdentityProvider_VALUES_TO_NAMES.find(val);
  if (it != _IdentityProvider_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kLoginResultTypeValues[] = {
  LoginResultType::SUCCESS,
  LoginResultType::REQUIRE_QRCODE,
  LoginResultType::REQUIRE_DEVICE_CONFIRM,
  LoginResultType::REQUIRE_SMS_CONFIRM
};
const char* _kLoginResultTypeNames[] = {
  "SUCCESS",
  "REQUIRE_QRCODE",
  "REQUIRE_DEVICE_CONFIRM",
  "REQUIRE_SMS_CONFIRM"
};
const std::map<int, const char*> _LoginResultType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(4, _kLoginResultTypeValues, _kLoginResultTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const LoginResultType::type& val) {
  std::map<int, const char*>::const_iterator it = _LoginResultType_VALUES_TO_NAMES.find(val);
  if (it != _LoginResultType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kMessageOperationTypeValues[] = {
  MessageOperationType::SEND_MESSAGE,
  MessageOperationType::RECEIVE_MESSAGE,
  MessageOperationType::READ_MESSAGE,
  MessageOperationType::NOTIFIED_READ_MESSAGE,
  MessageOperationType::NOTIFIED_JOIN_CHAT,
  MessageOperationType::FAILED_SEND_MESSAGE,
  MessageOperationType::SEND_CONTENT,
  MessageOperationType::SEND_CONTENT_RECEIPT,
  MessageOperationType::SEND_CHAT_REMOVED,
  MessageOperationType::REMOVE_ALL_MESSAGES
};
const char* _kMessageOperationTypeNames[] = {
  "SEND_MESSAGE",
  "RECEIVE_MESSAGE",
  "READ_MESSAGE",
  "NOTIFIED_READ_MESSAGE",
  "NOTIFIED_JOIN_CHAT",
  "FAILED_SEND_MESSAGE",
  "SEND_CONTENT",
  "SEND_CONTENT_RECEIPT",
  "SEND_CHAT_REMOVED",
  "REMOVE_ALL_MESSAGES"
};
const std::map<int, const char*> _MessageOperationType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(10, _kMessageOperationTypeValues, _kMessageOperationTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const MessageOperationType::type& val) {
  std::map<int, const char*>::const_iterator it = _MessageOperationType_VALUES_TO_NAMES.find(val);
  if (it != _MessageOperationType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kMIDTypeValues[] = {
  MIDType::USER,
  MIDType::ROOM,
  MIDType::GROUP,
  MIDType::SQUARE,
  MIDType::SQUARE_CHAT,
  MIDType::SQUARE_MEMBER,
  MIDType::BOT
};
const char* _kMIDTypeNames[] = {
  "USER",
  "ROOM",
  "GROUP",
  "SQUARE",
  "SQUARE_CHAT",
  "SQUARE_MEMBER",
  "BOT"
};
const std::map<int, const char*> _MIDType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(7, _kMIDTypeValues, _kMIDTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const MIDType::type& val) {
  std::map<int, const char*>::const_iterator it = _MIDType_VALUES_TO_NAMES.find(val);
  if (it != _MIDType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kServiceCodeValues[] = {
  ServiceCode::UNKNOWN,
  ServiceCode::TALK,
  ServiceCode::SQUARE
};
const char* _kServiceCodeNames[] = {
  "UNKNOWN",
  "TALK",
  "SQUARE"
};
const std::map<int, const char*> _ServiceCode_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kServiceCodeValues, _kServiceCodeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ServiceCode::type& val) {
  std::map<int, const char*>::const_iterator it = _ServiceCode_VALUES_TO_NAMES.find(val);
  if (it != _ServiceCode_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kOpStatusValues[] = {
  OpStatus::NORMAL,
  OpStatus::ALERT_DISABLED,
  OpStatus::ALWAYS
};
const char* _kOpStatusNames[] = {
  "NORMAL",
  "ALERT_DISABLED",
  "ALWAYS"
};
const std::map<int, const char*> _OpStatus_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kOpStatusValues, _kOpStatusNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const OpStatus::type& val) {
  std::map<int, const char*>::const_iterator it = _OpStatus_VALUES_TO_NAMES.find(val);
  if (it != _OpStatus_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kOpTypeValues[] = {
  OpType::END_OF_OPERATION,
  OpType::UPDATE_PROFILE,
  OpType::UPDATE_SETTINGS,
  OpType::NOTIFIED_UPDATE_PROFILE,
  OpType::REGISTER_USERID,
  OpType::ADD_CONTACT,
  OpType::NOTIFIED_ADD_CONTACT,
  OpType::BLOCK_CONTACT,
  OpType::UNBLOCK_CONTACT,
  OpType::NOTIFIED_RECOMMEND_CONTACT,
  OpType::CREATE_GROUP,
  OpType::UPDATE_GROUP,
  OpType::NOTIFIED_UPDATE_GROUP,
  OpType::INVITE_INTO_GROUP,
  OpType::NOTIFIED_INVITE_INTO_GROUP,
  OpType::CANCEL_INVITATION_GROUP,
  OpType::NOTIFIED_CANCEL_INVITATION_GROUP,
  OpType::LEAVE_GROUP,
  OpType::NOTIFIED_LEAVE_GROUP,
  OpType::ACCEPT_GROUP_INVITATION,
  OpType::NOTIFIED_ACCEPT_GROUP_INVITATION,
  OpType::REJECT_GROUP_INVITATION,
  OpType::NOTIFIED_REJECT_GROUP_INVITATION,
  OpType::KICKOUT_FROM_GROUP,
  OpType::NOTIFIED_KICKOUT_FROM_GROUP,
  OpType::CREATE_ROOM,
  OpType::INVITE_INTO_ROOM,
  OpType::NOTIFIED_INVITE_INTO_ROOM,
  OpType::LEAVE_ROOM,
  OpType::NOTIFIED_LEAVE_ROOM,
  OpType::SEND_MESSAGE,
  OpType::RECEIVE_MESSAGE,
  OpType::SEND_MESSAGE_RECEIPT,
  OpType::RECEIVE_MESSAGE_RECEIPT,
  OpType::SEND_CONTENT_RECEIPT,
  OpType::SEND_CHAT_CHECKED,
  OpType::SEND_CHAT_REMOVED,
  OpType::RECEIVE_ANNOUNCEMENT,
  OpType::INVITE_VIA_EMAIL,
  OpType::NOTIFIED_REGISTER_USER,
  OpType::NOTIFIED_UNREGISTER_USER,
  OpType::NOTIFIED_REQUEST_RECOVERY,
  OpType::NOTIFIED_FORCE_SYNC,
  OpType::SEND_CONTENT,
  OpType::SEND_MESSAGE_MYHOME,
  OpType::NOTIFIED_UPDATE_CONTENT_PREVIEW,
  OpType::REMOVE_ALL_MESSAGES,
  OpType::NOTIFIED_UPDATE_PURCHASES,
  OpType::DUMMY,
  OpType::UPDATE_CONTACT,
  OpType::NOTIFIED_RECEIVED_CALL,
  OpType::CANCEL_CALL,
  OpType::NOTIFIED_REDIRECT,
  OpType::NOTIFIED_CHANNEL_SYNC,
  OpType::FAILED_SEND_MESSAGE,
  OpType::NOTIFIED_READ_MESSAGE,
  OpType::FAILED_EMAIL_CONFIRMATION,
  OpType::NOTIFIED_PUSH_NOTICENTER_ITEM,
  OpType::NOTIFIED_CHAT_CONTENT,
  OpType::NOTIFIED_JOIN_CHAT,
  OpType::NOTIFIED_LEAVE_CHAT,
  OpType::NOTIFIED_TYPING,
  OpType::FRIEND_REQUEST_ACCEPTED,
  OpType::DESTROY_MESSAGE,
  OpType::NOTIFIED_DESTROY_MESSAGE,
  OpType::UPDATE_PUBLICKEYCHAIN,
  OpType::NOTIFIED_UPDATE_PUBLICKEYCHAIN,
  OpType::NOTIFIED_BLOCK_CONTACT,
  OpType::NOTIFIED_UNBLOCK_CONTACT,
  OpType::UPDATE_GROUPPREFERENCE,
  OpType::NOTIFIED_PAYMENT_EVENT,
  OpType::REGISTER_E2EE_PUBLICKEY,
  OpType::NOTIFIED_E2EE_KEY_EXCHANGE_REQ,
  OpType::NOTIFIED_E2EE_KEY_EXCHANGE_RESP,
  OpType::NOTIFIED_E2EE_MESSAGE_RESEND_REQ,
  OpType::NOTIFIED_E2EE_MESSAGE_RESEND_RESP,
  OpType::NOTIFIED_E2EE_KEY_UPDATE,
  OpType::NOTIFIED_BUDDY_UPDATE_PROFILE,
  OpType::NOTIFIED_UPDATE_LINEAT_TABS,
  OpType::UPDATE_ROOM,
  OpType::NOTIFIED_BEACON_DETECTED,
  OpType::UPDATE_EXTENDED_PROFILE,
  OpType::ADD_FOLLOW,
  OpType::NOTIFIED_ADD_FOLLOW,
  OpType::DELETE_FOLLOW,
  OpType::NOTIFIED_DELETE_FOLLOW,
  OpType::UPDATE_TIMELINE_SETTINGS,
  OpType::NOTIFIED_FRIEND_REQUEST,
  OpType::UPDATE_RINGBACK_TONE,
  OpType::NOTIFIED_POSTBACK,
  OpType::RECEIVE_READ_WATERMARK,
  OpType::NOTIFIED_MESSAGE_DELIVERED,
  OpType::NOTIFIED_UPDATE_CHAT_BAR,
  OpType::NOTIFIED_CHATAPP_INSTALLED,
  OpType::NOTIFIED_CHATAPP_UPDATED,
  OpType::NOTIFIED_CHATAPP_NEW_MARK,
  OpType::NOTIFIED_CHATAPP_DELETED,
  OpType::NOTIFIED_CHATAPP_SYNC,
  OpType::NOTIFIED_UPDATE_MESSAGE
};
const char* _kOpTypeNames[] = {
  "END_OF_OPERATION",
  "UPDATE_PROFILE",
  "UPDATE_SETTINGS",
  "NOTIFIED_UPDATE_PROFILE",
  "REGISTER_USERID",
  "ADD_CONTACT",
  "NOTIFIED_ADD_CONTACT",
  "BLOCK_CONTACT",
  "UNBLOCK_CONTACT",
  "NOTIFIED_RECOMMEND_CONTACT",
  "CREATE_GROUP",
  "UPDATE_GROUP",
  "NOTIFIED_UPDATE_GROUP",
  "INVITE_INTO_GROUP",
  "NOTIFIED_INVITE_INTO_GROUP",
  "CANCEL_INVITATION_GROUP",
  "NOTIFIED_CANCEL_INVITATION_GROUP",
  "LEAVE_GROUP",
  "NOTIFIED_LEAVE_GROUP",
  "ACCEPT_GROUP_INVITATION",
  "NOTIFIED_ACCEPT_GROUP_INVITATION",
  "REJECT_GROUP_INVITATION",
  "NOTIFIED_REJECT_GROUP_INVITATION",
  "KICKOUT_FROM_GROUP",
  "NOTIFIED_KICKOUT_FROM_GROUP",
  "CREATE_ROOM",
  "INVITE_INTO_ROOM",
  "NOTIFIED_INVITE_INTO_ROOM",
  "LEAVE_ROOM",
  "NOTIFIED_LEAVE_ROOM",
  "SEND_MESSAGE",
  "RECEIVE_MESSAGE",
  "SEND_MESSAGE_RECEIPT",
  "RECEIVE_MESSAGE_RECEIPT",
  "SEND_CONTENT_RECEIPT",
  "SEND_CHAT_CHECKED",
  "SEND_CHAT_REMOVED",
  "RECEIVE_ANNOUNCEMENT",
  "INVITE_VIA_EMAIL",
  "NOTIFIED_REGISTER_USER",
  "NOTIFIED_UNREGISTER_USER",
  "NOTIFIED_REQUEST_RECOVERY",
  "NOTIFIED_FORCE_SYNC",
  "SEND_CONTENT",
  "SEND_MESSAGE_MYHOME",
  "NOTIFIED_UPDATE_CONTENT_PREVIEW",
  "REMOVE_ALL_MESSAGES",
  "NOTIFIED_UPDATE_PURCHASES",
  "DUMMY",
  "UPDATE_CONTACT",
  "NOTIFIED_RECEIVED_CALL",
  "CANCEL_CALL",
  "NOTIFIED_REDIRECT",
  "NOTIFIED_CHANNEL_SYNC",
  "FAILED_SEND_MESSAGE",
  "NOTIFIED_READ_MESSAGE",
  "FAILED_EMAIL_CONFIRMATION",
  "NOTIFIED_PUSH_NOTICENTER_ITEM",
  "NOTIFIED_CHAT_CONTENT",
  "NOTIFIED_JOIN_CHAT",
  "NOTIFIED_LEAVE_CHAT",
  "NOTIFIED_TYPING",
  "FRIEND_REQUEST_ACCEPTED",
  "DESTROY_MESSAGE",
  "NOTIFIED_DESTROY_MESSAGE",
  "UPDATE_PUBLICKEYCHAIN",
  "NOTIFIED_UPDATE_PUBLICKEYCHAIN",
  "NOTIFIED_BLOCK_CONTACT",
  "NOTIFIED_UNBLOCK_CONTACT",
  "UPDATE_GROUPPREFERENCE",
  "NOTIFIED_PAYMENT_EVENT",
  "REGISTER_E2EE_PUBLICKEY",
  "NOTIFIED_E2EE_KEY_EXCHANGE_REQ",
  "NOTIFIED_E2EE_KEY_EXCHANGE_RESP",
  "NOTIFIED_E2EE_MESSAGE_RESEND_REQ",
  "NOTIFIED_E2EE_MESSAGE_RESEND_RESP",
  "NOTIFIED_E2EE_KEY_UPDATE",
  "NOTIFIED_BUDDY_UPDATE_PROFILE",
  "NOTIFIED_UPDATE_LINEAT_TABS",
  "UPDATE_ROOM",
  "NOTIFIED_BEACON_DETECTED",
  "UPDATE_EXTENDED_PROFILE",
  "ADD_FOLLOW",
  "NOTIFIED_ADD_FOLLOW",
  "DELETE_FOLLOW",
  "NOTIFIED_DELETE_FOLLOW",
  "UPDATE_TIMELINE_SETTINGS",
  "NOTIFIED_FRIEND_REQUEST",
  "UPDATE_RINGBACK_TONE",
  "NOTIFIED_POSTBACK",
  "RECEIVE_READ_WATERMARK",
  "NOTIFIED_MESSAGE_DELIVERED",
  "NOTIFIED_UPDATE_CHAT_BAR",
  "NOTIFIED_CHATAPP_INSTALLED",
  "NOTIFIED_CHATAPP_UPDATED",
  "NOTIFIED_CHATAPP_NEW_MARK",
  "NOTIFIED_CHATAPP_DELETED",
  "NOTIFIED_CHATAPP_SYNC",
  "NOTIFIED_UPDATE_MESSAGE"
};
const std::map<int, const char*> _OpType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(99, _kOpTypeValues, _kOpTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const OpType::type& val) {
  std::map<int, const char*>::const_iterator it = _OpType_VALUES_TO_NAMES.find(val);
  if (it != _OpType_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kContactStatusValues[] = {
  ContactStatus::UNSPECIFIED,
  ContactStatus::FRIEND,
  ContactStatus::FRIEND_BLOCKED,
  ContactStatus::RECOMMEND,
  ContactStatus::RECOMMEND_BLOCKED,
  ContactStatus::DELETED,
  ContactStatus::DELETED_BLOCKED
};
const char* _kContactStatusNames[] = {
  "UNSPECIFIED",
  "FRIEND",
  "FRIEND_BLOCKED",
  "RECOMMEND",
  "RECOMMEND_BLOCKED",
  "DELETED",
  "DELETED_BLOCKED"
};
const std::map<int, const char*> _ContactStatus_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(7, _kContactStatusValues, _kContactStatusNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ContactStatus::type& val) {
  std::map<int, const char*>::const_iterator it = _ContactStatus_VALUES_TO_NAMES.find(val);
  if (it != _ContactStatus_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

int _kContactRelationValues[] = {
  ContactRelation::ONEWAY,
  ContactRelation::BOTH,
  ContactRelation::NOT_REGISTERED
};
const char* _kContactRelationNames[] = {
  "ONEWAY",
  "BOTH",
  "NOT_REGISTERED"
};
const std::map<int, const char*> _ContactRelation_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kContactRelationValues, _kContactRelationNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

std::ostream& operator<<(std::ostream& out, const ContactRelation::type& val) {
  std::map<int, const char*>::const_iterator it = _ContactRelation_VALUES_TO_NAMES.find(val);
  if (it != _ContactRelation_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}


LoginResult::~LoginResult() throw() {
}


void LoginResult::__set_authToken(const std::string& val) {
  this->authToken = val;
}

void LoginResult::__set_certificate(const std::string& val) {
  this->certificate = val;
}

void LoginResult::__set_verifier(const std::string& val) {
  this->verifier = val;
}

void LoginResult::__set_pinCode(const std::string& val) {
  this->pinCode = val;
}

void LoginResult::__set_type(const LoginResultType val) {
  this->type = val;
}
std::ostream& operator<<(std::ostream& out, const LoginResult& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t LoginResult::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->authToken);
          this->__isset.authToken = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->certificate);
          this->__isset.certificate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->verifier);
          this->__isset.verifier = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->pinCode);
          this->__isset.pinCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->type = (LoginResultType::type)ecast0;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t LoginResult::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("LoginResult");

  xfer += oprot->writeFieldBegin("authToken", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->authToken);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("certificate", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->certificate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("verifier", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->verifier);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pinCode", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->pinCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(LoginResult &a, LoginResult &b) {
  using ::std::swap;
  swap(a.authToken, b.authToken);
  swap(a.certificate, b.certificate);
  swap(a.verifier, b.verifier);
  swap(a.pinCode, b.pinCode);
  swap(a.type, b.type);
  swap(a.__isset, b.__isset);
}

LoginResult::LoginResult(const LoginResult& other1) {
  authToken = other1.authToken;
  certificate = other1.certificate;
  verifier = other1.verifier;
  pinCode = other1.pinCode;
  type = other1.type;
  __isset = other1.__isset;
}
LoginResult& LoginResult::operator=(const LoginResult& other2) {
  authToken = other2.authToken;
  certificate = other2.certificate;
  verifier = other2.verifier;
  pinCode = other2.pinCode;
  type = other2.type;
  __isset = other2.__isset;
  return *this;
}
void LoginResult::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "LoginResult(";
  out << "authToken=" << to_string(authToken);
  out << ", " << "certificate=" << to_string(certificate);
  out << ", " << "verifier=" << to_string(verifier);
  out << ", " << "pinCode=" << to_string(pinCode);
  out << ", " << "type=" << to_string(type);
  out << ")";
}


Contact::~Contact() throw() {
}


void Contact::__set_mid(const std::string& val) {
  this->mid = val;
}

void Contact::__set_createdTime(const int64_t val) {
  this->createdTime = val;
}

void Contact::__set_type(const ContactType::type val) {
  this->type = val;
}

void Contact::__set_status(const ContactStatus::type val) {
  this->status = val;
}

void Contact::__set_relation(const ContactRelation::type val) {
  this->relation = val;
}

void Contact::__set_displayName(const std::string& val) {
  this->displayName = val;
}

void Contact::__set_phoneticName(const std::string& val) {
  this->phoneticName = val;
}

void Contact::__set_pictureStatus(const std::string& val) {
  this->pictureStatus = val;
}

void Contact::__set_thumbnailUrl(const std::string& val) {
  this->thumbnailUrl = val;
}

void Contact::__set_statusMessage(const std::string& val) {
  this->statusMessage = val;
}

void Contact::__set_displayNameOverridden(const std::string& val) {
  this->displayNameOverridden = val;
}

void Contact::__set_favoriteTime(const int64_t val) {
  this->favoriteTime = val;
}

void Contact::__set_capableVoiceCall(const bool val) {
  this->capableVoiceCall = val;
}

void Contact::__set_capableVideoCall(const bool val) {
  this->capableVideoCall = val;
}

void Contact::__set_capableMyhome(const bool val) {
  this->capableMyhome = val;
}

void Contact::__set_capableBuddy(const bool val) {
  this->capableBuddy = val;
}

void Contact::__set_attributes(const int32_t val) {
  this->attributes = val;
}

void Contact::__set_settings(const int64_t val) {
  this->settings = val;
}

void Contact::__set_picturePath(const std::string& val) {
  this->picturePath = val;
}

void Contact::__set_recommendParams(const std::string& val) {
  this->recommendParams = val;
}

void Contact::__set_friendRequestStatus(const int32_t val) {
  this->friendRequestStatus = val;
}

void Contact::__set_musicProfile(const std::string& val) {
  this->musicProfile = val;
}

void Contact::__set_videoProfile(const std::string& val) {
  this->videoProfile = val;
}
std::ostream& operator<<(std::ostream& out, const Contact& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Contact::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->mid);
          this->__isset.mid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->createdTime);
          this->__isset.createdTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast3;
          xfer += iprot->readI32(ecast3);
          this->type = (ContactType::type)ecast3;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast4;
          xfer += iprot->readI32(ecast4);
          this->status = (ContactStatus::type)ecast4;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast5;
          xfer += iprot->readI32(ecast5);
          this->relation = (ContactRelation::type)ecast5;
          this->__isset.relation = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 22:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->displayName);
          this->__isset.displayName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 23:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->phoneticName);
          this->__isset.phoneticName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 24:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->pictureStatus);
          this->__isset.pictureStatus = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 25:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->thumbnailUrl);
          this->__isset.thumbnailUrl = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 26:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->statusMessage);
          this->__isset.statusMessage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 27:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->displayNameOverridden);
          this->__isset.displayNameOverridden = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 28:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->favoriteTime);
          this->__isset.favoriteTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 31:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->capableVoiceCall);
          this->__isset.capableVoiceCall = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 32:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->capableVideoCall);
          this->__isset.capableVideoCall = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 33:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->capableMyhome);
          this->__isset.capableMyhome = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 34:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->capableBuddy);
          this->__isset.capableBuddy = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 35:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->attributes);
          this->__isset.attributes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 36:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->settings);
          this->__isset.settings = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 37:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->picturePath);
          this->__isset.picturePath = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 38:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->recommendParams);
          this->__isset.recommendParams = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 39:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->friendRequestStatus);
          this->__isset.friendRequestStatus = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 40:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->musicProfile);
          this->__isset.musicProfile = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 42:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->videoProfile);
          this->__isset.videoProfile = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Contact::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Contact");

  xfer += oprot->writeFieldBegin("mid", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->mid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("createdTime", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->createdTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 10);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 11);
  xfer += oprot->writeI32((int32_t)this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("relation", ::apache::thrift::protocol::T_I32, 21);
  xfer += oprot->writeI32((int32_t)this->relation);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("displayName", ::apache::thrift::protocol::T_STRING, 22);
  xfer += oprot->writeString(this->displayName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("phoneticName", ::apache::thrift::protocol::T_STRING, 23);
  xfer += oprot->writeString(this->phoneticName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pictureStatus", ::apache::thrift::protocol::T_STRING, 24);
  xfer += oprot->writeString(this->pictureStatus);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("thumbnailUrl", ::apache::thrift::protocol::T_STRING, 25);
  xfer += oprot->writeString(this->thumbnailUrl);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("statusMessage", ::apache::thrift::protocol::T_STRING, 26);
  xfer += oprot->writeString(this->statusMessage);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("displayNameOverridden", ::apache::thrift::protocol::T_STRING, 27);
  xfer += oprot->writeString(this->displayNameOverridden);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("favoriteTime", ::apache::thrift::protocol::T_I64, 28);
  xfer += oprot->writeI64(this->favoriteTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("capableVoiceCall", ::apache::thrift::protocol::T_BOOL, 31);
  xfer += oprot->writeBool(this->capableVoiceCall);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("capableVideoCall", ::apache::thrift::protocol::T_BOOL, 32);
  xfer += oprot->writeBool(this->capableVideoCall);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("capableMyhome", ::apache::thrift::protocol::T_BOOL, 33);
  xfer += oprot->writeBool(this->capableMyhome);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("capableBuddy", ::apache::thrift::protocol::T_BOOL, 34);
  xfer += oprot->writeBool(this->capableBuddy);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("attributes", ::apache::thrift::protocol::T_I32, 35);
  xfer += oprot->writeI32(this->attributes);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("settings", ::apache::thrift::protocol::T_I64, 36);
  xfer += oprot->writeI64(this->settings);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("picturePath", ::apache::thrift::protocol::T_STRING, 37);
  xfer += oprot->writeString(this->picturePath);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("recommendParams", ::apache::thrift::protocol::T_STRING, 38);
  xfer += oprot->writeString(this->recommendParams);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("friendRequestStatus", ::apache::thrift::protocol::T_I32, 39);
  xfer += oprot->writeI32(this->friendRequestStatus);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("musicProfile", ::apache::thrift::protocol::T_STRING, 40);
  xfer += oprot->writeString(this->musicProfile);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("videoProfile", ::apache::thrift::protocol::T_STRING, 42);
  xfer += oprot->writeString(this->videoProfile);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Contact &a, Contact &b) {
  using ::std::swap;
  swap(a.mid, b.mid);
  swap(a.createdTime, b.createdTime);
  swap(a.type, b.type);
  swap(a.status, b.status);
  swap(a.relation, b.relation);
  swap(a.displayName, b.displayName);
  swap(a.phoneticName, b.phoneticName);
  swap(a.pictureStatus, b.pictureStatus);
  swap(a.thumbnailUrl, b.thumbnailUrl);
  swap(a.statusMessage, b.statusMessage);
  swap(a.displayNameOverridden, b.displayNameOverridden);
  swap(a.favoriteTime, b.favoriteTime);
  swap(a.capableVoiceCall, b.capableVoiceCall);
  swap(a.capableVideoCall, b.capableVideoCall);
  swap(a.capableMyhome, b.capableMyhome);
  swap(a.capableBuddy, b.capableBuddy);
  swap(a.attributes, b.attributes);
  swap(a.settings, b.settings);
  swap(a.picturePath, b.picturePath);
  swap(a.recommendParams, b.recommendParams);
  swap(a.friendRequestStatus, b.friendRequestStatus);
  swap(a.musicProfile, b.musicProfile);
  swap(a.videoProfile, b.videoProfile);
  swap(a.__isset, b.__isset);
}

Contact::Contact(const Contact& other6) {
  mid = other6.mid;
  createdTime = other6.createdTime;
  type = other6.type;
  status = other6.status;
  relation = other6.relation;
  displayName = other6.displayName;
  phoneticName = other6.phoneticName;
  pictureStatus = other6.pictureStatus;
  thumbnailUrl = other6.thumbnailUrl;
  statusMessage = other6.statusMessage;
  displayNameOverridden = other6.displayNameOverridden;
  favoriteTime = other6.favoriteTime;
  capableVoiceCall = other6.capableVoiceCall;
  capableVideoCall = other6.capableVideoCall;
  capableMyhome = other6.capableMyhome;
  capableBuddy = other6.capableBuddy;
  attributes = other6.attributes;
  settings = other6.settings;
  picturePath = other6.picturePath;
  recommendParams = other6.recommendParams;
  friendRequestStatus = other6.friendRequestStatus;
  musicProfile = other6.musicProfile;
  videoProfile = other6.videoProfile;
  __isset = other6.__isset;
}
Contact& Contact::operator=(const Contact& other7) {
  mid = other7.mid;
  createdTime = other7.createdTime;
  type = other7.type;
  status = other7.status;
  relation = other7.relation;
  displayName = other7.displayName;
  phoneticName = other7.phoneticName;
  pictureStatus = other7.pictureStatus;
  thumbnailUrl = other7.thumbnailUrl;
  statusMessage = other7.statusMessage;
  displayNameOverridden = other7.displayNameOverridden;
  favoriteTime = other7.favoriteTime;
  capableVoiceCall = other7.capableVoiceCall;
  capableVideoCall = other7.capableVideoCall;
  capableMyhome = other7.capableMyhome;
  capableBuddy = other7.capableBuddy;
  attributes = other7.attributes;
  settings = other7.settings;
  picturePath = other7.picturePath;
  recommendParams = other7.recommendParams;
  friendRequestStatus = other7.friendRequestStatus;
  musicProfile = other7.musicProfile;
  videoProfile = other7.videoProfile;
  __isset = other7.__isset;
  return *this;
}
void Contact::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Contact(";
  out << "mid=" << to_string(mid);
  out << ", " << "createdTime=" << to_string(createdTime);
  out << ", " << "type=" << to_string(type);
  out << ", " << "status=" << to_string(status);
  out << ", " << "relation=" << to_string(relation);
  out << ", " << "displayName=" << to_string(displayName);
  out << ", " << "phoneticName=" << to_string(phoneticName);
  out << ", " << "pictureStatus=" << to_string(pictureStatus);
  out << ", " << "thumbnailUrl=" << to_string(thumbnailUrl);
  out << ", " << "statusMessage=" << to_string(statusMessage);
  out << ", " << "displayNameOverridden=" << to_string(displayNameOverridden);
  out << ", " << "favoriteTime=" << to_string(favoriteTime);
  out << ", " << "capableVoiceCall=" << to_string(capableVoiceCall);
  out << ", " << "capableVideoCall=" << to_string(capableVideoCall);
  out << ", " << "capableMyhome=" << to_string(capableMyhome);
  out << ", " << "capableBuddy=" << to_string(capableBuddy);
  out << ", " << "attributes=" << to_string(attributes);
  out << ", " << "settings=" << to_string(settings);
  out << ", " << "picturePath=" << to_string(picturePath);
  out << ", " << "recommendParams=" << to_string(recommendParams);
  out << ", " << "friendRequestStatus=" << to_string(friendRequestStatus);
  out << ", " << "musicProfile=" << to_string(musicProfile);
  out << ", " << "videoProfile=" << to_string(videoProfile);
  out << ")";
}


Location::~Location() throw() {
}


void Location::__set_title(const std::string& val) {
  this->title = val;
}

void Location::__set_address(const std::string& val) {
  this->address = val;
}

void Location::__set_latitude(const double val) {
  this->latitude = val;
}

void Location::__set_longitude(const double val) {
  this->longitude = val;
}

void Location::__set_phone(const std::string& val) {
  this->phone = val;
}
std::ostream& operator<<(std::ostream& out, const Location& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Location::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->title);
          this->__isset.title = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->address);
          this->__isset.address = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->latitude);
          this->__isset.latitude = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_DOUBLE) {
          xfer += iprot->readDouble(this->longitude);
          this->__isset.longitude = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->phone);
          this->__isset.phone = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Location::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Location");

  xfer += oprot->writeFieldBegin("title", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->title);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("address", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->address);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("latitude", ::apache::thrift::protocol::T_DOUBLE, 3);
  xfer += oprot->writeDouble(this->latitude);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("longitude", ::apache::thrift::protocol::T_DOUBLE, 4);
  xfer += oprot->writeDouble(this->longitude);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("phone", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->phone);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Location &a, Location &b) {
  using ::std::swap;
  swap(a.title, b.title);
  swap(a.address, b.address);
  swap(a.latitude, b.latitude);
  swap(a.longitude, b.longitude);
  swap(a.phone, b.phone);
  swap(a.__isset, b.__isset);
}

Location::Location(const Location& other8) {
  title = other8.title;
  address = other8.address;
  latitude = other8.latitude;
  longitude = other8.longitude;
  phone = other8.phone;
  __isset = other8.__isset;
}
Location& Location::operator=(const Location& other9) {
  title = other9.title;
  address = other9.address;
  latitude = other9.latitude;
  longitude = other9.longitude;
  phone = other9.phone;
  __isset = other9.__isset;
  return *this;
}
void Location::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Location(";
  out << "title=" << to_string(title);
  out << ", " << "address=" << to_string(address);
  out << ", " << "latitude=" << to_string(latitude);
  out << ", " << "longitude=" << to_string(longitude);
  out << ", " << "phone=" << to_string(phone);
  out << ")";
}


GroupPreference::~GroupPreference() throw() {
}


void GroupPreference::__set_invitationTicket(const std::string& val) {
  this->invitationTicket = val;
}

void GroupPreference::__set_favoriteTimestamp(const int64_t val) {
  this->favoriteTimestamp = val;
}
std::ostream& operator<<(std::ostream& out, const GroupPreference& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t GroupPreference::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->invitationTicket);
          this->__isset.invitationTicket = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->favoriteTimestamp);
          this->__isset.favoriteTimestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t GroupPreference::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("GroupPreference");

  xfer += oprot->writeFieldBegin("invitationTicket", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->invitationTicket);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("favoriteTimestamp", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->favoriteTimestamp);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(GroupPreference &a, GroupPreference &b) {
  using ::std::swap;
  swap(a.invitationTicket, b.invitationTicket);
  swap(a.favoriteTimestamp, b.favoriteTimestamp);
  swap(a.__isset, b.__isset);
}

GroupPreference::GroupPreference(const GroupPreference& other10) {
  invitationTicket = other10.invitationTicket;
  favoriteTimestamp = other10.favoriteTimestamp;
  __isset = other10.__isset;
}
GroupPreference& GroupPreference::operator=(const GroupPreference& other11) {
  invitationTicket = other11.invitationTicket;
  favoriteTimestamp = other11.favoriteTimestamp;
  __isset = other11.__isset;
  return *this;
}
void GroupPreference::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "GroupPreference(";
  out << "invitationTicket=" << to_string(invitationTicket);
  out << ", " << "favoriteTimestamp=" << to_string(favoriteTimestamp);
  out << ")";
}


Group::~Group() throw() {
}


void Group::__set_id(const std::string& val) {
  this->id = val;
}

void Group::__set_createdTime(const int64_t val) {
  this->createdTime = val;
}

void Group::__set_name(const std::string& val) {
  this->name = val;
}

void Group::__set_pictureStatus(const std::string& val) {
  this->pictureStatus = val;
}

void Group::__set_preventedJoinByTicket(const bool val) {
  this->preventedJoinByTicket = val;
}

void Group::__set_groupPreference(const GroupPreference& val) {
  this->groupPreference = val;
}

void Group::__set_members(const std::vector<Contact> & val) {
  this->members = val;
}

void Group::__set_creator(const Contact& val) {
  this->creator = val;
}

void Group::__set_invitee(const std::vector<Contact> & val) {
  this->invitee = val;
}

void Group::__set_notificationDisabled(const bool val) {
  this->notificationDisabled = val;
}
std::ostream& operator<<(std::ostream& out, const Group& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Group::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->createdTime);
          this->__isset.createdTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->pictureStatus);
          this->__isset.pictureStatus = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->preventedJoinByTicket);
          this->__isset.preventedJoinByTicket = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 13:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->groupPreference.read(iprot);
          this->__isset.groupPreference = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->members.clear();
            uint32_t _size12;
            ::apache::thrift::protocol::TType _etype15;
            xfer += iprot->readListBegin(_etype15, _size12);
            this->members.resize(_size12);
            uint32_t _i16;
            for (_i16 = 0; _i16 < _size12; ++_i16)
            {
              xfer += this->members[_i16].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.members = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->creator.read(iprot);
          this->__isset.creator = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 22:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->invitee.clear();
            uint32_t _size17;
            ::apache::thrift::protocol::TType _etype20;
            xfer += iprot->readListBegin(_etype20, _size17);
            this->invitee.resize(_size17);
            uint32_t _i21;
            for (_i21 = 0; _i21 < _size17; ++_i21)
            {
              xfer += this->invitee[_i21].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.invitee = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 31:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->notificationDisabled);
          this->__isset.notificationDisabled = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Group::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Group");

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("createdTime", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->createdTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pictureStatus", ::apache::thrift::protocol::T_STRING, 11);
  xfer += oprot->writeString(this->pictureStatus);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("preventedJoinByTicket", ::apache::thrift::protocol::T_BOOL, 12);
  xfer += oprot->writeBool(this->preventedJoinByTicket);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("groupPreference", ::apache::thrift::protocol::T_STRUCT, 13);
  xfer += this->groupPreference.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("members", ::apache::thrift::protocol::T_LIST, 20);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->members.size()));
    std::vector<Contact> ::const_iterator _iter22;
    for (_iter22 = this->members.begin(); _iter22 != this->members.end(); ++_iter22)
    {
      xfer += (*_iter22).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("creator", ::apache::thrift::protocol::T_STRUCT, 21);
  xfer += this->creator.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("invitee", ::apache::thrift::protocol::T_LIST, 22);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->invitee.size()));
    std::vector<Contact> ::const_iterator _iter23;
    for (_iter23 = this->invitee.begin(); _iter23 != this->invitee.end(); ++_iter23)
    {
      xfer += (*_iter23).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("notificationDisabled", ::apache::thrift::protocol::T_BOOL, 31);
  xfer += oprot->writeBool(this->notificationDisabled);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Group &a, Group &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.createdTime, b.createdTime);
  swap(a.name, b.name);
  swap(a.pictureStatus, b.pictureStatus);
  swap(a.preventedJoinByTicket, b.preventedJoinByTicket);
  swap(a.groupPreference, b.groupPreference);
  swap(a.members, b.members);
  swap(a.creator, b.creator);
  swap(a.invitee, b.invitee);
  swap(a.notificationDisabled, b.notificationDisabled);
  swap(a.__isset, b.__isset);
}

Group::Group(const Group& other24) {
  id = other24.id;
  createdTime = other24.createdTime;
  name = other24.name;
  pictureStatus = other24.pictureStatus;
  preventedJoinByTicket = other24.preventedJoinByTicket;
  groupPreference = other24.groupPreference;
  members = other24.members;
  creator = other24.creator;
  invitee = other24.invitee;
  notificationDisabled = other24.notificationDisabled;
  __isset = other24.__isset;
}
Group& Group::operator=(const Group& other25) {
  id = other25.id;
  createdTime = other25.createdTime;
  name = other25.name;
  pictureStatus = other25.pictureStatus;
  preventedJoinByTicket = other25.preventedJoinByTicket;
  groupPreference = other25.groupPreference;
  members = other25.members;
  creator = other25.creator;
  invitee = other25.invitee;
  notificationDisabled = other25.notificationDisabled;
  __isset = other25.__isset;
  return *this;
}
void Group::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Group(";
  out << "id=" << to_string(id);
  out << ", " << "createdTime=" << to_string(createdTime);
  out << ", " << "name=" << to_string(name);
  out << ", " << "pictureStatus=" << to_string(pictureStatus);
  out << ", " << "preventedJoinByTicket=" << to_string(preventedJoinByTicket);
  out << ", " << "groupPreference=" << to_string(groupPreference);
  out << ", " << "members=" << to_string(members);
  out << ", " << "creator=" << to_string(creator);
  out << ", " << "invitee=" << to_string(invitee);
  out << ", " << "notificationDisabled=" << to_string(notificationDisabled);
  out << ")";
}


loginRequest::~loginRequest() throw() {
}


void loginRequest::__set_type(const int32_t val) {
  this->type = val;
}

void loginRequest::__set_identityProvider(const int32_t val) {
  this->identityProvider = val;
}

void loginRequest::__set_identifier(const std::string& val) {
  this->identifier = val;
}

void loginRequest::__set_password(const std::string& val) {
  this->password = val;
}

void loginRequest::__set_keepLoggedIn(const bool val) {
  this->keepLoggedIn = val;
}

void loginRequest::__set_accessLocation(const std::string& val) {
  this->accessLocation = val;
}

void loginRequest::__set_systemName(const std::string& val) {
  this->systemName = val;
}

void loginRequest::__set_certificate(const std::string& val) {
  this->certificate = val;
}

void loginRequest::__set_verifier(const std::string& val) {
  this->verifier = val;
}

void loginRequest::__set_secret(const std::string& val) {
  this->secret = val;
}

void loginRequest::__set_e2eeVersion(const int32_t val) {
  this->e2eeVersion = val;
}
std::ostream& operator<<(std::ostream& out, const loginRequest& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t loginRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->type);
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->identityProvider);
          this->__isset.identityProvider = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->identifier);
          this->__isset.identifier = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->password);
          this->__isset.password = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->keepLoggedIn);
          this->__isset.keepLoggedIn = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->accessLocation);
          this->__isset.accessLocation = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->systemName);
          this->__isset.systemName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 8:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->certificate);
          this->__isset.certificate = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 9:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->verifier);
          this->__isset.verifier = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->secret);
          this->__isset.secret = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->e2eeVersion);
          this->__isset.e2eeVersion = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t loginRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("loginRequest");

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("identityProvider", ::apache::thrift::protocol::T_I32, 2);
  xfer += oprot->writeI32(this->identityProvider);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("identifier", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->identifier);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("password", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->password);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("keepLoggedIn", ::apache::thrift::protocol::T_BOOL, 5);
  xfer += oprot->writeBool(this->keepLoggedIn);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("accessLocation", ::apache::thrift::protocol::T_STRING, 6);
  xfer += oprot->writeString(this->accessLocation);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("systemName", ::apache::thrift::protocol::T_STRING, 7);
  xfer += oprot->writeString(this->systemName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("certificate", ::apache::thrift::protocol::T_STRING, 8);
  xfer += oprot->writeString(this->certificate);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("verifier", ::apache::thrift::protocol::T_STRING, 9);
  xfer += oprot->writeString(this->verifier);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("secret", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->secret);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("e2eeVersion", ::apache::thrift::protocol::T_I32, 11);
  xfer += oprot->writeI32(this->e2eeVersion);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(loginRequest &a, loginRequest &b) {
  using ::std::swap;
  swap(a.type, b.type);
  swap(a.identityProvider, b.identityProvider);
  swap(a.identifier, b.identifier);
  swap(a.password, b.password);
  swap(a.keepLoggedIn, b.keepLoggedIn);
  swap(a.accessLocation, b.accessLocation);
  swap(a.systemName, b.systemName);
  swap(a.certificate, b.certificate);
  swap(a.verifier, b.verifier);
  swap(a.secret, b.secret);
  swap(a.e2eeVersion, b.e2eeVersion);
  swap(a.__isset, b.__isset);
}

loginRequest::loginRequest(const loginRequest& other26) {
  type = other26.type;
  identityProvider = other26.identityProvider;
  identifier = other26.identifier;
  password = other26.password;
  keepLoggedIn = other26.keepLoggedIn;
  accessLocation = other26.accessLocation;
  systemName = other26.systemName;
  certificate = other26.certificate;
  verifier = other26.verifier;
  secret = other26.secret;
  e2eeVersion = other26.e2eeVersion;
  __isset = other26.__isset;
}
loginRequest& loginRequest::operator=(const loginRequest& other27) {
  type = other27.type;
  identityProvider = other27.identityProvider;
  identifier = other27.identifier;
  password = other27.password;
  keepLoggedIn = other27.keepLoggedIn;
  accessLocation = other27.accessLocation;
  systemName = other27.systemName;
  certificate = other27.certificate;
  verifier = other27.verifier;
  secret = other27.secret;
  e2eeVersion = other27.e2eeVersion;
  __isset = other27.__isset;
  return *this;
}
void loginRequest::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "loginRequest(";
  out << "type=" << to_string(type);
  out << ", " << "identityProvider=" << to_string(identityProvider);
  out << ", " << "identifier=" << to_string(identifier);
  out << ", " << "password=" << to_string(password);
  out << ", " << "keepLoggedIn=" << to_string(keepLoggedIn);
  out << ", " << "accessLocation=" << to_string(accessLocation);
  out << ", " << "systemName=" << to_string(systemName);
  out << ", " << "certificate=" << to_string(certificate);
  out << ", " << "verifier=" << to_string(verifier);
  out << ", " << "secret=" << to_string(secret);
  out << ", " << "e2eeVersion=" << to_string(e2eeVersion);
  out << ")";
}


LoginSession::~LoginSession() throw() {
}


void LoginSession::__set_tokenKey(const std::string& val) {
  this->tokenKey = val;
}

void LoginSession::__set_expirationTime(const int64_t val) {
  this->expirationTime = val;
}

void LoginSession::__set_applicationType(const ApplicationType::type val) {
  this->applicationType = val;
}

void LoginSession::__set_systemName(const std::string& val) {
  this->systemName = val;
}

void LoginSession::__set_accessLocation(const std::string& val) {
  this->accessLocation = val;
}
std::ostream& operator<<(std::ostream& out, const LoginSession& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t LoginSession::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->tokenKey);
          this->__isset.tokenKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->expirationTime);
          this->__isset.expirationTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast28;
          xfer += iprot->readI32(ecast28);
          this->applicationType = (ApplicationType::type)ecast28;
          this->__isset.applicationType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->systemName);
          this->__isset.systemName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 22:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->accessLocation);
          this->__isset.accessLocation = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t LoginSession::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("LoginSession");

  xfer += oprot->writeFieldBegin("tokenKey", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->tokenKey);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("expirationTime", ::apache::thrift::protocol::T_I64, 3);
  xfer += oprot->writeI64(this->expirationTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("applicationType", ::apache::thrift::protocol::T_I32, 11);
  xfer += oprot->writeI32((int32_t)this->applicationType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("systemName", ::apache::thrift::protocol::T_STRING, 12);
  xfer += oprot->writeString(this->systemName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("accessLocation", ::apache::thrift::protocol::T_STRING, 22);
  xfer += oprot->writeString(this->accessLocation);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(LoginSession &a, LoginSession &b) {
  using ::std::swap;
  swap(a.tokenKey, b.tokenKey);
  swap(a.expirationTime, b.expirationTime);
  swap(a.applicationType, b.applicationType);
  swap(a.systemName, b.systemName);
  swap(a.accessLocation, b.accessLocation);
  swap(a.__isset, b.__isset);
}

LoginSession::LoginSession(const LoginSession& other29) {
  tokenKey = other29.tokenKey;
  expirationTime = other29.expirationTime;
  applicationType = other29.applicationType;
  systemName = other29.systemName;
  accessLocation = other29.accessLocation;
  __isset = other29.__isset;
}
LoginSession& LoginSession::operator=(const LoginSession& other30) {
  tokenKey = other30.tokenKey;
  expirationTime = other30.expirationTime;
  applicationType = other30.applicationType;
  systemName = other30.systemName;
  accessLocation = other30.accessLocation;
  __isset = other30.__isset;
  return *this;
}
void LoginSession::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "LoginSession(";
  out << "tokenKey=" << to_string(tokenKey);
  out << ", " << "expirationTime=" << to_string(expirationTime);
  out << ", " << "applicationType=" << to_string(applicationType);
  out << ", " << "systemName=" << to_string(systemName);
  out << ", " << "accessLocation=" << to_string(accessLocation);
  out << ")";
}


Message::~Message() throw() {
}


void Message::__set__from(const std::string& val) {
  this->_from = val;
}

void Message::__set_to(const std::string& val) {
  this->to = val;
}

void Message::__set_toType(const MIDType::type val) {
  this->toType = val;
}

void Message::__set_id(const std::string& val) {
  this->id = val;
}

void Message::__set_createdTime(const int64_t val) {
  this->createdTime = val;
}

void Message::__set_deliveredTime(const int64_t val) {
  this->deliveredTime = val;
}

void Message::__set_text(const std::string& val) {
  this->text = val;
}

void Message::__set_location(const Location& val) {
  this->location = val;
}

void Message::__set_hasContent(const bool val) {
  this->hasContent = val;
}

void Message::__set_contentType(const ContentType::type val) {
  this->contentType = val;
}

void Message::__set_contentPreview(const std::string& val) {
  this->contentPreview = val;
}

void Message::__set_contentMetadata(const std::map<std::string, std::string> & val) {
  this->contentMetadata = val;
}

void Message::__set_sessionId(const int64_t val) {
  this->sessionId = val;
}

void Message::__set_chunks(const std::vector<std::string> & val) {
  this->chunks = val;
}

void Message::__set_relatedMessageId(const std::string& val) {
  this->relatedMessageId = val;
}

void Message::__set_messageRelationType(const int64_t val) {
  this->messageRelationType = val;
}

void Message::__set_readCount(const int64_t val) {
  this->readCount = val;
}

void Message::__set_relatedMessageServiceCode(const int64_t val) {
  this->relatedMessageServiceCode = val;
}
std::ostream& operator<<(std::ostream& out, const Message& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Message::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->_from);
          this->__isset._from = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->to);
          this->__isset.to = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast31;
          xfer += iprot->readI32(ecast31);
          this->toType = (MIDType::type)ecast31;
          this->__isset.toType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->createdTime);
          this->__isset.createdTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->deliveredTime);
          this->__isset.deliveredTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->text);
          this->__isset.text = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->location.read(iprot);
          this->__isset.location = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 14:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->hasContent);
          this->__isset.hasContent = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 15:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast32;
          xfer += iprot->readI32(ecast32);
          this->contentType = (ContentType::type)ecast32;
          this->__isset.contentType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 17:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readBinary(this->contentPreview);
          this->__isset.contentPreview = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 18:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->contentMetadata.clear();
            uint32_t _size33;
            ::apache::thrift::protocol::TType _ktype34;
            ::apache::thrift::protocol::TType _vtype35;
            xfer += iprot->readMapBegin(_ktype34, _vtype35, _size33);
            uint32_t _i37;
            for (_i37 = 0; _i37 < _size33; ++_i37)
            {
              std::string _key38;
              xfer += iprot->readString(_key38);
              std::string& _val39 = this->contentMetadata[_key38];
              xfer += iprot->readString(_val39);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.contentMetadata = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 19:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->sessionId);
          this->__isset.sessionId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->chunks.clear();
            uint32_t _size40;
            ::apache::thrift::protocol::TType _etype43;
            xfer += iprot->readListBegin(_etype43, _size40);
            this->chunks.resize(_size40);
            uint32_t _i44;
            for (_i44 = 0; _i44 < _size40; ++_i44)
            {
              xfer += iprot->readString(this->chunks[_i44]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.chunks = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->relatedMessageId);
          this->__isset.relatedMessageId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 22:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->messageRelationType);
          this->__isset.messageRelationType = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 23:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->readCount);
          this->__isset.readCount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 24:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->relatedMessageServiceCode);
          this->__isset.relatedMessageServiceCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Message::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Message");

  xfer += oprot->writeFieldBegin("_from", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->_from);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("to", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->to);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("toType", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->toType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("createdTime", ::apache::thrift::protocol::T_I64, 5);
  xfer += oprot->writeI64(this->createdTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("deliveredTime", ::apache::thrift::protocol::T_I64, 6);
  xfer += oprot->writeI64(this->deliveredTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("text", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->text);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("location", ::apache::thrift::protocol::T_STRUCT, 11);
  xfer += this->location.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("hasContent", ::apache::thrift::protocol::T_BOOL, 14);
  xfer += oprot->writeBool(this->hasContent);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("contentType", ::apache::thrift::protocol::T_I32, 15);
  xfer += oprot->writeI32((int32_t)this->contentType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("contentPreview", ::apache::thrift::protocol::T_STRING, 17);
  xfer += oprot->writeBinary(this->contentPreview);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("contentMetadata", ::apache::thrift::protocol::T_MAP, 18);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->contentMetadata.size()));
    std::map<std::string, std::string> ::const_iterator _iter45;
    for (_iter45 = this->contentMetadata.begin(); _iter45 != this->contentMetadata.end(); ++_iter45)
    {
      xfer += oprot->writeString(_iter45->first);
      xfer += oprot->writeString(_iter45->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sessionId", ::apache::thrift::protocol::T_I64, 19);
  xfer += oprot->writeI64(this->sessionId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("chunks", ::apache::thrift::protocol::T_LIST, 20);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->chunks.size()));
    std::vector<std::string> ::const_iterator _iter46;
    for (_iter46 = this->chunks.begin(); _iter46 != this->chunks.end(); ++_iter46)
    {
      xfer += oprot->writeString((*_iter46));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("relatedMessageId", ::apache::thrift::protocol::T_STRING, 21);
  xfer += oprot->writeString(this->relatedMessageId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("messageRelationType", ::apache::thrift::protocol::T_I64, 22);
  xfer += oprot->writeI64(this->messageRelationType);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("readCount", ::apache::thrift::protocol::T_I64, 23);
  xfer += oprot->writeI64(this->readCount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("relatedMessageServiceCode", ::apache::thrift::protocol::T_I64, 24);
  xfer += oprot->writeI64(this->relatedMessageServiceCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Message &a, Message &b) {
  using ::std::swap;
  swap(a._from, b._from);
  swap(a.to, b.to);
  swap(a.toType, b.toType);
  swap(a.id, b.id);
  swap(a.createdTime, b.createdTime);
  swap(a.deliveredTime, b.deliveredTime);
  swap(a.text, b.text);
  swap(a.location, b.location);
  swap(a.hasContent, b.hasContent);
  swap(a.contentType, b.contentType);
  swap(a.contentPreview, b.contentPreview);
  swap(a.contentMetadata, b.contentMetadata);
  swap(a.sessionId, b.sessionId);
  swap(a.chunks, b.chunks);
  swap(a.relatedMessageId, b.relatedMessageId);
  swap(a.messageRelationType, b.messageRelationType);
  swap(a.readCount, b.readCount);
  swap(a.relatedMessageServiceCode, b.relatedMessageServiceCode);
  swap(a.__isset, b.__isset);
}

Message::Message(const Message& other47) {
  _from = other47._from;
  to = other47.to;
  toType = other47.toType;
  id = other47.id;
  createdTime = other47.createdTime;
  deliveredTime = other47.deliveredTime;
  text = other47.text;
  location = other47.location;
  hasContent = other47.hasContent;
  contentType = other47.contentType;
  contentPreview = other47.contentPreview;
  contentMetadata = other47.contentMetadata;
  sessionId = other47.sessionId;
  chunks = other47.chunks;
  relatedMessageId = other47.relatedMessageId;
  messageRelationType = other47.messageRelationType;
  readCount = other47.readCount;
  relatedMessageServiceCode = other47.relatedMessageServiceCode;
  __isset = other47.__isset;
}
Message& Message::operator=(const Message& other48) {
  _from = other48._from;
  to = other48.to;
  toType = other48.toType;
  id = other48.id;
  createdTime = other48.createdTime;
  deliveredTime = other48.deliveredTime;
  text = other48.text;
  location = other48.location;
  hasContent = other48.hasContent;
  contentType = other48.contentType;
  contentPreview = other48.contentPreview;
  contentMetadata = other48.contentMetadata;
  sessionId = other48.sessionId;
  chunks = other48.chunks;
  relatedMessageId = other48.relatedMessageId;
  messageRelationType = other48.messageRelationType;
  readCount = other48.readCount;
  relatedMessageServiceCode = other48.relatedMessageServiceCode;
  __isset = other48.__isset;
  return *this;
}
void Message::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Message(";
  out << "_from=" << to_string(_from);
  out << ", " << "to=" << to_string(to);
  out << ", " << "toType=" << to_string(toType);
  out << ", " << "id=" << to_string(id);
  out << ", " << "createdTime=" << to_string(createdTime);
  out << ", " << "deliveredTime=" << to_string(deliveredTime);
  out << ", " << "text=" << to_string(text);
  out << ", " << "location=" << to_string(location);
  out << ", " << "hasContent=" << to_string(hasContent);
  out << ", " << "contentType=" << to_string(contentType);
  out << ", " << "contentPreview=" << to_string(contentPreview);
  out << ", " << "contentMetadata=" << to_string(contentMetadata);
  out << ", " << "sessionId=" << to_string(sessionId);
  out << ", " << "chunks=" << to_string(chunks);
  out << ", " << "relatedMessageId=" << to_string(relatedMessageId);
  out << ", " << "messageRelationType=" << to_string(messageRelationType);
  out << ", " << "readCount=" << to_string(readCount);
  out << ", " << "relatedMessageServiceCode=" << to_string(relatedMessageServiceCode);
  out << ")";
}


MessageOperation::~MessageOperation() throw() {
}


void MessageOperation::__set_revision(const int64_t val) {
  this->revision = val;
}

void MessageOperation::__set_createdTime(const int64_t val) {
  this->createdTime = val;
}

void MessageOperation::__set_type(const MessageOperationType::type val) {
  this->type = val;
}

void MessageOperation::__set_reqSeq(const int32_t val) {
  this->reqSeq = val;
}

void MessageOperation::__set_status(const OpStatus::type val) {
  this->status = val;
}

void MessageOperation::__set_param1(const std::string& val) {
  this->param1 = val;
}

void MessageOperation::__set_param2(const std::string& val) {
  this->param2 = val;
}

void MessageOperation::__set_param3(const std::string& val) {
  this->param3 = val;
}

void MessageOperation::__set_message(const Message& val) {
  this->message = val;
}
std::ostream& operator<<(std::ostream& out, const MessageOperation& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t MessageOperation::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->revision);
          this->__isset.revision = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->createdTime);
          this->__isset.createdTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast49;
          xfer += iprot->readI32(ecast49);
          this->type = (MessageOperationType::type)ecast49;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->reqSeq);
          this->__isset.reqSeq = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast50;
          xfer += iprot->readI32(ecast50);
          this->status = (OpStatus::type)ecast50;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->param1);
          this->__isset.param1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->param2);
          this->__isset.param2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->param3);
          this->__isset.param3 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->message.read(iprot);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MessageOperation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MessageOperation");

  xfer += oprot->writeFieldBegin("revision", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->revision);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("createdTime", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->createdTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("reqSeq", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->reqSeq);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32((int32_t)this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("param1", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->param1);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("param2", ::apache::thrift::protocol::T_STRING, 11);
  xfer += oprot->writeString(this->param2);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("param3", ::apache::thrift::protocol::T_STRING, 12);
  xfer += oprot->writeString(this->param3);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRUCT, 20);
  xfer += this->message.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageOperation &a, MessageOperation &b) {
  using ::std::swap;
  swap(a.revision, b.revision);
  swap(a.createdTime, b.createdTime);
  swap(a.type, b.type);
  swap(a.reqSeq, b.reqSeq);
  swap(a.status, b.status);
  swap(a.param1, b.param1);
  swap(a.param2, b.param2);
  swap(a.param3, b.param3);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

MessageOperation::MessageOperation(const MessageOperation& other51) {
  revision = other51.revision;
  createdTime = other51.createdTime;
  type = other51.type;
  reqSeq = other51.reqSeq;
  status = other51.status;
  param1 = other51.param1;
  param2 = other51.param2;
  param3 = other51.param3;
  message = other51.message;
  __isset = other51.__isset;
}
MessageOperation& MessageOperation::operator=(const MessageOperation& other52) {
  revision = other52.revision;
  createdTime = other52.createdTime;
  type = other52.type;
  reqSeq = other52.reqSeq;
  status = other52.status;
  param1 = other52.param1;
  param2 = other52.param2;
  param3 = other52.param3;
  message = other52.message;
  __isset = other52.__isset;
  return *this;
}
void MessageOperation::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "MessageOperation(";
  out << "revision=" << to_string(revision);
  out << ", " << "createdTime=" << to_string(createdTime);
  out << ", " << "type=" << to_string(type);
  out << ", " << "reqSeq=" << to_string(reqSeq);
  out << ", " << "status=" << to_string(status);
  out << ", " << "param1=" << to_string(param1);
  out << ", " << "param2=" << to_string(param2);
  out << ", " << "param3=" << to_string(param3);
  out << ", " << "message=" << to_string(message);
  out << ")";
}


MessageOperations::~MessageOperations() throw() {
}


void MessageOperations::__set_operations(const std::vector<MessageOperation> & val) {
  this->operations = val;
}

void MessageOperations::__set_endFlag(const bool val) {
  this->endFlag = val;
}
std::ostream& operator<<(std::ostream& out, const MessageOperations& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t MessageOperations::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->operations.clear();
            uint32_t _size53;
            ::apache::thrift::protocol::TType _etype56;
            xfer += iprot->readListBegin(_etype56, _size53);
            this->operations.resize(_size53);
            uint32_t _i57;
            for (_i57 = 0; _i57 < _size53; ++_i57)
            {
              xfer += this->operations[_i57].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.operations = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->endFlag);
          this->__isset.endFlag = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t MessageOperations::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("MessageOperations");

  xfer += oprot->writeFieldBegin("operations", ::apache::thrift::protocol::T_LIST, 1);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->operations.size()));
    std::vector<MessageOperation> ::const_iterator _iter58;
    for (_iter58 = this->operations.begin(); _iter58 != this->operations.end(); ++_iter58)
    {
      xfer += (*_iter58).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("endFlag", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->endFlag);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(MessageOperations &a, MessageOperations &b) {
  using ::std::swap;
  swap(a.operations, b.operations);
  swap(a.endFlag, b.endFlag);
  swap(a.__isset, b.__isset);
}

MessageOperations::MessageOperations(const MessageOperations& other59) {
  operations = other59.operations;
  endFlag = other59.endFlag;
  __isset = other59.__isset;
}
MessageOperations& MessageOperations::operator=(const MessageOperations& other60) {
  operations = other60.operations;
  endFlag = other60.endFlag;
  __isset = other60.__isset;
  return *this;
}
void MessageOperations::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "MessageOperations(";
  out << "operations=" << to_string(operations);
  out << ", " << "endFlag=" << to_string(endFlag);
  out << ")";
}


Operation::~Operation() throw() {
}


void Operation::__set_revision(const int64_t val) {
  this->revision = val;
}

void Operation::__set_createdTime(const int64_t val) {
  this->createdTime = val;
}

void Operation::__set_type(const OpType::type val) {
  this->type = val;
}

void Operation::__set_reqSeq(const int32_t val) {
  this->reqSeq = val;
}

void Operation::__set_checksum(const std::string& val) {
  this->checksum = val;
}

void Operation::__set_status(const OpStatus::type val) {
  this->status = val;
}

void Operation::__set_param1(const std::string& val) {
  this->param1 = val;
}

void Operation::__set_param2(const std::string& val) {
  this->param2 = val;
}

void Operation::__set_param3(const std::string& val) {
  this->param3 = val;
}

void Operation::__set_message(const Message& val) {
  this->message = val;
}
std::ostream& operator<<(std::ostream& out, const Operation& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Operation::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->revision);
          this->__isset.revision = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->createdTime);
          this->__isset.createdTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast61;
          xfer += iprot->readI32(ecast61);
          this->type = (OpType::type)ecast61;
          this->__isset.type = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->reqSeq);
          this->__isset.reqSeq = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->checksum);
          this->__isset.checksum = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 7:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast62;
          xfer += iprot->readI32(ecast62);
          this->status = (OpStatus::type)ecast62;
          this->__isset.status = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->param1);
          this->__isset.param1 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->param2);
          this->__isset.param2 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->param3);
          this->__isset.param3 = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->message.read(iprot);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Operation::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Operation");

  xfer += oprot->writeFieldBegin("revision", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->revision);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("createdTime", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->createdTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("type", ::apache::thrift::protocol::T_I32, 3);
  xfer += oprot->writeI32((int32_t)this->type);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("reqSeq", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(this->reqSeq);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("checksum", ::apache::thrift::protocol::T_STRING, 5);
  xfer += oprot->writeString(this->checksum);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("status", ::apache::thrift::protocol::T_I32, 7);
  xfer += oprot->writeI32((int32_t)this->status);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("param1", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->param1);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("param2", ::apache::thrift::protocol::T_STRING, 11);
  xfer += oprot->writeString(this->param2);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("param3", ::apache::thrift::protocol::T_STRING, 12);
  xfer += oprot->writeString(this->param3);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRUCT, 20);
  xfer += this->message.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Operation &a, Operation &b) {
  using ::std::swap;
  swap(a.revision, b.revision);
  swap(a.createdTime, b.createdTime);
  swap(a.type, b.type);
  swap(a.reqSeq, b.reqSeq);
  swap(a.checksum, b.checksum);
  swap(a.status, b.status);
  swap(a.param1, b.param1);
  swap(a.param2, b.param2);
  swap(a.param3, b.param3);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

Operation::Operation(const Operation& other63) {
  revision = other63.revision;
  createdTime = other63.createdTime;
  type = other63.type;
  reqSeq = other63.reqSeq;
  checksum = other63.checksum;
  status = other63.status;
  param1 = other63.param1;
  param2 = other63.param2;
  param3 = other63.param3;
  message = other63.message;
  __isset = other63.__isset;
}
Operation& Operation::operator=(const Operation& other64) {
  revision = other64.revision;
  createdTime = other64.createdTime;
  type = other64.type;
  reqSeq = other64.reqSeq;
  checksum = other64.checksum;
  status = other64.status;
  param1 = other64.param1;
  param2 = other64.param2;
  param3 = other64.param3;
  message = other64.message;
  __isset = other64.__isset;
  return *this;
}
void Operation::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Operation(";
  out << "revision=" << to_string(revision);
  out << ", " << "createdTime=" << to_string(createdTime);
  out << ", " << "type=" << to_string(type);
  out << ", " << "reqSeq=" << to_string(reqSeq);
  out << ", " << "checksum=" << to_string(checksum);
  out << ", " << "status=" << to_string(status);
  out << ", " << "param1=" << to_string(param1);
  out << ", " << "param2=" << to_string(param2);
  out << ", " << "param3=" << to_string(param3);
  out << ", " << "message=" << to_string(message);
  out << ")";
}


Profile::~Profile() throw() {
}


void Profile::__set_mid(const std::string& val) {
  this->mid = val;
}

void Profile::__set_userid(const std::string& val) {
  this->userid = val;
}

void Profile::__set_phone(const std::string& val) {
  this->phone = val;
}

void Profile::__set_email(const std::string& val) {
  this->email = val;
}

void Profile::__set_regionCode(const std::string& val) {
  this->regionCode = val;
}

void Profile::__set_displayName(const std::string& val) {
  this->displayName = val;
}

void Profile::__set_phoneticName(const std::string& val) {
  this->phoneticName = val;
}

void Profile::__set_pictureStatus(const std::string& val) {
  this->pictureStatus = val;
}

void Profile::__set_thumbnailUrl(const std::string& val) {
  this->thumbnailUrl = val;
}

void Profile::__set_statusMessage(const std::string& val) {
  this->statusMessage = val;
}

void Profile::__set_allowSearchByUserid(const bool val) {
  this->allowSearchByUserid = val;
}

void Profile::__set_allowSearchByEmail(const bool val) {
  this->allowSearchByEmail = val;
}

void Profile::__set_picturePath(const std::string& val) {
  this->picturePath = val;
}

void Profile::__set_musicProfile(const std::string& val) {
  this->musicProfile = val;
}
std::ostream& operator<<(std::ostream& out, const Profile& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Profile::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->mid);
          this->__isset.mid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->userid);
          this->__isset.userid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->phone);
          this->__isset.phone = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 11:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->email);
          this->__isset.email = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 12:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->regionCode);
          this->__isset.regionCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 20:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->displayName);
          this->__isset.displayName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->phoneticName);
          this->__isset.phoneticName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 22:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->pictureStatus);
          this->__isset.pictureStatus = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 23:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->thumbnailUrl);
          this->__isset.thumbnailUrl = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 24:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->statusMessage);
          this->__isset.statusMessage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 31:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->allowSearchByUserid);
          this->__isset.allowSearchByUserid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 32:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->allowSearchByEmail);
          this->__isset.allowSearchByEmail = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 33:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->picturePath);
          this->__isset.picturePath = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 34:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->musicProfile);
          this->__isset.musicProfile = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Profile::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Profile");

  xfer += oprot->writeFieldBegin("mid", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->mid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("userid", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->userid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("phone", ::apache::thrift::protocol::T_STRING, 10);
  xfer += oprot->writeString(this->phone);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("email", ::apache::thrift::protocol::T_STRING, 11);
  xfer += oprot->writeString(this->email);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("regionCode", ::apache::thrift::protocol::T_STRING, 12);
  xfer += oprot->writeString(this->regionCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("displayName", ::apache::thrift::protocol::T_STRING, 20);
  xfer += oprot->writeString(this->displayName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("phoneticName", ::apache::thrift::protocol::T_STRING, 21);
  xfer += oprot->writeString(this->phoneticName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("pictureStatus", ::apache::thrift::protocol::T_STRING, 22);
  xfer += oprot->writeString(this->pictureStatus);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("thumbnailUrl", ::apache::thrift::protocol::T_STRING, 23);
  xfer += oprot->writeString(this->thumbnailUrl);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("statusMessage", ::apache::thrift::protocol::T_STRING, 24);
  xfer += oprot->writeString(this->statusMessage);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("allowSearchByUserid", ::apache::thrift::protocol::T_BOOL, 31);
  xfer += oprot->writeBool(this->allowSearchByUserid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("allowSearchByEmail", ::apache::thrift::protocol::T_BOOL, 32);
  xfer += oprot->writeBool(this->allowSearchByEmail);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("picturePath", ::apache::thrift::protocol::T_STRING, 33);
  xfer += oprot->writeString(this->picturePath);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("musicProfile", ::apache::thrift::protocol::T_STRING, 34);
  xfer += oprot->writeString(this->musicProfile);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Profile &a, Profile &b) {
  using ::std::swap;
  swap(a.mid, b.mid);
  swap(a.userid, b.userid);
  swap(a.phone, b.phone);
  swap(a.email, b.email);
  swap(a.regionCode, b.regionCode);
  swap(a.displayName, b.displayName);
  swap(a.phoneticName, b.phoneticName);
  swap(a.pictureStatus, b.pictureStatus);
  swap(a.thumbnailUrl, b.thumbnailUrl);
  swap(a.statusMessage, b.statusMessage);
  swap(a.allowSearchByUserid, b.allowSearchByUserid);
  swap(a.allowSearchByEmail, b.allowSearchByEmail);
  swap(a.picturePath, b.picturePath);
  swap(a.musicProfile, b.musicProfile);
  swap(a.__isset, b.__isset);
}

Profile::Profile(const Profile& other65) {
  mid = other65.mid;
  userid = other65.userid;
  phone = other65.phone;
  email = other65.email;
  regionCode = other65.regionCode;
  displayName = other65.displayName;
  phoneticName = other65.phoneticName;
  pictureStatus = other65.pictureStatus;
  thumbnailUrl = other65.thumbnailUrl;
  statusMessage = other65.statusMessage;
  allowSearchByUserid = other65.allowSearchByUserid;
  allowSearchByEmail = other65.allowSearchByEmail;
  picturePath = other65.picturePath;
  musicProfile = other65.musicProfile;
  __isset = other65.__isset;
}
Profile& Profile::operator=(const Profile& other66) {
  mid = other66.mid;
  userid = other66.userid;
  phone = other66.phone;
  email = other66.email;
  regionCode = other66.regionCode;
  displayName = other66.displayName;
  phoneticName = other66.phoneticName;
  pictureStatus = other66.pictureStatus;
  thumbnailUrl = other66.thumbnailUrl;
  statusMessage = other66.statusMessage;
  allowSearchByUserid = other66.allowSearchByUserid;
  allowSearchByEmail = other66.allowSearchByEmail;
  picturePath = other66.picturePath;
  musicProfile = other66.musicProfile;
  __isset = other66.__isset;
  return *this;
}
void Profile::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Profile(";
  out << "mid=" << to_string(mid);
  out << ", " << "userid=" << to_string(userid);
  out << ", " << "phone=" << to_string(phone);
  out << ", " << "email=" << to_string(email);
  out << ", " << "regionCode=" << to_string(regionCode);
  out << ", " << "displayName=" << to_string(displayName);
  out << ", " << "phoneticName=" << to_string(phoneticName);
  out << ", " << "pictureStatus=" << to_string(pictureStatus);
  out << ", " << "thumbnailUrl=" << to_string(thumbnailUrl);
  out << ", " << "statusMessage=" << to_string(statusMessage);
  out << ", " << "allowSearchByUserid=" << to_string(allowSearchByUserid);
  out << ", " << "allowSearchByEmail=" << to_string(allowSearchByEmail);
  out << ", " << "picturePath=" << to_string(picturePath);
  out << ", " << "musicProfile=" << to_string(musicProfile);
  out << ")";
}


Room::~Room() throw() {
}


void Room::__set_mid(const std::string& val) {
  this->mid = val;
}

void Room::__set_createdTime(const int64_t val) {
  this->createdTime = val;
}

void Room::__set_contacts(const std::vector<Contact> & val) {
  this->contacts = val;
}

void Room::__set_notificationDisabled(const bool val) {
  this->notificationDisabled = val;
}
std::ostream& operator<<(std::ostream& out, const Room& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Room::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->mid);
          this->__isset.mid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->createdTime);
          this->__isset.createdTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->contacts.clear();
            uint32_t _size67;
            ::apache::thrift::protocol::TType _etype70;
            xfer += iprot->readListBegin(_etype70, _size67);
            this->contacts.resize(_size67);
            uint32_t _i71;
            for (_i71 = 0; _i71 < _size67; ++_i71)
            {
              xfer += this->contacts[_i71].read(iprot);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.contacts = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 31:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->notificationDisabled);
          this->__isset.notificationDisabled = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Room::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Room");

  xfer += oprot->writeFieldBegin("mid", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->mid);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("createdTime", ::apache::thrift::protocol::T_I64, 2);
  xfer += oprot->writeI64(this->createdTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("contacts", ::apache::thrift::protocol::T_LIST, 10);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRUCT, static_cast<uint32_t>(this->contacts.size()));
    std::vector<Contact> ::const_iterator _iter72;
    for (_iter72 = this->contacts.begin(); _iter72 != this->contacts.end(); ++_iter72)
    {
      xfer += (*_iter72).write(oprot);
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("notificationDisabled", ::apache::thrift::protocol::T_BOOL, 31);
  xfer += oprot->writeBool(this->notificationDisabled);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Room &a, Room &b) {
  using ::std::swap;
  swap(a.mid, b.mid);
  swap(a.createdTime, b.createdTime);
  swap(a.contacts, b.contacts);
  swap(a.notificationDisabled, b.notificationDisabled);
  swap(a.__isset, b.__isset);
}

Room::Room(const Room& other73) {
  mid = other73.mid;
  createdTime = other73.createdTime;
  contacts = other73.contacts;
  notificationDisabled = other73.notificationDisabled;
  __isset = other73.__isset;
}
Room& Room::operator=(const Room& other74) {
  mid = other74.mid;
  createdTime = other74.createdTime;
  contacts = other74.contacts;
  notificationDisabled = other74.notificationDisabled;
  __isset = other74.__isset;
  return *this;
}
void Room::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Room(";
  out << "mid=" << to_string(mid);
  out << ", " << "createdTime=" << to_string(createdTime);
  out << ", " << "contacts=" << to_string(contacts);
  out << ", " << "notificationDisabled=" << to_string(notificationDisabled);
  out << ")";
}


RSAKey::~RSAKey() throw() {
}


void RSAKey::__set_keynm(const std::string& val) {
  this->keynm = val;
}

void RSAKey::__set_nvalue(const std::string& val) {
  this->nvalue = val;
}

void RSAKey::__set_evalue(const std::string& val) {
  this->evalue = val;
}

void RSAKey::__set_sessionKey(const std::string& val) {
  this->sessionKey = val;
}
std::ostream& operator<<(std::ostream& out, const RSAKey& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t RSAKey::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->keynm);
          this->__isset.keynm = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->nvalue);
          this->__isset.nvalue = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->evalue);
          this->__isset.evalue = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->sessionKey);
          this->__isset.sessionKey = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t RSAKey::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("RSAKey");

  xfer += oprot->writeFieldBegin("keynm", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->keynm);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("nvalue", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->nvalue);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("evalue", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->evalue);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sessionKey", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->sessionKey);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(RSAKey &a, RSAKey &b) {
  using ::std::swap;
  swap(a.keynm, b.keynm);
  swap(a.nvalue, b.nvalue);
  swap(a.evalue, b.evalue);
  swap(a.sessionKey, b.sessionKey);
  swap(a.__isset, b.__isset);
}

RSAKey::RSAKey(const RSAKey& other75) {
  keynm = other75.keynm;
  nvalue = other75.nvalue;
  evalue = other75.evalue;
  sessionKey = other75.sessionKey;
  __isset = other75.__isset;
}
RSAKey& RSAKey::operator=(const RSAKey& other76) {
  keynm = other76.keynm;
  nvalue = other76.nvalue;
  evalue = other76.evalue;
  sessionKey = other76.sessionKey;
  __isset = other76.__isset;
  return *this;
}
void RSAKey::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "RSAKey(";
  out << "keynm=" << to_string(keynm);
  out << ", " << "nvalue=" << to_string(nvalue);
  out << ", " << "evalue=" << to_string(evalue);
  out << ", " << "sessionKey=" << to_string(sessionKey);
  out << ")";
}


TalkException::~TalkException() throw() {
}


void TalkException::__set_code(const ErrorCode::type val) {
  this->code = val;
}

void TalkException::__set_reason(const std::string& val) {
  this->reason = val;
}

void TalkException::__set_parameterMap(const std::map<std::string, std::string> & val) {
  this->parameterMap = val;
}
std::ostream& operator<<(std::ostream& out, const TalkException& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t TalkException::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast77;
          xfer += iprot->readI32(ecast77);
          this->code = (ErrorCode::type)ecast77;
          this->__isset.code = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->reason);
          this->__isset.reason = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_MAP) {
          {
            this->parameterMap.clear();
            uint32_t _size78;
            ::apache::thrift::protocol::TType _ktype79;
            ::apache::thrift::protocol::TType _vtype80;
            xfer += iprot->readMapBegin(_ktype79, _vtype80, _size78);
            uint32_t _i82;
            for (_i82 = 0; _i82 < _size78; ++_i82)
            {
              std::string _key83;
              xfer += iprot->readString(_key83);
              std::string& _val84 = this->parameterMap[_key83];
              xfer += iprot->readString(_val84);
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.parameterMap = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t TalkException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("TalkException");

  xfer += oprot->writeFieldBegin("code", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32((int32_t)this->code);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("reason", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->reason);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("parameterMap", ::apache::thrift::protocol::T_MAP, 3);
  {
    xfer += oprot->writeMapBegin(::apache::thrift::protocol::T_STRING, ::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->parameterMap.size()));
    std::map<std::string, std::string> ::const_iterator _iter85;
    for (_iter85 = this->parameterMap.begin(); _iter85 != this->parameterMap.end(); ++_iter85)
    {
      xfer += oprot->writeString(_iter85->first);
      xfer += oprot->writeString(_iter85->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(TalkException &a, TalkException &b) {
  using ::std::swap;
  swap(a.code, b.code);
  swap(a.reason, b.reason);
  swap(a.parameterMap, b.parameterMap);
  swap(a.__isset, b.__isset);
}

TalkException::TalkException(const TalkException& other86) : TException() {
  code = other86.code;
  reason = other86.reason;
  parameterMap = other86.parameterMap;
  __isset = other86.__isset;
}
TalkException& TalkException::operator=(const TalkException& other87) {
  code = other87.code;
  reason = other87.reason;
  parameterMap = other87.parameterMap;
  __isset = other87.__isset;
  return *this;
}
void TalkException::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "TalkException(";
  out << "code=" << to_string(code);
  out << ", " << "reason=" << to_string(reason);
  out << ", " << "parameterMap=" << to_string(parameterMap);
  out << ")";
}

const char* TalkException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: TalkException";
  }
}


Ticket::~Ticket() throw() {
}


void Ticket::__set_id(const std::string& val) {
  this->id = val;
}

void Ticket::__set_expirationTime(const int64_t val) {
  this->expirationTime = val;
}

void Ticket::__set_maxUseCount(const int32_t val) {
  this->maxUseCount = val;
}
std::ostream& operator<<(std::ostream& out, const Ticket& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Ticket::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->id);
          this->__isset.id = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 10:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->expirationTime);
          this->__isset.expirationTime = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 21:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->maxUseCount);
          this->__isset.maxUseCount = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Ticket::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Ticket");

  xfer += oprot->writeFieldBegin("id", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->id);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("expirationTime", ::apache::thrift::protocol::T_I64, 10);
  xfer += oprot->writeI64(this->expirationTime);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("maxUseCount", ::apache::thrift::protocol::T_I32, 21);
  xfer += oprot->writeI32(this->maxUseCount);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Ticket &a, Ticket &b) {
  using ::std::swap;
  swap(a.id, b.id);
  swap(a.expirationTime, b.expirationTime);
  swap(a.maxUseCount, b.maxUseCount);
  swap(a.__isset, b.__isset);
}

Ticket::Ticket(const Ticket& other88) {
  id = other88.id;
  expirationTime = other88.expirationTime;
  maxUseCount = other88.maxUseCount;
  __isset = other88.__isset;
}
Ticket& Ticket::operator=(const Ticket& other89) {
  id = other89.id;
  expirationTime = other89.expirationTime;
  maxUseCount = other89.maxUseCount;
  __isset = other89.__isset;
  return *this;
}
void Ticket::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Ticket(";
  out << "id=" << to_string(id);
  out << ", " << "expirationTime=" << to_string(expirationTime);
  out << ", " << "maxUseCount=" << to_string(maxUseCount);
  out << ")";
}


