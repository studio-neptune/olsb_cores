enum ApplicationType {
    DESKTOPWIN = 96;
    DESKTOPWIN_RC = 97;
    DESKTOPWIN_BETA = 98;
    DESKTOPWIN_ALPHA = 99;
    DESKTOPMAC = 112;
    DESKTOPMAC_RC = 113;
    DESKTOPMAC_BETA = 114;
    DESKTOPMAC_ALPHA = 115;
}

enum LoginType {
    ID_CREDENTIAL = 0;
    QRCODE = 1;
    ID_CREDENTIAL_WITH_E2EE = 2;
}

enum ContactType {
    MID = 0;
    PHONE = 1;
    EMAIL = 2;
    USERID = 3;
    PROXIMITY = 4;
    GROUP = 5;
    USER = 6;
    QRCODE = 7;
    PROMOTION_BOT = 8;
    CONTACT_MESSAGE = 9;
    FRIEND_REQUEST = 10;
    REPAIR = 128;
    FACEBOOK = 2305;
    SINA = 2306;
    RENREN = 2307;
    FEIXIN = 2308;
    BBM = 2309;
    BEACON = 11;
}

enum ContentType {
    NONE = 0;
    IMAGE = 1;
    VIDEO = 2;
    AUDIO = 3;
    HTML = 4;
    PDF = 5;
    CALL = 6;
    STICKER = 7;
    PRESENCE = 8;
    GIFT = 9;
    GROUPBOARD = 10;
    APPLINK = 11;
    LINK = 12;
    CONTACT = 13;
    FILE = 14;
    LOCATION = 15;
    POSTNOTIFICATION = 16;
    RICH = 17;
    CHATEVENT = 18;
    MUSIC = 19;
    PAYMENT = 20;
    EXTIMAGE = 21;
}

enum ErrorCode {
    ILLEGAL_ARGUMENT = 0;
    AUTHENTICATION_FAILED = 1;
    DB_FAILED = 2;
    INVALID_STATE = 3;
    EXCESSIVE_ACCESS = 4;
    NOT_FOUND = 5;
    INVALID_MID = 9;
    NOT_A_MEMBER = 10;
    INVALID_LENGTH = 6;
    NOT_AVAILABLE_USER = 7;
    NOT_AUTHORIZED_DEVICE = 8;
    NOT_AUTHORIZED_SESSION = 14;
    INCOMPATIBLE_APP_VERSION = 11;
    NOT_READY = 12;
    NOT_AVAILABLE_SESSION = 13;
    SYSTEM_ERROR = 15;
    NO_AVAILABLE_VERIFICATION_METHOD = 16;
    NOT_AUTHENTICATED = 17;
    INVALID_IDENTITY_CREDENTIAL = 18;
    NOT_AVAILABLE_IDENTITY_IDENTIFIER = 19;
    INTERNAL_ERROR = 20;
    NO_SUCH_IDENTITY_IDENFIER = 21;
    DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY = 22;
    ILLEGAL_IDENTITY_CREDENTIAL = 23;
    UNKNOWN_CHANNEL = 24;
    NO_SUCH_MESSAGE_BOX = 25;
    NOT_AVAILABLE_MESSAGE_BOX = 26;
    CHANNEL_DOES_NOT_MATCH = 27;
    NOT_YOUR_MESSAGE = 28;
    MESSAGE_DEFINED_ERROR = 29;
    USER_CANNOT_ACCEPT_PRESENTS = 30;
    USER_NOT_STICKER_OWNER = 32;
    MAINTENANCE_ERROR = 33;
    ACCOUNT_NOT_MATCHED = 34;
    ABUSE_BLOCK = 35;
    NOT_FRIEND = 36;
    NOT_ALLOWED_CALL = 37;
    BLOCK_FRIEND = 38;
    INCOMPATIBLE_VOIP_VERSION = 39;
    INVALID_SNS_ACCESS_TOKEN = 40;
    EXTERNAL_SERVICE_NOT_AVAILABLE = 41;
    NOT_ALLOWED_ADD_CONTACT = 42;
    NOT_CERTIFICATED = 43;
    NOT_ALLOWED_SECONDARY_DEVICE = 44;
    INVALID_PIN_CODE = 45;
    NOT_FOUND_IDENTITY_CREDENTIAL = 46;
    EXCEED_FILE_MAX_SIZE = 47;
    EXCEED_DAILY_QUOTA = 48;
    NOT_SUPPORT_SEND_FILE = 49;
    MUST_UPGRADE = 50;
    NOT_AVAILABLE_PIN_CODE_SESSION = 51;
    EXPIRED_REVISION = 52;
    NOT_YET_PHONE_NUMBER = 54;
    BAD_CALL_NUMBER = 55;
    UNAVAILABLE_CALL_NUMBER = 56;
    NOT_SUPPORT_CALL_SERVICE = 57;
    CONGESTION_CONTROL = 58;
    NO_BALANCE = 59;
    NOT_PERMITTED_CALLER_ID = 60;
    NO_CALLER_ID_LIMIT_EXCEEDED = 61;
    CALLER_ID_VERIFICATION_REQUIRED = 62;
    NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED = 63;
    MESSAGE_NOT_FOUND = 64;
    INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT = 65;
    ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED = 66;
    ACCOUNT_MIGRATION_PINCODE_BLOCKED = 67;
    INVALID_PASSWORD_FORMAT = 69;
    FEATURE_RESTRICTED = 70;
    MESSAGE_NOT_DESTRUCTIBLE = 71;
    PAID_CALL_REDEEM_FAILED = 72;
    PREVENTED_JOIN_BY_TICKET = 73;
    SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT = 75;
    SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY = 76;
    SECURITY_CENTER_NOT_VERIFIED = 77;
    SECURITY_CENTER_BLOCKED_BY_SETTING = 78;
    SECURITY_CENTER_BLOCKED = 79;
    TALK_PROXY_EXCEPTION = 80;
    E2EE_INVALID_PROTOCOL = 81;
    E2EE_RETRY_ENCRYPT = 82;
    E2EE_UPDATE_SENDER_KEY = 83;
    E2EE_UPDATE_RECEIVER_KEY = 84;
    E2EE_INVALID_ARGUMENT = 85;
    E2EE_INVALID_VERSION = 86;
    E2EE_SENDER_DISABLED = 87;
    E2EE_RECEIVER_DISABLED = 88;
    E2EE_SENDER_NOT_ALLOWED = 89;
    E2EE_RECEIVER_NOT_ALLOWED = 90;
    E2EE_RESEND_FAIL = 91;
    E2EE_RESEND_OK = 92;
    HITOKOTO_BACKUP_NO_AVAILABLE_DATA = 93;
    E2EE_UPDATE_PRIMARY_DEVICE = 94;
    SUCCESS = 95;
    CANCEL = 96;
    E2EE_PRIMARY_NOT_SUPPORT = 97;
    E2EE_RETRY_PLAIN = 98;
    E2EE_RECREATE_GROUP_KEY = 99;
    E2EE_GROUP_TOO_MANY_MEMBERS = 100;
    SERVER_BUSY = 101;
    NOT_ALLOWED_ADD_FOLLOW = 102;
    INCOMING_FRIEND_REQUEST_LIMIT = 103;
    OUTGOING_FRIEND_REQUEST_LIMIT = 104;
    OUTGOING_FRIEND_REQUEST_QUOTA = 105;
    DUPLICATED = 106;
    BANNED = 107;
}

enum IdentityProvider {
    UNKNOWN = 0;
    LINE = 1;
    NAVER_KR = 2;
    LINE_PHONE = 3;
}

struct LoginResult {
    1: string authToken;
    2: string certificate;
    3: string verifier;
    4: string pinCode;
    5: LoginResultType type;
}

enum LoginResultType {
    SUCCESS = 1;
    REQUIRE_QRCODE = 2;
    REQUIRE_DEVICE_CONFIRM = 3;
    REQUIRE_SMS_CONFIRM = 4;
}

enum MessageOperationType {
    SEND_MESSAGE = 1;
    RECEIVE_MESSAGE = 2;
    READ_MESSAGE = 3;
    NOTIFIED_READ_MESSAGE = 4;
    NOTIFIED_JOIN_CHAT = 5;
    FAILED_SEND_MESSAGE = 6;
    SEND_CONTENT = 7;
    SEND_CONTENT_RECEIPT = 8;
    SEND_CHAT_REMOVED = 9;
    REMOVE_ALL_MESSAGES = 10;
}

enum MIDType {
    USER = 0;
    ROOM = 1;
    GROUP = 2;
    SQUARE = 3;
    SQUARE_CHAT = 4;
    SQUARE_MEMBER = 5;
    BOT = 6;
}

enum ServiceCode {
    UNKNOWN = 0;
    TALK = 1;
    SQUARE = 2;
}

enum OpStatus {
    NORMAL = 0;
    ALERT_DISABLED = 1;
    ALWAYS = 2;
}

enum OpType {
    END_OF_OPERATION = 0;
    UPDATE_PROFILE = 1;
    UPDATE_SETTINGS = 36;
    NOTIFIED_UPDATE_PROFILE = 2;
    REGISTER_USERID = 3;
    ADD_CONTACT = 4;
    NOTIFIED_ADD_CONTACT = 5;
    BLOCK_CONTACT = 6;
    UNBLOCK_CONTACT = 7;
    NOTIFIED_RECOMMEND_CONTACT = 8;
    CREATE_GROUP = 9;
    UPDATE_GROUP = 10;
    NOTIFIED_UPDATE_GROUP = 11;
    INVITE_INTO_GROUP = 12;
    NOTIFIED_INVITE_INTO_GROUP = 13;
    CANCEL_INVITATION_GROUP = 31;
    NOTIFIED_CANCEL_INVITATION_GROUP = 32;
    LEAVE_GROUP = 14;
    NOTIFIED_LEAVE_GROUP = 15;
    ACCEPT_GROUP_INVITATION = 16;
    NOTIFIED_ACCEPT_GROUP_INVITATION = 17;
    REJECT_GROUP_INVITATION = 34;
    NOTIFIED_REJECT_GROUP_INVITATION = 35;
    KICKOUT_FROM_GROUP = 18;
    NOTIFIED_KICKOUT_FROM_GROUP = 19;
    CREATE_ROOM = 20;
    INVITE_INTO_ROOM = 21;
    NOTIFIED_INVITE_INTO_ROOM = 22;
    LEAVE_ROOM = 23;
    NOTIFIED_LEAVE_ROOM = 24;
    SEND_MESSAGE = 25;
    RECEIVE_MESSAGE = 26;
    SEND_MESSAGE_RECEIPT = 27;
    RECEIVE_MESSAGE_RECEIPT = 28;
    SEND_CONTENT_RECEIPT = 29;
    SEND_CHAT_CHECKED = 40;
    SEND_CHAT_REMOVED = 41;
    RECEIVE_ANNOUNCEMENT = 30;
    INVITE_VIA_EMAIL = 38;
    NOTIFIED_REGISTER_USER = 37;
    NOTIFIED_UNREGISTER_USER = 33;
    NOTIFIED_REQUEST_RECOVERY = 39;
    NOTIFIED_FORCE_SYNC = 42;
    SEND_CONTENT = 43;
    SEND_MESSAGE_MYHOME = 44;
    NOTIFIED_UPDATE_CONTENT_PREVIEW = 45;
    REMOVE_ALL_MESSAGES = 46;
    NOTIFIED_UPDATE_PURCHASES = 47;
    DUMMY = 48;
    UPDATE_CONTACT = 49;
    NOTIFIED_RECEIVED_CALL = 50;
    CANCEL_CALL = 51;
    NOTIFIED_REDIRECT = 52;
    NOTIFIED_CHANNEL_SYNC = 53;
    FAILED_SEND_MESSAGE = 54;
    NOTIFIED_READ_MESSAGE = 55;
    FAILED_EMAIL_CONFIRMATION = 56;
    NOTIFIED_PUSH_NOTICENTER_ITEM = 59;
    NOTIFIED_CHAT_CONTENT = 58;
    NOTIFIED_JOIN_CHAT = 60;
    NOTIFIED_LEAVE_CHAT = 61;
    NOTIFIED_TYPING = 62;
    FRIEND_REQUEST_ACCEPTED = 63;
    DESTROY_MESSAGE = 64;
    NOTIFIED_DESTROY_MESSAGE = 65;
    UPDATE_PUBLICKEYCHAIN = 66;
    NOTIFIED_UPDATE_PUBLICKEYCHAIN = 67;
    NOTIFIED_BLOCK_CONTACT = 68;
    NOTIFIED_UNBLOCK_CONTACT = 69;
    UPDATE_GROUPPREFERENCE = 70;
    NOTIFIED_PAYMENT_EVENT = 71;
    REGISTER_E2EE_PUBLICKEY = 72;
    NOTIFIED_E2EE_KEY_EXCHANGE_REQ = 73;
    NOTIFIED_E2EE_KEY_EXCHANGE_RESP = 74;
    NOTIFIED_E2EE_MESSAGE_RESEND_REQ = 75;
    NOTIFIED_E2EE_MESSAGE_RESEND_RESP = 76;
    NOTIFIED_E2EE_KEY_UPDATE = 77;
    NOTIFIED_BUDDY_UPDATE_PROFILE = 78;
    NOTIFIED_UPDATE_LINEAT_TABS = 79;
    UPDATE_ROOM = 80;
    NOTIFIED_BEACON_DETECTED = 81;
    UPDATE_EXTENDED_PROFILE = 82;
    ADD_FOLLOW = 83;
    NOTIFIED_ADD_FOLLOW = 84;
    DELETE_FOLLOW = 85;
    NOTIFIED_DELETE_FOLLOW = 86;
    UPDATE_TIMELINE_SETTINGS = 87;
    NOTIFIED_FRIEND_REQUEST = 88;
    UPDATE_RINGBACK_TONE = 89;
    NOTIFIED_POSTBACK = 90;
    RECEIVE_READ_WATERMARK = 91;
    NOTIFIED_MESSAGE_DELIVERED = 92;
    NOTIFIED_UPDATE_CHAT_BAR = 93;
    NOTIFIED_CHATAPP_INSTALLED = 94;
    NOTIFIED_CHATAPP_UPDATED = 95;
    NOTIFIED_CHATAPP_NEW_MARK = 96;
    NOTIFIED_CHATAPP_DELETED = 97;
    NOTIFIED_CHATAPP_SYNC = 98;
    NOTIFIED_UPDATE_MESSAGE = 99;
}

enum ContactStatus {
    UNSPECIFIED = 0;
    FRIEND = 1;
    FRIEND_BLOCKED = 2;
    RECOMMEND = 3;
    RECOMMEND_BLOCKED = 4;
    DELETED = 5;
    DELETED_BLOCKED = 6;
}


enum ContactRelation {
    ONEWAY = 0;
    BOTH = 1;
    NOT_REGISTERED = 2;
}

struct Contact {
    1: string mid;
    2: i64 createdTime;
    10: ContactType type;
    11: ContactStatus status;
    21: ContactRelation relation;
    22: string displayName;
    23: string phoneticName;
    24: string pictureStatus;
    25: string thumbnailUrl;
    26: string statusMessage;
    27: string displayNameOverridden;
    28: i64 favoriteTime;
    31: bool capableVoiceCall;
    32: bool capableVideoCall;
    33: bool capableMyhome;
    34: bool capableBuddy;
    35: i32 attributes;
    36: i64 settings;
    37: string picturePath;
    38: string recommendParams;
    39: i32 friendRequestStatus;
    40: string musicProfile;
    42: string videoProfile;
}

struct Location {
    1: string title;
    2: string address;
    3: double latitude;
    4: double longitude;
    5: string phone;
}

struct GroupPreference {
    1: string invitationTicket;
    2: i64 favoriteTimestamp;
}

struct Group {
    1: string id;
    2: i64 createdTime;
    10: string name;
    11: string pictureStatus;
    12: bool preventedJoinByTicket;
    13: GroupPreference groupPreference;
    20: list<Contact> members;
    21: Contact creator;
    22: list<Contact> invitee;
    31: bool notificationDisabled;
}

struct loginRequest {
    1: i32 type;
    2: i32 identityProvider;
    3: string identifier;
    4: string password;
    5: bool keepLoggedIn;
    6: string accessLocation;
    7: string systemName;
    8: string certificate;
    9: string verifier;
    10: string secret;
    11: i32 e2eeVersion;
}

struct LoginSession {
    1: string tokenKey;
    3: i64 expirationTime;
    11: ApplicationType applicationType;
    12: string systemName;
    22: string accessLocation;
}

struct Message {
    1: string from;
    2: string to;
    3: MIDType toType;
    4: string id;
    5: i64 createdTime;
    6: i64 deliveredTime;
    10: string text;
    11: Location location;
    14: bool hasContent;
    15: ContentType contentType;
    17: binary contentPreview;
    18: map<string, string> contentMetadata;
    19: i64 sessionId;
    20: list<string> chunks;
    21: string relatedMessageId;
    22: i64 messageRelationType;
    23: i64 readCount;
    24: i64 relatedMessageServiceCode;
}

struct MessageOperation {
    1: i64 revision;
    2: i64 createdTime;
    3: MessageOperationType type;
    4: i32 reqSeq;
    5: OpStatus status;
    10: string param1;
    11: string param2;
    12: string param3;
    20: Message message;
}

struct MessageOperations {
    1: list<MessageOperation> operations;
    2: bool endFlag;
}

struct Operation {
    1: i64 revision;
    2: i64 createdTime;
    3: OpType type;
    4: i32 reqSeq;
    5: string checksum;
    7: OpStatus status;
    10: string param1;
    11: string param2;
    12: string param3;
    20: Message message;
}

struct Profile {
    1: string mid;
    3: string userid;
    10: string phone;
    11: string email;
    12: string regionCode;
    20: string displayName;
    21: string phoneticName;
    22: string pictureStatus;
    23: string thumbnailUrl;
    24: string statusMessage;
    31: bool allowSearchByUserid;
    32: bool allowSearchByEmail;
    33: string picturePath;
    34: string musicProfile;
}

struct Room {
    1: string mid;
    2: i64 createdTime;
    10: list<Contact> contacts;
    31: bool notificationDisabled;
}

struct RSAKey {
    1: string keynm;
    2: string nvalue;
    3: string evalue;
    4: string sessionKey;
}

exception TalkException {
    1: ErrorCode code;
    2: string reason;
    3: map<string, string> parameterMap;
}

struct Ticket {
    1: string id;
    10: i64 expirationTime;
    21: i32 maxUseCount;
}

service TalkService {
    void acceptGroupInvitation(
        1: i32 reqSeq,
        2: string groupId) throws(1: TalkException e);

    Group createGroup(
        1: i32 seq,
        2: string name,
        3: list<string> contactIds) throws(1: TalkException e);

    string createQrcodeBase64Image(
        2: string url,
        3: string characterSet,
        4: i32 imageSize,
        5: i32 x,
        6: i32 y,
        7: i32 width,
        8: i32 height) throws(1: TalkException e);

    Room createRoom(
        1: i32 reqSeq,
        2: list<string> contactIds) throws(1: TalkException e);

    string createSession() throws(1: TalkException e);

    list<Operation> fetchOperations(
        2: i64 localRev,
        3: i32 count) throws(1: TalkException e);

    Profile getProfile() throws(1: TalkException e);

    map<string, Contact> findAndAddContactsByEmail(
        1: i32 reqSeq,
        2: set<string> emails) throws(1: TalkException e);

    map<string, Contact> findAndAddContactsByMid(
        1: i32 reqSeq,
        2: string mid) throws(1: TalkException e);

    map<string, Contact> findAndAddContactsByPhone(
        1: i32 reqSeq,
        2: set<string> phones) throws(1: TalkException e);

    map<string, Contact> findAndAddContactsByUserid(
        1: i32 reqSeq,
        2: string userid) throws(1: TalkException e);

    Contact findContactByUserid(
        2: string userid) throws(1: TalkException e);

    Contact findContactByUserTicket(
        2: string ticketId) throws(1: TalkException e);

    map<string, Contact> findContactsByEmail(
        2: set<string> emails) throws(1: TalkException e);

    map<string, Contact> findContactsByPhone(
        2: set<string> phones) throws(1: TalkException e);

    Ticket generateUserTicket(
        3: i64 expirationTime,
        4: i32 maxUseCount) throws(1: TalkException e);

    list<string> getAllContactIds() throws(1: TalkException e);

    list<string> getBlockedContactIds() throws(1: TalkException e);

    list<string> getBlockedContactIdsByRange(
        2: i32 start,
        3: i32 count) throws(1: TalkException e);

    list<string> getBlockedRecommendationIds() throws(1: TalkException e);

    Contact getContact(
        2: string id) throws(1: TalkException e);

    list<Contact> getContacts(
        2: list<string> ids) throws(1: TalkException e);

    Group getGroup(
        2: string groupId) throws(1: TalkException e);

    list<string> getGroupIdsInvited() throws(1: TalkException e);

    list<string> getGroupIdsJoined() throws(1: TalkException e);

    list<Group> getGroups(
        2: list<string> groupIds) throws(1: TalkException e);

    list<string> getFavoriteMids() throws(1: TalkException e);

    list<string> getHiddenContactMids() throws(1: TalkException e);

    i64 getLastOpRevision() throws(1: TalkException e);

    Room getRoom(
        2: string roomId) throws(1: TalkException e);

    RSAKey getRSAKeyInfo(
        2: IdentityProvider provider) throws(1: TalkException e);

    i64 getServerTime() throws(1: TalkException e);

    list<LoginSession> getSessions() throws(1: TalkException e);

    void leaveGroup(
        1: i32 reqSeq,
        2: string groupId) throws(1: TalkException e);

    LoginResult loginZ(
        2: loginRequest LoginRequest) throws(1: TalkException e);

    void logout() throws(1: TalkException e);

    void logoutSession(
        2: string tokenKey) throws(1: TalkException e);

    Message sendMessage(
        1: i32 seq,
        2: Message message) throws(1: TalkException e);
}