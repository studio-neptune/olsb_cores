/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
public class OpType implements org.apache.thrift.TEnum {

  public static final OpType END_OF_OPERATION = new OpType(0);
  public static final OpType UPDATE_PROFILE = new OpType(1);
  public static final OpType NOTIFIED_UPDATE_PROFILE = new OpType(2);
  public static final OpType REGISTER_USERID = new OpType(3);
  public static final OpType ADD_CONTACT = new OpType(4);
  public static final OpType NOTIFIED_ADD_CONTACT = new OpType(5);
  public static final OpType BLOCK_CONTACT = new OpType(6);
  public static final OpType UNBLOCK_CONTACT = new OpType(7);
  public static final OpType NOTIFIED_RECOMMEND_CONTACT = new OpType(8);
  public static final OpType CREATE_GROUP = new OpType(9);
  public static final OpType UPDATE_GROUP = new OpType(10);
  public static final OpType NOTIFIED_UPDATE_GROUP = new OpType(11);
  public static final OpType INVITE_INTO_GROUP = new OpType(12);
  public static final OpType NOTIFIED_INVITE_INTO_GROUP = new OpType(13);
  public static final OpType LEAVE_GROUP = new OpType(14);
  public static final OpType NOTIFIED_LEAVE_GROUP = new OpType(15);
  public static final OpType ACCEPT_GROUP_INVITATION = new OpType(16);
  public static final OpType NOTIFIED_ACCEPT_GROUP_INVITATION = new OpType(17);
  public static final OpType KICKOUT_FROM_GROUP = new OpType(18);
  public static final OpType NOTIFIED_KICKOUT_FROM_GROUP = new OpType(19);
  public static final OpType CREATE_ROOM = new OpType(20);
  public static final OpType INVITE_INTO_ROOM = new OpType(21);
  public static final OpType NOTIFIED_INVITE_INTO_ROOM = new OpType(22);
  public static final OpType LEAVE_ROOM = new OpType(23);
  public static final OpType NOTIFIED_LEAVE_ROOM = new OpType(24);
  public static final OpType SEND_MESSAGE = new OpType(25);
  public static final OpType RECEIVE_MESSAGE = new OpType(26);
  public static final OpType SEND_MESSAGE_RECEIPT = new OpType(27);
  public static final OpType RECEIVE_MESSAGE_RECEIPT = new OpType(28);
  public static final OpType SEND_CONTENT_RECEIPT = new OpType(29);
  public static final OpType RECEIVE_ANNOUNCEMENT = new OpType(30);
  public static final OpType CANCEL_INVITATION_GROUP = new OpType(31);
  public static final OpType NOTIFIED_CANCEL_INVITATION_GROUP = new OpType(32);
  public static final OpType NOTIFIED_UNREGISTER_USER = new OpType(33);
  public static final OpType REJECT_GROUP_INVITATION = new OpType(34);
  public static final OpType NOTIFIED_REJECT_GROUP_INVITATION = new OpType(35);
  public static final OpType UPDATE_SETTINGS = new OpType(36);
  public static final OpType NOTIFIED_REGISTER_USER = new OpType(37);
  public static final OpType INVITE_VIA_EMAIL = new OpType(38);
  public static final OpType NOTIFIED_REQUEST_RECOVERY = new OpType(39);
  public static final OpType SEND_CHAT_CHECKED = new OpType(40);
  public static final OpType SEND_CHAT_REMOVED = new OpType(41);
  public static final OpType NOTIFIED_FORCE_SYNC = new OpType(42);
  public static final OpType SEND_CONTENT = new OpType(43);
  public static final OpType SEND_MESSAGE_MYHOME = new OpType(44);
  public static final OpType NOTIFIED_UPDATE_CONTENT_PREVIEW = new OpType(45);
  public static final OpType REMOVE_ALL_MESSAGES = new OpType(46);
  public static final OpType NOTIFIED_UPDATE_PURCHASES = new OpType(47);
  public static final OpType DUMMY = new OpType(48);
  public static final OpType UPDATE_CONTACT = new OpType(49);
  public static final OpType NOTIFIED_RECEIVED_CALL = new OpType(50);
  public static final OpType CANCEL_CALL = new OpType(51);
  public static final OpType NOTIFIED_REDIRECT = new OpType(52);
  public static final OpType NOTIFIED_CHANNEL_SYNC = new OpType(53);
  public static final OpType FAILED_SEND_MESSAGE = new OpType(54);
  public static final OpType NOTIFIED_READ_MESSAGE = new OpType(55);
  public static final OpType FAILED_EMAIL_CONFIRMATION = new OpType(56);
  public static final OpType NOTIFIED_CHAT_CONTENT = new OpType(58);
  public static final OpType NOTIFIED_PUSH_NOTICENTER_ITEM = new OpType(59);

  private final int value;

  private OpType(int value) {
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
  public static OpType findByValue(int value) { 
    switch (value) {
      case 0:
        return END_OF_OPERATION;
      case 1:
        return UPDATE_PROFILE;
      case 2:
        return NOTIFIED_UPDATE_PROFILE;
      case 3:
        return REGISTER_USERID;
      case 4:
        return ADD_CONTACT;
      case 5:
        return NOTIFIED_ADD_CONTACT;
      case 6:
        return BLOCK_CONTACT;
      case 7:
        return UNBLOCK_CONTACT;
      case 8:
        return NOTIFIED_RECOMMEND_CONTACT;
      case 9:
        return CREATE_GROUP;
      case 10:
        return UPDATE_GROUP;
      case 11:
        return NOTIFIED_UPDATE_GROUP;
      case 12:
        return INVITE_INTO_GROUP;
      case 13:
        return NOTIFIED_INVITE_INTO_GROUP;
      case 14:
        return LEAVE_GROUP;
      case 15:
        return NOTIFIED_LEAVE_GROUP;
      case 16:
        return ACCEPT_GROUP_INVITATION;
      case 17:
        return NOTIFIED_ACCEPT_GROUP_INVITATION;
      case 18:
        return KICKOUT_FROM_GROUP;
      case 19:
        return NOTIFIED_KICKOUT_FROM_GROUP;
      case 20:
        return CREATE_ROOM;
      case 21:
        return INVITE_INTO_ROOM;
      case 22:
        return NOTIFIED_INVITE_INTO_ROOM;
      case 23:
        return LEAVE_ROOM;
      case 24:
        return NOTIFIED_LEAVE_ROOM;
      case 25:
        return SEND_MESSAGE;
      case 26:
        return RECEIVE_MESSAGE;
      case 27:
        return SEND_MESSAGE_RECEIPT;
      case 28:
        return RECEIVE_MESSAGE_RECEIPT;
      case 29:
        return SEND_CONTENT_RECEIPT;
      case 30:
        return RECEIVE_ANNOUNCEMENT;
      case 31:
        return CANCEL_INVITATION_GROUP;
      case 32:
        return NOTIFIED_CANCEL_INVITATION_GROUP;
      case 33:
        return NOTIFIED_UNREGISTER_USER;
      case 34:
        return REJECT_GROUP_INVITATION;
      case 35:
        return NOTIFIED_REJECT_GROUP_INVITATION;
      case 36:
        return UPDATE_SETTINGS;
      case 37:
        return NOTIFIED_REGISTER_USER;
      case 38:
        return INVITE_VIA_EMAIL;
      case 39:
        return NOTIFIED_REQUEST_RECOVERY;
      case 40:
        return SEND_CHAT_CHECKED;
      case 41:
        return SEND_CHAT_REMOVED;
      case 42:
        return NOTIFIED_FORCE_SYNC;
      case 43:
        return SEND_CONTENT;
      case 44:
        return SEND_MESSAGE_MYHOME;
      case 45:
        return NOTIFIED_UPDATE_CONTENT_PREVIEW;
      case 46:
        return REMOVE_ALL_MESSAGES;
      case 47:
        return NOTIFIED_UPDATE_PURCHASES;
      case 48:
        return DUMMY;
      case 49:
        return UPDATE_CONTACT;
      case 50:
        return NOTIFIED_RECEIVED_CALL;
      case 51:
        return CANCEL_CALL;
      case 52:
        return NOTIFIED_REDIRECT;
      case 53:
        return NOTIFIED_CHANNEL_SYNC;
      case 54:
        return FAILED_SEND_MESSAGE;
      case 55:
        return NOTIFIED_READ_MESSAGE;
      case 56:
        return FAILED_EMAIL_CONFIRMATION;
      case 58:
        return NOTIFIED_CHAT_CONTENT;
      case 59:
        return NOTIFIED_PUSH_NOTICENTER_ITEM;
      default:
        return null;
    }
  }
}
