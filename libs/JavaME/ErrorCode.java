/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
public class ErrorCode implements org.apache.thrift.TEnum {

  public static final ErrorCode ILLEGAL_ARGUMENT = new ErrorCode(0);
  public static final ErrorCode AUTHENTICATION_FAILED = new ErrorCode(1);
  public static final ErrorCode DB_FAILED = new ErrorCode(2);
  public static final ErrorCode INVALID_STATE = new ErrorCode(3);
  public static final ErrorCode EXCESSIVE_ACCESS = new ErrorCode(4);
  public static final ErrorCode NOT_FOUND = new ErrorCode(5);
  public static final ErrorCode INVALID_LENGTH = new ErrorCode(6);
  public static final ErrorCode NOT_AVAILABLE_USER = new ErrorCode(7);
  public static final ErrorCode NOT_AUTHORIZED_DEVICE = new ErrorCode(8);
  public static final ErrorCode INVALID_MID = new ErrorCode(9);
  public static final ErrorCode NOT_A_MEMBER = new ErrorCode(10);
  public static final ErrorCode INCOMPATIBLE_APP_VERSION = new ErrorCode(11);
  public static final ErrorCode NOT_READY = new ErrorCode(12);
  public static final ErrorCode NOT_AVAILABLE_SESSION = new ErrorCode(13);
  public static final ErrorCode NOT_AUTHORIZED_SESSION = new ErrorCode(14);
  public static final ErrorCode SYSTEM_ERROR = new ErrorCode(15);
  public static final ErrorCode NO_AVAILABLE_VERIFICATION_METHOD = new ErrorCode(16);
  public static final ErrorCode NOT_AUTHENTICATED = new ErrorCode(17);
  public static final ErrorCode INVALID_IDENTITY_CREDENTIAL = new ErrorCode(18);
  public static final ErrorCode NOT_AVAILABLE_IDENTITY_IDENTIFIER = new ErrorCode(19);
  public static final ErrorCode INTERNAL_ERROR = new ErrorCode(20);
  public static final ErrorCode NO_SUCH_IDENTITY_IDENFIER = new ErrorCode(21);
  public static final ErrorCode DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY = new ErrorCode(22);
  public static final ErrorCode ILLEGAL_IDENTITY_CREDENTIAL = new ErrorCode(23);
  public static final ErrorCode UNKNOWN_CHANNEL = new ErrorCode(24);
  public static final ErrorCode NO_SUCH_MESSAGE_BOX = new ErrorCode(25);
  public static final ErrorCode NOT_AVAILABLE_MESSAGE_BOX = new ErrorCode(26);
  public static final ErrorCode CHANNEL_DOES_NOT_MATCH = new ErrorCode(27);
  public static final ErrorCode NOT_YOUR_MESSAGE = new ErrorCode(28);
  public static final ErrorCode MESSAGE_DEFINED_ERROR = new ErrorCode(29);
  public static final ErrorCode USER_CANNOT_ACCEPT_PRESENTS = new ErrorCode(30);
  public static final ErrorCode USER_NOT_STICKER_OWNER = new ErrorCode(32);
  public static final ErrorCode MAINTENANCE_ERROR = new ErrorCode(33);
  public static final ErrorCode ACCOUNT_NOT_MATCHED = new ErrorCode(34);
  public static final ErrorCode ABUSE_BLOCK = new ErrorCode(35);
  public static final ErrorCode NOT_FRIEND = new ErrorCode(36);
  public static final ErrorCode NOT_ALLOWED_CALL = new ErrorCode(37);
  public static final ErrorCode BLOCK_FRIEND = new ErrorCode(38);
  public static final ErrorCode INCOMPATIBLE_VOIP_VERSION = new ErrorCode(39);
  public static final ErrorCode INVALID_SNS_ACCESS_TOKEN = new ErrorCode(40);
  public static final ErrorCode EXTERNAL_SERVICE_NOT_AVAILABLE = new ErrorCode(41);
  public static final ErrorCode NOT_ALLOWED_ADD_CONTACT = new ErrorCode(42);
  public static final ErrorCode NOT_CERTIFICATED = new ErrorCode(43);
  public static final ErrorCode NOT_ALLOWED_SECONDARY_DEVICE = new ErrorCode(44);
  public static final ErrorCode INVALID_PIN_CODE = new ErrorCode(45);
  public static final ErrorCode NOT_FOUND_IDENTITY_CREDENTIAL = new ErrorCode(46);
  public static final ErrorCode EXCEED_FILE_MAX_SIZE = new ErrorCode(47);
  public static final ErrorCode EXCEED_DAILY_QUOTA = new ErrorCode(48);
  public static final ErrorCode NOT_SUPPORT_SEND_FILE = new ErrorCode(49);
  public static final ErrorCode MUST_UPGRADE = new ErrorCode(50);
  public static final ErrorCode NOT_AVAILABLE_PIN_CODE_SESSION = new ErrorCode(51);

  private final int value;

  private ErrorCode(int value) {
    this.value = value;
  }

  /**
   * Get the integer value of this enum value, as defined in the Thrift IDL.
   */
  public int getValue() {
    return value;
  }

  /**
   * Find a the enum type by its integer value, as defined in the Thrift IDL.
   * @return null if the value is not found.
   */
  public static ErrorCode findByValue(int value) { 
    switch (value) {
      case 0:
        return ILLEGAL_ARGUMENT;
      case 1:
        return AUTHENTICATION_FAILED;
      case 2:
        return DB_FAILED;
      case 3:
        return INVALID_STATE;
      case 4:
        return EXCESSIVE_ACCESS;
      case 5:
        return NOT_FOUND;
      case 6:
        return INVALID_LENGTH;
      case 7:
        return NOT_AVAILABLE_USER;
      case 8:
        return NOT_AUTHORIZED_DEVICE;
      case 9:
        return INVALID_MID;
      case 10:
        return NOT_A_MEMBER;
      case 11:
        return INCOMPATIBLE_APP_VERSION;
      case 12:
        return NOT_READY;
      case 13:
        return NOT_AVAILABLE_SESSION;
      case 14:
        return NOT_AUTHORIZED_SESSION;
      case 15:
        return SYSTEM_ERROR;
      case 16:
        return NO_AVAILABLE_VERIFICATION_METHOD;
      case 17:
        return NOT_AUTHENTICATED;
      case 18:
        return INVALID_IDENTITY_CREDENTIAL;
      case 19:
        return NOT_AVAILABLE_IDENTITY_IDENTIFIER;
      case 20:
        return INTERNAL_ERROR;
      case 21:
        return NO_SUCH_IDENTITY_IDENFIER;
      case 22:
        return DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY;
      case 23:
        return ILLEGAL_IDENTITY_CREDENTIAL;
      case 24:
        return UNKNOWN_CHANNEL;
      case 25:
        return NO_SUCH_MESSAGE_BOX;
      case 26:
        return NOT_AVAILABLE_MESSAGE_BOX;
      case 27:
        return CHANNEL_DOES_NOT_MATCH;
      case 28:
        return NOT_YOUR_MESSAGE;
      case 29:
        return MESSAGE_DEFINED_ERROR;
      case 30:
        return USER_CANNOT_ACCEPT_PRESENTS;
      case 32:
        return USER_NOT_STICKER_OWNER;
      case 33:
        return MAINTENANCE_ERROR;
      case 34:
        return ACCOUNT_NOT_MATCHED;
      case 35:
        return ABUSE_BLOCK;
      case 36:
        return NOT_FRIEND;
      case 37:
        return NOT_ALLOWED_CALL;
      case 38:
        return BLOCK_FRIEND;
      case 39:
        return INCOMPATIBLE_VOIP_VERSION;
      case 40:
        return INVALID_SNS_ACCESS_TOKEN;
      case 41:
        return EXTERNAL_SERVICE_NOT_AVAILABLE;
      case 42:
        return NOT_ALLOWED_ADD_CONTACT;
      case 43:
        return NOT_CERTIFICATED;
      case 44:
        return NOT_ALLOWED_SECONDARY_DEVICE;
      case 45:
        return INVALID_PIN_CODE;
      case 46:
        return NOT_FOUND_IDENTITY_CREDENTIAL;
      case 47:
        return EXCEED_FILE_MAX_SIZE;
      case 48:
        return EXCEED_DAILY_QUOTA;
      case 49:
        return NOT_SUPPORT_SEND_FILE;
      case 50:
        return MUST_UPGRADE;
      case 51:
        return NOT_AVAILABLE_PIN_CODE_SESSION;
      default:
        return null;
    }
  }
}
