#
# Compiled for SuperSonic Line API Lite
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#

require 'thrift'

module ApplicationType
  DESKTOPWIN = 96
  DESKTOPWIN_RC = 97
  DESKTOPWIN_BETA = 98
  DESKTOPWIN_ALPHA = 99
  DESKTOPMAC = 112
  DESKTOPMAC_RC = 113
  DESKTOPMAC_BETA = 114
  DESKTOPMAC_ALPHA = 115
  VALUE_MAP = {96 => "DESKTOPWIN", 97 => "DESKTOPWIN_RC", 98 => "DESKTOPWIN_BETA", 99 => "DESKTOPWIN_ALPHA", 112 => "DESKTOPMAC", 113 => "DESKTOPMAC_RC", 114 => "DESKTOPMAC_BETA", 115 => "DESKTOPMAC_ALPHA"}
  VALID_VALUES = Set.new([DESKTOPWIN, DESKTOPWIN_RC, DESKTOPWIN_BETA, DESKTOPWIN_ALPHA, DESKTOPMAC, DESKTOPMAC_RC, DESKTOPMAC_BETA, DESKTOPMAC_ALPHA]).freeze
end

module LoginType
  ID_CREDENTIAL = 0
  QRCODE = 1
  ID_CREDENTIAL_WITH_E2EE = 2
  VALUE_MAP = {0 => "ID_CREDENTIAL", 1 => "QRCODE", 2 => "ID_CREDENTIAL_WITH_E2EE"}
  VALID_VALUES = Set.new([ID_CREDENTIAL, QRCODE, ID_CREDENTIAL_WITH_E2EE]).freeze
end

module ContactType
  MID = 0
  PHONE = 1
  EMAIL = 2
  USERID = 3
  PROXIMITY = 4
  GROUP = 5
  USER = 6
  QRCODE = 7
  PROMOTION_BOT = 8
  CONTACT_MESSAGE = 9
  FRIEND_REQUEST = 10
  REPAIR = 128
  FACEBOOK = 2305
  SINA = 2306
  RENREN = 2307
  FEIXIN = 2308
  BBM = 2309
  BEACON = 11
  VALUE_MAP = {0 => "MID", 1 => "PHONE", 2 => "EMAIL", 3 => "USERID", 4 => "PROXIMITY", 5 => "GROUP", 6 => "USER", 7 => "QRCODE", 8 => "PROMOTION_BOT", 9 => "CONTACT_MESSAGE", 10 => "FRIEND_REQUEST", 128 => "REPAIR", 2305 => "FACEBOOK", 2306 => "SINA", 2307 => "RENREN", 2308 => "FEIXIN", 2309 => "BBM", 11 => "BEACON"}
  VALID_VALUES = Set.new([MID, PHONE, EMAIL, USERID, PROXIMITY, GROUP, USER, QRCODE, PROMOTION_BOT, CONTACT_MESSAGE, FRIEND_REQUEST, REPAIR, FACEBOOK, SINA, RENREN, FEIXIN, BBM, BEACON]).freeze
end

module ContentType
  NONE = 0
  IMAGE = 1
  VIDEO = 2
  AUDIO = 3
  HTML = 4
  PDF = 5
  CALL = 6
  STICKER = 7
  PRESENCE = 8
  GIFT = 9
  GROUPBOARD = 10
  APPLINK = 11
  LINK = 12
  CONTACT = 13
  FILE = 14
  LOCATION = 15
  POSTNOTIFICATION = 16
  RICH = 17
  CHATEVENT = 18
  MUSIC = 19
  PAYMENT = 20
  EXTIMAGE = 21
  VALUE_MAP = {0 => "NONE", 1 => "IMAGE", 2 => "VIDEO", 3 => "AUDIO", 4 => "HTML", 5 => "PDF", 6 => "CALL", 7 => "STICKER", 8 => "PRESENCE", 9 => "GIFT", 10 => "GROUPBOARD", 11 => "APPLINK", 12 => "LINK", 13 => "CONTACT", 14 => "FILE", 15 => "LOCATION", 16 => "POSTNOTIFICATION", 17 => "RICH", 18 => "CHATEVENT", 19 => "MUSIC", 20 => "PAYMENT", 21 => "EXTIMAGE"}
  VALID_VALUES = Set.new([NONE, IMAGE, VIDEO, AUDIO, HTML, PDF, CALL, STICKER, PRESENCE, GIFT, GROUPBOARD, APPLINK, LINK, CONTACT, FILE, LOCATION, POSTNOTIFICATION, RICH, CHATEVENT, MUSIC, PAYMENT, EXTIMAGE]).freeze
end

module ErrorCode
  ILLEGAL_ARGUMENT = 0
  AUTHENTICATION_FAILED = 1
  DB_FAILED = 2
  INVALID_STATE = 3
  EXCESSIVE_ACCESS = 4
  NOT_FOUND = 5
  INVALID_MID = 9
  NOT_A_MEMBER = 10
  INVALID_LENGTH = 6
  NOT_AVAILABLE_USER = 7
  NOT_AUTHORIZED_DEVICE = 8
  NOT_AUTHORIZED_SESSION = 14
  INCOMPATIBLE_APP_VERSION = 11
  NOT_READY = 12
  NOT_AVAILABLE_SESSION = 13
  SYSTEM_ERROR = 15
  NO_AVAILABLE_VERIFICATION_METHOD = 16
  NOT_AUTHENTICATED = 17
  INVALID_IDENTITY_CREDENTIAL = 18
  NOT_AVAILABLE_IDENTITY_IDENTIFIER = 19
  INTERNAL_ERROR = 20
  NO_SUCH_IDENTITY_IDENFIER = 21
  DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY = 22
  ILLEGAL_IDENTITY_CREDENTIAL = 23
  UNKNOWN_CHANNEL = 24
  NO_SUCH_MESSAGE_BOX = 25
  NOT_AVAILABLE_MESSAGE_BOX = 26
  CHANNEL_DOES_NOT_MATCH = 27
  NOT_YOUR_MESSAGE = 28
  MESSAGE_DEFINED_ERROR = 29
  USER_CANNOT_ACCEPT_PRESENTS = 30
  USER_NOT_STICKER_OWNER = 32
  MAINTENANCE_ERROR = 33
  ACCOUNT_NOT_MATCHED = 34
  ABUSE_BLOCK = 35
  NOT_FRIEND = 36
  NOT_ALLOWED_CALL = 37
  BLOCK_FRIEND = 38
  INCOMPATIBLE_VOIP_VERSION = 39
  INVALID_SNS_ACCESS_TOKEN = 40
  EXTERNAL_SERVICE_NOT_AVAILABLE = 41
  NOT_ALLOWED_ADD_CONTACT = 42
  NOT_CERTIFICATED = 43
  NOT_ALLOWED_SECONDARY_DEVICE = 44
  INVALID_PIN_CODE = 45
  NOT_FOUND_IDENTITY_CREDENTIAL = 46
  EXCEED_FILE_MAX_SIZE = 47
  EXCEED_DAILY_QUOTA = 48
  NOT_SUPPORT_SEND_FILE = 49
  MUST_UPGRADE = 50
  NOT_AVAILABLE_PIN_CODE_SESSION = 51
  EXPIRED_REVISION = 52
  NOT_YET_PHONE_NUMBER = 54
  BAD_CALL_NUMBER = 55
  UNAVAILABLE_CALL_NUMBER = 56
  NOT_SUPPORT_CALL_SERVICE = 57
  CONGESTION_CONTROL = 58
  NO_BALANCE = 59
  NOT_PERMITTED_CALLER_ID = 60
  NO_CALLER_ID_LIMIT_EXCEEDED = 61
  CALLER_ID_VERIFICATION_REQUIRED = 62
  NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED = 63
  MESSAGE_NOT_FOUND = 64
  INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT = 65
  ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED = 66
  ACCOUNT_MIGRATION_PINCODE_BLOCKED = 67
  INVALID_PASSWORD_FORMAT = 69
  FEATURE_RESTRICTED = 70
  MESSAGE_NOT_DESTRUCTIBLE = 71
  PAID_CALL_REDEEM_FAILED = 72
  PREVENTED_JOIN_BY_TICKET = 73
  SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT = 75
  SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY = 76
  SECURITY_CENTER_NOT_VERIFIED = 77
  SECURITY_CENTER_BLOCKED_BY_SETTING = 78
  SECURITY_CENTER_BLOCKED = 79
  TALK_PROXY_EXCEPTION = 80
  E2EE_INVALID_PROTOCOL = 81
  E2EE_RETRY_ENCRYPT = 82
  E2EE_UPDATE_SENDER_KEY = 83
  E2EE_UPDATE_RECEIVER_KEY = 84
  E2EE_INVALID_ARGUMENT = 85
  E2EE_INVALID_VERSION = 86
  E2EE_SENDER_DISABLED = 87
  E2EE_RECEIVER_DISABLED = 88
  E2EE_SENDER_NOT_ALLOWED = 89
  E2EE_RECEIVER_NOT_ALLOWED = 90
  E2EE_RESEND_FAIL = 91
  E2EE_RESEND_OK = 92
  HITOKOTO_BACKUP_NO_AVAILABLE_DATA = 93
  E2EE_UPDATE_PRIMARY_DEVICE = 94
  SUCCESS = 95
  CANCEL = 96
  E2EE_PRIMARY_NOT_SUPPORT = 97
  E2EE_RETRY_PLAIN = 98
  E2EE_RECREATE_GROUP_KEY = 99
  E2EE_GROUP_TOO_MANY_MEMBERS = 100
  SERVER_BUSY = 101
  NOT_ALLOWED_ADD_FOLLOW = 102
  INCOMING_FRIEND_REQUEST_LIMIT = 103
  OUTGOING_FRIEND_REQUEST_LIMIT = 104
  OUTGOING_FRIEND_REQUEST_QUOTA = 105
  DUPLICATED = 106
  BANNED = 107
  VALUE_MAP = {0 => "ILLEGAL_ARGUMENT", 1 => "AUTHENTICATION_FAILED", 2 => "DB_FAILED", 3 => "INVALID_STATE", 4 => "EXCESSIVE_ACCESS", 5 => "NOT_FOUND", 9 => "INVALID_MID", 10 => "NOT_A_MEMBER", 6 => "INVALID_LENGTH", 7 => "NOT_AVAILABLE_USER", 8 => "NOT_AUTHORIZED_DEVICE", 14 => "NOT_AUTHORIZED_SESSION", 11 => "INCOMPATIBLE_APP_VERSION", 12 => "NOT_READY", 13 => "NOT_AVAILABLE_SESSION", 15 => "SYSTEM_ERROR", 16 => "NO_AVAILABLE_VERIFICATION_METHOD", 17 => "NOT_AUTHENTICATED", 18 => "INVALID_IDENTITY_CREDENTIAL", 19 => "NOT_AVAILABLE_IDENTITY_IDENTIFIER", 20 => "INTERNAL_ERROR", 21 => "NO_SUCH_IDENTITY_IDENFIER", 22 => "DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY", 23 => "ILLEGAL_IDENTITY_CREDENTIAL", 24 => "UNKNOWN_CHANNEL", 25 => "NO_SUCH_MESSAGE_BOX", 26 => "NOT_AVAILABLE_MESSAGE_BOX", 27 => "CHANNEL_DOES_NOT_MATCH", 28 => "NOT_YOUR_MESSAGE", 29 => "MESSAGE_DEFINED_ERROR", 30 => "USER_CANNOT_ACCEPT_PRESENTS", 32 => "USER_NOT_STICKER_OWNER", 33 => "MAINTENANCE_ERROR", 34 => "ACCOUNT_NOT_MATCHED", 35 => "ABUSE_BLOCK", 36 => "NOT_FRIEND", 37 => "NOT_ALLOWED_CALL", 38 => "BLOCK_FRIEND", 39 => "INCOMPATIBLE_VOIP_VERSION", 40 => "INVALID_SNS_ACCESS_TOKEN", 41 => "EXTERNAL_SERVICE_NOT_AVAILABLE", 42 => "NOT_ALLOWED_ADD_CONTACT", 43 => "NOT_CERTIFICATED", 44 => "NOT_ALLOWED_SECONDARY_DEVICE", 45 => "INVALID_PIN_CODE", 46 => "NOT_FOUND_IDENTITY_CREDENTIAL", 47 => "EXCEED_FILE_MAX_SIZE", 48 => "EXCEED_DAILY_QUOTA", 49 => "NOT_SUPPORT_SEND_FILE", 50 => "MUST_UPGRADE", 51 => "NOT_AVAILABLE_PIN_CODE_SESSION", 52 => "EXPIRED_REVISION", 54 => "NOT_YET_PHONE_NUMBER", 55 => "BAD_CALL_NUMBER", 56 => "UNAVAILABLE_CALL_NUMBER", 57 => "NOT_SUPPORT_CALL_SERVICE", 58 => "CONGESTION_CONTROL", 59 => "NO_BALANCE", 60 => "NOT_PERMITTED_CALLER_ID", 61 => "NO_CALLER_ID_LIMIT_EXCEEDED", 62 => "CALLER_ID_VERIFICATION_REQUIRED", 63 => "NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED", 64 => "MESSAGE_NOT_FOUND", 65 => "INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT", 66 => "ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED", 67 => "ACCOUNT_MIGRATION_PINCODE_BLOCKED", 69 => "INVALID_PASSWORD_FORMAT", 70 => "FEATURE_RESTRICTED", 71 => "MESSAGE_NOT_DESTRUCTIBLE", 72 => "PAID_CALL_REDEEM_FAILED", 73 => "PREVENTED_JOIN_BY_TICKET", 75 => "SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT", 76 => "SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY", 77 => "SECURITY_CENTER_NOT_VERIFIED", 78 => "SECURITY_CENTER_BLOCKED_BY_SETTING", 79 => "SECURITY_CENTER_BLOCKED", 80 => "TALK_PROXY_EXCEPTION", 81 => "E2EE_INVALID_PROTOCOL", 82 => "E2EE_RETRY_ENCRYPT", 83 => "E2EE_UPDATE_SENDER_KEY", 84 => "E2EE_UPDATE_RECEIVER_KEY", 85 => "E2EE_INVALID_ARGUMENT", 86 => "E2EE_INVALID_VERSION", 87 => "E2EE_SENDER_DISABLED", 88 => "E2EE_RECEIVER_DISABLED", 89 => "E2EE_SENDER_NOT_ALLOWED", 90 => "E2EE_RECEIVER_NOT_ALLOWED", 91 => "E2EE_RESEND_FAIL", 92 => "E2EE_RESEND_OK", 93 => "HITOKOTO_BACKUP_NO_AVAILABLE_DATA", 94 => "E2EE_UPDATE_PRIMARY_DEVICE", 95 => "SUCCESS", 96 => "CANCEL", 97 => "E2EE_PRIMARY_NOT_SUPPORT", 98 => "E2EE_RETRY_PLAIN", 99 => "E2EE_RECREATE_GROUP_KEY", 100 => "E2EE_GROUP_TOO_MANY_MEMBERS", 101 => "SERVER_BUSY", 102 => "NOT_ALLOWED_ADD_FOLLOW", 103 => "INCOMING_FRIEND_REQUEST_LIMIT", 104 => "OUTGOING_FRIEND_REQUEST_LIMIT", 105 => "OUTGOING_FRIEND_REQUEST_QUOTA", 106 => "DUPLICATED", 107 => "BANNED"}
  VALID_VALUES = Set.new([ILLEGAL_ARGUMENT, AUTHENTICATION_FAILED, DB_FAILED, INVALID_STATE, EXCESSIVE_ACCESS, NOT_FOUND, INVALID_MID, NOT_A_MEMBER, INVALID_LENGTH, NOT_AVAILABLE_USER, NOT_AUTHORIZED_DEVICE, NOT_AUTHORIZED_SESSION, INCOMPATIBLE_APP_VERSION, NOT_READY, NOT_AVAILABLE_SESSION, SYSTEM_ERROR, NO_AVAILABLE_VERIFICATION_METHOD, NOT_AUTHENTICATED, INVALID_IDENTITY_CREDENTIAL, NOT_AVAILABLE_IDENTITY_IDENTIFIER, INTERNAL_ERROR, NO_SUCH_IDENTITY_IDENFIER, DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY, ILLEGAL_IDENTITY_CREDENTIAL, UNKNOWN_CHANNEL, NO_SUCH_MESSAGE_BOX, NOT_AVAILABLE_MESSAGE_BOX, CHANNEL_DOES_NOT_MATCH, NOT_YOUR_MESSAGE, MESSAGE_DEFINED_ERROR, USER_CANNOT_ACCEPT_PRESENTS, USER_NOT_STICKER_OWNER, MAINTENANCE_ERROR, ACCOUNT_NOT_MATCHED, ABUSE_BLOCK, NOT_FRIEND, NOT_ALLOWED_CALL, BLOCK_FRIEND, INCOMPATIBLE_VOIP_VERSION, INVALID_SNS_ACCESS_TOKEN, EXTERNAL_SERVICE_NOT_AVAILABLE, NOT_ALLOWED_ADD_CONTACT, NOT_CERTIFICATED, NOT_ALLOWED_SECONDARY_DEVICE, INVALID_PIN_CODE, NOT_FOUND_IDENTITY_CREDENTIAL, EXCEED_FILE_MAX_SIZE, EXCEED_DAILY_QUOTA, NOT_SUPPORT_SEND_FILE, MUST_UPGRADE, NOT_AVAILABLE_PIN_CODE_SESSION, EXPIRED_REVISION, NOT_YET_PHONE_NUMBER, BAD_CALL_NUMBER, UNAVAILABLE_CALL_NUMBER, NOT_SUPPORT_CALL_SERVICE, CONGESTION_CONTROL, NO_BALANCE, NOT_PERMITTED_CALLER_ID, NO_CALLER_ID_LIMIT_EXCEEDED, CALLER_ID_VERIFICATION_REQUIRED, NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED, MESSAGE_NOT_FOUND, INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT, ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED, ACCOUNT_MIGRATION_PINCODE_BLOCKED, INVALID_PASSWORD_FORMAT, FEATURE_RESTRICTED, MESSAGE_NOT_DESTRUCTIBLE, PAID_CALL_REDEEM_FAILED, PREVENTED_JOIN_BY_TICKET, SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT, SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY, SECURITY_CENTER_NOT_VERIFIED, SECURITY_CENTER_BLOCKED_BY_SETTING, SECURITY_CENTER_BLOCKED, TALK_PROXY_EXCEPTION, E2EE_INVALID_PROTOCOL, E2EE_RETRY_ENCRYPT, E2EE_UPDATE_SENDER_KEY, E2EE_UPDATE_RECEIVER_KEY, E2EE_INVALID_ARGUMENT, E2EE_INVALID_VERSION, E2EE_SENDER_DISABLED, E2EE_RECEIVER_DISABLED, E2EE_SENDER_NOT_ALLOWED, E2EE_RECEIVER_NOT_ALLOWED, E2EE_RESEND_FAIL, E2EE_RESEND_OK, HITOKOTO_BACKUP_NO_AVAILABLE_DATA, E2EE_UPDATE_PRIMARY_DEVICE, SUCCESS, CANCEL, E2EE_PRIMARY_NOT_SUPPORT, E2EE_RETRY_PLAIN, E2EE_RECREATE_GROUP_KEY, E2EE_GROUP_TOO_MANY_MEMBERS, SERVER_BUSY, NOT_ALLOWED_ADD_FOLLOW, INCOMING_FRIEND_REQUEST_LIMIT, OUTGOING_FRIEND_REQUEST_LIMIT, OUTGOING_FRIEND_REQUEST_QUOTA, DUPLICATED, BANNED]).freeze
end

module IdentityProvider
  UNKNOWN = 0
  LINE = 1
  NAVER_KR = 2
  LINE_PHONE = 3
  VALUE_MAP = {0 => "UNKNOWN", 1 => "LINE", 2 => "NAVER_KR", 3 => "LINE_PHONE"}
  VALID_VALUES = Set.new([UNKNOWN, LINE, NAVER_KR, LINE_PHONE]).freeze
end

module LoginResultType
  SUCCESS = 1
  REQUIRE_QRCODE = 2
  REQUIRE_DEVICE_CONFIRM = 3
  REQUIRE_SMS_CONFIRM = 4
  VALUE_MAP = {1 => "SUCCESS", 2 => "REQUIRE_QRCODE", 3 => "REQUIRE_DEVICE_CONFIRM", 4 => "REQUIRE_SMS_CONFIRM"}
  VALID_VALUES = Set.new([SUCCESS, REQUIRE_QRCODE, REQUIRE_DEVICE_CONFIRM, REQUIRE_SMS_CONFIRM]).freeze
end

module MessageOperationType
  SEND_MESSAGE = 1
  RECEIVE_MESSAGE = 2
  READ_MESSAGE = 3
  NOTIFIED_READ_MESSAGE = 4
  NOTIFIED_JOIN_CHAT = 5
  FAILED_SEND_MESSAGE = 6
  SEND_CONTENT = 7
  SEND_CONTENT_RECEIPT = 8
  SEND_CHAT_REMOVED = 9
  REMOVE_ALL_MESSAGES = 10
  VALUE_MAP = {1 => "SEND_MESSAGE", 2 => "RECEIVE_MESSAGE", 3 => "READ_MESSAGE", 4 => "NOTIFIED_READ_MESSAGE", 5 => "NOTIFIED_JOIN_CHAT", 6 => "FAILED_SEND_MESSAGE", 7 => "SEND_CONTENT", 8 => "SEND_CONTENT_RECEIPT", 9 => "SEND_CHAT_REMOVED", 10 => "REMOVE_ALL_MESSAGES"}
  VALID_VALUES = Set.new([SEND_MESSAGE, RECEIVE_MESSAGE, READ_MESSAGE, NOTIFIED_READ_MESSAGE, NOTIFIED_JOIN_CHAT, FAILED_SEND_MESSAGE, SEND_CONTENT, SEND_CONTENT_RECEIPT, SEND_CHAT_REMOVED, REMOVE_ALL_MESSAGES]).freeze
end

module MIDType
  USER = 0
  ROOM = 1
  GROUP = 2
  SQUARE = 3
  SQUARE_CHAT = 4
  SQUARE_MEMBER = 5
  BOT = 6
  VALUE_MAP = {0 => "USER", 1 => "ROOM", 2 => "GROUP", 3 => "SQUARE", 4 => "SQUARE_CHAT", 5 => "SQUARE_MEMBER", 6 => "BOT"}
  VALID_VALUES = Set.new([USER, ROOM, GROUP, SQUARE, SQUARE_CHAT, SQUARE_MEMBER, BOT]).freeze
end

module ServiceCode
  UNKNOWN = 0
  TALK = 1
  SQUARE = 2
  VALUE_MAP = {0 => "UNKNOWN", 1 => "TALK", 2 => "SQUARE"}
  VALID_VALUES = Set.new([UNKNOWN, TALK, SQUARE]).freeze
end

module OpStatus
  NORMAL = 0
  ALERT_DISABLED = 1
  ALWAYS = 2
  VALUE_MAP = {0 => "NORMAL", 1 => "ALERT_DISABLED", 2 => "ALWAYS"}
  VALID_VALUES = Set.new([NORMAL, ALERT_DISABLED, ALWAYS]).freeze
end

module OpType
  END_OF_OPERATION = 0
  UPDATE_PROFILE = 1
  UPDATE_SETTINGS = 36
  NOTIFIED_UPDATE_PROFILE = 2
  REGISTER_USERID = 3
  ADD_CONTACT = 4
  NOTIFIED_ADD_CONTACT = 5
  BLOCK_CONTACT = 6
  UNBLOCK_CONTACT = 7
  NOTIFIED_RECOMMEND_CONTACT = 8
  CREATE_GROUP = 9
  UPDATE_GROUP = 10
  NOTIFIED_UPDATE_GROUP = 11
  INVITE_INTO_GROUP = 12
  NOTIFIED_INVITE_INTO_GROUP = 13
  CANCEL_INVITATION_GROUP = 31
  NOTIFIED_CANCEL_INVITATION_GROUP = 32
  LEAVE_GROUP = 14
  NOTIFIED_LEAVE_GROUP = 15
  ACCEPT_GROUP_INVITATION = 16
  NOTIFIED_ACCEPT_GROUP_INVITATION = 17
  REJECT_GROUP_INVITATION = 34
  NOTIFIED_REJECT_GROUP_INVITATION = 35
  KICKOUT_FROM_GROUP = 18
  NOTIFIED_KICKOUT_FROM_GROUP = 19
  CREATE_ROOM = 20
  INVITE_INTO_ROOM = 21
  NOTIFIED_INVITE_INTO_ROOM = 22
  LEAVE_ROOM = 23
  NOTIFIED_LEAVE_ROOM = 24
  SEND_MESSAGE = 25
  RECEIVE_MESSAGE = 26
  SEND_MESSAGE_RECEIPT = 27
  RECEIVE_MESSAGE_RECEIPT = 28
  SEND_CONTENT_RECEIPT = 29
  SEND_CHAT_CHECKED = 40
  SEND_CHAT_REMOVED = 41
  RECEIVE_ANNOUNCEMENT = 30
  INVITE_VIA_EMAIL = 38
  NOTIFIED_REGISTER_USER = 37
  NOTIFIED_UNREGISTER_USER = 33
  NOTIFIED_REQUEST_RECOVERY = 39
  NOTIFIED_FORCE_SYNC = 42
  SEND_CONTENT = 43
  SEND_MESSAGE_MYHOME = 44
  NOTIFIED_UPDATE_CONTENT_PREVIEW = 45
  REMOVE_ALL_MESSAGES = 46
  NOTIFIED_UPDATE_PURCHASES = 47
  DUMMY = 48
  UPDATE_CONTACT = 49
  NOTIFIED_RECEIVED_CALL = 50
  CANCEL_CALL = 51
  NOTIFIED_REDIRECT = 52
  NOTIFIED_CHANNEL_SYNC = 53
  FAILED_SEND_MESSAGE = 54
  NOTIFIED_READ_MESSAGE = 55
  FAILED_EMAIL_CONFIRMATION = 56
  NOTIFIED_PUSH_NOTICENTER_ITEM = 59
  NOTIFIED_CHAT_CONTENT = 58
  NOTIFIED_JOIN_CHAT = 60
  NOTIFIED_LEAVE_CHAT = 61
  NOTIFIED_TYPING = 62
  FRIEND_REQUEST_ACCEPTED = 63
  DESTROY_MESSAGE = 64
  NOTIFIED_DESTROY_MESSAGE = 65
  UPDATE_PUBLICKEYCHAIN = 66
  NOTIFIED_UPDATE_PUBLICKEYCHAIN = 67
  NOTIFIED_BLOCK_CONTACT = 68
  NOTIFIED_UNBLOCK_CONTACT = 69
  UPDATE_GROUPPREFERENCE = 70
  NOTIFIED_PAYMENT_EVENT = 71
  REGISTER_E2EE_PUBLICKEY = 72
  NOTIFIED_E2EE_KEY_EXCHANGE_REQ = 73
  NOTIFIED_E2EE_KEY_EXCHANGE_RESP = 74
  NOTIFIED_E2EE_MESSAGE_RESEND_REQ = 75
  NOTIFIED_E2EE_MESSAGE_RESEND_RESP = 76
  NOTIFIED_E2EE_KEY_UPDATE = 77
  NOTIFIED_BUDDY_UPDATE_PROFILE = 78
  NOTIFIED_UPDATE_LINEAT_TABS = 79
  UPDATE_ROOM = 80
  NOTIFIED_BEACON_DETECTED = 81
  UPDATE_EXTENDED_PROFILE = 82
  ADD_FOLLOW = 83
  NOTIFIED_ADD_FOLLOW = 84
  DELETE_FOLLOW = 85
  NOTIFIED_DELETE_FOLLOW = 86
  UPDATE_TIMELINE_SETTINGS = 87
  NOTIFIED_FRIEND_REQUEST = 88
  UPDATE_RINGBACK_TONE = 89
  NOTIFIED_POSTBACK = 90
  RECEIVE_READ_WATERMARK = 91
  NOTIFIED_MESSAGE_DELIVERED = 92
  NOTIFIED_UPDATE_CHAT_BAR = 93
  NOTIFIED_CHATAPP_INSTALLED = 94
  NOTIFIED_CHATAPP_UPDATED = 95
  NOTIFIED_CHATAPP_NEW_MARK = 96
  NOTIFIED_CHATAPP_DELETED = 97
  NOTIFIED_CHATAPP_SYNC = 98
  NOTIFIED_UPDATE_MESSAGE = 99
  VALUE_MAP = {0 => "END_OF_OPERATION", 1 => "UPDATE_PROFILE", 36 => "UPDATE_SETTINGS", 2 => "NOTIFIED_UPDATE_PROFILE", 3 => "REGISTER_USERID", 4 => "ADD_CONTACT", 5 => "NOTIFIED_ADD_CONTACT", 6 => "BLOCK_CONTACT", 7 => "UNBLOCK_CONTACT", 8 => "NOTIFIED_RECOMMEND_CONTACT", 9 => "CREATE_GROUP", 10 => "UPDATE_GROUP", 11 => "NOTIFIED_UPDATE_GROUP", 12 => "INVITE_INTO_GROUP", 13 => "NOTIFIED_INVITE_INTO_GROUP", 31 => "CANCEL_INVITATION_GROUP", 32 => "NOTIFIED_CANCEL_INVITATION_GROUP", 14 => "LEAVE_GROUP", 15 => "NOTIFIED_LEAVE_GROUP", 16 => "ACCEPT_GROUP_INVITATION", 17 => "NOTIFIED_ACCEPT_GROUP_INVITATION", 34 => "REJECT_GROUP_INVITATION", 35 => "NOTIFIED_REJECT_GROUP_INVITATION", 18 => "KICKOUT_FROM_GROUP", 19 => "NOTIFIED_KICKOUT_FROM_GROUP", 20 => "CREATE_ROOM", 21 => "INVITE_INTO_ROOM", 22 => "NOTIFIED_INVITE_INTO_ROOM", 23 => "LEAVE_ROOM", 24 => "NOTIFIED_LEAVE_ROOM", 25 => "SEND_MESSAGE", 26 => "RECEIVE_MESSAGE", 27 => "SEND_MESSAGE_RECEIPT", 28 => "RECEIVE_MESSAGE_RECEIPT", 29 => "SEND_CONTENT_RECEIPT", 40 => "SEND_CHAT_CHECKED", 41 => "SEND_CHAT_REMOVED", 30 => "RECEIVE_ANNOUNCEMENT", 38 => "INVITE_VIA_EMAIL", 37 => "NOTIFIED_REGISTER_USER", 33 => "NOTIFIED_UNREGISTER_USER", 39 => "NOTIFIED_REQUEST_RECOVERY", 42 => "NOTIFIED_FORCE_SYNC", 43 => "SEND_CONTENT", 44 => "SEND_MESSAGE_MYHOME", 45 => "NOTIFIED_UPDATE_CONTENT_PREVIEW", 46 => "REMOVE_ALL_MESSAGES", 47 => "NOTIFIED_UPDATE_PURCHASES", 48 => "DUMMY", 49 => "UPDATE_CONTACT", 50 => "NOTIFIED_RECEIVED_CALL", 51 => "CANCEL_CALL", 52 => "NOTIFIED_REDIRECT", 53 => "NOTIFIED_CHANNEL_SYNC", 54 => "FAILED_SEND_MESSAGE", 55 => "NOTIFIED_READ_MESSAGE", 56 => "FAILED_EMAIL_CONFIRMATION", 59 => "NOTIFIED_PUSH_NOTICENTER_ITEM", 58 => "NOTIFIED_CHAT_CONTENT", 60 => "NOTIFIED_JOIN_CHAT", 61 => "NOTIFIED_LEAVE_CHAT", 62 => "NOTIFIED_TYPING", 63 => "FRIEND_REQUEST_ACCEPTED", 64 => "DESTROY_MESSAGE", 65 => "NOTIFIED_DESTROY_MESSAGE", 66 => "UPDATE_PUBLICKEYCHAIN", 67 => "NOTIFIED_UPDATE_PUBLICKEYCHAIN", 68 => "NOTIFIED_BLOCK_CONTACT", 69 => "NOTIFIED_UNBLOCK_CONTACT", 70 => "UPDATE_GROUPPREFERENCE", 71 => "NOTIFIED_PAYMENT_EVENT", 72 => "REGISTER_E2EE_PUBLICKEY", 73 => "NOTIFIED_E2EE_KEY_EXCHANGE_REQ", 74 => "NOTIFIED_E2EE_KEY_EXCHANGE_RESP", 75 => "NOTIFIED_E2EE_MESSAGE_RESEND_REQ", 76 => "NOTIFIED_E2EE_MESSAGE_RESEND_RESP", 77 => "NOTIFIED_E2EE_KEY_UPDATE", 78 => "NOTIFIED_BUDDY_UPDATE_PROFILE", 79 => "NOTIFIED_UPDATE_LINEAT_TABS", 80 => "UPDATE_ROOM", 81 => "NOTIFIED_BEACON_DETECTED", 82 => "UPDATE_EXTENDED_PROFILE", 83 => "ADD_FOLLOW", 84 => "NOTIFIED_ADD_FOLLOW", 85 => "DELETE_FOLLOW", 86 => "NOTIFIED_DELETE_FOLLOW", 87 => "UPDATE_TIMELINE_SETTINGS", 88 => "NOTIFIED_FRIEND_REQUEST", 89 => "UPDATE_RINGBACK_TONE", 90 => "NOTIFIED_POSTBACK", 91 => "RECEIVE_READ_WATERMARK", 92 => "NOTIFIED_MESSAGE_DELIVERED", 93 => "NOTIFIED_UPDATE_CHAT_BAR", 94 => "NOTIFIED_CHATAPP_INSTALLED", 95 => "NOTIFIED_CHATAPP_UPDATED", 96 => "NOTIFIED_CHATAPP_NEW_MARK", 97 => "NOTIFIED_CHATAPP_DELETED", 98 => "NOTIFIED_CHATAPP_SYNC", 99 => "NOTIFIED_UPDATE_MESSAGE"}
  VALID_VALUES = Set.new([END_OF_OPERATION, UPDATE_PROFILE, UPDATE_SETTINGS, NOTIFIED_UPDATE_PROFILE, REGISTER_USERID, ADD_CONTACT, NOTIFIED_ADD_CONTACT, BLOCK_CONTACT, UNBLOCK_CONTACT, NOTIFIED_RECOMMEND_CONTACT, CREATE_GROUP, UPDATE_GROUP, NOTIFIED_UPDATE_GROUP, INVITE_INTO_GROUP, NOTIFIED_INVITE_INTO_GROUP, CANCEL_INVITATION_GROUP, NOTIFIED_CANCEL_INVITATION_GROUP, LEAVE_GROUP, NOTIFIED_LEAVE_GROUP, ACCEPT_GROUP_INVITATION, NOTIFIED_ACCEPT_GROUP_INVITATION, REJECT_GROUP_INVITATION, NOTIFIED_REJECT_GROUP_INVITATION, KICKOUT_FROM_GROUP, NOTIFIED_KICKOUT_FROM_GROUP, CREATE_ROOM, INVITE_INTO_ROOM, NOTIFIED_INVITE_INTO_ROOM, LEAVE_ROOM, NOTIFIED_LEAVE_ROOM, SEND_MESSAGE, RECEIVE_MESSAGE, SEND_MESSAGE_RECEIPT, RECEIVE_MESSAGE_RECEIPT, SEND_CONTENT_RECEIPT, SEND_CHAT_CHECKED, SEND_CHAT_REMOVED, RECEIVE_ANNOUNCEMENT, INVITE_VIA_EMAIL, NOTIFIED_REGISTER_USER, NOTIFIED_UNREGISTER_USER, NOTIFIED_REQUEST_RECOVERY, NOTIFIED_FORCE_SYNC, SEND_CONTENT, SEND_MESSAGE_MYHOME, NOTIFIED_UPDATE_CONTENT_PREVIEW, REMOVE_ALL_MESSAGES, NOTIFIED_UPDATE_PURCHASES, DUMMY, UPDATE_CONTACT, NOTIFIED_RECEIVED_CALL, CANCEL_CALL, NOTIFIED_REDIRECT, NOTIFIED_CHANNEL_SYNC, FAILED_SEND_MESSAGE, NOTIFIED_READ_MESSAGE, FAILED_EMAIL_CONFIRMATION, NOTIFIED_PUSH_NOTICENTER_ITEM, NOTIFIED_CHAT_CONTENT, NOTIFIED_JOIN_CHAT, NOTIFIED_LEAVE_CHAT, NOTIFIED_TYPING, FRIEND_REQUEST_ACCEPTED, DESTROY_MESSAGE, NOTIFIED_DESTROY_MESSAGE, UPDATE_PUBLICKEYCHAIN, NOTIFIED_UPDATE_PUBLICKEYCHAIN, NOTIFIED_BLOCK_CONTACT, NOTIFIED_UNBLOCK_CONTACT, UPDATE_GROUPPREFERENCE, NOTIFIED_PAYMENT_EVENT, REGISTER_E2EE_PUBLICKEY, NOTIFIED_E2EE_KEY_EXCHANGE_REQ, NOTIFIED_E2EE_KEY_EXCHANGE_RESP, NOTIFIED_E2EE_MESSAGE_RESEND_REQ, NOTIFIED_E2EE_MESSAGE_RESEND_RESP, NOTIFIED_E2EE_KEY_UPDATE, NOTIFIED_BUDDY_UPDATE_PROFILE, NOTIFIED_UPDATE_LINEAT_TABS, UPDATE_ROOM, NOTIFIED_BEACON_DETECTED, UPDATE_EXTENDED_PROFILE, ADD_FOLLOW, NOTIFIED_ADD_FOLLOW, DELETE_FOLLOW, NOTIFIED_DELETE_FOLLOW, UPDATE_TIMELINE_SETTINGS, NOTIFIED_FRIEND_REQUEST, UPDATE_RINGBACK_TONE, NOTIFIED_POSTBACK, RECEIVE_READ_WATERMARK, NOTIFIED_MESSAGE_DELIVERED, NOTIFIED_UPDATE_CHAT_BAR, NOTIFIED_CHATAPP_INSTALLED, NOTIFIED_CHATAPP_UPDATED, NOTIFIED_CHATAPP_NEW_MARK, NOTIFIED_CHATAPP_DELETED, NOTIFIED_CHATAPP_SYNC, NOTIFIED_UPDATE_MESSAGE]).freeze
end

module ContactStatus
  UNSPECIFIED = 0
  FRIEND = 1
  FRIEND_BLOCKED = 2
  RECOMMEND = 3
  RECOMMEND_BLOCKED = 4
  DELETED = 5
  DELETED_BLOCKED = 6
  VALUE_MAP = {0 => "UNSPECIFIED", 1 => "FRIEND", 2 => "FRIEND_BLOCKED", 3 => "RECOMMEND", 4 => "RECOMMEND_BLOCKED", 5 => "DELETED", 6 => "DELETED_BLOCKED"}
  VALID_VALUES = Set.new([UNSPECIFIED, FRIEND, FRIEND_BLOCKED, RECOMMEND, RECOMMEND_BLOCKED, DELETED, DELETED_BLOCKED]).freeze
end

module ContactRelation
  ONEWAY = 0
  BOTH = 1
  NOT_REGISTERED = 2
  VALUE_MAP = {0 => "ONEWAY", 1 => "BOTH", 2 => "NOT_REGISTERED"}
  VALID_VALUES = Set.new([ONEWAY, BOTH, NOT_REGISTERED]).freeze
end

class LoginResult
  include ::Thrift::Struct, ::Thrift::Struct_Union
  AUTHTOKEN = 1
  CERTIFICATE = 2
  VERIFIER = 3
  PINCODE = 4
  TYPE = 5

  FIELDS = {
    AUTHTOKEN => {:type => ::Thrift::Types::STRING, :name => 'authToken'},
    CERTIFICATE => {:type => ::Thrift::Types::STRING, :name => 'certificate'},
    VERIFIER => {:type => ::Thrift::Types::STRING, :name => 'verifier'},
    PINCODE => {:type => ::Thrift::Types::STRING, :name => 'pinCode'},
    TYPE => {:type => ::Thrift::Types::I32, :name => 'type', :enum_class => ::LoginResultType}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class Contact
  include ::Thrift::Struct, ::Thrift::Struct_Union
  MID = 1
  CREATEDTIME = 2
  TYPE = 10
  STATUS = 11
  RELATION = 21
  DISPLAYNAME = 22
  PHONETICNAME = 23
  PICTURESTATUS = 24
  THUMBNAILURL = 25
  STATUSMESSAGE = 26
  DISPLAYNAMEOVERRIDDEN = 27
  FAVORITETIME = 28
  CAPABLEVOICECALL = 31
  CAPABLEVIDEOCALL = 32
  CAPABLEMYHOME = 33
  CAPABLEBUDDY = 34
  ATTRIBUTES = 35
  SETTINGS = 36
  PICTUREPATH = 37
  RECOMMENDPARAMS = 38
  FRIENDREQUESTSTATUS = 39
  MUSICPROFILE = 40
  VIDEOPROFILE = 42

  FIELDS = {
    MID => {:type => ::Thrift::Types::STRING, :name => 'mid'},
    CREATEDTIME => {:type => ::Thrift::Types::I64, :name => 'createdTime'},
    TYPE => {:type => ::Thrift::Types::I32, :name => 'type', :enum_class => ::ContactType},
    STATUS => {:type => ::Thrift::Types::I32, :name => 'status', :enum_class => ::ContactStatus},
    RELATION => {:type => ::Thrift::Types::I32, :name => 'relation', :enum_class => ::ContactRelation},
    DISPLAYNAME => {:type => ::Thrift::Types::STRING, :name => 'displayName'},
    PHONETICNAME => {:type => ::Thrift::Types::STRING, :name => 'phoneticName'},
    PICTURESTATUS => {:type => ::Thrift::Types::STRING, :name => 'pictureStatus'},
    THUMBNAILURL => {:type => ::Thrift::Types::STRING, :name => 'thumbnailUrl'},
    STATUSMESSAGE => {:type => ::Thrift::Types::STRING, :name => 'statusMessage'},
    DISPLAYNAMEOVERRIDDEN => {:type => ::Thrift::Types::STRING, :name => 'displayNameOverridden'},
    FAVORITETIME => {:type => ::Thrift::Types::I64, :name => 'favoriteTime'},
    CAPABLEVOICECALL => {:type => ::Thrift::Types::BOOL, :name => 'capableVoiceCall'},
    CAPABLEVIDEOCALL => {:type => ::Thrift::Types::BOOL, :name => 'capableVideoCall'},
    CAPABLEMYHOME => {:type => ::Thrift::Types::BOOL, :name => 'capableMyhome'},
    CAPABLEBUDDY => {:type => ::Thrift::Types::BOOL, :name => 'capableBuddy'},
    ATTRIBUTES => {:type => ::Thrift::Types::I32, :name => 'attributes'},
    SETTINGS => {:type => ::Thrift::Types::I64, :name => 'settings'},
    PICTUREPATH => {:type => ::Thrift::Types::STRING, :name => 'picturePath'},
    RECOMMENDPARAMS => {:type => ::Thrift::Types::STRING, :name => 'recommendParams'},
    FRIENDREQUESTSTATUS => {:type => ::Thrift::Types::I32, :name => 'friendRequestStatus'},
    MUSICPROFILE => {:type => ::Thrift::Types::STRING, :name => 'musicProfile'},
    VIDEOPROFILE => {:type => ::Thrift::Types::STRING, :name => 'videoProfile'}
  }

  def struct_fields; FIELDS; end

  def validate
    unless @type.nil? || ::ContactType::VALID_VALUES.include?(@type)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field type!')
    end
    unless @status.nil? || ::ContactStatus::VALID_VALUES.include?(@status)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field status!')
    end
    unless @relation.nil? || ::ContactRelation::VALID_VALUES.include?(@relation)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field relation!')
    end
  end

  ::Thrift::Struct.generate_accessors self
end

class Location
  include ::Thrift::Struct, ::Thrift::Struct_Union
  TITLE = 1
  ADDRESS = 2
  LATITUDE = 3
  LONGITUDE = 4
  PHONE = 5

  FIELDS = {
    TITLE => {:type => ::Thrift::Types::STRING, :name => 'title'},
    ADDRESS => {:type => ::Thrift::Types::STRING, :name => 'address'},
    LATITUDE => {:type => ::Thrift::Types::DOUBLE, :name => 'latitude'},
    LONGITUDE => {:type => ::Thrift::Types::DOUBLE, :name => 'longitude'},
    PHONE => {:type => ::Thrift::Types::STRING, :name => 'phone'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class GroupPreference
  include ::Thrift::Struct, ::Thrift::Struct_Union
  INVITATIONTICKET = 1
  FAVORITETIMESTAMP = 2

  FIELDS = {
    INVITATIONTICKET => {:type => ::Thrift::Types::STRING, :name => 'invitationTicket'},
    FAVORITETIMESTAMP => {:type => ::Thrift::Types::I64, :name => 'favoriteTimestamp'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class Group
  include ::Thrift::Struct, ::Thrift::Struct_Union
  ID = 1
  CREATEDTIME = 2
  NAME = 10
  PICTURESTATUS = 11
  PREVENTEDJOINBYTICKET = 12
  GROUPPREFERENCE = 13
  MEMBERS = 20
  CREATOR = 21
  INVITEE = 22
  NOTIFICATIONDISABLED = 31

  FIELDS = {
    ID => {:type => ::Thrift::Types::STRING, :name => 'id'},
    CREATEDTIME => {:type => ::Thrift::Types::I64, :name => 'createdTime'},
    NAME => {:type => ::Thrift::Types::STRING, :name => 'name'},
    PICTURESTATUS => {:type => ::Thrift::Types::STRING, :name => 'pictureStatus'},
    PREVENTEDJOINBYTICKET => {:type => ::Thrift::Types::BOOL, :name => 'preventedJoinByTicket'},
    GROUPPREFERENCE => {:type => ::Thrift::Types::STRUCT, :name => 'groupPreference', :class => ::GroupPreference},
    MEMBERS => {:type => ::Thrift::Types::LIST, :name => 'members', :element => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
    CREATOR => {:type => ::Thrift::Types::STRUCT, :name => 'creator', :class => ::Contact},
    INVITEE => {:type => ::Thrift::Types::LIST, :name => 'invitee', :element => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
    NOTIFICATIONDISABLED => {:type => ::Thrift::Types::BOOL, :name => 'notificationDisabled'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class LoginRequest
  include ::Thrift::Struct, ::Thrift::Struct_Union
  TYPE = 1
  IDENTITYPROVIDER = 2
  IDENTIFIER = 3
  PASSWORD = 4
  KEEPLOGGEDIN = 5
  ACCESSLOCATION = 6
  SYSTEMNAME = 7
  CERTIFICATE = 8
  VERIFIER = 9
  SECRET = 10
  E2EEVERSION = 11

  FIELDS = {
    TYPE => {:type => ::Thrift::Types::I32, :name => 'type'},
    IDENTITYPROVIDER => {:type => ::Thrift::Types::I32, :name => 'identityProvider'},
    IDENTIFIER => {:type => ::Thrift::Types::STRING, :name => 'identifier'},
    PASSWORD => {:type => ::Thrift::Types::STRING, :name => 'password'},
    KEEPLOGGEDIN => {:type => ::Thrift::Types::BOOL, :name => 'keepLoggedIn'},
    ACCESSLOCATION => {:type => ::Thrift::Types::STRING, :name => 'accessLocation'},
    SYSTEMNAME => {:type => ::Thrift::Types::STRING, :name => 'systemName'},
    CERTIFICATE => {:type => ::Thrift::Types::STRING, :name => 'certificate'},
    VERIFIER => {:type => ::Thrift::Types::STRING, :name => 'verifier'},
    SECRET => {:type => ::Thrift::Types::STRING, :name => 'secret'},
    E2EEVERSION => {:type => ::Thrift::Types::I32, :name => 'e2eeVersion'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class LoginSession
  include ::Thrift::Struct, ::Thrift::Struct_Union
  TOKENKEY = 1
  EXPIRATIONTIME = 3
  APPLICATIONTYPE = 11
  SYSTEMNAME = 12
  ACCESSLOCATION = 22

  FIELDS = {
    TOKENKEY => {:type => ::Thrift::Types::STRING, :name => 'tokenKey'},
    EXPIRATIONTIME => {:type => ::Thrift::Types::I64, :name => 'expirationTime'},
    APPLICATIONTYPE => {:type => ::Thrift::Types::I32, :name => 'applicationType', :enum_class => ::ApplicationType},
    SYSTEMNAME => {:type => ::Thrift::Types::STRING, :name => 'systemName'},
    ACCESSLOCATION => {:type => ::Thrift::Types::STRING, :name => 'accessLocation'}
  }

  def struct_fields; FIELDS; end

  def validate
    unless @applicationType.nil? || ::ApplicationType::VALID_VALUES.include?(@applicationType)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field applicationType!')
    end
  end

  ::Thrift::Struct.generate_accessors self
end

class Message
  include ::Thrift::Struct, ::Thrift::Struct_Union
  _FROM = 1
  TO = 2
  TOTYPE = 3
  ID = 4
  CREATEDTIME = 5
  DELIVEREDTIME = 6
  TEXT = 10
  LOCATION = 11
  HASCONTENT = 14
  CONTENTTYPE = 15
  CONTENTPREVIEW = 17
  CONTENTMETADATA = 18
  SESSIONID = 19
  CHUNKS = 20
  RELATEDMESSAGEID = 21
  MESSAGERELATIONTYPE = 22
  READCOUNT = 23
  RELATEDMESSAGESERVICECODE = 24

  FIELDS = {
    _FROM => {:type => ::Thrift::Types::STRING, :name => '_from'},
    TO => {:type => ::Thrift::Types::STRING, :name => 'to'},
    TOTYPE => {:type => ::Thrift::Types::I32, :name => 'toType', :enum_class => ::MIDType},
    ID => {:type => ::Thrift::Types::STRING, :name => 'id'},
    CREATEDTIME => {:type => ::Thrift::Types::I64, :name => 'createdTime'},
    DELIVEREDTIME => {:type => ::Thrift::Types::I64, :name => 'deliveredTime'},
    TEXT => {:type => ::Thrift::Types::STRING, :name => 'text'},
    LOCATION => {:type => ::Thrift::Types::STRUCT, :name => 'location', :class => ::Location},
    HASCONTENT => {:type => ::Thrift::Types::BOOL, :name => 'hasContent'},
    CONTENTTYPE => {:type => ::Thrift::Types::I32, :name => 'contentType', :enum_class => ::ContentType},
    CONTENTPREVIEW => {:type => ::Thrift::Types::STRING, :name => 'contentPreview', :binary => true},
    CONTENTMETADATA => {:type => ::Thrift::Types::MAP, :name => 'contentMetadata', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRING}},
    SESSIONID => {:type => ::Thrift::Types::I64, :name => 'sessionId'},
    CHUNKS => {:type => ::Thrift::Types::LIST, :name => 'chunks', :element => {:type => ::Thrift::Types::STRING}},
    RELATEDMESSAGEID => {:type => ::Thrift::Types::STRING, :name => 'relatedMessageId'},
    MESSAGERELATIONTYPE => {:type => ::Thrift::Types::I64, :name => 'messageRelationType'},
    READCOUNT => {:type => ::Thrift::Types::I64, :name => 'readCount'},
    RELATEDMESSAGESERVICECODE => {:type => ::Thrift::Types::I64, :name => 'relatedMessageServiceCode'}
  }

  def struct_fields; FIELDS; end

  def validate
    unless @toType.nil? || ::MIDType::VALID_VALUES.include?(@toType)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field toType!')
    end
    unless @contentType.nil? || ::ContentType::VALID_VALUES.include?(@contentType)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field contentType!')
    end
  end

  ::Thrift::Struct.generate_accessors self
end

class MessageOperation
  include ::Thrift::Struct, ::Thrift::Struct_Union
  REVISION = 1
  CREATEDTIME = 2
  TYPE = 3
  REQSEQ = 4
  STATUS = 5
  PARAM1 = 10
  PARAM2 = 11
  PARAM3 = 12
  MESSAGE = 20

  FIELDS = {
    REVISION => {:type => ::Thrift::Types::I64, :name => 'revision'},
    CREATEDTIME => {:type => ::Thrift::Types::I64, :name => 'createdTime'},
    TYPE => {:type => ::Thrift::Types::I32, :name => 'type', :enum_class => ::MessageOperationType},
    REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
    STATUS => {:type => ::Thrift::Types::I32, :name => 'status', :enum_class => ::OpStatus},
    PARAM1 => {:type => ::Thrift::Types::STRING, :name => 'param1'},
    PARAM2 => {:type => ::Thrift::Types::STRING, :name => 'param2'},
    PARAM3 => {:type => ::Thrift::Types::STRING, :name => 'param3'},
    MESSAGE => {:type => ::Thrift::Types::STRUCT, :name => 'message', :class => ::Message}
  }

  def struct_fields; FIELDS; end

  def validate
    unless @type.nil? || ::MessageOperationType::VALID_VALUES.include?(@type)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field type!')
    end
    unless @status.nil? || ::OpStatus::VALID_VALUES.include?(@status)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field status!')
    end
  end

  ::Thrift::Struct.generate_accessors self
end

class MessageOperations
  include ::Thrift::Struct, ::Thrift::Struct_Union
  OPERATIONS = 1
  ENDFLAG = 2

  FIELDS = {
    OPERATIONS => {:type => ::Thrift::Types::LIST, :name => 'operations', :element => {:type => ::Thrift::Types::STRUCT, :class => ::MessageOperation}},
    ENDFLAG => {:type => ::Thrift::Types::BOOL, :name => 'endFlag'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class Operation
  include ::Thrift::Struct, ::Thrift::Struct_Union
  REVISION = 1
  CREATEDTIME = 2
  TYPE = 3
  REQSEQ = 4
  CHECKSUM = 5
  STATUS = 7
  PARAM1 = 10
  PARAM2 = 11
  PARAM3 = 12
  MESSAGE = 20

  FIELDS = {
    REVISION => {:type => ::Thrift::Types::I64, :name => 'revision'},
    CREATEDTIME => {:type => ::Thrift::Types::I64, :name => 'createdTime'},
    TYPE => {:type => ::Thrift::Types::I32, :name => 'type', :enum_class => ::OpType},
    REQSEQ => {:type => ::Thrift::Types::I32, :name => 'reqSeq'},
    CHECKSUM => {:type => ::Thrift::Types::STRING, :name => 'checksum'},
    STATUS => {:type => ::Thrift::Types::I32, :name => 'status', :enum_class => ::OpStatus},
    PARAM1 => {:type => ::Thrift::Types::STRING, :name => 'param1'},
    PARAM2 => {:type => ::Thrift::Types::STRING, :name => 'param2'},
    PARAM3 => {:type => ::Thrift::Types::STRING, :name => 'param3'},
    MESSAGE => {:type => ::Thrift::Types::STRUCT, :name => 'message', :class => ::Message}
  }

  def struct_fields; FIELDS; end

  def validate
    unless @type.nil? || ::OpType::VALID_VALUES.include?(@type)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field type!')
    end
    unless @status.nil? || ::OpStatus::VALID_VALUES.include?(@status)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field status!')
    end
  end

  ::Thrift::Struct.generate_accessors self
end

class Profile
  include ::Thrift::Struct, ::Thrift::Struct_Union
  MID = 1
  USERID = 3
  PHONE = 10
  EMAIL = 11
  REGIONCODE = 12
  DISPLAYNAME = 20
  PHONETICNAME = 21
  PICTURESTATUS = 22
  THUMBNAILURL = 23
  STATUSMESSAGE = 24
  ALLOWSEARCHBYUSERID = 31
  ALLOWSEARCHBYEMAIL = 32
  PICTUREPATH = 33
  MUSICPROFILE = 34

  FIELDS = {
    MID => {:type => ::Thrift::Types::STRING, :name => 'mid'},
    USERID => {:type => ::Thrift::Types::STRING, :name => 'userid'},
    PHONE => {:type => ::Thrift::Types::STRING, :name => 'phone'},
    EMAIL => {:type => ::Thrift::Types::STRING, :name => 'email'},
    REGIONCODE => {:type => ::Thrift::Types::STRING, :name => 'regionCode'},
    DISPLAYNAME => {:type => ::Thrift::Types::STRING, :name => 'displayName'},
    PHONETICNAME => {:type => ::Thrift::Types::STRING, :name => 'phoneticName'},
    PICTURESTATUS => {:type => ::Thrift::Types::STRING, :name => 'pictureStatus'},
    THUMBNAILURL => {:type => ::Thrift::Types::STRING, :name => 'thumbnailUrl'},
    STATUSMESSAGE => {:type => ::Thrift::Types::STRING, :name => 'statusMessage'},
    ALLOWSEARCHBYUSERID => {:type => ::Thrift::Types::BOOL, :name => 'allowSearchByUserid'},
    ALLOWSEARCHBYEMAIL => {:type => ::Thrift::Types::BOOL, :name => 'allowSearchByEmail'},
    PICTUREPATH => {:type => ::Thrift::Types::STRING, :name => 'picturePath'},
    MUSICPROFILE => {:type => ::Thrift::Types::STRING, :name => 'musicProfile'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class Room
  include ::Thrift::Struct, ::Thrift::Struct_Union
  MID = 1
  CREATEDTIME = 2
  CONTACTS = 10
  NOTIFICATIONDISABLED = 31

  FIELDS = {
    MID => {:type => ::Thrift::Types::STRING, :name => 'mid'},
    CREATEDTIME => {:type => ::Thrift::Types::I64, :name => 'createdTime'},
    CONTACTS => {:type => ::Thrift::Types::LIST, :name => 'contacts', :element => {:type => ::Thrift::Types::STRUCT, :class => ::Contact}},
    NOTIFICATIONDISABLED => {:type => ::Thrift::Types::BOOL, :name => 'notificationDisabled'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class RSAKey
  include ::Thrift::Struct, ::Thrift::Struct_Union
  KEYNM = 1
  NVALUE = 2
  EVALUE = 3
  SESSIONKEY = 4

  FIELDS = {
    KEYNM => {:type => ::Thrift::Types::STRING, :name => 'keynm'},
    NVALUE => {:type => ::Thrift::Types::STRING, :name => 'nvalue'},
    EVALUE => {:type => ::Thrift::Types::STRING, :name => 'evalue'},
    SESSIONKEY => {:type => ::Thrift::Types::STRING, :name => 'sessionKey'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

class TalkException < ::Thrift::Exception
  include ::Thrift::Struct, ::Thrift::Struct_Union
  CODE = 1
  REASON = 2
  PARAMETERMAP = 3

  FIELDS = {
    CODE => {:type => ::Thrift::Types::I32, :name => 'code', :enum_class => ::ErrorCode},
    REASON => {:type => ::Thrift::Types::STRING, :name => 'reason'},
    PARAMETERMAP => {:type => ::Thrift::Types::MAP, :name => 'parameterMap', :key => {:type => ::Thrift::Types::STRING}, :value => {:type => ::Thrift::Types::STRING}}
  }

  def struct_fields; FIELDS; end

  def validate
    unless @code.nil? || ::ErrorCode::VALID_VALUES.include?(@code)
      raise ::Thrift::ProtocolException.new(::Thrift::ProtocolException::UNKNOWN, 'Invalid value of field code!')
    end
  end

  ::Thrift::Struct.generate_accessors self
end

class Ticket
  include ::Thrift::Struct, ::Thrift::Struct_Union
  ID = 1
  EXPIRATIONTIME = 10
  MAXUSECOUNT = 21

  FIELDS = {
    ID => {:type => ::Thrift::Types::STRING, :name => 'id'},
    EXPIRATIONTIME => {:type => ::Thrift::Types::I64, :name => 'expirationTime'},
    MAXUSECOUNT => {:type => ::Thrift::Types::I32, :name => 'maxUseCount'}
  }

  def struct_fields; FIELDS; end

  def validate
  end

  ::Thrift::Struct.generate_accessors self
end

