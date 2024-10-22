enum ApplicationType {
    IOS = 16;
    IOS_RC = 17;
    IOS_BETA = 18;
    IOS_ALPHA = 19;
    ANDROID = 32;
    ANDROID_RC = 33;
    ANDROID_BETA = 34;
    ANDROID_ALPHA = 35;
    WAP = 48;
    WAP_RC = 49;
    WAP_BETA = 50;
    WAP_ALPHA = 51;
    BOT = 64;
    BOT_RC = 65;
    BOT_BETA = 66;
    BOT_ALPHA = 67;
    WEB = 80;
    WEB_RC = 81;
    WEB_BETA = 82;
    WEB_ALPHA = 83;
    DESKTOPWIN = 96;
    DESKTOPWIN_RC = 97;
    DESKTOPWIN_BETA = 98;
    DESKTOPWIN_ALPHA = 99;
    DESKTOPMAC = 112;
    DESKTOPMAC_RC = 113;
    DESKTOPMAC_BETA = 114;
    DESKTOPMAC_ALPHA = 115;
    CHANNELGW = 128;
    CHANNELGW_RC = 129;
    CHANNELGW_BETA = 130;
    CHANNELGW_ALPHA = 131;
    CHANNELCP = 144;
    CHANNELCP_RC = 145;
    CHANNELCP_BETA = 146;
    CHANNELCP_ALPHA = 147;
    WINPHONE = 160;
    WINPHONE_RC = 161;
    WINPHONE_BETA = 162;
    WINPHONE_ALPHA = 163;
    BLACKBERRY = 176;
    BLACKBERRY_RC = 177;
    BLACKBERRY_BETA = 178;
    BLACKBERRY_ALPHA = 179;
    WINMETRO = 192;
    WINMETRO_RC = 193;
    WINMETRO_BETA = 194;
    WINMETRO_ALPHA = 195;
    S40 = 208;
    S40_RC = 209;
    S40_BETA = 210;
    S40_ALPHA = 211;
    CHRONO = 224;
    CHRONO_RC = 225;
    CHRONO_BETA = 226;
    CHRONO_ALPHA = 227;
    TIZEN = 256;
    TIZEN_RC = 257;
    TIZEN_BETA = 258;
    TIZEN_ALPHA = 259;
    VIRTUAL = 272;
}

enum BuddyBannerLinkType {
    BUDDY_BANNER_LINK_HIDDEN = 0;
    BUDDY_BANNER_LINK_MID = 1;
    BUDDY_BANNER_LINK_URL = 2;
}

enum BuddyOnAirType {
    NORMAL = 0;
    LIVE = 1;
    VOIP = 2;
}

enum BuddyResultState {
    ACCEPTED = 1;
    SUCCEEDED = 2;
    FAILED = 3;
    CANCELLED = 4;
    NOTIFY_FAILED = 5;
    STORING = 11;
    UPLOADING = 21;
    NOTIFYING = 31;
}

enum BuddySearchRequestSource {
    NA = 0;
    FRIEND_VIEW = 1;
    OFFICIAL_ACCOUNT_VIEW = 2;
}

enum CarrierCode {
    NOT_SPECIFIED = 0;
    JP_DOCOMO = 1;
    JP_AU = 2;
    JP_SOFTBANK = 3;
    KR_SKT = 17;
    KR_KT = 18;
    KR_LGT = 19;
}

enum ChannelConfiguration {
    MESSAGE = 0;
    MESSAGE_NOTIFICATION = 1;
    NOTIFICATION_CENTER = 2;
}

enum ChannelErrorCode {
    ILLEGAL_ARGUMENT = 0;
    INTERNAL_ERROR = 1;
    CONNECTION_ERROR = 2;
    AUTHENTICATIONI_FAILED = 3;
    NEED_PERMISSION_APPROVAL = 4;
    COIN_NOT_USABLE = 5;
}

enum ChannelSyncType {
    SYNC = 0;
    REMOVE = 1;
}

enum ContactAttribute {
    CONTACT_ATTRIBUTE_CAPABLE_VOICE_CALL = 1;
    CONTACT_ATTRIBUTE_CAPABLE_VIDEO_CALL = 2;
    CONTACT_ATTRIBUTE_CAPABLE_MY_HOME = 16;
    CONTACT_ATTRIBUTE_CAPABLE_BUDDY = 32;
}

enum ContactCategory {
    NORMAL = 0;
    RECOMMEND = 1;
}

enum ContactRelation {
    ONEWAY = 0;
    BOTH = 1;
    NOT_REGISTERED = 2;
}

enum ContactSetting {
    CONTACT_SETTING_NOTIFICATION_DISABLE = 1;
    CONTACT_SETTING_DISPLAY_NAME_OVERRIDE = 2;
    CONTACT_SETTING_CONTACT_HIDE = 4;
    CONTACT_SETTING_FAVORITE = 8;
    CONTACT_SETTING_DELETE = 16;
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
    REPAIR = 128;
    FACEBOOK = 2305;
    SINA = 2306;
    RENREN = 2307;
    FEIXIN = 2308;
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
}

enum CustomMode {
    PROMOTION_FRIENDS_INVITE = 1;
    CAPABILITY_SERVER_SIDE_SMS = 2;
    LINE_CLIENT_ANALYTICS_CONFIGURATION = 3;
}

enum EmailConfirmationStatus {
    NOT_SPECIFIED = 0;
    NOT_YET = 1;
    DONE = 3;
}

enum EmailConfirmationType {
    SERVER_SIDE_EMAIL = 0;
    CLIENT_SIDE_EMAIL = 1;
}

enum ErrorCode {
    ILLEGAL_ARGUMENT = 0;
    AUTHENTICATION_FAILED = 1;
    DB_FAILED = 2;
    INVALID_STATE = 3;
    EXCESSIVE_ACCESS = 4;
    NOT_FOUND = 5;
    INVALID_LENGTH = 6;
    NOT_AVAILABLE_USER = 7;
    NOT_AUTHORIZED_DEVICE = 8;
    INVALID_MID = 9;
    NOT_A_MEMBER = 10;
    INCOMPATIBLE_APP_VERSION = 11;
    NOT_READY = 12;
    NOT_AVAILABLE_SESSION = 13;
    NOT_AUTHORIZED_SESSION = 14;
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
}

enum FeatureType {
    OBJECT_STORAGE = 1;
}

enum GroupAttribute {
    NAME = 1;
    PICTURE_STATUS = 2;
    ALL = 255;
}

enum IdentityProvider {
    UNKNOWN = 0;
    LINE = 1;
    NAVER_KR = 2;
}

enum LoginResultType {
    SUCCESS = 1;
    REQUIRE_QRCODE = 2;
    REQUIRE_DEVICE_CONFIRM = 3;
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
}

enum ModificationType {
    ADD = 0;
    REMOVE = 1;
    MODIFY = 2;
}

enum NotificationItemFetchMode {
    ALL = 0;
    APPEND = 1;
}

enum NotificationQueueType {
    GLOBAL = 1;
    MESSAGE = 2;
    PRIMARY = 3;
}

enum NotificationStatus {
    NOTIFICATION_ITEM_EXIST = 1;
    TIMELINE_ITEM_EXIST = 2;
    NOTE_GROUP_NEW_ITEM_EXIST = 4;
    TIMELINE_BUDDYGROUP_CHANGED = 8;
    NOTE_ONE_TO_ONE_NEW_ITEM_EXIST = 16;
    ALBUM_ITEM_EXIST = 32;
    TIMELINE_ITEM_DELETED = 64;
}

enum NotificationType {
    APPLE_APNS = 1;
    GOOGLE_C2DM = 2;
    NHN_NNI = 3;
    SKT_AOM = 4;
    MS_MPNS = 5;
    RIM_BIS = 6;
    GOOGLE_GCM = 7;
    NOKIA_NNAPI = 8;
    TIZEN = 9;
    LINE_BOT = 17;
    LINE_WAP = 18;
}

enum OpStatus {
    NORMAL = 0;
    ALERT_DISABLED = 1;
}

enum OpType {
    END_OF_OPERATION = 0;
    UPDATE_PROFILE = 1;
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
    LEAVE_GROUP = 14;
    NOTIFIED_LEAVE_GROUP = 15;
    ACCEPT_GROUP_INVITATION = 16;
    NOTIFIED_ACCEPT_GROUP_INVITATION = 17;
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
    RECEIVE_ANNOUNCEMENT = 30;
    CANCEL_INVITATION_GROUP = 31;
    NOTIFIED_CANCEL_INVITATION_GROUP = 32;
    NOTIFIED_UNREGISTER_USER = 33;
    REJECT_GROUP_INVITATION = 34;
    NOTIFIED_REJECT_GROUP_INVITATION = 35;
    UPDATE_SETTINGS = 36;
    NOTIFIED_REGISTER_USER = 37;
    INVITE_VIA_EMAIL = 38;
    NOTIFIED_REQUEST_RECOVERY = 39;
    SEND_CHAT_CHECKED = 40;
    SEND_CHAT_REMOVED = 41;
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
    NOTIFIED_CHAT_CONTENT = 58;
    NOTIFIED_PUSH_NOTICENTER_ITEM = 59;
}

enum PayloadType {
    PAYLOAD_BUY = 101;
    PAYLOAD_CS = 111;
    PAYLOAD_BONUS = 121;
    PAYLOAD_EVENT = 131;
}

enum PaymentPgType {
    PAYMENT_PG_NONE = 0;
    PAYMENT_PG_AU = 1;
    PAYMENT_PG_AL = 2;
}

enum PaymentType {
    PAYMENT_APPLE = 1;
    PAYMENT_GOOGLE = 2;
}

enum ProductBannerLinkType {
    BANNER_LINK_NONE = 0;
    BANNER_LINK_ITEM = 1;
    BANNER_LINK_URL = 2;
    BANNER_LINK_CATEGORY = 3;
}

enum ProductEventType {
    NO_EVENT = 0;
    CARRIER_ANY = 65537;
    BUDDY_ANY = 131073;
    INSTALL_IOS = 196609;
    INSTALL_ANDROID = 196610;
    MISSION_ANY = 262145;
    MUSTBUY_ANY = 327681;
}

enum ProfileAttribute {
    EMAIL = 1;
    DISPLAY_NAME = 2;
    PHONETIC_NAME = 4;
    PICTURE = 8;
    STATUS_MESSAGE = 16;
    ALLOW_SEARCH_BY_USERID = 32;
    ALLOW_SEARCH_BY_EMAIL = 64;
    BUDDY_STATUS = 128;
    ALL = 255;
}

enum PublicType {
    HIDDEN = 0;
    PUBLIC = 1000;
}

enum RedirectType {
    NONE = 0;
    EXPIRE_SECOND = 1;
}

enum RegistrationType {
    PHONE = 0;
    EMAIL_WAP = 1;
    FACEBOOK = 2305;
    SINA = 2306;
    RENREN = 2307;
    FEIXIN = 2308;
}

enum SettingsAttribute {
    NOTIFICATION_ENABLE = 1;
    NOTIFICATION_MUTE_EXPIRATION = 2;
    NOTIFICATION_NEW_MESSAGE = 4;
    NOTIFICATION_GROUP_INVITATION = 8;
    NOTIFICATION_SHOW_MESSAGE = 16;
    NOTIFICATION_INCOMING_CALL = 32;
    PRIVACY_SYNC_CONTACTS = 64;
    PRIVACY_SEARCH_BY_PHONE_NUMBER = 128;
    NOTIFICATION_SOUND_MESSAGE = 256;
    NOTIFICATION_SOUND_GROUP = 512;
    CONTACT_MY_TICKET = 1024;
    IDENTITY_PROVIDER = 2048;
    IDENTITY_IDENTIFIER = 4096;
    PRIVACY_SEARCH_BY_USERID = 8192;
    PRIVACY_SEARCH_BY_EMAIL = 16384;
    PREFERENCE_LOCALE = 32768;
    NOTIFICATION_DISABLED_WITH_SUB = 65536;
    SNS_ACCOUNT = 524288;
    PHONE_REGISTRATION = 1048576;
    PRIVACY_ALLOW_SECONDARY_DEVICE_LOGIN = 2097152;
    CUSTOM_MODE = 4194304;
    PRIVACY_PROFILE_IMAGE_POST_TO_MYHOME = 8388608;
    EMAIL_CONFIRMATION_STATUS = 16777216;
    PRIVACY_RECV_MESSAGES_FROM_NOT_FRIEND = 33554432;
    ALL = 2147483647;
}

enum SnsIdType {
    FACEBOOK = 1;
    SINA = 2;
    RENREN = 3;
    FEIXIN = 4;
}

enum SpammerReason {
    OTHER = 0;
    ADVERTISING = 1;
    GENDER_HARASSMENT = 2;
    HARASSMENT = 3;
}

enum SyncActionType {
    SYNC = 0;
    REPORT = 1;
}

enum SyncCategory {
    PROFILE = 0;
    SETTINGS = 1;
    OPS = 2;
    CONTACT = 3;
    RECOMMEND = 4;
    BLOCK = 5;
    GROUP = 6;
    ROOM = 7;
    NOTIFICATION = 8;
}

enum TMessageBoxStatus {
    ACTIVATED = 1;
    UNREAD = 2;
}

enum UniversalNotificationServiceErrorCode {
    INTERNAL_ERROR = 0;
    INVALID_KEY = 1;
    ILLEGAL_ARGUMENT = 2;
    TOO_MANY_REQUEST = 3;
    AUTHENTICATION_FAILED = 4;
    NO_WRITE_PERMISSION = 5;
}

enum UnregistrationReason {
    UNREGISTRATION_REASON_UNREGISTER_USER = 1;
    UNREGISTRATION_REASON_UNBIND_DEVICE = 2;
}

enum UserAgeType {
    OVER = 1;
    UNDER = 2;
    UNDEFINED = 3;
}

enum VerificationMethod {
    NO_AVAILABLE = 0;
    PIN_VIA_SMS = 1;
    CALLERID_INDIGO = 2;
    PIN_VIA_TTS = 4;
    SKIP = 10;
}

enum VerificationResult {
    FAILED = 0;
    OK_NOT_REGISTERED_YET = 1;
    OK_REGISTERED_WITH_SAME_DEVICE = 2;
    OK_REGISTERED_WITH_ANOTHER_DEVICE = 3;
}

enum WapInvitationType {
    REGISTRATION = 1;
    CHAT = 2;
}

struct AgeCheckDocomoResult {
    1: string authUrl;
    2: UserAgeType userAgeType;
}

struct AgeCheckRequestResult {
    1: string authUrl;
    2: string sessionId;
}

struct Announcement {
    1: i32 index;
    10: bool forceUpdate;
    11: string title;
    12: string text;
    13: i64 createdTime;
    14: string pictureUrl;
    15: string thumbnailUrl;
}

struct ChannelProvider {
    1: string name;
}

struct ChannelInfo {
    1: string channelId;
    3: string name;
    4: string entryPageUrl;
    5: string descriptionText;
    6: ChannelProvider provider;
    7: PublicType publicType;
    8: string iconImage;
    9: list<string> permissions;
    11: string iconThumbnailImage;
    12: list<ChannelConfiguration> channelConfigurations;
}

struct ApprovedChannelInfo {
    1: ChannelInfo channelInfo;
    2: i64 approvedAt;
}

struct ApprovedChannelInfos {
    1: list<ApprovedChannelInfo> approvedChannelInfos;
    2: i64 revision;
}

struct AuthQrcode {
    1: string qrcode;
    2: string verifier;
}

struct BuddyBanner {
    1: BuddyBannerLinkType buddyBannerLinkType;
    2: string buddyBannerLink;
    3: string buddyBannerImageUrl;
}

struct BuddyDetail {
    1: string mid;
    2: i64 memberCount;
    3: bool onAir;
    4: bool businessAccount;
    5: bool addable;
    6: set<ContentType> acceptableContentTypes;
    7: bool capableMyhome;
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
}

struct BuddyList {
    1: string classification;
    2: string displayName;
    3: i32 totalBuddyCount;
    4: list<Contact> popularContacts;
}

struct Location {
    1: string title;
    2: string address;
    3: double latitude;
    4: double longitude;
    5: string phone;
}

struct BuddyMessageRequest {
    1: ContentType contentType;
    2: string text;
    3: Location location;
    4: binary content;
    5: map<string, string> contentMetadata;
}

struct BuddyOnAirUrls {
    1: map<string, string> hls;
    2: map<string, string> smoothStreaming;
}

struct BuddyOnAir {
    1: string mid;
    3: i64 freshnessLifetime;
    4: string onAirId;
    5: bool onAir;
    11: string text;
    12: i64 viewerCount;
    13: i64 targetCount;
    31: BuddyOnAirType onAirType;
    32: BuddyOnAirUrls onAirUrls;
}

struct BuddyProfile {
    1: string buddyId;
    2: string mid;
    3: string searchId;
    4: string displayName;
    5: string statusMessage;
    11: i64 contactCount;
}

struct BuddySearchResult {
    1: string mid;
    2: string displayName;
    3: string pictureStatus;
    4: string picturePath;
    5: string statusMessage;
    6: bool businessAccount;
}

struct ChannelDomain {
    1: string host;
    2: bool removed;
}

struct ChannelDomains {
    1: list<ChannelDomain> channelDomains;
    2: i64 revision;
}

exception ChannelException {
    1: ChannelErrorCode code;
    2: string reason;
    3: map<string, string> parameterMap;
}

struct ChannelInfos {
    1: list<ChannelInfo> channelInfos;
    2: i64 revision;
}

struct ChannelNotificationSetting {
    1: string channelId;
    2: string name;
    3: bool notificationReceivable;
    4: bool messageReceivable;
    5: bool showDefault;
}

struct ChannelSyncDatas {
    1: list<ChannelInfo> channelInfos;
    2: list<ChannelDomain> channelDomains;
    3: i64 revision;
    4: i64 expires;
}

struct ChannelToken {
    1: string token;
    2: string obsToken;
    3: i64 expiration;
    4: string refreshToken;
    5: string channelAccessToken;
}

struct Coin {
    1: i32 freeCoinBalance;
    2: i32 payedCoinBalance;
    3: i32 totalCoinBalance;
    4: i32 rewardCoinBalance;
}

struct CoinPayLoad {
    1: i32 payCoin;
    2: i32 freeCoin;
    3: PayloadType type;
    4: i32 rewardCoin;
}

struct CoinHistory {
    1: i64 payDate;
    2: i32 coinBalance;
    3: i32 coin;
    4: string price;
    5: string title;
    6: bool refund;
    7: string paySeq;
    8: string currency;
    9: string currencySign;
    10: string displayPrice;
    11: CoinPayLoad payload;
    12: string channelId;
}

struct CoinHistoryCondition {
    1: i64 start;
    2: i32 size;
    3: string language;
    4: string eddt;
    5: PaymentType appStoreCode;
}

struct CoinHistoryResult {
    1: list<CoinHistory> historys;
    2: Coin balance;
    3: bool hasNext;
}

struct CoinProductItem {
    1: string itemId;
    2: i32 coin;
    3: i32 freeCoin;
    5: string currency;
    6: string price;
    7: string displayPrice;
    8: string name;
    9: string desc;
}

struct CoinPurchaseConfirm {
    1: string orderId;
    2: PaymentType appStoreCode;
    3: string receipt;
    4: string signature;
    5: string seller;
    6: string requestType;
    7: bool ignoreReceipt;
}

struct CoinPurchaseReservation {
    1: string productId;
    2: string country;
    3: string currency;
    4: string price;
    5: PaymentType appStoreCode;
    6: string language;
    7: PaymentPgType pgCode;
    8: string redirectUrl;
}

struct CoinUseReservationItem {
    1: string itemId;
    2: string itemName;
    3: i32 amount;
}

struct CoinUseReservation {
    1: string channelId;
    2: string shopOrderId;
    3: PaymentType appStoreCode;
    4: list<CoinUseReservationItem> items;
    5: string country;
}

struct CompactContact {
    1: string mid;
    2: i64 createdTime;
    3: i64 modifiedTime;
    4: ContactStatus status;
    5: i64 settings;
    6: string displayNameOverridden;
}

struct ContactModification {
    1: ModificationType type;
    2: string luid;
    11: list<string> phones;
    12: list<string> emails;
    13: list<string> userids;
}

struct ContactRegistration {
    1: Contact contact;
    10: string luid;
    11: ContactType contactType;
    12: string contactKey;
}

struct ContactReport {
    1: string mid;
    2: bool exists;
    3: Contact contact;
}

struct ContactReportResult {
    1: string mid;
    2: bool exists;
}

struct DeviceInfo {
    1: string deviceName;
    2: string systemName;
    3: string systemVersion;
    4: string model;
    10: CarrierCode carrierCode;
    11: string carrierName;
    20: ApplicationType applicationType;
}

struct EmailConfirmation {
    1: bool usePasswordSet;
    2: string email;
    3: string password;
    4: bool ignoreDuplication;
}

struct EmailConfirmationSession {
    1: EmailConfirmationType emailConfirmationType;
    2: string verifier;
    3: string targetEmail;
}

struct FriendChannelMatrix {
    1: string channelId;
    2: string representMid;
    3: i32 count;
}

struct FriendChannelMatricesResponse {
    1: i64 expires;
    2: list<FriendChannelMatrix> matrices;
}

struct Geolocation {
    1: double longitude;
    2: double latitude;
}

struct NotificationTarget {
    1: string applicationType;
    2: string applicationVersion;
    3: string region;
}

struct GlobalEvent {
    1: string key;
    2: list<NotificationTarget> targets;
    3: i64 createdTime;
    4: i64 data;
    5: i32 maxDelay;
}

struct Group {
    1: string id;
    2: i64 createdTime;
    10: string name;
    11: string pictureStatus;
    20: list<Contact> members;
    21: Contact creator;
    22: list<Contact> invitee;
    31: bool notificationDisabled;
}

struct IdentityCredential {
    1: IdentityProvider provider;
    2: string identifier;
    3: string password;
}

struct LastReadMessageId {
    1: string mid;
    2: string lastReadMessageId;
}

struct LastReadMessageIds {
    1: string chatId;
    2: list<LastReadMessageId> lastReadMessageIds;
}

struct LoginRequest {
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

struct LoginResult {
    1: string authToken;
    2: string certificate;
    3: string verifier;
    4: string pinCode;
    5: LoginResultType type;
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

struct MetaProfile {
    1: i64 createTime;
    2: string regionCode;
    3: map<RegistrationType, string> identities;
}

struct NotificationItem {
    1: string id;
    2: string from;
    3: string to;
    4: string fromChannel;
    5: string toChannel;
    7: i64 revision;
    8: i64 createdTime;
    9: map<string, string> content;
}

struct NotificationFetchResult {
    1: NotificationItemFetchMode fetchMode;
    2: list<NotificationItem> itemList;
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

struct PaymentReservation {
    1: string receiverMid;
    2: string productId;
    3: string language;
    4: string location;
    5: string currency;
    6: string price;
    7: PaymentType appStoreCode;
    8: string messageText;
    9: i32 messageTemplate;
    10: i64 packageId;
}

struct PaymentReservationResult {
    1: string orderId;
    2: string confirmUrl;
    3: map<string, string> extras;
}

struct Product {
    1: string productId;
    2: i64 packageId;
    3: i32 version;
    4: string authorName;
    5: bool onSale;
    6: i32 validDays;
    7: i32 saleType;
    8: string copyright;
    9: string title;
    10: string descriptionText;
    11: i64 shopOrderId;
    12: string fromMid;
    13: string toMid;
    14: i64 validUntil;
    15: i32 priceTier;
    16: string price;
    17: string currency;
    18: string currencySymbol;
    19: PaymentType paymentType;
    20: i64 createDate;
    21: bool ownFlag;
    22: ProductEventType eventType;
    23: string urlSchema;
    24: string downloadUrl;
    25: string buddyMid;
    26: i64 publishSince;
    27: bool newFlag;
    28: bool missionFlag;
}

struct ProductList {
    1: bool hasNext;
    4: i64 bannerSequence;
    5: ProductBannerLinkType bannerTargetType;
    6: string bannerTargetPath;
    7: list<Product> productList;
    8: string bannerLang;
}

struct ProductSimple {
    1: string productId;
    2: i64 packageId;
    3: i32 version;
    4: bool onSale;
    5: i64 validUntil;
}

struct ProductSimpleList {
    1: bool hasNext;
    2: i32 reinvokeHour;
    3: i64 lastVersionSeq;
    4: list<ProductSimple> productList;
    5: i64 recentNewReleaseDate;
    6: i64 recentEventReleaseDate;
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
}

struct ProximityMatchCandidateResult {
    1: list<Contact> users;
    2: list<Contact> buddies;
}

struct RegisterWithSnsIdResult {
    1: string authToken;
    2: bool userCreated;
}

struct RequestTokenResponse {
    1: string requestToken;
    2: string returnUrl;
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

struct SendBuddyMessageResult {
    1: string requestId;
    2: BuddyResultState state;
    3: string messageId;
    4: i32 eventNo;
    11: i64 receiverCount;
    12: i64 successCount;
    13: i64 failCount;
    14: i64 cancelCount;
    15: i64 blockCount;
    16: i64 unregisterCount;
    21: i64 timestamp;
    22: string message;
}

struct SetBuddyOnAirResult {
    1: string requestId;
    2: BuddyResultState state;
    3: i32 eventNo;
    11: i64 receiverCount;
    12: i64 successCount;
    13: i64 failCount;
    14: i64 cancelCount;
    15: i64 unregisterCount;
    21: i64 timestamp;
    22: string message;
}

struct Settings {
    10: bool notificationEnable;
    11: i64 notificationMuteExpiration;
    12: bool notificationNewMessage;
    13: bool notificationGroupInvitation;
    14: bool notificationShowMessage;
    15: bool notificationIncomingCall;
    16: string notificationSoundMessage;
    17: string notificationSoundGroup;
    18: bool notificationDisabledWithSub;
    20: bool privacySyncContacts;
    21: bool privacySearchByPhoneNumber;
    22: bool privacySearchByUserid;
    23: bool privacySearchByEmail;
    24: bool privacyAllowSecondaryDeviceLogin;
    25: bool privacyProfileImagePostToMyhome;
    26: bool privacyReceiveMessagesFromNotFriend;
    30: string contactMyTicket;
    40: IdentityProvider identityProvider;
    41: string identityIdentifier;
    42: map<SnsIdType, string> snsAccounts;
    43: bool phoneRegistration;
    44: EmailConfirmationStatus emailConfirmationStatus;
    50: string preferenceLocale;
    60: map<CustomMode, string> customModes;
}

struct SimpleChannelClient {
    1: string applicationType;
    2: string applicationVersion;
    3: string locale;
}

struct SimpleChannelContact {
    1: string mid;
    2: string displayName;
    3: string pictureStatus;
    4: string picturePath;
    5: string statusMessage;
}

struct SnsFriend {
    1: string snsUserId;
    2: string snsUserName;
    3: SnsIdType snsIdType;
}

struct SnsFriendContactRegistration {
    1: Contact contact;
    2: SnsIdType snsIdType;
    3: string snsUserId;
}

struct SnsFriendModification {
    1: ModificationType type;
    2: SnsFriend snsFriend;
}

struct SnsFriends {
    1: list<SnsFriend> snsFriends;
    2: bool hasMore;
}

struct SnsIdUserStatus {
    1: bool userExisting;
    2: bool phoneNumberRegistered;
    3: bool sameDevice;
}

struct SnsProfile {
    1: string snsUserId;
    2: string snsUserName;
    3: string email;
    4: string thumbnailUrl;
}

struct SystemConfiguration {
    1: string endpoint;
    2: string endpointSsl;
    3: string updateUrl;
    11: string c2dmAccount;
    12: string nniServer;
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

struct TMessageBox {
    1: string id;
    2: string channelId;
    5: i64 lastSeq;
    6: i64 unreadCount;
    7: i64 lastModifiedTime;
    8: i32 status;
    9: MIDType midType;
    10: list<Message> lastMessages;
}

struct TMessageBoxWrapUp {
    1: TMessageBox messageBox;
    2: string name;
    3: list<Contact> contacts;
    4: string pictureRevision;
}

struct TMessageBoxWrapUpResponse {
    1: list<TMessageBoxWrapUp> messageBoxWrapUpList;
    2: i32 totalSize;
}

exception UniversalNotificationServiceException {
    1: UniversalNotificationServiceErrorCode code;
    2: string reason;
    3: map<string, string> parameterMap;
}

struct UpdateBuddyProfileResult {
    1: string requestId;
    2: BuddyResultState state;
    3: i32 eventNo;
    11: i64 receiverCount;
    12: i64 successCount;
    13: i64 failCount;
    14: i64 cancelCount;
    15: i64 unregisterCount;
    21: i64 timestamp;
    22: string message;
}

struct UserAuthStatus {
    1: bool phoneNumberRegistered;
    2: list<SnsIdType> registeredSnsIdTypes;
}

struct VerificationSessionData {
    1: string sessionId;
    2: VerificationMethod method;
    3: string callback;
    4: string normalizedPhone;
    5: string countryCode;
    6: string nationalSignificantNumber;
    7: list<VerificationMethod> availableVerificationMethods;
}

struct WapInvitation {
    1: WapInvitationType type;
    10: string inviteeEmail;
    11: string inviterMid;
    12: string roomMid;
}

service AccountSupervisorService {
    RSAKey getRSAKey() throws(1: TalkException e);

    void notifyEmailConfirmationResult(
        2: map<string, string> parameterMap) throws(1: TalkException e);

    string registerVirtualAccount(
        2: string locale,
        3: string encryptedVirtualUserId,
        4: string encryptedPassword) throws(1: TalkException e);

    void requestVirtualAccountPasswordChange(
        2: string virtualMid,
        3: string encryptedVirtualUserId,
        4: string encryptedOldPassword,
        5: string encryptedNewPassword) throws(1: TalkException e);

    void requestVirtualAccountPasswordSet(
        2: string virtualMid,
        3: string encryptedVirtualUserId,
        4: string encryptedNewPassword) throws(1: TalkException e);

    void unregisterVirtualAccount(
        2: string virtualMid) throws(1: TalkException e);
}

service AgeCheckService {
    UserAgeType checkUserAge(
        2: CarrierCode carrier,
        3: string sessionId,
        4: string verifier,
        5: i32 standardAge) throws(1: TalkException e);

    AgeCheckDocomoResult checkUserAgeWithDocomo(
        2: string openIdRedirectUrl,
        3: i32 standardAge,
        4: string verifier) throws(1: TalkException e);

    string retrieveOpenIdAuthUrlWithDocomo() throws(1: TalkException e);

    AgeCheckRequestResult retrieveRequestToken(
        2: CarrierCode carrier) throws(1: TalkException e);
}

service BuddyManagementService {
    void addBuddyMember(
        1: string requestId,
        2: string userMid) throws(1: TalkException e);

    void addBuddyMembers(
        1: string requestId,
        2: list<string> userMids) throws(1: TalkException e);

    void blockBuddyMember(
        1: string requestId,
        2: string mid) throws(1: TalkException e);

    list<SendBuddyMessageResult> commitSendMessagesToAll(
        1: list<string> requestIdList) throws(1: TalkException e);

    list<SendBuddyMessageResult> commitSendMessagesToMids(
        1: list<string> requestIdList,
        2: list<string> mids) throws(1: TalkException e);

    bool containsBuddyMember(
        1: string requestId,
        2: string userMid) throws(1: TalkException e);

    binary downloadMessageContent(
        1: string requestId,
        2: string messageId) throws(1: TalkException e);

    binary downloadMessageContentPreview(
        1: string requestId,
        2: string messageId) throws(1: TalkException e);

    binary downloadProfileImage(
        1: string requestId) throws(1: TalkException e);

    binary downloadProfileImagePreview(
        1: string requestId) throws(1: TalkException e);

    i64 getActiveMemberCountByBuddyMid(
        2: string buddyMid) throws(1: TalkException e);

    list<string> getActiveMemberMidsByBuddyMid(
        2: string buddyMid) throws(1: TalkException e);

    list<string> getAllBuddyMembers() throws(1: TalkException e);

    list<string> getBlockedBuddyMembers() throws(1: TalkException e);

    i64 getBlockerCountByBuddyMid(
        2: string buddyMid) throws(1: TalkException e);

    BuddyDetail getBuddyDetailByMid(
        2: string buddyMid) throws(1: TalkException e);

    BuddyProfile getBuddyProfile() throws(1: TalkException e);

    Ticket getContactTicket() throws(1: TalkException e);

    i64 getMemberCountByBuddyMid(
        2: string buddyMid) throws(1: TalkException e);

    SendBuddyMessageResult getSendBuddyMessageResult(
        1: string sendBuddyMessageRequestId) throws(1: TalkException e);

    SetBuddyOnAirResult getSetBuddyOnAirResult(
        1: string setBuddyOnAirRequestId) throws(1: TalkException e);

    UpdateBuddyProfileResult getUpdateBuddyProfileResult(
        1: string updateBuddyProfileRequestId) throws(1: TalkException e);

    bool isBuddyOnAirByMid(
        2: string buddyMid) throws(1: TalkException e);

    string linkAndSendBuddyContentMessageToAllAsync(
        1: string requestId,
        2: Message msg,
        3: string sourceContentId) throws(1: TalkException e);

    SendBuddyMessageResult linkAndSendBuddyContentMessageToMids(
        1: string requestId,
        2: Message msg,
        3: string sourceContentId,
        4: list<string> mids) throws(1: TalkException e);

    void notifyBuddyBlocked(
        1: string buddyMid,
        2: string blockerMid) throws(1: TalkException e);

    void notifyBuddyUnblocked(
        1: string buddyMid,
        2: string blockerMid) throws(1: TalkException e);

    string registerBuddy(
        2: string buddyId,
        3: string searchId,
        4: string displayName,
        5: string statusMeessage,
        6: binary picture,
        7: map<string, string> settings) throws(1: TalkException e);

    string registerBuddyAdmin(
        2: string buddyId,
        3: string searchId,
        4: string displayName,
        5: string statusMessage,
        6: binary picture) throws(1: TalkException e);

    string reissueContactTicket(
        3: i64 expirationTime,
        4: i32 maxUseCount) throws(1: TalkException e);

    void removeBuddyMember(
        1: string requestId,
        2: string userMid) throws(1: TalkException e);

    void removeBuddyMembers(
        1: string requestId,
        2: list<string> userMids) throws(1: TalkException e);

    SendBuddyMessageResult sendBuddyContentMessageToAll(
        1: string requestId,
        2: Message msg,
        3: binary content) throws(1: TalkException e);

    string sendBuddyContentMessageToAllAsync(
        1: string requestId,
        2: Message msg,
        3: binary content) throws(1: TalkException e);

    SendBuddyMessageResult sendBuddyContentMessageToMids(
        1: string requestId,
        2: Message msg,
        3: binary content,
        4: list<string> mids) throws(1: TalkException e);

    string sendBuddyContentMessageToMidsAsync(
        1: string requestId,
        2: Message msg,
        3: binary content,
        4: list<string> mids) throws(1: TalkException e);

    SendBuddyMessageResult sendBuddyMessageToAll(
        1: string requestId,
        2: Message msg) throws(1: TalkException e);

    string sendBuddyMessageToAllAsync(
        1: string requestId,
        2: Message msg) throws(1: TalkException e);

    SendBuddyMessageResult sendBuddyMessageToMids(
        1: string requestId,
        2: Message msg,
        3: list<string> mids) throws(1: TalkException e);

    string sendBuddyMessageToMidsAsync(
        1: string requestId,
        2: Message msg,
        3: list<string> mids) throws(1: TalkException e);

    void sendIndividualEventToAllAsync(
        1: string requestId,
        2: string buddyMid,
        3: NotificationStatus notificationStatus) throws(1: TalkException e);

    SetBuddyOnAirResult setBuddyOnAir(
        1: string requestId,
        2: bool onAir) throws(1: TalkException e);

    string setBuddyOnAirAsync(
        1: string requestId,
        2: bool onAir) throws(1: TalkException e);

    SendBuddyMessageResult storeMessage(
        1: string requestId,
        2: BuddyMessageRequest messageRequest) throws(1: TalkException e);

    void unblockBuddyMember(
        1: string requestId,
        2: string mid) throws(1: TalkException e);

    void unregisterBuddy(
        1: string requestId) throws(1: TalkException e);

    void unregisterBuddyAdmin(
        1: string requestId) throws(1: TalkException e);

    void updateBuddyAdminProfileAttribute(
        1: string requestId,
        2: map<string, string> attributes) throws(1: TalkException e);

    void updateBuddyAdminProfileImage(
        1: string requestId,
        2: binary picture) throws(1: TalkException e);

    UpdateBuddyProfileResult updateBuddyProfileAttributes(
        1: string requestId,
        2: map<string, string> attributes) throws(1: TalkException e);

    string updateBuddyProfileAttributesAsync(
        1: string requestId,
        2: map<string, string> attributes) throws(1: TalkException e);

    UpdateBuddyProfileResult updateBuddyProfileImage(
        1: string requestId,
        2: binary image) throws(1: TalkException e);

    string updateBuddyProfileImageAsync(
        1: string requestId,
        2: binary image) throws(1: TalkException e);

    void updateBuddySearchId(
        1: string requestId,
        2: string searchId) throws(1: TalkException e);

    void updateBuddySettings(
        2: map<string, string> settings) throws(1: TalkException e);

    string uploadBuddyContent(
        2: ContentType contentType,
        3: binary content) throws(1: TalkException e);
}

service BuddyService {
    list<BuddySearchResult> findBuddyContactsByQuery(
        2: string language,
        3: string country,
        4: string query,
        5: i32 fromIndex,
        6: i32 count,
        7: BuddySearchRequestSource requestSource) throws(1: TalkException e);

    list<Contact> getBuddyContacts(
        2: string language,
        3: string country,
        4: string classification,
        5: i32 fromIndex,
        6: i32 count) throws(1: TalkException e);

    BuddyDetail getBuddyDetail(
        4: string buddyMid) throws(1: TalkException e);

    BuddyOnAir getBuddyOnAir(
        4: string buddyMid) throws(1: TalkException e);

    list<string> getCountriesHavingBuddy() throws(1: TalkException e);

    map<string, i64> getNewlyReleasedBuddyIds(
        3: string country) throws(1: TalkException e);

    BuddyBanner getPopularBuddyBanner(
        2: string language,
        3: string country,
        4: ApplicationType applicationType,
        5: string resourceSpecification) throws(1: TalkException e);

    list<BuddyList> getPopularBuddyLists(
        2: string language,
        3: string country) throws(1: TalkException e);

    list<Contact> getPromotedBuddyContacts(
        2: string language,
        3: string country) throws(1: TalkException e);
}

service ChannelApplicationProvidedService {
    i64 activeBuddySubscriberCount() throws(1: TalkException e);

    void addOperationForChannel(
        1: OpType opType,
        2: string param1,
        3: string param2,
        4: string param3) throws(1: TalkException e);

    i64 displayBuddySubscriberCount() throws(1: TalkException e);

    Contact findContactByUseridWithoutAbuseBlockForChannel(
        2: string userid) throws(1: TalkException e);

    list<string> getAllContactIdsForChannel() throws(1: TalkException e);

    list<CompactContact> getCompactContacts(
        2: i64 lastModifiedTimestamp) throws(1: TalkException e);

    list<Contact> getContactsForChannel(
        2: list<string> ids) throws(1: TalkException e);

    string getDisplayName(
        2: string mid) throws(1: TalkException e);

    list<string> getFavoriteMidsForChannel() throws(1: TalkException e);

    list<string> getFriendMids() throws(1: TalkException e);

    list<string> getGroupMemberMids(
        1: string groupId) throws(1: TalkException e);

    list<Group> getGroupsForChannel(
        1: list<string> groupIds) throws(1: TalkException e);

    IdentityCredential getIdentityCredential() throws(1: TalkException e);

    list<string> getJoinedGroupIdsForChannel() throws(1: TalkException e);

    MetaProfile getMetaProfile() throws(1: TalkException e);

    string getMid() throws(1: TalkException e);

    SimpleChannelClient getPrimaryClientForChannel() throws(1: TalkException e);

    Profile getProfileForChannel() throws(1: TalkException e);

    list<SimpleChannelContact> getSimpleChannelContacts(
        1: list<string> ids) throws(1: TalkException e);

    string getUserCountryForBilling(
        2: string country,
        3: string remoteIp) throws(1: TalkException e);

    i64 getUserCreateTime() throws(1: TalkException e);

    map<RegistrationType, string> getUserIdentities() throws(1: TalkException e);

    string getUserLanguage() throws(1: TalkException e);

    list<string> getUserMidsWhoAddedMe() throws(1: TalkException e);

    bool isGroupMember(
        1: string groupId) throws(1: TalkException e);

    bool isInContact(
        2: string mid) throws(1: TalkException e);

    string registerChannelCP(
        2: string cpId,
        3: string registerPassword) throws(1: TalkException e);

    void removeNotificationStatus(
        2: NotificationStatus notificationStatus) throws(1: TalkException e);

    Message sendMessageForChannel(
        2: Message message) throws(1: TalkException e);

    void sendPinCodeOperation(
        1: string verifier) throws(1: TalkException e);

    void updateProfileAttributeForChannel(
        2: ProfileAttribute profileAttribute,
        3: string value) throws(1: TalkException e);
}

service ChannelService {
    ChannelToken approveChannelAndIssueChannelToken(
        1: string channelId) throws(1: ChannelException e);

    string approveChannelAndIssueRequestToken(
        1: string channelId,
        2: string otpId) throws(1: ChannelException e);

    NotificationFetchResult fetchNotificationItems(
        2: i64 localRev) throws(1: ChannelException e);

    ApprovedChannelInfos getApprovedChannels(
        2: i64 lastSynced,
        3: string locale) throws(1: ChannelException e);

    ChannelInfo getChannelInfo(
        2: string channelId,
        3: string locale) throws(1: ChannelException e);

    ChannelNotificationSetting getChannelNotificationSetting(
        1: string channelId,
        2: string locale) throws(1: ChannelException e);

    list<ChannelNotificationSetting> getChannelNotificationSettings(
        1: string locale) throws(1: ChannelException e);

    ChannelInfos getChannels(
        2: i64 lastSynced,
        3: string locale) throws(1: ChannelException e);

    ChannelDomains getDomains(
        2: i64 lastSynced) throws(1: ChannelException e);

    FriendChannelMatricesResponse getFriendChannelMatrices(
        1: list<string> channelIds) throws(1: ChannelException e);

    i32 getNotificationBadgeCount(
        2: i64 localRev) throws(1: ChannelException e);

    ChannelToken issueChannelToken(
        1: string channelId) throws(1: ChannelException e);

    string issueRequestToken(
        1: string channelId,
        2: string otpId) throws(1: ChannelException e);

    RequestTokenResponse issueRequestTokenWithAuthScheme(
        1: string channelId,
        2: string otpId,
        3: list<string> authScheme,
        4: string returnUrl) throws(1: ChannelException e);

    string reserveCoinUse(
        2: CoinUseReservation request,
        3: string locale) throws(1: ChannelException e);

    void revokeChannel(
        1: string channelId) throws(1: ChannelException e);

    ChannelSyncDatas syncChannelData(
        2: i64 lastSynced,
        3: string locale) throws(1: ChannelException e);

    void updateChannelNotificationSetting(
        1: list<ChannelNotificationSetting> setting) throws(1: ChannelException e);
}

service MessageService {
    MessageOperations fetchMessageOperations(
        2: i64 localRevision,
        3: i64 lastOpTimestamp,
        4: i32 count) throws(1: TalkException e);

    LastReadMessageIds getLastReadMessageIds(
        2: string chatId) throws(1: TalkException e);

    list<LastReadMessageIds> multiGetLastReadMessageIds(
        2: list<string> chatIds) throws(1: TalkException e);
}

service ShopService {
    void buyCoinProduct(
        2: PaymentReservation paymentReservation) throws(1: TalkException e);

    void buyFreeProduct(
        2: string receiverMid,
        3: string productId,
        4: i32 messageTemplate,
        5: string language,
        6: string country,
        7: i64 packageId) throws(1: TalkException e);

    void buyMustbuyProduct(
        2: string receiverMid,
        3: string productId,
        4: i32 messageTemplate,
        5: string language,
        6: string country,
        7: i64 packageId,
        8: string serialNumber) throws(1: TalkException e);

    void checkCanReceivePresent(
        2: string recipientMid,
        3: i64 packageId,
        4: string language,
        5: string country) throws(1: TalkException e);

    ProductList getActivePurchases(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    ProductSimpleList getActivePurchaseVersions(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    list<CoinProductItem> getCoinProducts(
        2: PaymentType appStoreCode,
        3: string country,
        4: string language) throws(1: TalkException e);

    list<CoinProductItem> getCoinProductsByPgCode(
        2: PaymentType appStoreCode,
        3: PaymentPgType pgCode,
        4: string country,
        5: string language) throws(1: TalkException e);

    CoinHistoryResult getCoinPurchaseHistory(
        2: CoinHistoryCondition request) throws(1: TalkException e);

    CoinHistoryResult getCoinUseAndRefundHistory(
        2: CoinHistoryCondition request) throws(1: TalkException e);

    ProductList getDownloads(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    ProductList getEventPackages(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    ProductList getNewlyReleasedPackages(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    ProductList getPopularPackages(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    ProductList getPresentsReceived(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    ProductList getPresentsSent(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    Product getProduct(
        2: i64 packageID,
        3: string language,
        4: string country) throws(1: TalkException e);

    ProductList getProductList(
        2: list<string> productIdList,
        3: string language,
        4: string country) throws(1: TalkException e);

    ProductList getProductListWithCarrier(
        2: list<string> productIdList,
        3: string language,
        4: string country,
        5: string carrierCode) throws(1: TalkException e);

    Product getProductWithCarrier(
        2: i64 packageID,
        3: string language,
        4: string country,
        5: string carrierCode) throws(1: TalkException e);

    ProductList getPurchaseHistory(
        2: i64 start,
        3: i32 size,
        4: string language,
        5: string country) throws(1: TalkException e);

    Coin getTotalBalance(
        2: PaymentType appStoreCode) throws(1: TalkException e);

    i64 notifyDownloaded(
        2: i64 packageId,
        3: string language) throws(1: TalkException e);

    PaymentReservationResult reserveCoinPurchase(
        2: CoinPurchaseReservation request) throws(1: TalkException e);

    PaymentReservationResult reservePayment(
        2: PaymentReservation paymentReservation) throws(1: TalkException e);
}

service SnsAdaptorService {
    SnsFriends getSnsFriends(
        2: SnsIdType snsIdType,
        3: string snsAccessToken,
        4: i32 startIdx,
        5: i32 limit) throws(1: TalkException e);

    SnsProfile getSnsMyProfile(
        2: SnsIdType snsIdType,
        3: string snsAccessToken) throws(1: TalkException e);

    void postSnsInvitationMessage(
        2: SnsIdType snsIdType,
        3: string snsAccessToken,
        4: string toSnsUserId) throws(1: TalkException e);
}

service TalkService {
    void acceptGroupInvitation(
        1: i32 reqSeq,
        2: string groupId) throws(1: TalkException e);

    void acceptProximityMatches(
        2: string sessionId,
        3: set<string> ids) throws(1: TalkException e);

    list<string> acquireCallRoute(
        2: string to) throws(1: TalkException e);

    string acquireCallTicket(
        2: string to) throws(1: TalkException e);

    string acquireEncryptedAccessToken(
        2: FeatureType featureType) throws(1: TalkException e);

    string addSnsId(
        2: SnsIdType snsIdType,
        3: string snsAccessToken) throws(1: TalkException e);

    void blockContact(
        1: i32 reqSeq,
        2: string id) throws(1: TalkException e);

    void blockRecommendation(
        1: i32 reqSeq,
        2: string id) throws(1: TalkException e);

    void cancelGroupInvitation(
        1: i32 reqSeq,
        2: string groupId,
        3: list<string> contactIds) throws(1: TalkException e);

    VerificationSessionData changeVerificationMethod(
        2: string sessionId,
        3: VerificationMethod method) throws(1: TalkException e);

    void clearIdentityCredential() throws(1: TalkException e);

    void clearMessageBox(
        2: string channelId,
        3: string messageBoxId) throws(1: TalkException e);

    void closeProximityMatch(
        2: string sessionId) throws(1: TalkException e);

    map<string, string> commitSendMessage(
        1: i32 seq,
        2: string messageId,
        3: list<string> receiverMids) throws(1: TalkException e);

    map<string, string> commitSendMessages(
        1: i32 seq,
        2: list<string> messageIds,
        3: list<string> receiverMids) throws(1: TalkException e);

    map<string, string> commitUpdateProfile(
        1: i32 seq,
        2: list<ProfileAttribute> attrs,
        3: list<string> receiverMids) throws(1: TalkException e);

    void confirmEmail(
        2: string verifier,
        3: string pinCode) throws(1: TalkException e);

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

    list<Announcement> fetchAnnouncements(
        2: i32 lastFetchedIndex) throws(1: TalkException e);

    list<Message> fetchMessages(
        2: i64 localTs,
        3: i32 count) throws(1: TalkException e);

    list<Operation> fetchOperations(
        2: i64 localRev,
        3: i32 count) throws(1: TalkException e);

    list<Operation> fetchOps(
        2: i64 localRev,
        3: i32 count,
        4: i64 globalRev,
        5: i64 individualRev) throws(1: TalkException e);

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

    SnsIdUserStatus findSnsIdUserStatus(
        2: SnsIdType snsIdType,
        3: string snsAccessToken,
        4: string udidHash) throws(1: TalkException e);

    void finishUpdateVerification(
        2: string sessionId) throws(1: TalkException e);

    Ticket generateUserTicket(
        3: i64 expirationTime,
        4: i32 maxUseCount) throws(1: TalkException e);

    set<string> getAcceptedProximityMatches(
        2: string sessionId) throws(1: TalkException e);

    list<string> getActiveBuddySubscriberIds() throws(1: TalkException e);

    list<string> getAllContactIds() throws(1: TalkException e);

    AuthQrcode getAuthQrcode(
        2: bool keepLoggedIn,
        3: string systemName) throws(1: TalkException e);

    list<string> getBlockedContactIds() throws(1: TalkException e);

    list<string> getBlockedContactIdsByRange(
        2: i32 start,
        3: i32 count) throws(1: TalkException e);

    list<string> getBlockedRecommendationIds() throws(1: TalkException e);

    list<string> getBuddyBlockerIds() throws(1: TalkException e);

    Geolocation getBuddyLocation(
        2: string mid,
        3: i32 index) throws(1: TalkException e);

    list<CompactContact> getCompactContactsModifiedSince(
        2: i64 timestamp) throws(1: TalkException e);

    Group getCompactGroup(
        2: string groupId) throws(1: TalkException e);

    Room getCompactRoom(
        2: string roomId) throws(1: TalkException e);

    Contact getContact(
        2: string id) throws(1: TalkException e);

    list<Contact> getContacts(
        2: list<string> ids) throws(1: TalkException e);

    string getCountryWithRequestIp() throws(1: TalkException e);

    list<string> getFavoriteMids() throws(1: TalkException e);

    Group getGroup(
        2: string groupId) throws(1: TalkException e);

    list<string> getGroupIdsInvited() throws(1: TalkException e);

    list<string> getGroupIdsJoined() throws(1: TalkException e);

    list<Group> getGroups(
        2: list<string> groupIds) throws(1: TalkException e);

    list<string> getHiddenContactMids() throws(1: TalkException e);

    string getIdentityIdentifier() throws(1: TalkException e);

    i32 getLastAnnouncementIndex() throws(1: TalkException e);

    i64 getLastOpRevision() throws(1: TalkException e);

    TMessageBox getMessageBox(
        2: string channelId,
        3: string messageBoxId,
        4: i32 lastMessagesCount) throws(1: TalkException e);

    TMessageBoxWrapUp getMessageBoxCompactWrapUp(
        2: string mid) throws(1: TalkException e);

    TMessageBoxWrapUpResponse getMessageBoxCompactWrapUpList(
        2: i32 start,
        3: i32 messageBoxCount) throws(1: TalkException e);

    list<TMessageBox> getMessageBoxList(
        2: string channelId,
        3: i32 lastMessagesCount) throws(1: TalkException e);

    list<TMessageBox> getMessageBoxListByStatus(
        2: string channelId,
        3: i32 lastMessagesCount,
        4: i32 status) throws(1: TalkException e);

    TMessageBoxWrapUp getMessageBoxWrapUp(
        2: string mid) throws(1: TalkException e);

    TMessageBoxWrapUpResponse getMessageBoxWrapUpList(
        2: i32 start,
        3: i32 messageBoxCount) throws(1: TalkException e);

    list<Message> getMessagesBySequenceNumber(
        2: string channelId,
        3: string messageBoxId,
        4: i64 startSeq,
        5: i64 endSeq) throws(1: TalkException e);

    list<Message> getNextMessages(
        2: string messageBoxId,
        3: i64 startSeq,
        4: i32 messagesCount) throws(1: TalkException e);

    list<NotificationType> getNotificationPolicy(
        2: CarrierCode carrier) throws(1: TalkException e);

    list<Message> getPreviousMessages(
        2: string messageBoxId,
        3: i64 endSeq,
        4: i32 messagesCount) throws(1: TalkException e);

    Profile getProfile() throws(1: TalkException e);

    ProximityMatchCandidateResult getProximityMatchCandidateList(
        2: string sessionId) throws(1: TalkException e);

    set<Contact> getProximityMatchCandidates(
        2: string sessionId) throws(1: TalkException e);

    list<Message> getRecentMessages(
        2: string messageBoxId,
        3: i32 messagesCount) throws(1: TalkException e);

    list<string> getRecommendationIds() throws(1: TalkException e);

    Room getRoom(
        2: string roomId) throws(1: TalkException e);

    RSAKey getRSAKeyInfo(
        2: IdentityProvider provider) throws(1: TalkException e);

    i64 getServerTime() throws(1: TalkException e);

    list<LoginSession> getSessions() throws(1: TalkException e);

    Settings getSettings() throws(1: TalkException e);

    Settings getSettingsAttributes(
        2: i32 attrBitset) throws(1: TalkException e);

    SystemConfiguration getSystemConfiguration() throws(1: TalkException e);

    Ticket getUserTicket() throws(1: TalkException e);

    WapInvitation getWapInvitation(
        2: string invitationHash) throws(1: TalkException e);

    void invalidateUserTicket() throws(1: TalkException e);

    void inviteFriendsBySms(
        2: list<string> phoneNumberList) throws(1: TalkException e);

    void inviteIntoGroup(
        1: i32 reqSeq,
        2: string groupId,
        3: list<string> contactIds) throws(1: TalkException e);

    void inviteIntoRoom(
        1: i32 reqSeq,
        2: string roomId,
        3: list<string> contactIds) throws(1: TalkException e);

    void inviteViaEmail(
        1: i32 reqSeq,
        2: string email,
        3: string name) throws(1: TalkException e);

    bool isIdentityIdentifierAvailable(
        3: IdentityProvider provider,
        2: string identifier) throws(1: TalkException e);

    bool isUseridAvailable(
        2: string userid) throws(1: TalkException e);

    void kickoutFromGroup(
        1: i32 reqSeq,
        2: string groupId,
        3: list<string> contactIds) throws(1: TalkException e);

    void leaveGroup(
        1: i32 reqSeq,
        2: string groupId) throws(1: TalkException e);

    void leaveRoom(
        1: i32 reqSeq,
        2: string roomId) throws(1: TalkException e);

    LoginResult loginZ(
        2: LoginRequest loginRequest) throws(1: TalkException e);

    string loginWithIdentityCredential(
        8: IdentityProvider identityProvider,
        3: string identifier,
        4: string password,
        5: bool keepLoggedIn,
        6: string accessLocation,
        7: string systemName,
        9: string certificate) throws(1: TalkException e);

    LoginResult loginWithIdentityCredentialForCertificate(
        8: IdentityProvider identityProvider,
        3: string identifier,
        4: string password,
        5: bool keepLoggedIn,
        6: string accessLocation,
        7: string systemName,
        9: string certificate) throws(1: TalkException e);

    string loginWithVerifier(
        3: string verifier) throws(1: TalkException e);

    LoginResult loginWithVerifierForCerificate(
        3: string verifier) throws(1: TalkException e);

    LoginResult loginWithVerifierForCertificate(
        3: string verifier) throws(1: TalkException e);

    void logout() throws(1: TalkException e);

    void logoutSession(
        2: string tokenKey) throws(1: TalkException e);

    void noop() throws(1: TalkException e);

    void notifiedRedirect(
        2: map<string, string> paramMap) throws(1: TalkException e);

    map<string, string> notifyBuddyOnAir(
        1: i32 seq,
        2: list<string> receiverMids) throws(1: TalkException e);

    void notifyIndividualEvent(
        2: NotificationStatus notificationStatus,
        3: list<string> receiverMids) throws(1: TalkException e);

    void notifyInstalled(
        2: string udidHash,
        3: string applicationTypeWithExtensions);

    void notifyRegistrationComplete(
        2: string udidHash,
        3: string applicationTypeWithExtensions);

    void notifySleep(
        2: i64 lastRev,
        3: i32 badge) throws(1: TalkException e);

    void notifyUpdated(
        2: i64 lastRev,
        3: DeviceInfo deviceInfo) throws(1: TalkException e);

    string openProximityMatch(
        2: Location location) throws(1: TalkException e);

    string registerBuddyUser(
        2: string buddyId,
        3: string registrarPassword) throws(1: TalkException e);

    void registerBuddyUserid(
        2: i32 seq,
        3: string userid) throws(1: TalkException e);

    string registerDevice(
        2: string sessionId) throws(1: TalkException e);

    string registerDeviceWithIdentityCredential(
        2: string sessionId,
        5: IdentityProvider provider,
        3: string identifier,
        4: string verifier) throws(1: TalkException e);

    string registerDeviceWithoutPhoneNumber(
        2: string region,
        3: string udidHash,
        4: DeviceInfo deviceInfo) throws(1: TalkException e);

    string registerDeviceWithoutPhoneNumberWithIdentityCredential(
        2: string region,
        3: string udidHash,
        4: DeviceInfo deviceInfo,
        5: IdentityProvider provider,
        6: string identifier,
        7: string verifier,
        8: string mid) throws(1: TalkException e);

    bool registerUserid(
        1: i32 reqSeq,
        2: string userid) throws(1: TalkException e);

    string registerWapDevice(
        2: string invitationHash,
        3: string guidHash,
        4: string email,
        5: DeviceInfo deviceInfo) throws(1: TalkException e);

    string registerWithExistingSnsIdAndIdentityCredential(
        2: IdentityCredential identityCredential,
        3: string region,
        4: string udidHash,
        5: DeviceInfo deviceInfo) throws(1: TalkException e);

    RegisterWithSnsIdResult registerWithSnsId(
        2: SnsIdType snsIdType,
        3: string snsAccessToken,
        4: string region,
        5: string udidHash,
        6: DeviceInfo deviceInfo,
        7: string mid) throws(1: TalkException e);

    string registerWithSnsIdAndIdentityCredential(
        2: SnsIdType snsIdType,
        3: string snsAccessToken,
        4: IdentityCredential identityCredential,
        5: string region,
        6: string udidHash,
        7: DeviceInfo deviceInfo) throws(1: TalkException e);

    string reissueDeviceCredential() throws(1: TalkException e);

    string reissueUserTicket(
        3: i64 expirationTime,
        4: i32 maxUseCount) throws(1: TalkException e);

    void rejectGroupInvitation(
        1: i32 reqSeq,
        2: string groupId) throws(1: TalkException e);

    void releaseSession() throws(1: TalkException e);

    void removeAllMessages(
        1: i32 seq,
        2: string lastMessageId) throws(1: TalkException e);

    void removeBuddyLocation(
        2: string mid,
        3: i32 index) throws(1: TalkException e);

    bool removeMessage(
        2: string messageId) throws(1: TalkException e);

    bool removeMessageFromMyHome(
        2: string messageId) throws(1: TalkException e);

    string removeSnsId(
        2: SnsIdType snsIdType) throws(1: TalkException e);

    void report(
        2: i64 syncOpRevision,
        3: SyncCategory category,
        4: string report) throws(1: TalkException e);

    list<ContactReportResult> reportContacts(
        2: i64 syncOpRevision,
        3: SyncCategory category,
        4: list<ContactReport> contactReports,
        5: SyncActionType actionType) throws(1: TalkException e);

    void reportGroups(
        2: i64 syncOpRevision,
        3: list<Group> groups) throws(1: TalkException e);

    void reportProfile(
        2: i64 syncOpRevision,
        3: Profile profile) throws(1: TalkException e);

    void reportRooms(
        2: i64 syncOpRevision,
        3: list<Room> rooms) throws(1: TalkException e);

    void reportSettings(
        2: i64 syncOpRevision,
        3: Settings settings) throws(1: TalkException e);

    void reportSpammer(
        2: string spammerMid,
        3: list<SpammerReason> spammerReasons,
        4: list<string> spamMessageIds) throws(1: TalkException e);

    void requestAccountPasswordReset(
        4: IdentityProvider provider,
        2: string identifier,
        5: string locale) throws(1: TalkException e);

    EmailConfirmationSession requestEmailConfirmation(
        2: EmailConfirmation emailConfirmation) throws(1: TalkException e);

    void requestIdentityUnbind(
        4: IdentityProvider provider,
        2: string identifier) throws(1: TalkException e);

    EmailConfirmationSession resendEmailConfirmation(
        2: string verifier) throws(1: TalkException e);

    void resendPinCode(
        2: string sessionId) throws(1: TalkException e);

    void resendPinCodeBySMS(
        2: string sessionId) throws(1: TalkException e);

    void sendChatChecked(
        1: i32 seq,
        2: string consumer,
        3: string lastMessageId) throws(1: TalkException e);

    void sendChatRemoved(
        1: i32 seq,
        2: string consumer,
        3: string lastMessageId) throws(1: TalkException e);

    map<string, string> sendContentPreviewUpdated(
        1: i32 esq,
        2: string messageId,
        3: list<string> receiverMids) throws(1: TalkException e);

    void sendContentReceipt(
        1: i32 seq,
        2: string consumer,
        3: string messageId) throws(1: TalkException e);

    void sendDummyPush() throws(1: TalkException e);

    Message sendEvent(
        1: i32 seq,
        2: Message message) throws(1: TalkException e);

    Message sendMessage(
        1: i32 seq,
        2: Message message) throws(1: TalkException e);

    void sendMessageIgnored(
        1: i32 seq,
        2: string consumer,
        3: list<string> messageIds) throws(1: TalkException e);

    void sendMessageReceipt(
        1: i32 seq,
        2: string consumer,
        3: list<string> messageIds) throws(1: TalkException e);

    Message sendMessageToMyHome(
        1: i32 seq,
        2: Message message) throws(1: TalkException e);

    void setBuddyLocation(
        2: string mid,
        3: i32 index,
        4: Geolocation location) throws(1: TalkException e);

    void setIdentityCredential(
        4: IdentityProvider provider,
        2: string identifier,
        3: string verifier) throws(1: TalkException e);

    void setNotificationsEnabled(
        1: i32 reqSeq,
        2: MIDType type,
        3: string target,
        4: bool enablement) throws(1: TalkException e);

    VerificationSessionData startUpdateVerification(
        2: string region,
        3: CarrierCode carrier,
        4: string phone,
        5: string udidHash,
        6: DeviceInfo deviceInfo,
        7: string networkCode,
        8: string locale) throws(1: TalkException e);

    VerificationSessionData startVerification(
        2: string region,
        3: CarrierCode carrier,
        4: string phone,
        5: string udidHash,
        6: DeviceInfo deviceInfo,
        7: string networkCode,
        8: string mid,
        9: string locale) throws(1: TalkException e);

    void storeUpdateProfileAttribute(
        1: i32 seq,
        2: ProfileAttribute profileAttribute,
        3: string value) throws(1: TalkException e);

    list<SnsFriendContactRegistration> syncContactBySnsIds(
        1: i32 reqSeq,
        2: list<SnsFriendModification> modifications) throws(1: TalkException e);

    map<string, ContactRegistration> syncContacts(
        1: i32 reqSeq,
        2: list<ContactModification> localContacts) throws(1: TalkException e);

    Message trySendMessage(
        1: i32 seq,
        2: Message message) throws(1: TalkException e);

    void unblockContact(
        1: i32 reqSeq,
        2: string id) throws(1: TalkException e);

    void unblockRecommendation(
        1: i32 reqSeq,
        2: string id) throws(1: TalkException e);

    string unregisterUserAndDevice() throws(1: TalkException e);

    void updateApnsDeviceToken(
        2: binary apnsDeviceToken) throws(1: TalkException e);

    void updateBuddySetting(
        2: string key,
        3: string value) throws(1: TalkException e);

    void updateC2DMRegistrationId(
        2: string registrationId) throws(1: TalkException e);

    void updateContactSetting(
        1: i32 reqSeq,
        2: string mid,
        3: ContactSetting flag,
        4: string value) throws(1: TalkException e);

    void updateCustomModeSettings(
        2: CustomMode customMode,
        3: map<string, string> paramMap) throws(1: TalkException e);

    void updateDeviceInfo(
        2: string deviceUid,
        3: DeviceInfo deviceInfo) throws(1: TalkException e);

    void updateGroup(
        1: i32 reqSeq,
        2: Group group) throws(1: TalkException e);

    void updateNotificationToken(
        3: NotificationType type,
        2: string token) throws(1: TalkException e);

    void updateNotificationTokenWithBytes(
        3: NotificationType type,
        2: binary token) throws(1: TalkException e);

    void updateProfile(
        1: i32 reqSeq,
        2: Profile profile) throws(1: TalkException e);

    void updateProfileAttribute(
        1: i32 reqSeq,
        2: ProfileAttribute attr,
        3: string value) throws(1: TalkException e);

    void updateRegion(
        2: string region) throws(1: TalkException e);

    void updateSettings(
        1: i32 reqSeq,
        2: Settings settings) throws(1: TalkException e);

    i32 updateSettings2(
        1: i32 reqSeq,
        2: Settings settings) throws(1: TalkException e);

    void updateSettingsAttribute(
        1: i32 reqSeq,
        2: SettingsAttribute attr,
        3: string value) throws(1: TalkException e);

    i32 updateSettingsAttributes(
        1: i32 reqSeq,
        2: i32 attrBitset,
        3: Settings settings) throws(1: TalkException e);

    void verifyIdentityCredential(
        8: IdentityProvider identityProvider,
        3: string identifier,
        4: string password) throws(1: TalkException e);

    UserAuthStatus verifyIdentityCredentialWithResult(
        2: IdentityCredential identityCredential) throws(1: TalkException e);

    VerificationResult verifyPhone(
        2: string sessionId,
        3: string pinCode,
        4: string udidHash) throws(1: TalkException e);

    string verifyQrcode(
        2: string verifier,
        3: string pinCode) throws(1: TalkException e);
}

service UniversalNotificationService {
    void notify(
        2: GlobalEvent event) throws(1: UniversalNotificationServiceException e);
}
