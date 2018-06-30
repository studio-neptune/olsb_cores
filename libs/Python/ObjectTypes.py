# Compiled for SuperSonic Line API Lite
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
#  options string: py
#

from thrift.Thrift import TType, TMessageType, TFrozenDict, TException, TApplicationException
from thrift.protocol.TProtocol import TProtocolException
from thrift.TRecursive import fix_spec

import sys

from thrift.transport import TTransport
all_structs = []


class ApplicationType(object):
    DESKTOPWIN = 96
    DESKTOPWIN_RC = 97
    DESKTOPWIN_BETA = 98
    DESKTOPWIN_ALPHA = 99
    DESKTOPMAC = 112
    DESKTOPMAC_RC = 113
    DESKTOPMAC_BETA = 114
    DESKTOPMAC_ALPHA = 115

    _VALUES_TO_NAMES = {
        96: "DESKTOPWIN",
        97: "DESKTOPWIN_RC",
        98: "DESKTOPWIN_BETA",
        99: "DESKTOPWIN_ALPHA",
        112: "DESKTOPMAC",
        113: "DESKTOPMAC_RC",
        114: "DESKTOPMAC_BETA",
        115: "DESKTOPMAC_ALPHA",
    }

    _NAMES_TO_VALUES = {
        "DESKTOPWIN": 96,
        "DESKTOPWIN_RC": 97,
        "DESKTOPWIN_BETA": 98,
        "DESKTOPWIN_ALPHA": 99,
        "DESKTOPMAC": 112,
        "DESKTOPMAC_RC": 113,
        "DESKTOPMAC_BETA": 114,
        "DESKTOPMAC_ALPHA": 115,
    }


class LoginType(object):
    ID_CREDENTIAL = 0
    QRCODE = 1
    ID_CREDENTIAL_WITH_E2EE = 2

    _VALUES_TO_NAMES = {
        0: "ID_CREDENTIAL",
        1: "QRCODE",
        2: "ID_CREDENTIAL_WITH_E2EE",
    }

    _NAMES_TO_VALUES = {
        "ID_CREDENTIAL": 0,
        "QRCODE": 1,
        "ID_CREDENTIAL_WITH_E2EE": 2,
    }


class ContactType(object):
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

    _VALUES_TO_NAMES = {
        0: "MID",
        1: "PHONE",
        2: "EMAIL",
        3: "USERID",
        4: "PROXIMITY",
        5: "GROUP",
        6: "USER",
        7: "QRCODE",
        8: "PROMOTION_BOT",
        9: "CONTACT_MESSAGE",
        10: "FRIEND_REQUEST",
        128: "REPAIR",
        2305: "FACEBOOK",
        2306: "SINA",
        2307: "RENREN",
        2308: "FEIXIN",
        2309: "BBM",
        11: "BEACON",
    }

    _NAMES_TO_VALUES = {
        "MID": 0,
        "PHONE": 1,
        "EMAIL": 2,
        "USERID": 3,
        "PROXIMITY": 4,
        "GROUP": 5,
        "USER": 6,
        "QRCODE": 7,
        "PROMOTION_BOT": 8,
        "CONTACT_MESSAGE": 9,
        "FRIEND_REQUEST": 10,
        "REPAIR": 128,
        "FACEBOOK": 2305,
        "SINA": 2306,
        "RENREN": 2307,
        "FEIXIN": 2308,
        "BBM": 2309,
        "BEACON": 11,
    }


class ContentType(object):
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

    _VALUES_TO_NAMES = {
        0: "NONE",
        1: "IMAGE",
        2: "VIDEO",
        3: "AUDIO",
        4: "HTML",
        5: "PDF",
        6: "CALL",
        7: "STICKER",
        8: "PRESENCE",
        9: "GIFT",
        10: "GROUPBOARD",
        11: "APPLINK",
        12: "LINK",
        13: "CONTACT",
        14: "FILE",
        15: "LOCATION",
        16: "POSTNOTIFICATION",
        17: "RICH",
        18: "CHATEVENT",
        19: "MUSIC",
        20: "PAYMENT",
        21: "EXTIMAGE",
    }

    _NAMES_TO_VALUES = {
        "NONE": 0,
        "IMAGE": 1,
        "VIDEO": 2,
        "AUDIO": 3,
        "HTML": 4,
        "PDF": 5,
        "CALL": 6,
        "STICKER": 7,
        "PRESENCE": 8,
        "GIFT": 9,
        "GROUPBOARD": 10,
        "APPLINK": 11,
        "LINK": 12,
        "CONTACT": 13,
        "FILE": 14,
        "LOCATION": 15,
        "POSTNOTIFICATION": 16,
        "RICH": 17,
        "CHATEVENT": 18,
        "MUSIC": 19,
        "PAYMENT": 20,
        "EXTIMAGE": 21,
    }


class ErrorCode(object):
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

    _VALUES_TO_NAMES = {
        0: "ILLEGAL_ARGUMENT",
        1: "AUTHENTICATION_FAILED",
        2: "DB_FAILED",
        3: "INVALID_STATE",
        4: "EXCESSIVE_ACCESS",
        5: "NOT_FOUND",
        9: "INVALID_MID",
        10: "NOT_A_MEMBER",
        6: "INVALID_LENGTH",
        7: "NOT_AVAILABLE_USER",
        8: "NOT_AUTHORIZED_DEVICE",
        14: "NOT_AUTHORIZED_SESSION",
        11: "INCOMPATIBLE_APP_VERSION",
        12: "NOT_READY",
        13: "NOT_AVAILABLE_SESSION",
        15: "SYSTEM_ERROR",
        16: "NO_AVAILABLE_VERIFICATION_METHOD",
        17: "NOT_AUTHENTICATED",
        18: "INVALID_IDENTITY_CREDENTIAL",
        19: "NOT_AVAILABLE_IDENTITY_IDENTIFIER",
        20: "INTERNAL_ERROR",
        21: "NO_SUCH_IDENTITY_IDENFIER",
        22: "DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY",
        23: "ILLEGAL_IDENTITY_CREDENTIAL",
        24: "UNKNOWN_CHANNEL",
        25: "NO_SUCH_MESSAGE_BOX",
        26: "NOT_AVAILABLE_MESSAGE_BOX",
        27: "CHANNEL_DOES_NOT_MATCH",
        28: "NOT_YOUR_MESSAGE",
        29: "MESSAGE_DEFINED_ERROR",
        30: "USER_CANNOT_ACCEPT_PRESENTS",
        32: "USER_NOT_STICKER_OWNER",
        33: "MAINTENANCE_ERROR",
        34: "ACCOUNT_NOT_MATCHED",
        35: "ABUSE_BLOCK",
        36: "NOT_FRIEND",
        37: "NOT_ALLOWED_CALL",
        38: "BLOCK_FRIEND",
        39: "INCOMPATIBLE_VOIP_VERSION",
        40: "INVALID_SNS_ACCESS_TOKEN",
        41: "EXTERNAL_SERVICE_NOT_AVAILABLE",
        42: "NOT_ALLOWED_ADD_CONTACT",
        43: "NOT_CERTIFICATED",
        44: "NOT_ALLOWED_SECONDARY_DEVICE",
        45: "INVALID_PIN_CODE",
        46: "NOT_FOUND_IDENTITY_CREDENTIAL",
        47: "EXCEED_FILE_MAX_SIZE",
        48: "EXCEED_DAILY_QUOTA",
        49: "NOT_SUPPORT_SEND_FILE",
        50: "MUST_UPGRADE",
        51: "NOT_AVAILABLE_PIN_CODE_SESSION",
        52: "EXPIRED_REVISION",
        54: "NOT_YET_PHONE_NUMBER",
        55: "BAD_CALL_NUMBER",
        56: "UNAVAILABLE_CALL_NUMBER",
        57: "NOT_SUPPORT_CALL_SERVICE",
        58: "CONGESTION_CONTROL",
        59: "NO_BALANCE",
        60: "NOT_PERMITTED_CALLER_ID",
        61: "NO_CALLER_ID_LIMIT_EXCEEDED",
        62: "CALLER_ID_VERIFICATION_REQUIRED",
        63: "NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED",
        64: "MESSAGE_NOT_FOUND",
        65: "INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT",
        66: "ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED",
        67: "ACCOUNT_MIGRATION_PINCODE_BLOCKED",
        69: "INVALID_PASSWORD_FORMAT",
        70: "FEATURE_RESTRICTED",
        71: "MESSAGE_NOT_DESTRUCTIBLE",
        72: "PAID_CALL_REDEEM_FAILED",
        73: "PREVENTED_JOIN_BY_TICKET",
        75: "SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT",
        76: "SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY",
        77: "SECURITY_CENTER_NOT_VERIFIED",
        78: "SECURITY_CENTER_BLOCKED_BY_SETTING",
        79: "SECURITY_CENTER_BLOCKED",
        80: "TALK_PROXY_EXCEPTION",
        81: "E2EE_INVALID_PROTOCOL",
        82: "E2EE_RETRY_ENCRYPT",
        83: "E2EE_UPDATE_SENDER_KEY",
        84: "E2EE_UPDATE_RECEIVER_KEY",
        85: "E2EE_INVALID_ARGUMENT",
        86: "E2EE_INVALID_VERSION",
        87: "E2EE_SENDER_DISABLED",
        88: "E2EE_RECEIVER_DISABLED",
        89: "E2EE_SENDER_NOT_ALLOWED",
        90: "E2EE_RECEIVER_NOT_ALLOWED",
        91: "E2EE_RESEND_FAIL",
        92: "E2EE_RESEND_OK",
        93: "HITOKOTO_BACKUP_NO_AVAILABLE_DATA",
        94: "E2EE_UPDATE_PRIMARY_DEVICE",
        95: "SUCCESS",
        96: "CANCEL",
        97: "E2EE_PRIMARY_NOT_SUPPORT",
        98: "E2EE_RETRY_PLAIN",
        99: "E2EE_RECREATE_GROUP_KEY",
        100: "E2EE_GROUP_TOO_MANY_MEMBERS",
        101: "SERVER_BUSY",
        102: "NOT_ALLOWED_ADD_FOLLOW",
        103: "INCOMING_FRIEND_REQUEST_LIMIT",
        104: "OUTGOING_FRIEND_REQUEST_LIMIT",
        105: "OUTGOING_FRIEND_REQUEST_QUOTA",
        106: "DUPLICATED",
        107: "BANNED",
    }

    _NAMES_TO_VALUES = {
        "ILLEGAL_ARGUMENT": 0,
        "AUTHENTICATION_FAILED": 1,
        "DB_FAILED": 2,
        "INVALID_STATE": 3,
        "EXCESSIVE_ACCESS": 4,
        "NOT_FOUND": 5,
        "INVALID_MID": 9,
        "NOT_A_MEMBER": 10,
        "INVALID_LENGTH": 6,
        "NOT_AVAILABLE_USER": 7,
        "NOT_AUTHORIZED_DEVICE": 8,
        "NOT_AUTHORIZED_SESSION": 14,
        "INCOMPATIBLE_APP_VERSION": 11,
        "NOT_READY": 12,
        "NOT_AVAILABLE_SESSION": 13,
        "SYSTEM_ERROR": 15,
        "NO_AVAILABLE_VERIFICATION_METHOD": 16,
        "NOT_AUTHENTICATED": 17,
        "INVALID_IDENTITY_CREDENTIAL": 18,
        "NOT_AVAILABLE_IDENTITY_IDENTIFIER": 19,
        "INTERNAL_ERROR": 20,
        "NO_SUCH_IDENTITY_IDENFIER": 21,
        "DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY": 22,
        "ILLEGAL_IDENTITY_CREDENTIAL": 23,
        "UNKNOWN_CHANNEL": 24,
        "NO_SUCH_MESSAGE_BOX": 25,
        "NOT_AVAILABLE_MESSAGE_BOX": 26,
        "CHANNEL_DOES_NOT_MATCH": 27,
        "NOT_YOUR_MESSAGE": 28,
        "MESSAGE_DEFINED_ERROR": 29,
        "USER_CANNOT_ACCEPT_PRESENTS": 30,
        "USER_NOT_STICKER_OWNER": 32,
        "MAINTENANCE_ERROR": 33,
        "ACCOUNT_NOT_MATCHED": 34,
        "ABUSE_BLOCK": 35,
        "NOT_FRIEND": 36,
        "NOT_ALLOWED_CALL": 37,
        "BLOCK_FRIEND": 38,
        "INCOMPATIBLE_VOIP_VERSION": 39,
        "INVALID_SNS_ACCESS_TOKEN": 40,
        "EXTERNAL_SERVICE_NOT_AVAILABLE": 41,
        "NOT_ALLOWED_ADD_CONTACT": 42,
        "NOT_CERTIFICATED": 43,
        "NOT_ALLOWED_SECONDARY_DEVICE": 44,
        "INVALID_PIN_CODE": 45,
        "NOT_FOUND_IDENTITY_CREDENTIAL": 46,
        "EXCEED_FILE_MAX_SIZE": 47,
        "EXCEED_DAILY_QUOTA": 48,
        "NOT_SUPPORT_SEND_FILE": 49,
        "MUST_UPGRADE": 50,
        "NOT_AVAILABLE_PIN_CODE_SESSION": 51,
        "EXPIRED_REVISION": 52,
        "NOT_YET_PHONE_NUMBER": 54,
        "BAD_CALL_NUMBER": 55,
        "UNAVAILABLE_CALL_NUMBER": 56,
        "NOT_SUPPORT_CALL_SERVICE": 57,
        "CONGESTION_CONTROL": 58,
        "NO_BALANCE": 59,
        "NOT_PERMITTED_CALLER_ID": 60,
        "NO_CALLER_ID_LIMIT_EXCEEDED": 61,
        "CALLER_ID_VERIFICATION_REQUIRED": 62,
        "NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED": 63,
        "MESSAGE_NOT_FOUND": 64,
        "INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT": 65,
        "ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED": 66,
        "ACCOUNT_MIGRATION_PINCODE_BLOCKED": 67,
        "INVALID_PASSWORD_FORMAT": 69,
        "FEATURE_RESTRICTED": 70,
        "MESSAGE_NOT_DESTRUCTIBLE": 71,
        "PAID_CALL_REDEEM_FAILED": 72,
        "PREVENTED_JOIN_BY_TICKET": 73,
        "SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT": 75,
        "SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY": 76,
        "SECURITY_CENTER_NOT_VERIFIED": 77,
        "SECURITY_CENTER_BLOCKED_BY_SETTING": 78,
        "SECURITY_CENTER_BLOCKED": 79,
        "TALK_PROXY_EXCEPTION": 80,
        "E2EE_INVALID_PROTOCOL": 81,
        "E2EE_RETRY_ENCRYPT": 82,
        "E2EE_UPDATE_SENDER_KEY": 83,
        "E2EE_UPDATE_RECEIVER_KEY": 84,
        "E2EE_INVALID_ARGUMENT": 85,
        "E2EE_INVALID_VERSION": 86,
        "E2EE_SENDER_DISABLED": 87,
        "E2EE_RECEIVER_DISABLED": 88,
        "E2EE_SENDER_NOT_ALLOWED": 89,
        "E2EE_RECEIVER_NOT_ALLOWED": 90,
        "E2EE_RESEND_FAIL": 91,
        "E2EE_RESEND_OK": 92,
        "HITOKOTO_BACKUP_NO_AVAILABLE_DATA": 93,
        "E2EE_UPDATE_PRIMARY_DEVICE": 94,
        "SUCCESS": 95,
        "CANCEL": 96,
        "E2EE_PRIMARY_NOT_SUPPORT": 97,
        "E2EE_RETRY_PLAIN": 98,
        "E2EE_RECREATE_GROUP_KEY": 99,
        "E2EE_GROUP_TOO_MANY_MEMBERS": 100,
        "SERVER_BUSY": 101,
        "NOT_ALLOWED_ADD_FOLLOW": 102,
        "INCOMING_FRIEND_REQUEST_LIMIT": 103,
        "OUTGOING_FRIEND_REQUEST_LIMIT": 104,
        "OUTGOING_FRIEND_REQUEST_QUOTA": 105,
        "DUPLICATED": 106,
        "BANNED": 107,
    }


class IdentityProvider(object):
    UNKNOWN = 0
    LINE = 1
    NAVER_KR = 2
    LINE_PHONE = 3

    _VALUES_TO_NAMES = {
        0: "UNKNOWN",
        1: "LINE",
        2: "NAVER_KR",
        3: "LINE_PHONE",
    }

    _NAMES_TO_VALUES = {
        "UNKNOWN": 0,
        "LINE": 1,
        "NAVER_KR": 2,
        "LINE_PHONE": 3,
    }


class LoginResultType(object):
    SUCCESS = 1
    REQUIRE_QRCODE = 2
    REQUIRE_DEVICE_CONFIRM = 3
    REQUIRE_SMS_CONFIRM = 4

    _VALUES_TO_NAMES = {
        1: "SUCCESS",
        2: "REQUIRE_QRCODE",
        3: "REQUIRE_DEVICE_CONFIRM",
        4: "REQUIRE_SMS_CONFIRM",
    }

    _NAMES_TO_VALUES = {
        "SUCCESS": 1,
        "REQUIRE_QRCODE": 2,
        "REQUIRE_DEVICE_CONFIRM": 3,
        "REQUIRE_SMS_CONFIRM": 4,
    }


class MessageOperationType(object):
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

    _VALUES_TO_NAMES = {
        1: "SEND_MESSAGE",
        2: "RECEIVE_MESSAGE",
        3: "READ_MESSAGE",
        4: "NOTIFIED_READ_MESSAGE",
        5: "NOTIFIED_JOIN_CHAT",
        6: "FAILED_SEND_MESSAGE",
        7: "SEND_CONTENT",
        8: "SEND_CONTENT_RECEIPT",
        9: "SEND_CHAT_REMOVED",
        10: "REMOVE_ALL_MESSAGES",
    }

    _NAMES_TO_VALUES = {
        "SEND_MESSAGE": 1,
        "RECEIVE_MESSAGE": 2,
        "READ_MESSAGE": 3,
        "NOTIFIED_READ_MESSAGE": 4,
        "NOTIFIED_JOIN_CHAT": 5,
        "FAILED_SEND_MESSAGE": 6,
        "SEND_CONTENT": 7,
        "SEND_CONTENT_RECEIPT": 8,
        "SEND_CHAT_REMOVED": 9,
        "REMOVE_ALL_MESSAGES": 10,
    }


class MIDType(object):
    USER = 0
    ROOM = 1
    GROUP = 2
    SQUARE = 3
    SQUARE_CHAT = 4
    SQUARE_MEMBER = 5
    BOT = 6

    _VALUES_TO_NAMES = {
        0: "USER",
        1: "ROOM",
        2: "GROUP",
        3: "SQUARE",
        4: "SQUARE_CHAT",
        5: "SQUARE_MEMBER",
        6: "BOT",
    }

    _NAMES_TO_VALUES = {
        "USER": 0,
        "ROOM": 1,
        "GROUP": 2,
        "SQUARE": 3,
        "SQUARE_CHAT": 4,
        "SQUARE_MEMBER": 5,
        "BOT": 6,
    }


class ServiceCode(object):
    UNKNOWN = 0
    TALK = 1
    SQUARE = 2

    _VALUES_TO_NAMES = {
        0: "UNKNOWN",
        1: "TALK",
        2: "SQUARE",
    }

    _NAMES_TO_VALUES = {
        "UNKNOWN": 0,
        "TALK": 1,
        "SQUARE": 2,
    }


class OpStatus(object):
    NORMAL = 0
    ALERT_DISABLED = 1
    ALWAYS = 2

    _VALUES_TO_NAMES = {
        0: "NORMAL",
        1: "ALERT_DISABLED",
        2: "ALWAYS",
    }

    _NAMES_TO_VALUES = {
        "NORMAL": 0,
        "ALERT_DISABLED": 1,
        "ALWAYS": 2,
    }


class OpType(object):
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

    _VALUES_TO_NAMES = {
        0: "END_OF_OPERATION",
        1: "UPDATE_PROFILE",
        36: "UPDATE_SETTINGS",
        2: "NOTIFIED_UPDATE_PROFILE",
        3: "REGISTER_USERID",
        4: "ADD_CONTACT",
        5: "NOTIFIED_ADD_CONTACT",
        6: "BLOCK_CONTACT",
        7: "UNBLOCK_CONTACT",
        8: "NOTIFIED_RECOMMEND_CONTACT",
        9: "CREATE_GROUP",
        10: "UPDATE_GROUP",
        11: "NOTIFIED_UPDATE_GROUP",
        12: "INVITE_INTO_GROUP",
        13: "NOTIFIED_INVITE_INTO_GROUP",
        31: "CANCEL_INVITATION_GROUP",
        32: "NOTIFIED_CANCEL_INVITATION_GROUP",
        14: "LEAVE_GROUP",
        15: "NOTIFIED_LEAVE_GROUP",
        16: "ACCEPT_GROUP_INVITATION",
        17: "NOTIFIED_ACCEPT_GROUP_INVITATION",
        34: "REJECT_GROUP_INVITATION",
        35: "NOTIFIED_REJECT_GROUP_INVITATION",
        18: "KICKOUT_FROM_GROUP",
        19: "NOTIFIED_KICKOUT_FROM_GROUP",
        20: "CREATE_ROOM",
        21: "INVITE_INTO_ROOM",
        22: "NOTIFIED_INVITE_INTO_ROOM",
        23: "LEAVE_ROOM",
        24: "NOTIFIED_LEAVE_ROOM",
        25: "SEND_MESSAGE",
        26: "RECEIVE_MESSAGE",
        27: "SEND_MESSAGE_RECEIPT",
        28: "RECEIVE_MESSAGE_RECEIPT",
        29: "SEND_CONTENT_RECEIPT",
        40: "SEND_CHAT_CHECKED",
        41: "SEND_CHAT_REMOVED",
        30: "RECEIVE_ANNOUNCEMENT",
        38: "INVITE_VIA_EMAIL",
        37: "NOTIFIED_REGISTER_USER",
        33: "NOTIFIED_UNREGISTER_USER",
        39: "NOTIFIED_REQUEST_RECOVERY",
        42: "NOTIFIED_FORCE_SYNC",
        43: "SEND_CONTENT",
        44: "SEND_MESSAGE_MYHOME",
        45: "NOTIFIED_UPDATE_CONTENT_PREVIEW",
        46: "REMOVE_ALL_MESSAGES",
        47: "NOTIFIED_UPDATE_PURCHASES",
        48: "DUMMY",
        49: "UPDATE_CONTACT",
        50: "NOTIFIED_RECEIVED_CALL",
        51: "CANCEL_CALL",
        52: "NOTIFIED_REDIRECT",
        53: "NOTIFIED_CHANNEL_SYNC",
        54: "FAILED_SEND_MESSAGE",
        55: "NOTIFIED_READ_MESSAGE",
        56: "FAILED_EMAIL_CONFIRMATION",
        59: "NOTIFIED_PUSH_NOTICENTER_ITEM",
        58: "NOTIFIED_CHAT_CONTENT",
        60: "NOTIFIED_JOIN_CHAT",
        61: "NOTIFIED_LEAVE_CHAT",
        62: "NOTIFIED_TYPING",
        63: "FRIEND_REQUEST_ACCEPTED",
        64: "DESTROY_MESSAGE",
        65: "NOTIFIED_DESTROY_MESSAGE",
        66: "UPDATE_PUBLICKEYCHAIN",
        67: "NOTIFIED_UPDATE_PUBLICKEYCHAIN",
        68: "NOTIFIED_BLOCK_CONTACT",
        69: "NOTIFIED_UNBLOCK_CONTACT",
        70: "UPDATE_GROUPPREFERENCE",
        71: "NOTIFIED_PAYMENT_EVENT",
        72: "REGISTER_E2EE_PUBLICKEY",
        73: "NOTIFIED_E2EE_KEY_EXCHANGE_REQ",
        74: "NOTIFIED_E2EE_KEY_EXCHANGE_RESP",
        75: "NOTIFIED_E2EE_MESSAGE_RESEND_REQ",
        76: "NOTIFIED_E2EE_MESSAGE_RESEND_RESP",
        77: "NOTIFIED_E2EE_KEY_UPDATE",
        78: "NOTIFIED_BUDDY_UPDATE_PROFILE",
        79: "NOTIFIED_UPDATE_LINEAT_TABS",
        80: "UPDATE_ROOM",
        81: "NOTIFIED_BEACON_DETECTED",
        82: "UPDATE_EXTENDED_PROFILE",
        83: "ADD_FOLLOW",
        84: "NOTIFIED_ADD_FOLLOW",
        85: "DELETE_FOLLOW",
        86: "NOTIFIED_DELETE_FOLLOW",
        87: "UPDATE_TIMELINE_SETTINGS",
        88: "NOTIFIED_FRIEND_REQUEST",
        89: "UPDATE_RINGBACK_TONE",
        90: "NOTIFIED_POSTBACK",
        91: "RECEIVE_READ_WATERMARK",
        92: "NOTIFIED_MESSAGE_DELIVERED",
        93: "NOTIFIED_UPDATE_CHAT_BAR",
        94: "NOTIFIED_CHATAPP_INSTALLED",
        95: "NOTIFIED_CHATAPP_UPDATED",
        96: "NOTIFIED_CHATAPP_NEW_MARK",
        97: "NOTIFIED_CHATAPP_DELETED",
        98: "NOTIFIED_CHATAPP_SYNC",
        99: "NOTIFIED_UPDATE_MESSAGE",
    }

    _NAMES_TO_VALUES = {
        "END_OF_OPERATION": 0,
        "UPDATE_PROFILE": 1,
        "UPDATE_SETTINGS": 36,
        "NOTIFIED_UPDATE_PROFILE": 2,
        "REGISTER_USERID": 3,
        "ADD_CONTACT": 4,
        "NOTIFIED_ADD_CONTACT": 5,
        "BLOCK_CONTACT": 6,
        "UNBLOCK_CONTACT": 7,
        "NOTIFIED_RECOMMEND_CONTACT": 8,
        "CREATE_GROUP": 9,
        "UPDATE_GROUP": 10,
        "NOTIFIED_UPDATE_GROUP": 11,
        "INVITE_INTO_GROUP": 12,
        "NOTIFIED_INVITE_INTO_GROUP": 13,
        "CANCEL_INVITATION_GROUP": 31,
        "NOTIFIED_CANCEL_INVITATION_GROUP": 32,
        "LEAVE_GROUP": 14,
        "NOTIFIED_LEAVE_GROUP": 15,
        "ACCEPT_GROUP_INVITATION": 16,
        "NOTIFIED_ACCEPT_GROUP_INVITATION": 17,
        "REJECT_GROUP_INVITATION": 34,
        "NOTIFIED_REJECT_GROUP_INVITATION": 35,
        "KICKOUT_FROM_GROUP": 18,
        "NOTIFIED_KICKOUT_FROM_GROUP": 19,
        "CREATE_ROOM": 20,
        "INVITE_INTO_ROOM": 21,
        "NOTIFIED_INVITE_INTO_ROOM": 22,
        "LEAVE_ROOM": 23,
        "NOTIFIED_LEAVE_ROOM": 24,
        "SEND_MESSAGE": 25,
        "RECEIVE_MESSAGE": 26,
        "SEND_MESSAGE_RECEIPT": 27,
        "RECEIVE_MESSAGE_RECEIPT": 28,
        "SEND_CONTENT_RECEIPT": 29,
        "SEND_CHAT_CHECKED": 40,
        "SEND_CHAT_REMOVED": 41,
        "RECEIVE_ANNOUNCEMENT": 30,
        "INVITE_VIA_EMAIL": 38,
        "NOTIFIED_REGISTER_USER": 37,
        "NOTIFIED_UNREGISTER_USER": 33,
        "NOTIFIED_REQUEST_RECOVERY": 39,
        "NOTIFIED_FORCE_SYNC": 42,
        "SEND_CONTENT": 43,
        "SEND_MESSAGE_MYHOME": 44,
        "NOTIFIED_UPDATE_CONTENT_PREVIEW": 45,
        "REMOVE_ALL_MESSAGES": 46,
        "NOTIFIED_UPDATE_PURCHASES": 47,
        "DUMMY": 48,
        "UPDATE_CONTACT": 49,
        "NOTIFIED_RECEIVED_CALL": 50,
        "CANCEL_CALL": 51,
        "NOTIFIED_REDIRECT": 52,
        "NOTIFIED_CHANNEL_SYNC": 53,
        "FAILED_SEND_MESSAGE": 54,
        "NOTIFIED_READ_MESSAGE": 55,
        "FAILED_EMAIL_CONFIRMATION": 56,
        "NOTIFIED_PUSH_NOTICENTER_ITEM": 59,
        "NOTIFIED_CHAT_CONTENT": 58,
        "NOTIFIED_JOIN_CHAT": 60,
        "NOTIFIED_LEAVE_CHAT": 61,
        "NOTIFIED_TYPING": 62,
        "FRIEND_REQUEST_ACCEPTED": 63,
        "DESTROY_MESSAGE": 64,
        "NOTIFIED_DESTROY_MESSAGE": 65,
        "UPDATE_PUBLICKEYCHAIN": 66,
        "NOTIFIED_UPDATE_PUBLICKEYCHAIN": 67,
        "NOTIFIED_BLOCK_CONTACT": 68,
        "NOTIFIED_UNBLOCK_CONTACT": 69,
        "UPDATE_GROUPPREFERENCE": 70,
        "NOTIFIED_PAYMENT_EVENT": 71,
        "REGISTER_E2EE_PUBLICKEY": 72,
        "NOTIFIED_E2EE_KEY_EXCHANGE_REQ": 73,
        "NOTIFIED_E2EE_KEY_EXCHANGE_RESP": 74,
        "NOTIFIED_E2EE_MESSAGE_RESEND_REQ": 75,
        "NOTIFIED_E2EE_MESSAGE_RESEND_RESP": 76,
        "NOTIFIED_E2EE_KEY_UPDATE": 77,
        "NOTIFIED_BUDDY_UPDATE_PROFILE": 78,
        "NOTIFIED_UPDATE_LINEAT_TABS": 79,
        "UPDATE_ROOM": 80,
        "NOTIFIED_BEACON_DETECTED": 81,
        "UPDATE_EXTENDED_PROFILE": 82,
        "ADD_FOLLOW": 83,
        "NOTIFIED_ADD_FOLLOW": 84,
        "DELETE_FOLLOW": 85,
        "NOTIFIED_DELETE_FOLLOW": 86,
        "UPDATE_TIMELINE_SETTINGS": 87,
        "NOTIFIED_FRIEND_REQUEST": 88,
        "UPDATE_RINGBACK_TONE": 89,
        "NOTIFIED_POSTBACK": 90,
        "RECEIVE_READ_WATERMARK": 91,
        "NOTIFIED_MESSAGE_DELIVERED": 92,
        "NOTIFIED_UPDATE_CHAT_BAR": 93,
        "NOTIFIED_CHATAPP_INSTALLED": 94,
        "NOTIFIED_CHATAPP_UPDATED": 95,
        "NOTIFIED_CHATAPP_NEW_MARK": 96,
        "NOTIFIED_CHATAPP_DELETED": 97,
        "NOTIFIED_CHATAPP_SYNC": 98,
        "NOTIFIED_UPDATE_MESSAGE": 99,
    }


class ContactStatus(object):
    UNSPECIFIED = 0
    FRIEND = 1
    FRIEND_BLOCKED = 2
    RECOMMEND = 3
    RECOMMEND_BLOCKED = 4
    DELETED = 5
    DELETED_BLOCKED = 6

    _VALUES_TO_NAMES = {
        0: "UNSPECIFIED",
        1: "FRIEND",
        2: "FRIEND_BLOCKED",
        3: "RECOMMEND",
        4: "RECOMMEND_BLOCKED",
        5: "DELETED",
        6: "DELETED_BLOCKED",
    }

    _NAMES_TO_VALUES = {
        "UNSPECIFIED": 0,
        "FRIEND": 1,
        "FRIEND_BLOCKED": 2,
        "RECOMMEND": 3,
        "RECOMMEND_BLOCKED": 4,
        "DELETED": 5,
        "DELETED_BLOCKED": 6,
    }


class ContactRelation(object):
    ONEWAY = 0
    BOTH = 1
    NOT_REGISTERED = 2

    _VALUES_TO_NAMES = {
        0: "ONEWAY",
        1: "BOTH",
        2: "NOT_REGISTERED",
    }

    _NAMES_TO_VALUES = {
        "ONEWAY": 0,
        "BOTH": 1,
        "NOT_REGISTERED": 2,
    }


class LoginResult(object):
    """
    Attributes:
     - authToken
     - certificate
     - verifier
     - pinCode
     - type
    """


    def __init__(self, authToken=None, certificate=None, verifier=None, pinCode=None, type=None,):
        self.authToken = authToken
        self.certificate = certificate
        self.verifier = verifier
        self.pinCode = pinCode
        self.type = type

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.authToken = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.certificate = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.STRING:
                    self.verifier = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.STRING:
                    self.pinCode = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 5:
                if ftype == TType.I32:
                    self.type = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('LoginResult')
        if self.authToken is not None:
            oprot.writeFieldBegin('authToken', TType.STRING, 1)
            oprot.writeString(self.authToken.encode('utf-8') if sys.version_info[0] == 2 else self.authToken)
            oprot.writeFieldEnd()
        if self.certificate is not None:
            oprot.writeFieldBegin('certificate', TType.STRING, 2)
            oprot.writeString(self.certificate.encode('utf-8') if sys.version_info[0] == 2 else self.certificate)
            oprot.writeFieldEnd()
        if self.verifier is not None:
            oprot.writeFieldBegin('verifier', TType.STRING, 3)
            oprot.writeString(self.verifier.encode('utf-8') if sys.version_info[0] == 2 else self.verifier)
            oprot.writeFieldEnd()
        if self.pinCode is not None:
            oprot.writeFieldBegin('pinCode', TType.STRING, 4)
            oprot.writeString(self.pinCode.encode('utf-8') if sys.version_info[0] == 2 else self.pinCode)
            oprot.writeFieldEnd()
        if self.type is not None:
            oprot.writeFieldBegin('type', TType.I32, 5)
            oprot.writeI32(self.type)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Contact(object):
    """
    Attributes:
     - mid
     - createdTime
     - type
     - status
     - relation
     - displayName
     - phoneticName
     - pictureStatus
     - thumbnailUrl
     - statusMessage
     - displayNameOverridden
     - favoriteTime
     - capableVoiceCall
     - capableVideoCall
     - capableMyhome
     - capableBuddy
     - attributes
     - settings
     - picturePath
     - recommendParams
     - friendRequestStatus
     - musicProfile
     - videoProfile
    """


    def __init__(self, mid=None, createdTime=None, type=None, status=None, relation=None, displayName=None, phoneticName=None, pictureStatus=None, thumbnailUrl=None, statusMessage=None, displayNameOverridden=None, favoriteTime=None, capableVoiceCall=None, capableVideoCall=None, capableMyhome=None, capableBuddy=None, attributes=None, settings=None, picturePath=None, recommendParams=None, friendRequestStatus=None, musicProfile=None, videoProfile=None,):
        self.mid = mid
        self.createdTime = createdTime
        self.type = type
        self.status = status
        self.relation = relation
        self.displayName = displayName
        self.phoneticName = phoneticName
        self.pictureStatus = pictureStatus
        self.thumbnailUrl = thumbnailUrl
        self.statusMessage = statusMessage
        self.displayNameOverridden = displayNameOverridden
        self.favoriteTime = favoriteTime
        self.capableVoiceCall = capableVoiceCall
        self.capableVideoCall = capableVideoCall
        self.capableMyhome = capableMyhome
        self.capableBuddy = capableBuddy
        self.attributes = attributes
        self.settings = settings
        self.picturePath = picturePath
        self.recommendParams = recommendParams
        self.friendRequestStatus = friendRequestStatus
        self.musicProfile = musicProfile
        self.videoProfile = videoProfile

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.mid = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I64:
                    self.createdTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.I32:
                    self.type = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.I32:
                    self.status = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 21:
                if ftype == TType.I32:
                    self.relation = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 22:
                if ftype == TType.STRING:
                    self.displayName = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 23:
                if ftype == TType.STRING:
                    self.phoneticName = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 24:
                if ftype == TType.STRING:
                    self.pictureStatus = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 25:
                if ftype == TType.STRING:
                    self.thumbnailUrl = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 26:
                if ftype == TType.STRING:
                    self.statusMessage = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 27:
                if ftype == TType.STRING:
                    self.displayNameOverridden = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 28:
                if ftype == TType.I64:
                    self.favoriteTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 31:
                if ftype == TType.BOOL:
                    self.capableVoiceCall = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 32:
                if ftype == TType.BOOL:
                    self.capableVideoCall = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 33:
                if ftype == TType.BOOL:
                    self.capableMyhome = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 34:
                if ftype == TType.BOOL:
                    self.capableBuddy = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 35:
                if ftype == TType.I32:
                    self.attributes = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 36:
                if ftype == TType.I64:
                    self.settings = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 37:
                if ftype == TType.STRING:
                    self.picturePath = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 38:
                if ftype == TType.STRING:
                    self.recommendParams = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 39:
                if ftype == TType.I32:
                    self.friendRequestStatus = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 40:
                if ftype == TType.STRING:
                    self.musicProfile = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 42:
                if ftype == TType.STRING:
                    self.videoProfile = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Contact')
        if self.mid is not None:
            oprot.writeFieldBegin('mid', TType.STRING, 1)
            oprot.writeString(self.mid.encode('utf-8') if sys.version_info[0] == 2 else self.mid)
            oprot.writeFieldEnd()
        if self.createdTime is not None:
            oprot.writeFieldBegin('createdTime', TType.I64, 2)
            oprot.writeI64(self.createdTime)
            oprot.writeFieldEnd()
        if self.type is not None:
            oprot.writeFieldBegin('type', TType.I32, 10)
            oprot.writeI32(self.type)
            oprot.writeFieldEnd()
        if self.status is not None:
            oprot.writeFieldBegin('status', TType.I32, 11)
            oprot.writeI32(self.status)
            oprot.writeFieldEnd()
        if self.relation is not None:
            oprot.writeFieldBegin('relation', TType.I32, 21)
            oprot.writeI32(self.relation)
            oprot.writeFieldEnd()
        if self.displayName is not None:
            oprot.writeFieldBegin('displayName', TType.STRING, 22)
            oprot.writeString(self.displayName.encode('utf-8') if sys.version_info[0] == 2 else self.displayName)
            oprot.writeFieldEnd()
        if self.phoneticName is not None:
            oprot.writeFieldBegin('phoneticName', TType.STRING, 23)
            oprot.writeString(self.phoneticName.encode('utf-8') if sys.version_info[0] == 2 else self.phoneticName)
            oprot.writeFieldEnd()
        if self.pictureStatus is not None:
            oprot.writeFieldBegin('pictureStatus', TType.STRING, 24)
            oprot.writeString(self.pictureStatus.encode('utf-8') if sys.version_info[0] == 2 else self.pictureStatus)
            oprot.writeFieldEnd()
        if self.thumbnailUrl is not None:
            oprot.writeFieldBegin('thumbnailUrl', TType.STRING, 25)
            oprot.writeString(self.thumbnailUrl.encode('utf-8') if sys.version_info[0] == 2 else self.thumbnailUrl)
            oprot.writeFieldEnd()
        if self.statusMessage is not None:
            oprot.writeFieldBegin('statusMessage', TType.STRING, 26)
            oprot.writeString(self.statusMessage.encode('utf-8') if sys.version_info[0] == 2 else self.statusMessage)
            oprot.writeFieldEnd()
        if self.displayNameOverridden is not None:
            oprot.writeFieldBegin('displayNameOverridden', TType.STRING, 27)
            oprot.writeString(self.displayNameOverridden.encode('utf-8') if sys.version_info[0] == 2 else self.displayNameOverridden)
            oprot.writeFieldEnd()
        if self.favoriteTime is not None:
            oprot.writeFieldBegin('favoriteTime', TType.I64, 28)
            oprot.writeI64(self.favoriteTime)
            oprot.writeFieldEnd()
        if self.capableVoiceCall is not None:
            oprot.writeFieldBegin('capableVoiceCall', TType.BOOL, 31)
            oprot.writeBool(self.capableVoiceCall)
            oprot.writeFieldEnd()
        if self.capableVideoCall is not None:
            oprot.writeFieldBegin('capableVideoCall', TType.BOOL, 32)
            oprot.writeBool(self.capableVideoCall)
            oprot.writeFieldEnd()
        if self.capableMyhome is not None:
            oprot.writeFieldBegin('capableMyhome', TType.BOOL, 33)
            oprot.writeBool(self.capableMyhome)
            oprot.writeFieldEnd()
        if self.capableBuddy is not None:
            oprot.writeFieldBegin('capableBuddy', TType.BOOL, 34)
            oprot.writeBool(self.capableBuddy)
            oprot.writeFieldEnd()
        if self.attributes is not None:
            oprot.writeFieldBegin('attributes', TType.I32, 35)
            oprot.writeI32(self.attributes)
            oprot.writeFieldEnd()
        if self.settings is not None:
            oprot.writeFieldBegin('settings', TType.I64, 36)
            oprot.writeI64(self.settings)
            oprot.writeFieldEnd()
        if self.picturePath is not None:
            oprot.writeFieldBegin('picturePath', TType.STRING, 37)
            oprot.writeString(self.picturePath.encode('utf-8') if sys.version_info[0] == 2 else self.picturePath)
            oprot.writeFieldEnd()
        if self.recommendParams is not None:
            oprot.writeFieldBegin('recommendParams', TType.STRING, 38)
            oprot.writeString(self.recommendParams.encode('utf-8') if sys.version_info[0] == 2 else self.recommendParams)
            oprot.writeFieldEnd()
        if self.friendRequestStatus is not None:
            oprot.writeFieldBegin('friendRequestStatus', TType.I32, 39)
            oprot.writeI32(self.friendRequestStatus)
            oprot.writeFieldEnd()
        if self.musicProfile is not None:
            oprot.writeFieldBegin('musicProfile', TType.STRING, 40)
            oprot.writeString(self.musicProfile.encode('utf-8') if sys.version_info[0] == 2 else self.musicProfile)
            oprot.writeFieldEnd()
        if self.videoProfile is not None:
            oprot.writeFieldBegin('videoProfile', TType.STRING, 42)
            oprot.writeString(self.videoProfile.encode('utf-8') if sys.version_info[0] == 2 else self.videoProfile)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Location(object):
    """
    Attributes:
     - title
     - address
     - latitude
     - longitude
     - phone
    """


    def __init__(self, title=None, address=None, latitude=None, longitude=None, phone=None,):
        self.title = title
        self.address = address
        self.latitude = latitude
        self.longitude = longitude
        self.phone = phone

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.title = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.address = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.DOUBLE:
                    self.latitude = iprot.readDouble()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.DOUBLE:
                    self.longitude = iprot.readDouble()
                else:
                    iprot.skip(ftype)
            elif fid == 5:
                if ftype == TType.STRING:
                    self.phone = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Location')
        if self.title is not None:
            oprot.writeFieldBegin('title', TType.STRING, 1)
            oprot.writeString(self.title.encode('utf-8') if sys.version_info[0] == 2 else self.title)
            oprot.writeFieldEnd()
        if self.address is not None:
            oprot.writeFieldBegin('address', TType.STRING, 2)
            oprot.writeString(self.address.encode('utf-8') if sys.version_info[0] == 2 else self.address)
            oprot.writeFieldEnd()
        if self.latitude is not None:
            oprot.writeFieldBegin('latitude', TType.DOUBLE, 3)
            oprot.writeDouble(self.latitude)
            oprot.writeFieldEnd()
        if self.longitude is not None:
            oprot.writeFieldBegin('longitude', TType.DOUBLE, 4)
            oprot.writeDouble(self.longitude)
            oprot.writeFieldEnd()
        if self.phone is not None:
            oprot.writeFieldBegin('phone', TType.STRING, 5)
            oprot.writeString(self.phone.encode('utf-8') if sys.version_info[0] == 2 else self.phone)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class GroupPreference(object):
    """
    Attributes:
     - invitationTicket
     - favoriteTimestamp
    """


    def __init__(self, invitationTicket=None, favoriteTimestamp=None,):
        self.invitationTicket = invitationTicket
        self.favoriteTimestamp = favoriteTimestamp

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.invitationTicket = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I64:
                    self.favoriteTimestamp = iprot.readI64()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('GroupPreference')
        if self.invitationTicket is not None:
            oprot.writeFieldBegin('invitationTicket', TType.STRING, 1)
            oprot.writeString(self.invitationTicket.encode('utf-8') if sys.version_info[0] == 2 else self.invitationTicket)
            oprot.writeFieldEnd()
        if self.favoriteTimestamp is not None:
            oprot.writeFieldBegin('favoriteTimestamp', TType.I64, 2)
            oprot.writeI64(self.favoriteTimestamp)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Group(object):
    """
    Attributes:
     - id
     - createdTime
     - name
     - pictureStatus
     - preventedJoinByTicket
     - groupPreference
     - members
     - creator
     - invitee
     - notificationDisabled
    """


    def __init__(self, id=None, createdTime=None, name=None, pictureStatus=None, preventedJoinByTicket=None, groupPreference=None, members=None, creator=None, invitee=None, notificationDisabled=None,):
        self.id = id
        self.createdTime = createdTime
        self.name = name
        self.pictureStatus = pictureStatus
        self.preventedJoinByTicket = preventedJoinByTicket
        self.groupPreference = groupPreference
        self.members = members
        self.creator = creator
        self.invitee = invitee
        self.notificationDisabled = notificationDisabled

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.id = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I64:
                    self.createdTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.STRING:
                    self.name = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.STRING:
                    self.pictureStatus = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 12:
                if ftype == TType.BOOL:
                    self.preventedJoinByTicket = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 13:
                if ftype == TType.STRUCT:
                    self.groupPreference = GroupPreference()
                    self.groupPreference.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 20:
                if ftype == TType.LIST:
                    self.members = []
                    (_etype3, _size0) = iprot.readListBegin()
                    for _i4 in range(_size0):
                        _elem5 = Contact()
                        _elem5.read(iprot)
                        self.members.append(_elem5)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 21:
                if ftype == TType.STRUCT:
                    self.creator = Contact()
                    self.creator.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 22:
                if ftype == TType.LIST:
                    self.invitee = []
                    (_etype9, _size6) = iprot.readListBegin()
                    for _i10 in range(_size6):
                        _elem11 = Contact()
                        _elem11.read(iprot)
                        self.invitee.append(_elem11)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 31:
                if ftype == TType.BOOL:
                    self.notificationDisabled = iprot.readBool()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Group')
        if self.id is not None:
            oprot.writeFieldBegin('id', TType.STRING, 1)
            oprot.writeString(self.id.encode('utf-8') if sys.version_info[0] == 2 else self.id)
            oprot.writeFieldEnd()
        if self.createdTime is not None:
            oprot.writeFieldBegin('createdTime', TType.I64, 2)
            oprot.writeI64(self.createdTime)
            oprot.writeFieldEnd()
        if self.name is not None:
            oprot.writeFieldBegin('name', TType.STRING, 10)
            oprot.writeString(self.name.encode('utf-8') if sys.version_info[0] == 2 else self.name)
            oprot.writeFieldEnd()
        if self.pictureStatus is not None:
            oprot.writeFieldBegin('pictureStatus', TType.STRING, 11)
            oprot.writeString(self.pictureStatus.encode('utf-8') if sys.version_info[0] == 2 else self.pictureStatus)
            oprot.writeFieldEnd()
        if self.preventedJoinByTicket is not None:
            oprot.writeFieldBegin('preventedJoinByTicket', TType.BOOL, 12)
            oprot.writeBool(self.preventedJoinByTicket)
            oprot.writeFieldEnd()
        if self.groupPreference is not None:
            oprot.writeFieldBegin('groupPreference', TType.STRUCT, 13)
            self.groupPreference.write(oprot)
            oprot.writeFieldEnd()
        if self.members is not None:
            oprot.writeFieldBegin('members', TType.LIST, 20)
            oprot.writeListBegin(TType.STRUCT, len(self.members))
            for iter12 in self.members:
                iter12.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.creator is not None:
            oprot.writeFieldBegin('creator', TType.STRUCT, 21)
            self.creator.write(oprot)
            oprot.writeFieldEnd()
        if self.invitee is not None:
            oprot.writeFieldBegin('invitee', TType.LIST, 22)
            oprot.writeListBegin(TType.STRUCT, len(self.invitee))
            for iter13 in self.invitee:
                iter13.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.notificationDisabled is not None:
            oprot.writeFieldBegin('notificationDisabled', TType.BOOL, 31)
            oprot.writeBool(self.notificationDisabled)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class loginRequest(object):
    """
    Attributes:
     - type
     - identityProvider
     - identifier
     - password
     - keepLoggedIn
     - accessLocation
     - systemName
     - certificate
     - verifier
     - secret
     - e2eeVersion
    """


    def __init__(self, type=None, identityProvider=None, identifier=None, password=None, keepLoggedIn=None, accessLocation=None, systemName=None, certificate=None, verifier=None, secret=None, e2eeVersion=None,):
        self.type = type
        self.identityProvider = identityProvider
        self.identifier = identifier
        self.password = password
        self.keepLoggedIn = keepLoggedIn
        self.accessLocation = accessLocation
        self.systemName = systemName
        self.certificate = certificate
        self.verifier = verifier
        self.secret = secret
        self.e2eeVersion = e2eeVersion

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.type = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I32:
                    self.identityProvider = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.STRING:
                    self.identifier = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.STRING:
                    self.password = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 5:
                if ftype == TType.BOOL:
                    self.keepLoggedIn = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 6:
                if ftype == TType.STRING:
                    self.accessLocation = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 7:
                if ftype == TType.STRING:
                    self.systemName = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 8:
                if ftype == TType.STRING:
                    self.certificate = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 9:
                if ftype == TType.STRING:
                    self.verifier = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.STRING:
                    self.secret = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.I32:
                    self.e2eeVersion = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('loginRequest')
        if self.type is not None:
            oprot.writeFieldBegin('type', TType.I32, 1)
            oprot.writeI32(self.type)
            oprot.writeFieldEnd()
        if self.identityProvider is not None:
            oprot.writeFieldBegin('identityProvider', TType.I32, 2)
            oprot.writeI32(self.identityProvider)
            oprot.writeFieldEnd()
        if self.identifier is not None:
            oprot.writeFieldBegin('identifier', TType.STRING, 3)
            oprot.writeString(self.identifier.encode('utf-8') if sys.version_info[0] == 2 else self.identifier)
            oprot.writeFieldEnd()
        if self.password is not None:
            oprot.writeFieldBegin('password', TType.STRING, 4)
            oprot.writeString(self.password.encode('utf-8') if sys.version_info[0] == 2 else self.password)
            oprot.writeFieldEnd()
        if self.keepLoggedIn is not None:
            oprot.writeFieldBegin('keepLoggedIn', TType.BOOL, 5)
            oprot.writeBool(self.keepLoggedIn)
            oprot.writeFieldEnd()
        if self.accessLocation is not None:
            oprot.writeFieldBegin('accessLocation', TType.STRING, 6)
            oprot.writeString(self.accessLocation.encode('utf-8') if sys.version_info[0] == 2 else self.accessLocation)
            oprot.writeFieldEnd()
        if self.systemName is not None:
            oprot.writeFieldBegin('systemName', TType.STRING, 7)
            oprot.writeString(self.systemName.encode('utf-8') if sys.version_info[0] == 2 else self.systemName)
            oprot.writeFieldEnd()
        if self.certificate is not None:
            oprot.writeFieldBegin('certificate', TType.STRING, 8)
            oprot.writeString(self.certificate.encode('utf-8') if sys.version_info[0] == 2 else self.certificate)
            oprot.writeFieldEnd()
        if self.verifier is not None:
            oprot.writeFieldBegin('verifier', TType.STRING, 9)
            oprot.writeString(self.verifier.encode('utf-8') if sys.version_info[0] == 2 else self.verifier)
            oprot.writeFieldEnd()
        if self.secret is not None:
            oprot.writeFieldBegin('secret', TType.STRING, 10)
            oprot.writeString(self.secret.encode('utf-8') if sys.version_info[0] == 2 else self.secret)
            oprot.writeFieldEnd()
        if self.e2eeVersion is not None:
            oprot.writeFieldBegin('e2eeVersion', TType.I32, 11)
            oprot.writeI32(self.e2eeVersion)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class LoginSession(object):
    """
    Attributes:
     - tokenKey
     - expirationTime
     - applicationType
     - systemName
     - accessLocation
    """


    def __init__(self, tokenKey=None, expirationTime=None, applicationType=None, systemName=None, accessLocation=None,):
        self.tokenKey = tokenKey
        self.expirationTime = expirationTime
        self.applicationType = applicationType
        self.systemName = systemName
        self.accessLocation = accessLocation

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.tokenKey = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.I64:
                    self.expirationTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.I32:
                    self.applicationType = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 12:
                if ftype == TType.STRING:
                    self.systemName = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 22:
                if ftype == TType.STRING:
                    self.accessLocation = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('LoginSession')
        if self.tokenKey is not None:
            oprot.writeFieldBegin('tokenKey', TType.STRING, 1)
            oprot.writeString(self.tokenKey.encode('utf-8') if sys.version_info[0] == 2 else self.tokenKey)
            oprot.writeFieldEnd()
        if self.expirationTime is not None:
            oprot.writeFieldBegin('expirationTime', TType.I64, 3)
            oprot.writeI64(self.expirationTime)
            oprot.writeFieldEnd()
        if self.applicationType is not None:
            oprot.writeFieldBegin('applicationType', TType.I32, 11)
            oprot.writeI32(self.applicationType)
            oprot.writeFieldEnd()
        if self.systemName is not None:
            oprot.writeFieldBegin('systemName', TType.STRING, 12)
            oprot.writeString(self.systemName.encode('utf-8') if sys.version_info[0] == 2 else self.systemName)
            oprot.writeFieldEnd()
        if self.accessLocation is not None:
            oprot.writeFieldBegin('accessLocation', TType.STRING, 22)
            oprot.writeString(self.accessLocation.encode('utf-8') if sys.version_info[0] == 2 else self.accessLocation)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Message(object):
    """
    Attributes:
     - _from
     - to
     - toType
     - id
     - createdTime
     - deliveredTime
     - text
     - location
     - hasContent
     - contentType
     - contentPreview
     - contentMetadata
     - sessionId
     - chunks
     - relatedMessageId
     - messageRelationType
     - readCount
     - relatedMessageServiceCode
    """


    def __init__(self, _from=None, to=None, toType=None, id=None, createdTime=None, deliveredTime=None, text=None, location=None, hasContent=None, contentType=None, contentPreview=None, contentMetadata=None, sessionId=None, chunks=None, relatedMessageId=None, messageRelationType=None, readCount=None, relatedMessageServiceCode=None,):
        self._from = _from
        self.to = to
        self.toType = toType
        self.id = id
        self.createdTime = createdTime
        self.deliveredTime = deliveredTime
        self.text = text
        self.location = location
        self.hasContent = hasContent
        self.contentType = contentType
        self.contentPreview = contentPreview
        self.contentMetadata = contentMetadata
        self.sessionId = sessionId
        self.chunks = chunks
        self.relatedMessageId = relatedMessageId
        self.messageRelationType = messageRelationType
        self.readCount = readCount
        self.relatedMessageServiceCode = relatedMessageServiceCode

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self._from = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.to = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.I32:
                    self.toType = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.STRING:
                    self.id = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 5:
                if ftype == TType.I64:
                    self.createdTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 6:
                if ftype == TType.I64:
                    self.deliveredTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.STRING:
                    self.text = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.STRUCT:
                    self.location = Location()
                    self.location.read(iprot)
                else:
                    iprot.skip(ftype)
            elif fid == 14:
                if ftype == TType.BOOL:
                    self.hasContent = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 15:
                if ftype == TType.I32:
                    self.contentType = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 17:
                if ftype == TType.STRING:
                    self.contentPreview = iprot.readBinary()
                else:
                    iprot.skip(ftype)
            elif fid == 18:
                if ftype == TType.MAP:
                    self.contentMetadata = {}
                    (_ktype15, _vtype16, _size14) = iprot.readMapBegin()
                    for _i18 in range(_size14):
                        _key19 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val20 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.contentMetadata[_key19] = _val20
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 19:
                if ftype == TType.I64:
                    self.sessionId = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 20:
                if ftype == TType.LIST:
                    self.chunks = []
                    (_etype24, _size21) = iprot.readListBegin()
                    for _i25 in range(_size21):
                        _elem26 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.chunks.append(_elem26)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 21:
                if ftype == TType.STRING:
                    self.relatedMessageId = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 22:
                if ftype == TType.I64:
                    self.messageRelationType = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 23:
                if ftype == TType.I64:
                    self.readCount = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 24:
                if ftype == TType.I64:
                    self.relatedMessageServiceCode = iprot.readI64()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Message')
        if self._from is not None:
            oprot.writeFieldBegin('_from', TType.STRING, 1)
            oprot.writeString(self._from.encode('utf-8') if sys.version_info[0] == 2 else self._from)
            oprot.writeFieldEnd()
        if self.to is not None:
            oprot.writeFieldBegin('to', TType.STRING, 2)
            oprot.writeString(self.to.encode('utf-8') if sys.version_info[0] == 2 else self.to)
            oprot.writeFieldEnd()
        if self.toType is not None:
            oprot.writeFieldBegin('toType', TType.I32, 3)
            oprot.writeI32(self.toType)
            oprot.writeFieldEnd()
        if self.id is not None:
            oprot.writeFieldBegin('id', TType.STRING, 4)
            oprot.writeString(self.id.encode('utf-8') if sys.version_info[0] == 2 else self.id)
            oprot.writeFieldEnd()
        if self.createdTime is not None:
            oprot.writeFieldBegin('createdTime', TType.I64, 5)
            oprot.writeI64(self.createdTime)
            oprot.writeFieldEnd()
        if self.deliveredTime is not None:
            oprot.writeFieldBegin('deliveredTime', TType.I64, 6)
            oprot.writeI64(self.deliveredTime)
            oprot.writeFieldEnd()
        if self.text is not None:
            oprot.writeFieldBegin('text', TType.STRING, 10)
            oprot.writeString(self.text.encode('utf-8') if sys.version_info[0] == 2 else self.text)
            oprot.writeFieldEnd()
        if self.location is not None:
            oprot.writeFieldBegin('location', TType.STRUCT, 11)
            self.location.write(oprot)
            oprot.writeFieldEnd()
        if self.hasContent is not None:
            oprot.writeFieldBegin('hasContent', TType.BOOL, 14)
            oprot.writeBool(self.hasContent)
            oprot.writeFieldEnd()
        if self.contentType is not None:
            oprot.writeFieldBegin('contentType', TType.I32, 15)
            oprot.writeI32(self.contentType)
            oprot.writeFieldEnd()
        if self.contentPreview is not None:
            oprot.writeFieldBegin('contentPreview', TType.STRING, 17)
            oprot.writeBinary(self.contentPreview)
            oprot.writeFieldEnd()
        if self.contentMetadata is not None:
            oprot.writeFieldBegin('contentMetadata', TType.MAP, 18)
            oprot.writeMapBegin(TType.STRING, TType.STRING, len(self.contentMetadata))
            for kiter27, viter28 in self.contentMetadata.items():
                oprot.writeString(kiter27.encode('utf-8') if sys.version_info[0] == 2 else kiter27)
                oprot.writeString(viter28.encode('utf-8') if sys.version_info[0] == 2 else viter28)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        if self.sessionId is not None:
            oprot.writeFieldBegin('sessionId', TType.I64, 19)
            oprot.writeI64(self.sessionId)
            oprot.writeFieldEnd()
        if self.chunks is not None:
            oprot.writeFieldBegin('chunks', TType.LIST, 20)
            oprot.writeListBegin(TType.STRING, len(self.chunks))
            for iter29 in self.chunks:
                oprot.writeString(iter29.encode('utf-8') if sys.version_info[0] == 2 else iter29)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.relatedMessageId is not None:
            oprot.writeFieldBegin('relatedMessageId', TType.STRING, 21)
            oprot.writeString(self.relatedMessageId.encode('utf-8') if sys.version_info[0] == 2 else self.relatedMessageId)
            oprot.writeFieldEnd()
        if self.messageRelationType is not None:
            oprot.writeFieldBegin('messageRelationType', TType.I64, 22)
            oprot.writeI64(self.messageRelationType)
            oprot.writeFieldEnd()
        if self.readCount is not None:
            oprot.writeFieldBegin('readCount', TType.I64, 23)
            oprot.writeI64(self.readCount)
            oprot.writeFieldEnd()
        if self.relatedMessageServiceCode is not None:
            oprot.writeFieldBegin('relatedMessageServiceCode', TType.I64, 24)
            oprot.writeI64(self.relatedMessageServiceCode)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class MessageOperation(object):
    """
    Attributes:
     - revision
     - createdTime
     - type
     - reqSeq
     - status
     - param1
     - param2
     - param3
     - message
    """


    def __init__(self, revision=None, createdTime=None, type=None, reqSeq=None, status=None, param1=None, param2=None, param3=None, message=None,):
        self.revision = revision
        self.createdTime = createdTime
        self.type = type
        self.reqSeq = reqSeq
        self.status = status
        self.param1 = param1
        self.param2 = param2
        self.param3 = param3
        self.message = message

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I64:
                    self.revision = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I64:
                    self.createdTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.I32:
                    self.type = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 5:
                if ftype == TType.I32:
                    self.status = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.STRING:
                    self.param1 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.STRING:
                    self.param2 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 12:
                if ftype == TType.STRING:
                    self.param3 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 20:
                if ftype == TType.STRUCT:
                    self.message = Message()
                    self.message.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('MessageOperation')
        if self.revision is not None:
            oprot.writeFieldBegin('revision', TType.I64, 1)
            oprot.writeI64(self.revision)
            oprot.writeFieldEnd()
        if self.createdTime is not None:
            oprot.writeFieldBegin('createdTime', TType.I64, 2)
            oprot.writeI64(self.createdTime)
            oprot.writeFieldEnd()
        if self.type is not None:
            oprot.writeFieldBegin('type', TType.I32, 3)
            oprot.writeI32(self.type)
            oprot.writeFieldEnd()
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 4)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.status is not None:
            oprot.writeFieldBegin('status', TType.I32, 5)
            oprot.writeI32(self.status)
            oprot.writeFieldEnd()
        if self.param1 is not None:
            oprot.writeFieldBegin('param1', TType.STRING, 10)
            oprot.writeString(self.param1.encode('utf-8') if sys.version_info[0] == 2 else self.param1)
            oprot.writeFieldEnd()
        if self.param2 is not None:
            oprot.writeFieldBegin('param2', TType.STRING, 11)
            oprot.writeString(self.param2.encode('utf-8') if sys.version_info[0] == 2 else self.param2)
            oprot.writeFieldEnd()
        if self.param3 is not None:
            oprot.writeFieldBegin('param3', TType.STRING, 12)
            oprot.writeString(self.param3.encode('utf-8') if sys.version_info[0] == 2 else self.param3)
            oprot.writeFieldEnd()
        if self.message is not None:
            oprot.writeFieldBegin('message', TType.STRUCT, 20)
            self.message.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class MessageOperations(object):
    """
    Attributes:
     - operations
     - endFlag
    """


    def __init__(self, operations=None, endFlag=None,):
        self.operations = operations
        self.endFlag = endFlag

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.LIST:
                    self.operations = []
                    (_etype33, _size30) = iprot.readListBegin()
                    for _i34 in range(_size30):
                        _elem35 = MessageOperation()
                        _elem35.read(iprot)
                        self.operations.append(_elem35)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.BOOL:
                    self.endFlag = iprot.readBool()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('MessageOperations')
        if self.operations is not None:
            oprot.writeFieldBegin('operations', TType.LIST, 1)
            oprot.writeListBegin(TType.STRUCT, len(self.operations))
            for iter36 in self.operations:
                iter36.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.endFlag is not None:
            oprot.writeFieldBegin('endFlag', TType.BOOL, 2)
            oprot.writeBool(self.endFlag)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Operation(object):
    """
    Attributes:
     - revision
     - createdTime
     - type
     - reqSeq
     - checksum
     - status
     - param1
     - param2
     - param3
     - message
    """


    def __init__(self, revision=None, createdTime=None, type=None, reqSeq=None, checksum=None, status=None, param1=None, param2=None, param3=None, message=None,):
        self.revision = revision
        self.createdTime = createdTime
        self.type = type
        self.reqSeq = reqSeq
        self.checksum = checksum
        self.status = status
        self.param1 = param1
        self.param2 = param2
        self.param3 = param3
        self.message = message

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I64:
                    self.revision = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I64:
                    self.createdTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.I32:
                    self.type = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.I32:
                    self.reqSeq = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 5:
                if ftype == TType.STRING:
                    self.checksum = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 7:
                if ftype == TType.I32:
                    self.status = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.STRING:
                    self.param1 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.STRING:
                    self.param2 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 12:
                if ftype == TType.STRING:
                    self.param3 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 20:
                if ftype == TType.STRUCT:
                    self.message = Message()
                    self.message.read(iprot)
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Operation')
        if self.revision is not None:
            oprot.writeFieldBegin('revision', TType.I64, 1)
            oprot.writeI64(self.revision)
            oprot.writeFieldEnd()
        if self.createdTime is not None:
            oprot.writeFieldBegin('createdTime', TType.I64, 2)
            oprot.writeI64(self.createdTime)
            oprot.writeFieldEnd()
        if self.type is not None:
            oprot.writeFieldBegin('type', TType.I32, 3)
            oprot.writeI32(self.type)
            oprot.writeFieldEnd()
        if self.reqSeq is not None:
            oprot.writeFieldBegin('reqSeq', TType.I32, 4)
            oprot.writeI32(self.reqSeq)
            oprot.writeFieldEnd()
        if self.checksum is not None:
            oprot.writeFieldBegin('checksum', TType.STRING, 5)
            oprot.writeString(self.checksum.encode('utf-8') if sys.version_info[0] == 2 else self.checksum)
            oprot.writeFieldEnd()
        if self.status is not None:
            oprot.writeFieldBegin('status', TType.I32, 7)
            oprot.writeI32(self.status)
            oprot.writeFieldEnd()
        if self.param1 is not None:
            oprot.writeFieldBegin('param1', TType.STRING, 10)
            oprot.writeString(self.param1.encode('utf-8') if sys.version_info[0] == 2 else self.param1)
            oprot.writeFieldEnd()
        if self.param2 is not None:
            oprot.writeFieldBegin('param2', TType.STRING, 11)
            oprot.writeString(self.param2.encode('utf-8') if sys.version_info[0] == 2 else self.param2)
            oprot.writeFieldEnd()
        if self.param3 is not None:
            oprot.writeFieldBegin('param3', TType.STRING, 12)
            oprot.writeString(self.param3.encode('utf-8') if sys.version_info[0] == 2 else self.param3)
            oprot.writeFieldEnd()
        if self.message is not None:
            oprot.writeFieldBegin('message', TType.STRUCT, 20)
            self.message.write(oprot)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Profile(object):
    """
    Attributes:
     - mid
     - userid
     - phone
     - email
     - regionCode
     - displayName
     - phoneticName
     - pictureStatus
     - thumbnailUrl
     - statusMessage
     - allowSearchByUserid
     - allowSearchByEmail
     - picturePath
     - musicProfile
    """


    def __init__(self, mid=None, userid=None, phone=None, email=None, regionCode=None, displayName=None, phoneticName=None, pictureStatus=None, thumbnailUrl=None, statusMessage=None, allowSearchByUserid=None, allowSearchByEmail=None, picturePath=None, musicProfile=None,):
        self.mid = mid
        self.userid = userid
        self.phone = phone
        self.email = email
        self.regionCode = regionCode
        self.displayName = displayName
        self.phoneticName = phoneticName
        self.pictureStatus = pictureStatus
        self.thumbnailUrl = thumbnailUrl
        self.statusMessage = statusMessage
        self.allowSearchByUserid = allowSearchByUserid
        self.allowSearchByEmail = allowSearchByEmail
        self.picturePath = picturePath
        self.musicProfile = musicProfile

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.mid = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.STRING:
                    self.userid = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.STRING:
                    self.phone = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 11:
                if ftype == TType.STRING:
                    self.email = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 12:
                if ftype == TType.STRING:
                    self.regionCode = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 20:
                if ftype == TType.STRING:
                    self.displayName = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 21:
                if ftype == TType.STRING:
                    self.phoneticName = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 22:
                if ftype == TType.STRING:
                    self.pictureStatus = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 23:
                if ftype == TType.STRING:
                    self.thumbnailUrl = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 24:
                if ftype == TType.STRING:
                    self.statusMessage = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 31:
                if ftype == TType.BOOL:
                    self.allowSearchByUserid = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 32:
                if ftype == TType.BOOL:
                    self.allowSearchByEmail = iprot.readBool()
                else:
                    iprot.skip(ftype)
            elif fid == 33:
                if ftype == TType.STRING:
                    self.picturePath = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 34:
                if ftype == TType.STRING:
                    self.musicProfile = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Profile')
        if self.mid is not None:
            oprot.writeFieldBegin('mid', TType.STRING, 1)
            oprot.writeString(self.mid.encode('utf-8') if sys.version_info[0] == 2 else self.mid)
            oprot.writeFieldEnd()
        if self.userid is not None:
            oprot.writeFieldBegin('userid', TType.STRING, 3)
            oprot.writeString(self.userid.encode('utf-8') if sys.version_info[0] == 2 else self.userid)
            oprot.writeFieldEnd()
        if self.phone is not None:
            oprot.writeFieldBegin('phone', TType.STRING, 10)
            oprot.writeString(self.phone.encode('utf-8') if sys.version_info[0] == 2 else self.phone)
            oprot.writeFieldEnd()
        if self.email is not None:
            oprot.writeFieldBegin('email', TType.STRING, 11)
            oprot.writeString(self.email.encode('utf-8') if sys.version_info[0] == 2 else self.email)
            oprot.writeFieldEnd()
        if self.regionCode is not None:
            oprot.writeFieldBegin('regionCode', TType.STRING, 12)
            oprot.writeString(self.regionCode.encode('utf-8') if sys.version_info[0] == 2 else self.regionCode)
            oprot.writeFieldEnd()
        if self.displayName is not None:
            oprot.writeFieldBegin('displayName', TType.STRING, 20)
            oprot.writeString(self.displayName.encode('utf-8') if sys.version_info[0] == 2 else self.displayName)
            oprot.writeFieldEnd()
        if self.phoneticName is not None:
            oprot.writeFieldBegin('phoneticName', TType.STRING, 21)
            oprot.writeString(self.phoneticName.encode('utf-8') if sys.version_info[0] == 2 else self.phoneticName)
            oprot.writeFieldEnd()
        if self.pictureStatus is not None:
            oprot.writeFieldBegin('pictureStatus', TType.STRING, 22)
            oprot.writeString(self.pictureStatus.encode('utf-8') if sys.version_info[0] == 2 else self.pictureStatus)
            oprot.writeFieldEnd()
        if self.thumbnailUrl is not None:
            oprot.writeFieldBegin('thumbnailUrl', TType.STRING, 23)
            oprot.writeString(self.thumbnailUrl.encode('utf-8') if sys.version_info[0] == 2 else self.thumbnailUrl)
            oprot.writeFieldEnd()
        if self.statusMessage is not None:
            oprot.writeFieldBegin('statusMessage', TType.STRING, 24)
            oprot.writeString(self.statusMessage.encode('utf-8') if sys.version_info[0] == 2 else self.statusMessage)
            oprot.writeFieldEnd()
        if self.allowSearchByUserid is not None:
            oprot.writeFieldBegin('allowSearchByUserid', TType.BOOL, 31)
            oprot.writeBool(self.allowSearchByUserid)
            oprot.writeFieldEnd()
        if self.allowSearchByEmail is not None:
            oprot.writeFieldBegin('allowSearchByEmail', TType.BOOL, 32)
            oprot.writeBool(self.allowSearchByEmail)
            oprot.writeFieldEnd()
        if self.picturePath is not None:
            oprot.writeFieldBegin('picturePath', TType.STRING, 33)
            oprot.writeString(self.picturePath.encode('utf-8') if sys.version_info[0] == 2 else self.picturePath)
            oprot.writeFieldEnd()
        if self.musicProfile is not None:
            oprot.writeFieldBegin('musicProfile', TType.STRING, 34)
            oprot.writeString(self.musicProfile.encode('utf-8') if sys.version_info[0] == 2 else self.musicProfile)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Room(object):
    """
    Attributes:
     - mid
     - createdTime
     - contacts
     - notificationDisabled
    """


    def __init__(self, mid=None, createdTime=None, contacts=None, notificationDisabled=None,):
        self.mid = mid
        self.createdTime = createdTime
        self.contacts = contacts
        self.notificationDisabled = notificationDisabled

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.mid = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.I64:
                    self.createdTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.LIST:
                    self.contacts = []
                    (_etype40, _size37) = iprot.readListBegin()
                    for _i41 in range(_size37):
                        _elem42 = Contact()
                        _elem42.read(iprot)
                        self.contacts.append(_elem42)
                    iprot.readListEnd()
                else:
                    iprot.skip(ftype)
            elif fid == 31:
                if ftype == TType.BOOL:
                    self.notificationDisabled = iprot.readBool()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Room')
        if self.mid is not None:
            oprot.writeFieldBegin('mid', TType.STRING, 1)
            oprot.writeString(self.mid.encode('utf-8') if sys.version_info[0] == 2 else self.mid)
            oprot.writeFieldEnd()
        if self.createdTime is not None:
            oprot.writeFieldBegin('createdTime', TType.I64, 2)
            oprot.writeI64(self.createdTime)
            oprot.writeFieldEnd()
        if self.contacts is not None:
            oprot.writeFieldBegin('contacts', TType.LIST, 10)
            oprot.writeListBegin(TType.STRUCT, len(self.contacts))
            for iter43 in self.contacts:
                iter43.write(oprot)
            oprot.writeListEnd()
            oprot.writeFieldEnd()
        if self.notificationDisabled is not None:
            oprot.writeFieldBegin('notificationDisabled', TType.BOOL, 31)
            oprot.writeBool(self.notificationDisabled)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class RSAKey(object):
    """
    Attributes:
     - keynm
     - nvalue
     - evalue
     - sessionKey
    """


    def __init__(self, keynm=None, nvalue=None, evalue=None, sessionKey=None,):
        self.keynm = keynm
        self.nvalue = nvalue
        self.evalue = evalue
        self.sessionKey = sessionKey

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.keynm = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.nvalue = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.STRING:
                    self.evalue = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 4:
                if ftype == TType.STRING:
                    self.sessionKey = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('RSAKey')
        if self.keynm is not None:
            oprot.writeFieldBegin('keynm', TType.STRING, 1)
            oprot.writeString(self.keynm.encode('utf-8') if sys.version_info[0] == 2 else self.keynm)
            oprot.writeFieldEnd()
        if self.nvalue is not None:
            oprot.writeFieldBegin('nvalue', TType.STRING, 2)
            oprot.writeString(self.nvalue.encode('utf-8') if sys.version_info[0] == 2 else self.nvalue)
            oprot.writeFieldEnd()
        if self.evalue is not None:
            oprot.writeFieldBegin('evalue', TType.STRING, 3)
            oprot.writeString(self.evalue.encode('utf-8') if sys.version_info[0] == 2 else self.evalue)
            oprot.writeFieldEnd()
        if self.sessionKey is not None:
            oprot.writeFieldBegin('sessionKey', TType.STRING, 4)
            oprot.writeString(self.sessionKey.encode('utf-8') if sys.version_info[0] == 2 else self.sessionKey)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class TalkException(TException):
    """
    Attributes:
     - code
     - reason
     - parameterMap
    """


    def __init__(self, code=None, reason=None, parameterMap=None,):
        self.code = code
        self.reason = reason
        self.parameterMap = parameterMap

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.I32:
                    self.code = iprot.readI32()
                else:
                    iprot.skip(ftype)
            elif fid == 2:
                if ftype == TType.STRING:
                    self.reason = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 3:
                if ftype == TType.MAP:
                    self.parameterMap = {}
                    (_ktype45, _vtype46, _size44) = iprot.readMapBegin()
                    for _i48 in range(_size44):
                        _key49 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        _val50 = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                        self.parameterMap[_key49] = _val50
                    iprot.readMapEnd()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('TalkException')
        if self.code is not None:
            oprot.writeFieldBegin('code', TType.I32, 1)
            oprot.writeI32(self.code)
            oprot.writeFieldEnd()
        if self.reason is not None:
            oprot.writeFieldBegin('reason', TType.STRING, 2)
            oprot.writeString(self.reason.encode('utf-8') if sys.version_info[0] == 2 else self.reason)
            oprot.writeFieldEnd()
        if self.parameterMap is not None:
            oprot.writeFieldBegin('parameterMap', TType.MAP, 3)
            oprot.writeMapBegin(TType.STRING, TType.STRING, len(self.parameterMap))
            for kiter51, viter52 in self.parameterMap.items():
                oprot.writeString(kiter51.encode('utf-8') if sys.version_info[0] == 2 else kiter51)
                oprot.writeString(viter52.encode('utf-8') if sys.version_info[0] == 2 else viter52)
            oprot.writeMapEnd()
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __str__(self):
        return repr(self)

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)


class Ticket(object):
    """
    Attributes:
     - id
     - expirationTime
     - maxUseCount
    """


    def __init__(self, id=None, expirationTime=None, maxUseCount=None,):
        self.id = id
        self.expirationTime = expirationTime
        self.maxUseCount = maxUseCount

    def read(self, iprot):
        if iprot._fast_decode is not None and isinstance(iprot.trans, TTransport.CReadableTransport) and self.thrift_spec is not None:
            iprot._fast_decode(self, iprot, [self.__class__, self.thrift_spec])
            return
        iprot.readStructBegin()
        while True:
            (fname, ftype, fid) = iprot.readFieldBegin()
            if ftype == TType.STOP:
                break
            if fid == 1:
                if ftype == TType.STRING:
                    self.id = iprot.readString().decode('utf-8') if sys.version_info[0] == 2 else iprot.readString()
                else:
                    iprot.skip(ftype)
            elif fid == 10:
                if ftype == TType.I64:
                    self.expirationTime = iprot.readI64()
                else:
                    iprot.skip(ftype)
            elif fid == 21:
                if ftype == TType.I32:
                    self.maxUseCount = iprot.readI32()
                else:
                    iprot.skip(ftype)
            else:
                iprot.skip(ftype)
            iprot.readFieldEnd()
        iprot.readStructEnd()

    def write(self, oprot):
        if oprot._fast_encode is not None and self.thrift_spec is not None:
            oprot.trans.write(oprot._fast_encode(self, [self.__class__, self.thrift_spec]))
            return
        oprot.writeStructBegin('Ticket')
        if self.id is not None:
            oprot.writeFieldBegin('id', TType.STRING, 1)
            oprot.writeString(self.id.encode('utf-8') if sys.version_info[0] == 2 else self.id)
            oprot.writeFieldEnd()
        if self.expirationTime is not None:
            oprot.writeFieldBegin('expirationTime', TType.I64, 10)
            oprot.writeI64(self.expirationTime)
            oprot.writeFieldEnd()
        if self.maxUseCount is not None:
            oprot.writeFieldBegin('maxUseCount', TType.I32, 21)
            oprot.writeI32(self.maxUseCount)
            oprot.writeFieldEnd()
        oprot.writeFieldStop()
        oprot.writeStructEnd()

    def validate(self):
        return

    def __repr__(self):
        L = ['%s=%r' % (key, value)
             for key, value in self.__dict__.items()]
        return '%s(%s)' % (self.__class__.__name__, ', '.join(L))

    def __eq__(self, other):
        return isinstance(other, self.__class__) and self.__dict__ == other.__dict__

    def __ne__(self, other):
        return not (self == other)
all_structs.append(LoginResult)
LoginResult.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'authToken', 'UTF8', None, ),  # 1
    (2, TType.STRING, 'certificate', 'UTF8', None, ),  # 2
    (3, TType.STRING, 'verifier', 'UTF8', None, ),  # 3
    (4, TType.STRING, 'pinCode', 'UTF8', None, ),  # 4
    (5, TType.I32, 'type', None, None, ),  # 5
)
all_structs.append(Contact)
Contact.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'mid', 'UTF8', None, ),  # 1
    (2, TType.I64, 'createdTime', None, None, ),  # 2
    None,  # 3
    None,  # 4
    None,  # 5
    None,  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    (10, TType.I32, 'type', None, None, ),  # 10
    (11, TType.I32, 'status', None, None, ),  # 11
    None,  # 12
    None,  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    None,  # 20
    (21, TType.I32, 'relation', None, None, ),  # 21
    (22, TType.STRING, 'displayName', 'UTF8', None, ),  # 22
    (23, TType.STRING, 'phoneticName', 'UTF8', None, ),  # 23
    (24, TType.STRING, 'pictureStatus', 'UTF8', None, ),  # 24
    (25, TType.STRING, 'thumbnailUrl', 'UTF8', None, ),  # 25
    (26, TType.STRING, 'statusMessage', 'UTF8', None, ),  # 26
    (27, TType.STRING, 'displayNameOverridden', 'UTF8', None, ),  # 27
    (28, TType.I64, 'favoriteTime', None, None, ),  # 28
    None,  # 29
    None,  # 30
    (31, TType.BOOL, 'capableVoiceCall', None, None, ),  # 31
    (32, TType.BOOL, 'capableVideoCall', None, None, ),  # 32
    (33, TType.BOOL, 'capableMyhome', None, None, ),  # 33
    (34, TType.BOOL, 'capableBuddy', None, None, ),  # 34
    (35, TType.I32, 'attributes', None, None, ),  # 35
    (36, TType.I64, 'settings', None, None, ),  # 36
    (37, TType.STRING, 'picturePath', 'UTF8', None, ),  # 37
    (38, TType.STRING, 'recommendParams', 'UTF8', None, ),  # 38
    (39, TType.I32, 'friendRequestStatus', None, None, ),  # 39
    (40, TType.STRING, 'musicProfile', 'UTF8', None, ),  # 40
    None,  # 41
    (42, TType.STRING, 'videoProfile', 'UTF8', None, ),  # 42
)
all_structs.append(Location)
Location.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'title', 'UTF8', None, ),  # 1
    (2, TType.STRING, 'address', 'UTF8', None, ),  # 2
    (3, TType.DOUBLE, 'latitude', None, None, ),  # 3
    (4, TType.DOUBLE, 'longitude', None, None, ),  # 4
    (5, TType.STRING, 'phone', 'UTF8', None, ),  # 5
)
all_structs.append(GroupPreference)
GroupPreference.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'invitationTicket', 'UTF8', None, ),  # 1
    (2, TType.I64, 'favoriteTimestamp', None, None, ),  # 2
)
all_structs.append(Group)
Group.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'id', 'UTF8', None, ),  # 1
    (2, TType.I64, 'createdTime', None, None, ),  # 2
    None,  # 3
    None,  # 4
    None,  # 5
    None,  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    (10, TType.STRING, 'name', 'UTF8', None, ),  # 10
    (11, TType.STRING, 'pictureStatus', 'UTF8', None, ),  # 11
    (12, TType.BOOL, 'preventedJoinByTicket', None, None, ),  # 12
    (13, TType.STRUCT, 'groupPreference', [GroupPreference, None], None, ),  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    (20, TType.LIST, 'members', (TType.STRUCT, [Contact, None], False), None, ),  # 20
    (21, TType.STRUCT, 'creator', [Contact, None], None, ),  # 21
    (22, TType.LIST, 'invitee', (TType.STRUCT, [Contact, None], False), None, ),  # 22
    None,  # 23
    None,  # 24
    None,  # 25
    None,  # 26
    None,  # 27
    None,  # 28
    None,  # 29
    None,  # 30
    (31, TType.BOOL, 'notificationDisabled', None, None, ),  # 31
)
all_structs.append(loginRequest)
loginRequest.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'type', None, None, ),  # 1
    (2, TType.I32, 'identityProvider', None, None, ),  # 2
    (3, TType.STRING, 'identifier', 'UTF8', None, ),  # 3
    (4, TType.STRING, 'password', 'UTF8', None, ),  # 4
    (5, TType.BOOL, 'keepLoggedIn', None, None, ),  # 5
    (6, TType.STRING, 'accessLocation', 'UTF8', None, ),  # 6
    (7, TType.STRING, 'systemName', 'UTF8', None, ),  # 7
    (8, TType.STRING, 'certificate', 'UTF8', None, ),  # 8
    (9, TType.STRING, 'verifier', 'UTF8', None, ),  # 9
    (10, TType.STRING, 'secret', 'UTF8', None, ),  # 10
    (11, TType.I32, 'e2eeVersion', None, None, ),  # 11
)
all_structs.append(LoginSession)
LoginSession.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'tokenKey', 'UTF8', None, ),  # 1
    None,  # 2
    (3, TType.I64, 'expirationTime', None, None, ),  # 3
    None,  # 4
    None,  # 5
    None,  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    None,  # 10
    (11, TType.I32, 'applicationType', None, None, ),  # 11
    (12, TType.STRING, 'systemName', 'UTF8', None, ),  # 12
    None,  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    None,  # 20
    None,  # 21
    (22, TType.STRING, 'accessLocation', 'UTF8', None, ),  # 22
)
all_structs.append(Message)
Message.thrift_spec = (
    None,  # 0
    (1, TType.STRING, '_from', 'UTF8', None, ),  # 1
    (2, TType.STRING, 'to', 'UTF8', None, ),  # 2
    (3, TType.I32, 'toType', None, None, ),  # 3
    (4, TType.STRING, 'id', 'UTF8', None, ),  # 4
    (5, TType.I64, 'createdTime', None, None, ),  # 5
    (6, TType.I64, 'deliveredTime', None, None, ),  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    (10, TType.STRING, 'text', 'UTF8', None, ),  # 10
    (11, TType.STRUCT, 'location', [Location, None], None, ),  # 11
    None,  # 12
    None,  # 13
    (14, TType.BOOL, 'hasContent', None, None, ),  # 14
    (15, TType.I32, 'contentType', None, None, ),  # 15
    None,  # 16
    (17, TType.STRING, 'contentPreview', 'BINARY', None, ),  # 17
    (18, TType.MAP, 'contentMetadata', (TType.STRING, 'UTF8', TType.STRING, 'UTF8', False), None, ),  # 18
    (19, TType.I64, 'sessionId', None, None, ),  # 19
    (20, TType.LIST, 'chunks', (TType.STRING, 'UTF8', False), None, ),  # 20
    (21, TType.STRING, 'relatedMessageId', 'UTF8', None, ),  # 21
    (22, TType.I64, 'messageRelationType', None, None, ),  # 22
    (23, TType.I64, 'readCount', None, None, ),  # 23
    (24, TType.I64, 'relatedMessageServiceCode', None, None, ),  # 24
)
all_structs.append(MessageOperation)
MessageOperation.thrift_spec = (
    None,  # 0
    (1, TType.I64, 'revision', None, None, ),  # 1
    (2, TType.I64, 'createdTime', None, None, ),  # 2
    (3, TType.I32, 'type', None, None, ),  # 3
    (4, TType.I32, 'reqSeq', None, None, ),  # 4
    (5, TType.I32, 'status', None, None, ),  # 5
    None,  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    (10, TType.STRING, 'param1', 'UTF8', None, ),  # 10
    (11, TType.STRING, 'param2', 'UTF8', None, ),  # 11
    (12, TType.STRING, 'param3', 'UTF8', None, ),  # 12
    None,  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    (20, TType.STRUCT, 'message', [Message, None], None, ),  # 20
)
all_structs.append(MessageOperations)
MessageOperations.thrift_spec = (
    None,  # 0
    (1, TType.LIST, 'operations', (TType.STRUCT, [MessageOperation, None], False), None, ),  # 1
    (2, TType.BOOL, 'endFlag', None, None, ),  # 2
)
all_structs.append(Operation)
Operation.thrift_spec = (
    None,  # 0
    (1, TType.I64, 'revision', None, None, ),  # 1
    (2, TType.I64, 'createdTime', None, None, ),  # 2
    (3, TType.I32, 'type', None, None, ),  # 3
    (4, TType.I32, 'reqSeq', None, None, ),  # 4
    (5, TType.STRING, 'checksum', 'UTF8', None, ),  # 5
    None,  # 6
    (7, TType.I32, 'status', None, None, ),  # 7
    None,  # 8
    None,  # 9
    (10, TType.STRING, 'param1', 'UTF8', None, ),  # 10
    (11, TType.STRING, 'param2', 'UTF8', None, ),  # 11
    (12, TType.STRING, 'param3', 'UTF8', None, ),  # 12
    None,  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    (20, TType.STRUCT, 'message', [Message, None], None, ),  # 20
)
all_structs.append(Profile)
Profile.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'mid', 'UTF8', None, ),  # 1
    None,  # 2
    (3, TType.STRING, 'userid', 'UTF8', None, ),  # 3
    None,  # 4
    None,  # 5
    None,  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    (10, TType.STRING, 'phone', 'UTF8', None, ),  # 10
    (11, TType.STRING, 'email', 'UTF8', None, ),  # 11
    (12, TType.STRING, 'regionCode', 'UTF8', None, ),  # 12
    None,  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    (20, TType.STRING, 'displayName', 'UTF8', None, ),  # 20
    (21, TType.STRING, 'phoneticName', 'UTF8', None, ),  # 21
    (22, TType.STRING, 'pictureStatus', 'UTF8', None, ),  # 22
    (23, TType.STRING, 'thumbnailUrl', 'UTF8', None, ),  # 23
    (24, TType.STRING, 'statusMessage', 'UTF8', None, ),  # 24
    None,  # 25
    None,  # 26
    None,  # 27
    None,  # 28
    None,  # 29
    None,  # 30
    (31, TType.BOOL, 'allowSearchByUserid', None, None, ),  # 31
    (32, TType.BOOL, 'allowSearchByEmail', None, None, ),  # 32
    (33, TType.STRING, 'picturePath', 'UTF8', None, ),  # 33
    (34, TType.STRING, 'musicProfile', 'UTF8', None, ),  # 34
)
all_structs.append(Room)
Room.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'mid', 'UTF8', None, ),  # 1
    (2, TType.I64, 'createdTime', None, None, ),  # 2
    None,  # 3
    None,  # 4
    None,  # 5
    None,  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    (10, TType.LIST, 'contacts', (TType.STRUCT, [Contact, None], False), None, ),  # 10
    None,  # 11
    None,  # 12
    None,  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    None,  # 20
    None,  # 21
    None,  # 22
    None,  # 23
    None,  # 24
    None,  # 25
    None,  # 26
    None,  # 27
    None,  # 28
    None,  # 29
    None,  # 30
    (31, TType.BOOL, 'notificationDisabled', None, None, ),  # 31
)
all_structs.append(RSAKey)
RSAKey.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'keynm', 'UTF8', None, ),  # 1
    (2, TType.STRING, 'nvalue', 'UTF8', None, ),  # 2
    (3, TType.STRING, 'evalue', 'UTF8', None, ),  # 3
    (4, TType.STRING, 'sessionKey', 'UTF8', None, ),  # 4
)
all_structs.append(TalkException)
TalkException.thrift_spec = (
    None,  # 0
    (1, TType.I32, 'code', None, None, ),  # 1
    (2, TType.STRING, 'reason', 'UTF8', None, ),  # 2
    (3, TType.MAP, 'parameterMap', (TType.STRING, 'UTF8', TType.STRING, 'UTF8', False), None, ),  # 3
)
all_structs.append(Ticket)
Ticket.thrift_spec = (
    None,  # 0
    (1, TType.STRING, 'id', 'UTF8', None, ),  # 1
    None,  # 2
    None,  # 3
    None,  # 4
    None,  # 5
    None,  # 6
    None,  # 7
    None,  # 8
    None,  # 9
    (10, TType.I64, 'expirationTime', None, None, ),  # 10
    None,  # 11
    None,  # 12
    None,  # 13
    None,  # 14
    None,  # 15
    None,  # 16
    None,  # 17
    None,  # 18
    None,  # 19
    None,  # 20
    (21, TType.I32, 'maxUseCount', None, None, ),  # 21
)
fix_spec(all_structs)
del all_structs
