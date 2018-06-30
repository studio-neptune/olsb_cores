//
// Compiled for SuperSonic Line API Lite
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


ApplicationType = {
  'DESKTOPWIN' : 96,
  'DESKTOPWIN_RC' : 97,
  'DESKTOPWIN_BETA' : 98,
  'DESKTOPWIN_ALPHA' : 99,
  'DESKTOPMAC' : 112,
  'DESKTOPMAC_RC' : 113,
  'DESKTOPMAC_BETA' : 114,
  'DESKTOPMAC_ALPHA' : 115
};
LoginType = {
  'ID_CREDENTIAL' : 0,
  'QRCODE' : 1,
  'ID_CREDENTIAL_WITH_E2EE' : 2
};
ContactType = {
  'MID' : 0,
  'PHONE' : 1,
  'EMAIL' : 2,
  'USERID' : 3,
  'PROXIMITY' : 4,
  'GROUP' : 5,
  'USER' : 6,
  'QRCODE' : 7,
  'PROMOTION_BOT' : 8,
  'CONTACT_MESSAGE' : 9,
  'FRIEND_REQUEST' : 10,
  'REPAIR' : 128,
  'FACEBOOK' : 2305,
  'SINA' : 2306,
  'RENREN' : 2307,
  'FEIXIN' : 2308,
  'BBM' : 2309,
  'BEACON' : 11
};
ContentType = {
  'NONE' : 0,
  'IMAGE' : 1,
  'VIDEO' : 2,
  'AUDIO' : 3,
  'HTML' : 4,
  'PDF' : 5,
  'CALL' : 6,
  'STICKER' : 7,
  'PRESENCE' : 8,
  'GIFT' : 9,
  'GROUPBOARD' : 10,
  'APPLINK' : 11,
  'LINK' : 12,
  'CONTACT' : 13,
  'FILE' : 14,
  'LOCATION' : 15,
  'POSTNOTIFICATION' : 16,
  'RICH' : 17,
  'CHATEVENT' : 18,
  'MUSIC' : 19,
  'PAYMENT' : 20,
  'EXTIMAGE' : 21
};
ErrorCode = {
  'ILLEGAL_ARGUMENT' : 0,
  'AUTHENTICATION_FAILED' : 1,
  'DB_FAILED' : 2,
  'INVALID_STATE' : 3,
  'EXCESSIVE_ACCESS' : 4,
  'NOT_FOUND' : 5,
  'INVALID_MID' : 9,
  'NOT_A_MEMBER' : 10,
  'INVALID_LENGTH' : 6,
  'NOT_AVAILABLE_USER' : 7,
  'NOT_AUTHORIZED_DEVICE' : 8,
  'NOT_AUTHORIZED_SESSION' : 14,
  'INCOMPATIBLE_APP_VERSION' : 11,
  'NOT_READY' : 12,
  'NOT_AVAILABLE_SESSION' : 13,
  'SYSTEM_ERROR' : 15,
  'NO_AVAILABLE_VERIFICATION_METHOD' : 16,
  'NOT_AUTHENTICATED' : 17,
  'INVALID_IDENTITY_CREDENTIAL' : 18,
  'NOT_AVAILABLE_IDENTITY_IDENTIFIER' : 19,
  'INTERNAL_ERROR' : 20,
  'NO_SUCH_IDENTITY_IDENFIER' : 21,
  'DEACTIVATED_ACCOUNT_BOUND_TO_THIS_IDENTITY' : 22,
  'ILLEGAL_IDENTITY_CREDENTIAL' : 23,
  'UNKNOWN_CHANNEL' : 24,
  'NO_SUCH_MESSAGE_BOX' : 25,
  'NOT_AVAILABLE_MESSAGE_BOX' : 26,
  'CHANNEL_DOES_NOT_MATCH' : 27,
  'NOT_YOUR_MESSAGE' : 28,
  'MESSAGE_DEFINED_ERROR' : 29,
  'USER_CANNOT_ACCEPT_PRESENTS' : 30,
  'USER_NOT_STICKER_OWNER' : 32,
  'MAINTENANCE_ERROR' : 33,
  'ACCOUNT_NOT_MATCHED' : 34,
  'ABUSE_BLOCK' : 35,
  'NOT_FRIEND' : 36,
  'NOT_ALLOWED_CALL' : 37,
  'BLOCK_FRIEND' : 38,
  'INCOMPATIBLE_VOIP_VERSION' : 39,
  'INVALID_SNS_ACCESS_TOKEN' : 40,
  'EXTERNAL_SERVICE_NOT_AVAILABLE' : 41,
  'NOT_ALLOWED_ADD_CONTACT' : 42,
  'NOT_CERTIFICATED' : 43,
  'NOT_ALLOWED_SECONDARY_DEVICE' : 44,
  'INVALID_PIN_CODE' : 45,
  'NOT_FOUND_IDENTITY_CREDENTIAL' : 46,
  'EXCEED_FILE_MAX_SIZE' : 47,
  'EXCEED_DAILY_QUOTA' : 48,
  'NOT_SUPPORT_SEND_FILE' : 49,
  'MUST_UPGRADE' : 50,
  'NOT_AVAILABLE_PIN_CODE_SESSION' : 51,
  'EXPIRED_REVISION' : 52,
  'NOT_YET_PHONE_NUMBER' : 54,
  'BAD_CALL_NUMBER' : 55,
  'UNAVAILABLE_CALL_NUMBER' : 56,
  'NOT_SUPPORT_CALL_SERVICE' : 57,
  'CONGESTION_CONTROL' : 58,
  'NO_BALANCE' : 59,
  'NOT_PERMITTED_CALLER_ID' : 60,
  'NO_CALLER_ID_LIMIT_EXCEEDED' : 61,
  'CALLER_ID_VERIFICATION_REQUIRED' : 62,
  'NO_CALLER_ID_LIMIT_EXCEEDED_AND_VERIFICATION_REQUIRED' : 63,
  'MESSAGE_NOT_FOUND' : 64,
  'INVALID_ACCOUNT_MIGRATION_PINCODE_FORMAT' : 65,
  'ACCOUNT_MIGRATION_PINCODE_NOT_MATCHED' : 66,
  'ACCOUNT_MIGRATION_PINCODE_BLOCKED' : 67,
  'INVALID_PASSWORD_FORMAT' : 69,
  'FEATURE_RESTRICTED' : 70,
  'MESSAGE_NOT_DESTRUCTIBLE' : 71,
  'PAID_CALL_REDEEM_FAILED' : 72,
  'PREVENTED_JOIN_BY_TICKET' : 73,
  'SEND_MESSAGE_NOT_PERMITTED_FROM_LINE_AT' : 75,
  'SEND_MESSAGE_NOT_PERMITTED_WHILE_AUTO_REPLY' : 76,
  'SECURITY_CENTER_NOT_VERIFIED' : 77,
  'SECURITY_CENTER_BLOCKED_BY_SETTING' : 78,
  'SECURITY_CENTER_BLOCKED' : 79,
  'TALK_PROXY_EXCEPTION' : 80,
  'E2EE_INVALID_PROTOCOL' : 81,
  'E2EE_RETRY_ENCRYPT' : 82,
  'E2EE_UPDATE_SENDER_KEY' : 83,
  'E2EE_UPDATE_RECEIVER_KEY' : 84,
  'E2EE_INVALID_ARGUMENT' : 85,
  'E2EE_INVALID_VERSION' : 86,
  'E2EE_SENDER_DISABLED' : 87,
  'E2EE_RECEIVER_DISABLED' : 88,
  'E2EE_SENDER_NOT_ALLOWED' : 89,
  'E2EE_RECEIVER_NOT_ALLOWED' : 90,
  'E2EE_RESEND_FAIL' : 91,
  'E2EE_RESEND_OK' : 92,
  'HITOKOTO_BACKUP_NO_AVAILABLE_DATA' : 93,
  'E2EE_UPDATE_PRIMARY_DEVICE' : 94,
  'SUCCESS' : 95,
  'CANCEL' : 96,
  'E2EE_PRIMARY_NOT_SUPPORT' : 97,
  'E2EE_RETRY_PLAIN' : 98,
  'E2EE_RECREATE_GROUP_KEY' : 99,
  'E2EE_GROUP_TOO_MANY_MEMBERS' : 100,
  'SERVER_BUSY' : 101,
  'NOT_ALLOWED_ADD_FOLLOW' : 102,
  'INCOMING_FRIEND_REQUEST_LIMIT' : 103,
  'OUTGOING_FRIEND_REQUEST_LIMIT' : 104,
  'OUTGOING_FRIEND_REQUEST_QUOTA' : 105,
  'DUPLICATED' : 106,
  'BANNED' : 107
};
IdentityProvider = {
  'UNKNOWN' : 0,
  'LINE' : 1,
  'NAVER_KR' : 2,
  'LINE_PHONE' : 3
};
LoginResultType = {
  'SUCCESS' : 1,
  'REQUIRE_QRCODE' : 2,
  'REQUIRE_DEVICE_CONFIRM' : 3,
  'REQUIRE_SMS_CONFIRM' : 4
};
MessageOperationType = {
  'SEND_MESSAGE' : 1,
  'RECEIVE_MESSAGE' : 2,
  'READ_MESSAGE' : 3,
  'NOTIFIED_READ_MESSAGE' : 4,
  'NOTIFIED_JOIN_CHAT' : 5,
  'FAILED_SEND_MESSAGE' : 6,
  'SEND_CONTENT' : 7,
  'SEND_CONTENT_RECEIPT' : 8,
  'SEND_CHAT_REMOVED' : 9,
  'REMOVE_ALL_MESSAGES' : 10
};
MIDType = {
  'USER' : 0,
  'ROOM' : 1,
  'GROUP' : 2,
  'SQUARE' : 3,
  'SQUARE_CHAT' : 4,
  'SQUARE_MEMBER' : 5,
  'BOT' : 6
};
ServiceCode = {
  'UNKNOWN' : 0,
  'TALK' : 1,
  'SQUARE' : 2
};
OpStatus = {
  'NORMAL' : 0,
  'ALERT_DISABLED' : 1,
  'ALWAYS' : 2
};
OpType = {
  'END_OF_OPERATION' : 0,
  'UPDATE_PROFILE' : 1,
  'UPDATE_SETTINGS' : 36,
  'NOTIFIED_UPDATE_PROFILE' : 2,
  'REGISTER_USERID' : 3,
  'ADD_CONTACT' : 4,
  'NOTIFIED_ADD_CONTACT' : 5,
  'BLOCK_CONTACT' : 6,
  'UNBLOCK_CONTACT' : 7,
  'NOTIFIED_RECOMMEND_CONTACT' : 8,
  'CREATE_GROUP' : 9,
  'UPDATE_GROUP' : 10,
  'NOTIFIED_UPDATE_GROUP' : 11,
  'INVITE_INTO_GROUP' : 12,
  'NOTIFIED_INVITE_INTO_GROUP' : 13,
  'CANCEL_INVITATION_GROUP' : 31,
  'NOTIFIED_CANCEL_INVITATION_GROUP' : 32,
  'LEAVE_GROUP' : 14,
  'NOTIFIED_LEAVE_GROUP' : 15,
  'ACCEPT_GROUP_INVITATION' : 16,
  'NOTIFIED_ACCEPT_GROUP_INVITATION' : 17,
  'REJECT_GROUP_INVITATION' : 34,
  'NOTIFIED_REJECT_GROUP_INVITATION' : 35,
  'KICKOUT_FROM_GROUP' : 18,
  'NOTIFIED_KICKOUT_FROM_GROUP' : 19,
  'CREATE_ROOM' : 20,
  'INVITE_INTO_ROOM' : 21,
  'NOTIFIED_INVITE_INTO_ROOM' : 22,
  'LEAVE_ROOM' : 23,
  'NOTIFIED_LEAVE_ROOM' : 24,
  'SEND_MESSAGE' : 25,
  'RECEIVE_MESSAGE' : 26,
  'SEND_MESSAGE_RECEIPT' : 27,
  'RECEIVE_MESSAGE_RECEIPT' : 28,
  'SEND_CONTENT_RECEIPT' : 29,
  'SEND_CHAT_CHECKED' : 40,
  'SEND_CHAT_REMOVED' : 41,
  'RECEIVE_ANNOUNCEMENT' : 30,
  'INVITE_VIA_EMAIL' : 38,
  'NOTIFIED_REGISTER_USER' : 37,
  'NOTIFIED_UNREGISTER_USER' : 33,
  'NOTIFIED_REQUEST_RECOVERY' : 39,
  'NOTIFIED_FORCE_SYNC' : 42,
  'SEND_CONTENT' : 43,
  'SEND_MESSAGE_MYHOME' : 44,
  'NOTIFIED_UPDATE_CONTENT_PREVIEW' : 45,
  'REMOVE_ALL_MESSAGES' : 46,
  'NOTIFIED_UPDATE_PURCHASES' : 47,
  'DUMMY' : 48,
  'UPDATE_CONTACT' : 49,
  'NOTIFIED_RECEIVED_CALL' : 50,
  'CANCEL_CALL' : 51,
  'NOTIFIED_REDIRECT' : 52,
  'NOTIFIED_CHANNEL_SYNC' : 53,
  'FAILED_SEND_MESSAGE' : 54,
  'NOTIFIED_READ_MESSAGE' : 55,
  'FAILED_EMAIL_CONFIRMATION' : 56,
  'NOTIFIED_PUSH_NOTICENTER_ITEM' : 59,
  'NOTIFIED_CHAT_CONTENT' : 58,
  'NOTIFIED_JOIN_CHAT' : 60,
  'NOTIFIED_LEAVE_CHAT' : 61,
  'NOTIFIED_TYPING' : 62,
  'FRIEND_REQUEST_ACCEPTED' : 63,
  'DESTROY_MESSAGE' : 64,
  'NOTIFIED_DESTROY_MESSAGE' : 65,
  'UPDATE_PUBLICKEYCHAIN' : 66,
  'NOTIFIED_UPDATE_PUBLICKEYCHAIN' : 67,
  'NOTIFIED_BLOCK_CONTACT' : 68,
  'NOTIFIED_UNBLOCK_CONTACT' : 69,
  'UPDATE_GROUPPREFERENCE' : 70,
  'NOTIFIED_PAYMENT_EVENT' : 71,
  'REGISTER_E2EE_PUBLICKEY' : 72,
  'NOTIFIED_E2EE_KEY_EXCHANGE_REQ' : 73,
  'NOTIFIED_E2EE_KEY_EXCHANGE_RESP' : 74,
  'NOTIFIED_E2EE_MESSAGE_RESEND_REQ' : 75,
  'NOTIFIED_E2EE_MESSAGE_RESEND_RESP' : 76,
  'NOTIFIED_E2EE_KEY_UPDATE' : 77,
  'NOTIFIED_BUDDY_UPDATE_PROFILE' : 78,
  'NOTIFIED_UPDATE_LINEAT_TABS' : 79,
  'UPDATE_ROOM' : 80,
  'NOTIFIED_BEACON_DETECTED' : 81,
  'UPDATE_EXTENDED_PROFILE' : 82,
  'ADD_FOLLOW' : 83,
  'NOTIFIED_ADD_FOLLOW' : 84,
  'DELETE_FOLLOW' : 85,
  'NOTIFIED_DELETE_FOLLOW' : 86,
  'UPDATE_TIMELINE_SETTINGS' : 87,
  'NOTIFIED_FRIEND_REQUEST' : 88,
  'UPDATE_RINGBACK_TONE' : 89,
  'NOTIFIED_POSTBACK' : 90,
  'RECEIVE_READ_WATERMARK' : 91,
  'NOTIFIED_MESSAGE_DELIVERED' : 92,
  'NOTIFIED_UPDATE_CHAT_BAR' : 93,
  'NOTIFIED_CHATAPP_INSTALLED' : 94,
  'NOTIFIED_CHATAPP_UPDATED' : 95,
  'NOTIFIED_CHATAPP_NEW_MARK' : 96,
  'NOTIFIED_CHATAPP_DELETED' : 97,
  'NOTIFIED_CHATAPP_SYNC' : 98,
  'NOTIFIED_UPDATE_MESSAGE' : 99
};
ContactStatus = {
  'UNSPECIFIED' : 0,
  'FRIEND' : 1,
  'FRIEND_BLOCKED' : 2,
  'RECOMMEND' : 3,
  'RECOMMEND_BLOCKED' : 4,
  'DELETED' : 5,
  'DELETED_BLOCKED' : 6
};
ContactRelation = {
  'ONEWAY' : 0,
  'BOTH' : 1,
  'NOT_REGISTERED' : 2
};
LoginResult = function(args) {
  this.authToken = null;
  this.certificate = null;
  this.verifier = null;
  this.pinCode = null;
  this.type = null;
  if (args) {
    if (args.authToken !== undefined && args.authToken !== null) {
      this.authToken = args.authToken;
    }
    if (args.certificate !== undefined && args.certificate !== null) {
      this.certificate = args.certificate;
    }
    if (args.verifier !== undefined && args.verifier !== null) {
      this.verifier = args.verifier;
    }
    if (args.pinCode !== undefined && args.pinCode !== null) {
      this.pinCode = args.pinCode;
    }
    if (args.type !== undefined && args.type !== null) {
      this.type = args.type;
    }
  }
};
LoginResult.prototype = {};
LoginResult.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.authToken = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.certificate = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.verifier = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.pinCode = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.I32) {
        this.type = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

LoginResult.prototype.write = function(output) {
  output.writeStructBegin('LoginResult');
  if (this.authToken !== null && this.authToken !== undefined) {
    output.writeFieldBegin('authToken', Thrift.Type.STRING, 1);
    output.writeString(this.authToken);
    output.writeFieldEnd();
  }
  if (this.certificate !== null && this.certificate !== undefined) {
    output.writeFieldBegin('certificate', Thrift.Type.STRING, 2);
    output.writeString(this.certificate);
    output.writeFieldEnd();
  }
  if (this.verifier !== null && this.verifier !== undefined) {
    output.writeFieldBegin('verifier', Thrift.Type.STRING, 3);
    output.writeString(this.verifier);
    output.writeFieldEnd();
  }
  if (this.pinCode !== null && this.pinCode !== undefined) {
    output.writeFieldBegin('pinCode', Thrift.Type.STRING, 4);
    output.writeString(this.pinCode);
    output.writeFieldEnd();
  }
  if (this.type !== null && this.type !== undefined) {
    output.writeFieldBegin('type', Thrift.Type.I32, 5);
    output.writeI32(this.type);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Contact = function(args) {
  this.mid = null;
  this.createdTime = null;
  this.type = null;
  this.status = null;
  this.relation = null;
  this.displayName = null;
  this.phoneticName = null;
  this.pictureStatus = null;
  this.thumbnailUrl = null;
  this.statusMessage = null;
  this.displayNameOverridden = null;
  this.favoriteTime = null;
  this.capableVoiceCall = null;
  this.capableVideoCall = null;
  this.capableMyhome = null;
  this.capableBuddy = null;
  this.attributes = null;
  this.settings = null;
  this.picturePath = null;
  this.recommendParams = null;
  this.friendRequestStatus = null;
  this.musicProfile = null;
  this.videoProfile = null;
  if (args) {
    if (args.mid !== undefined && args.mid !== null) {
      this.mid = args.mid;
    }
    if (args.createdTime !== undefined && args.createdTime !== null) {
      this.createdTime = args.createdTime;
    }
    if (args.type !== undefined && args.type !== null) {
      this.type = args.type;
    }
    if (args.status !== undefined && args.status !== null) {
      this.status = args.status;
    }
    if (args.relation !== undefined && args.relation !== null) {
      this.relation = args.relation;
    }
    if (args.displayName !== undefined && args.displayName !== null) {
      this.displayName = args.displayName;
    }
    if (args.phoneticName !== undefined && args.phoneticName !== null) {
      this.phoneticName = args.phoneticName;
    }
    if (args.pictureStatus !== undefined && args.pictureStatus !== null) {
      this.pictureStatus = args.pictureStatus;
    }
    if (args.thumbnailUrl !== undefined && args.thumbnailUrl !== null) {
      this.thumbnailUrl = args.thumbnailUrl;
    }
    if (args.statusMessage !== undefined && args.statusMessage !== null) {
      this.statusMessage = args.statusMessage;
    }
    if (args.displayNameOverridden !== undefined && args.displayNameOverridden !== null) {
      this.displayNameOverridden = args.displayNameOverridden;
    }
    if (args.favoriteTime !== undefined && args.favoriteTime !== null) {
      this.favoriteTime = args.favoriteTime;
    }
    if (args.capableVoiceCall !== undefined && args.capableVoiceCall !== null) {
      this.capableVoiceCall = args.capableVoiceCall;
    }
    if (args.capableVideoCall !== undefined && args.capableVideoCall !== null) {
      this.capableVideoCall = args.capableVideoCall;
    }
    if (args.capableMyhome !== undefined && args.capableMyhome !== null) {
      this.capableMyhome = args.capableMyhome;
    }
    if (args.capableBuddy !== undefined && args.capableBuddy !== null) {
      this.capableBuddy = args.capableBuddy;
    }
    if (args.attributes !== undefined && args.attributes !== null) {
      this.attributes = args.attributes;
    }
    if (args.settings !== undefined && args.settings !== null) {
      this.settings = args.settings;
    }
    if (args.picturePath !== undefined && args.picturePath !== null) {
      this.picturePath = args.picturePath;
    }
    if (args.recommendParams !== undefined && args.recommendParams !== null) {
      this.recommendParams = args.recommendParams;
    }
    if (args.friendRequestStatus !== undefined && args.friendRequestStatus !== null) {
      this.friendRequestStatus = args.friendRequestStatus;
    }
    if (args.musicProfile !== undefined && args.musicProfile !== null) {
      this.musicProfile = args.musicProfile;
    }
    if (args.videoProfile !== undefined && args.videoProfile !== null) {
      this.videoProfile = args.videoProfile;
    }
  }
};
Contact.prototype = {};
Contact.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.mid = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.createdTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.I32) {
        this.type = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.I32) {
        this.status = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 21:
      if (ftype == Thrift.Type.I32) {
        this.relation = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 22:
      if (ftype == Thrift.Type.STRING) {
        this.displayName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 23:
      if (ftype == Thrift.Type.STRING) {
        this.phoneticName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 24:
      if (ftype == Thrift.Type.STRING) {
        this.pictureStatus = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 25:
      if (ftype == Thrift.Type.STRING) {
        this.thumbnailUrl = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 26:
      if (ftype == Thrift.Type.STRING) {
        this.statusMessage = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 27:
      if (ftype == Thrift.Type.STRING) {
        this.displayNameOverridden = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 28:
      if (ftype == Thrift.Type.I64) {
        this.favoriteTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 31:
      if (ftype == Thrift.Type.BOOL) {
        this.capableVoiceCall = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 32:
      if (ftype == Thrift.Type.BOOL) {
        this.capableVideoCall = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 33:
      if (ftype == Thrift.Type.BOOL) {
        this.capableMyhome = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 34:
      if (ftype == Thrift.Type.BOOL) {
        this.capableBuddy = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 35:
      if (ftype == Thrift.Type.I32) {
        this.attributes = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 36:
      if (ftype == Thrift.Type.I64) {
        this.settings = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 37:
      if (ftype == Thrift.Type.STRING) {
        this.picturePath = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 38:
      if (ftype == Thrift.Type.STRING) {
        this.recommendParams = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 39:
      if (ftype == Thrift.Type.I32) {
        this.friendRequestStatus = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 40:
      if (ftype == Thrift.Type.STRING) {
        this.musicProfile = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 42:
      if (ftype == Thrift.Type.STRING) {
        this.videoProfile = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Contact.prototype.write = function(output) {
  output.writeStructBegin('Contact');
  if (this.mid !== null && this.mid !== undefined) {
    output.writeFieldBegin('mid', Thrift.Type.STRING, 1);
    output.writeString(this.mid);
    output.writeFieldEnd();
  }
  if (this.createdTime !== null && this.createdTime !== undefined) {
    output.writeFieldBegin('createdTime', Thrift.Type.I64, 2);
    output.writeI64(this.createdTime);
    output.writeFieldEnd();
  }
  if (this.type !== null && this.type !== undefined) {
    output.writeFieldBegin('type', Thrift.Type.I32, 10);
    output.writeI32(this.type);
    output.writeFieldEnd();
  }
  if (this.status !== null && this.status !== undefined) {
    output.writeFieldBegin('status', Thrift.Type.I32, 11);
    output.writeI32(this.status);
    output.writeFieldEnd();
  }
  if (this.relation !== null && this.relation !== undefined) {
    output.writeFieldBegin('relation', Thrift.Type.I32, 21);
    output.writeI32(this.relation);
    output.writeFieldEnd();
  }
  if (this.displayName !== null && this.displayName !== undefined) {
    output.writeFieldBegin('displayName', Thrift.Type.STRING, 22);
    output.writeString(this.displayName);
    output.writeFieldEnd();
  }
  if (this.phoneticName !== null && this.phoneticName !== undefined) {
    output.writeFieldBegin('phoneticName', Thrift.Type.STRING, 23);
    output.writeString(this.phoneticName);
    output.writeFieldEnd();
  }
  if (this.pictureStatus !== null && this.pictureStatus !== undefined) {
    output.writeFieldBegin('pictureStatus', Thrift.Type.STRING, 24);
    output.writeString(this.pictureStatus);
    output.writeFieldEnd();
  }
  if (this.thumbnailUrl !== null && this.thumbnailUrl !== undefined) {
    output.writeFieldBegin('thumbnailUrl', Thrift.Type.STRING, 25);
    output.writeString(this.thumbnailUrl);
    output.writeFieldEnd();
  }
  if (this.statusMessage !== null && this.statusMessage !== undefined) {
    output.writeFieldBegin('statusMessage', Thrift.Type.STRING, 26);
    output.writeString(this.statusMessage);
    output.writeFieldEnd();
  }
  if (this.displayNameOverridden !== null && this.displayNameOverridden !== undefined) {
    output.writeFieldBegin('displayNameOverridden', Thrift.Type.STRING, 27);
    output.writeString(this.displayNameOverridden);
    output.writeFieldEnd();
  }
  if (this.favoriteTime !== null && this.favoriteTime !== undefined) {
    output.writeFieldBegin('favoriteTime', Thrift.Type.I64, 28);
    output.writeI64(this.favoriteTime);
    output.writeFieldEnd();
  }
  if (this.capableVoiceCall !== null && this.capableVoiceCall !== undefined) {
    output.writeFieldBegin('capableVoiceCall', Thrift.Type.BOOL, 31);
    output.writeBool(this.capableVoiceCall);
    output.writeFieldEnd();
  }
  if (this.capableVideoCall !== null && this.capableVideoCall !== undefined) {
    output.writeFieldBegin('capableVideoCall', Thrift.Type.BOOL, 32);
    output.writeBool(this.capableVideoCall);
    output.writeFieldEnd();
  }
  if (this.capableMyhome !== null && this.capableMyhome !== undefined) {
    output.writeFieldBegin('capableMyhome', Thrift.Type.BOOL, 33);
    output.writeBool(this.capableMyhome);
    output.writeFieldEnd();
  }
  if (this.capableBuddy !== null && this.capableBuddy !== undefined) {
    output.writeFieldBegin('capableBuddy', Thrift.Type.BOOL, 34);
    output.writeBool(this.capableBuddy);
    output.writeFieldEnd();
  }
  if (this.attributes !== null && this.attributes !== undefined) {
    output.writeFieldBegin('attributes', Thrift.Type.I32, 35);
    output.writeI32(this.attributes);
    output.writeFieldEnd();
  }
  if (this.settings !== null && this.settings !== undefined) {
    output.writeFieldBegin('settings', Thrift.Type.I64, 36);
    output.writeI64(this.settings);
    output.writeFieldEnd();
  }
  if (this.picturePath !== null && this.picturePath !== undefined) {
    output.writeFieldBegin('picturePath', Thrift.Type.STRING, 37);
    output.writeString(this.picturePath);
    output.writeFieldEnd();
  }
  if (this.recommendParams !== null && this.recommendParams !== undefined) {
    output.writeFieldBegin('recommendParams', Thrift.Type.STRING, 38);
    output.writeString(this.recommendParams);
    output.writeFieldEnd();
  }
  if (this.friendRequestStatus !== null && this.friendRequestStatus !== undefined) {
    output.writeFieldBegin('friendRequestStatus', Thrift.Type.I32, 39);
    output.writeI32(this.friendRequestStatus);
    output.writeFieldEnd();
  }
  if (this.musicProfile !== null && this.musicProfile !== undefined) {
    output.writeFieldBegin('musicProfile', Thrift.Type.STRING, 40);
    output.writeString(this.musicProfile);
    output.writeFieldEnd();
  }
  if (this.videoProfile !== null && this.videoProfile !== undefined) {
    output.writeFieldBegin('videoProfile', Thrift.Type.STRING, 42);
    output.writeString(this.videoProfile);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Location = function(args) {
  this.title = null;
  this.address = null;
  this.latitude = null;
  this.longitude = null;
  this.phone = null;
  if (args) {
    if (args.title !== undefined && args.title !== null) {
      this.title = args.title;
    }
    if (args.address !== undefined && args.address !== null) {
      this.address = args.address;
    }
    if (args.latitude !== undefined && args.latitude !== null) {
      this.latitude = args.latitude;
    }
    if (args.longitude !== undefined && args.longitude !== null) {
      this.longitude = args.longitude;
    }
    if (args.phone !== undefined && args.phone !== null) {
      this.phone = args.phone;
    }
  }
};
Location.prototype = {};
Location.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.title = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.address = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.DOUBLE) {
        this.latitude = input.readDouble().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.DOUBLE) {
        this.longitude = input.readDouble().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.phone = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Location.prototype.write = function(output) {
  output.writeStructBegin('Location');
  if (this.title !== null && this.title !== undefined) {
    output.writeFieldBegin('title', Thrift.Type.STRING, 1);
    output.writeString(this.title);
    output.writeFieldEnd();
  }
  if (this.address !== null && this.address !== undefined) {
    output.writeFieldBegin('address', Thrift.Type.STRING, 2);
    output.writeString(this.address);
    output.writeFieldEnd();
  }
  if (this.latitude !== null && this.latitude !== undefined) {
    output.writeFieldBegin('latitude', Thrift.Type.DOUBLE, 3);
    output.writeDouble(this.latitude);
    output.writeFieldEnd();
  }
  if (this.longitude !== null && this.longitude !== undefined) {
    output.writeFieldBegin('longitude', Thrift.Type.DOUBLE, 4);
    output.writeDouble(this.longitude);
    output.writeFieldEnd();
  }
  if (this.phone !== null && this.phone !== undefined) {
    output.writeFieldBegin('phone', Thrift.Type.STRING, 5);
    output.writeString(this.phone);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

GroupPreference = function(args) {
  this.invitationTicket = null;
  this.favoriteTimestamp = null;
  if (args) {
    if (args.invitationTicket !== undefined && args.invitationTicket !== null) {
      this.invitationTicket = args.invitationTicket;
    }
    if (args.favoriteTimestamp !== undefined && args.favoriteTimestamp !== null) {
      this.favoriteTimestamp = args.favoriteTimestamp;
    }
  }
};
GroupPreference.prototype = {};
GroupPreference.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.invitationTicket = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.favoriteTimestamp = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

GroupPreference.prototype.write = function(output) {
  output.writeStructBegin('GroupPreference');
  if (this.invitationTicket !== null && this.invitationTicket !== undefined) {
    output.writeFieldBegin('invitationTicket', Thrift.Type.STRING, 1);
    output.writeString(this.invitationTicket);
    output.writeFieldEnd();
  }
  if (this.favoriteTimestamp !== null && this.favoriteTimestamp !== undefined) {
    output.writeFieldBegin('favoriteTimestamp', Thrift.Type.I64, 2);
    output.writeI64(this.favoriteTimestamp);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Group = function(args) {
  this.id = null;
  this.createdTime = null;
  this.name = null;
  this.pictureStatus = null;
  this.preventedJoinByTicket = null;
  this.groupPreference = null;
  this.members = null;
  this.creator = null;
  this.invitee = null;
  this.notificationDisabled = null;
  if (args) {
    if (args.id !== undefined && args.id !== null) {
      this.id = args.id;
    }
    if (args.createdTime !== undefined && args.createdTime !== null) {
      this.createdTime = args.createdTime;
    }
    if (args.name !== undefined && args.name !== null) {
      this.name = args.name;
    }
    if (args.pictureStatus !== undefined && args.pictureStatus !== null) {
      this.pictureStatus = args.pictureStatus;
    }
    if (args.preventedJoinByTicket !== undefined && args.preventedJoinByTicket !== null) {
      this.preventedJoinByTicket = args.preventedJoinByTicket;
    }
    if (args.groupPreference !== undefined && args.groupPreference !== null) {
      this.groupPreference = new GroupPreference(args.groupPreference);
    }
    if (args.members !== undefined && args.members !== null) {
      this.members = Thrift.copyList(args.members, [Contact]);
    }
    if (args.creator !== undefined && args.creator !== null) {
      this.creator = new Contact(args.creator);
    }
    if (args.invitee !== undefined && args.invitee !== null) {
      this.invitee = Thrift.copyList(args.invitee, [Contact]);
    }
    if (args.notificationDisabled !== undefined && args.notificationDisabled !== null) {
      this.notificationDisabled = args.notificationDisabled;
    }
  }
};
Group.prototype = {};
Group.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.id = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.createdTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.name = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.STRING) {
        this.pictureStatus = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 12:
      if (ftype == Thrift.Type.BOOL) {
        this.preventedJoinByTicket = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 13:
      if (ftype == Thrift.Type.STRUCT) {
        this.groupPreference = new GroupPreference();
        this.groupPreference.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 20:
      if (ftype == Thrift.Type.LIST) {
        var _size0 = 0;
        var _rtmp34;
        this.members = [];
        var _etype3 = 0;
        _rtmp34 = input.readListBegin();
        _etype3 = _rtmp34.etype;
        _size0 = _rtmp34.size;
        for (var _i5 = 0; _i5 < _size0; ++_i5)
        {
          var elem6 = null;
          elem6 = new Contact();
          elem6.read(input);
          this.members.push(elem6);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 21:
      if (ftype == Thrift.Type.STRUCT) {
        this.creator = new Contact();
        this.creator.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 22:
      if (ftype == Thrift.Type.LIST) {
        var _size7 = 0;
        var _rtmp311;
        this.invitee = [];
        var _etype10 = 0;
        _rtmp311 = input.readListBegin();
        _etype10 = _rtmp311.etype;
        _size7 = _rtmp311.size;
        for (var _i12 = 0; _i12 < _size7; ++_i12)
        {
          var elem13 = null;
          elem13 = new Contact();
          elem13.read(input);
          this.invitee.push(elem13);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 31:
      if (ftype == Thrift.Type.BOOL) {
        this.notificationDisabled = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Group.prototype.write = function(output) {
  output.writeStructBegin('Group');
  if (this.id !== null && this.id !== undefined) {
    output.writeFieldBegin('id', Thrift.Type.STRING, 1);
    output.writeString(this.id);
    output.writeFieldEnd();
  }
  if (this.createdTime !== null && this.createdTime !== undefined) {
    output.writeFieldBegin('createdTime', Thrift.Type.I64, 2);
    output.writeI64(this.createdTime);
    output.writeFieldEnd();
  }
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 10);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  if (this.pictureStatus !== null && this.pictureStatus !== undefined) {
    output.writeFieldBegin('pictureStatus', Thrift.Type.STRING, 11);
    output.writeString(this.pictureStatus);
    output.writeFieldEnd();
  }
  if (this.preventedJoinByTicket !== null && this.preventedJoinByTicket !== undefined) {
    output.writeFieldBegin('preventedJoinByTicket', Thrift.Type.BOOL, 12);
    output.writeBool(this.preventedJoinByTicket);
    output.writeFieldEnd();
  }
  if (this.groupPreference !== null && this.groupPreference !== undefined) {
    output.writeFieldBegin('groupPreference', Thrift.Type.STRUCT, 13);
    this.groupPreference.write(output);
    output.writeFieldEnd();
  }
  if (this.members !== null && this.members !== undefined) {
    output.writeFieldBegin('members', Thrift.Type.LIST, 20);
    output.writeListBegin(Thrift.Type.STRUCT, this.members.length);
    for (var iter14 in this.members)
    {
      if (this.members.hasOwnProperty(iter14))
      {
        iter14 = this.members[iter14];
        iter14.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.creator !== null && this.creator !== undefined) {
    output.writeFieldBegin('creator', Thrift.Type.STRUCT, 21);
    this.creator.write(output);
    output.writeFieldEnd();
  }
  if (this.invitee !== null && this.invitee !== undefined) {
    output.writeFieldBegin('invitee', Thrift.Type.LIST, 22);
    output.writeListBegin(Thrift.Type.STRUCT, this.invitee.length);
    for (var iter15 in this.invitee)
    {
      if (this.invitee.hasOwnProperty(iter15))
      {
        iter15 = this.invitee[iter15];
        iter15.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.notificationDisabled !== null && this.notificationDisabled !== undefined) {
    output.writeFieldBegin('notificationDisabled', Thrift.Type.BOOL, 31);
    output.writeBool(this.notificationDisabled);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

loginRequest = function(args) {
  this.type = null;
  this.identityProvider = null;
  this.identifier = null;
  this.password = null;
  this.keepLoggedIn = null;
  this.accessLocation = null;
  this.systemName = null;
  this.certificate = null;
  this.verifier = null;
  this.secret = null;
  this.e2eeVersion = null;
  if (args) {
    if (args.type !== undefined && args.type !== null) {
      this.type = args.type;
    }
    if (args.identityProvider !== undefined && args.identityProvider !== null) {
      this.identityProvider = args.identityProvider;
    }
    if (args.identifier !== undefined && args.identifier !== null) {
      this.identifier = args.identifier;
    }
    if (args.password !== undefined && args.password !== null) {
      this.password = args.password;
    }
    if (args.keepLoggedIn !== undefined && args.keepLoggedIn !== null) {
      this.keepLoggedIn = args.keepLoggedIn;
    }
    if (args.accessLocation !== undefined && args.accessLocation !== null) {
      this.accessLocation = args.accessLocation;
    }
    if (args.systemName !== undefined && args.systemName !== null) {
      this.systemName = args.systemName;
    }
    if (args.certificate !== undefined && args.certificate !== null) {
      this.certificate = args.certificate;
    }
    if (args.verifier !== undefined && args.verifier !== null) {
      this.verifier = args.verifier;
    }
    if (args.secret !== undefined && args.secret !== null) {
      this.secret = args.secret;
    }
    if (args.e2eeVersion !== undefined && args.e2eeVersion !== null) {
      this.e2eeVersion = args.e2eeVersion;
    }
  }
};
loginRequest.prototype = {};
loginRequest.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.type = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.identityProvider = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.identifier = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.password = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.BOOL) {
        this.keepLoggedIn = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.STRING) {
        this.accessLocation = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.STRING) {
        this.systemName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 8:
      if (ftype == Thrift.Type.STRING) {
        this.certificate = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 9:
      if (ftype == Thrift.Type.STRING) {
        this.verifier = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.secret = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.I32) {
        this.e2eeVersion = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

loginRequest.prototype.write = function(output) {
  output.writeStructBegin('loginRequest');
  if (this.type !== null && this.type !== undefined) {
    output.writeFieldBegin('type', Thrift.Type.I32, 1);
    output.writeI32(this.type);
    output.writeFieldEnd();
  }
  if (this.identityProvider !== null && this.identityProvider !== undefined) {
    output.writeFieldBegin('identityProvider', Thrift.Type.I32, 2);
    output.writeI32(this.identityProvider);
    output.writeFieldEnd();
  }
  if (this.identifier !== null && this.identifier !== undefined) {
    output.writeFieldBegin('identifier', Thrift.Type.STRING, 3);
    output.writeString(this.identifier);
    output.writeFieldEnd();
  }
  if (this.password !== null && this.password !== undefined) {
    output.writeFieldBegin('password', Thrift.Type.STRING, 4);
    output.writeString(this.password);
    output.writeFieldEnd();
  }
  if (this.keepLoggedIn !== null && this.keepLoggedIn !== undefined) {
    output.writeFieldBegin('keepLoggedIn', Thrift.Type.BOOL, 5);
    output.writeBool(this.keepLoggedIn);
    output.writeFieldEnd();
  }
  if (this.accessLocation !== null && this.accessLocation !== undefined) {
    output.writeFieldBegin('accessLocation', Thrift.Type.STRING, 6);
    output.writeString(this.accessLocation);
    output.writeFieldEnd();
  }
  if (this.systemName !== null && this.systemName !== undefined) {
    output.writeFieldBegin('systemName', Thrift.Type.STRING, 7);
    output.writeString(this.systemName);
    output.writeFieldEnd();
  }
  if (this.certificate !== null && this.certificate !== undefined) {
    output.writeFieldBegin('certificate', Thrift.Type.STRING, 8);
    output.writeString(this.certificate);
    output.writeFieldEnd();
  }
  if (this.verifier !== null && this.verifier !== undefined) {
    output.writeFieldBegin('verifier', Thrift.Type.STRING, 9);
    output.writeString(this.verifier);
    output.writeFieldEnd();
  }
  if (this.secret !== null && this.secret !== undefined) {
    output.writeFieldBegin('secret', Thrift.Type.STRING, 10);
    output.writeString(this.secret);
    output.writeFieldEnd();
  }
  if (this.e2eeVersion !== null && this.e2eeVersion !== undefined) {
    output.writeFieldBegin('e2eeVersion', Thrift.Type.I32, 11);
    output.writeI32(this.e2eeVersion);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

LoginSession = function(args) {
  this.tokenKey = null;
  this.expirationTime = null;
  this.applicationType = null;
  this.systemName = null;
  this.accessLocation = null;
  if (args) {
    if (args.tokenKey !== undefined && args.tokenKey !== null) {
      this.tokenKey = args.tokenKey;
    }
    if (args.expirationTime !== undefined && args.expirationTime !== null) {
      this.expirationTime = args.expirationTime;
    }
    if (args.applicationType !== undefined && args.applicationType !== null) {
      this.applicationType = args.applicationType;
    }
    if (args.systemName !== undefined && args.systemName !== null) {
      this.systemName = args.systemName;
    }
    if (args.accessLocation !== undefined && args.accessLocation !== null) {
      this.accessLocation = args.accessLocation;
    }
  }
};
LoginSession.prototype = {};
LoginSession.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.tokenKey = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I64) {
        this.expirationTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.I32) {
        this.applicationType = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 12:
      if (ftype == Thrift.Type.STRING) {
        this.systemName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 22:
      if (ftype == Thrift.Type.STRING) {
        this.accessLocation = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

LoginSession.prototype.write = function(output) {
  output.writeStructBegin('LoginSession');
  if (this.tokenKey !== null && this.tokenKey !== undefined) {
    output.writeFieldBegin('tokenKey', Thrift.Type.STRING, 1);
    output.writeString(this.tokenKey);
    output.writeFieldEnd();
  }
  if (this.expirationTime !== null && this.expirationTime !== undefined) {
    output.writeFieldBegin('expirationTime', Thrift.Type.I64, 3);
    output.writeI64(this.expirationTime);
    output.writeFieldEnd();
  }
  if (this.applicationType !== null && this.applicationType !== undefined) {
    output.writeFieldBegin('applicationType', Thrift.Type.I32, 11);
    output.writeI32(this.applicationType);
    output.writeFieldEnd();
  }
  if (this.systemName !== null && this.systemName !== undefined) {
    output.writeFieldBegin('systemName', Thrift.Type.STRING, 12);
    output.writeString(this.systemName);
    output.writeFieldEnd();
  }
  if (this.accessLocation !== null && this.accessLocation !== undefined) {
    output.writeFieldBegin('accessLocation', Thrift.Type.STRING, 22);
    output.writeString(this.accessLocation);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Message = function(args) {
  this._from = null;
  this.to = null;
  this.toType = null;
  this.id = null;
  this.createdTime = null;
  this.deliveredTime = null;
  this.text = null;
  this.location = null;
  this.hasContent = null;
  this.contentType = null;
  this.contentPreview = null;
  this.contentMetadata = null;
  this.sessionId = null;
  this.chunks = null;
  this.relatedMessageId = null;
  this.messageRelationType = null;
  this.readCount = null;
  this.relatedMessageServiceCode = null;
  if (args) {
    if (args._from !== undefined && args._from !== null) {
      this._from = args._from;
    }
    if (args.to !== undefined && args.to !== null) {
      this.to = args.to;
    }
    if (args.toType !== undefined && args.toType !== null) {
      this.toType = args.toType;
    }
    if (args.id !== undefined && args.id !== null) {
      this.id = args.id;
    }
    if (args.createdTime !== undefined && args.createdTime !== null) {
      this.createdTime = args.createdTime;
    }
    if (args.deliveredTime !== undefined && args.deliveredTime !== null) {
      this.deliveredTime = args.deliveredTime;
    }
    if (args.text !== undefined && args.text !== null) {
      this.text = args.text;
    }
    if (args.location !== undefined && args.location !== null) {
      this.location = new Location(args.location);
    }
    if (args.hasContent !== undefined && args.hasContent !== null) {
      this.hasContent = args.hasContent;
    }
    if (args.contentType !== undefined && args.contentType !== null) {
      this.contentType = args.contentType;
    }
    if (args.contentPreview !== undefined && args.contentPreview !== null) {
      this.contentPreview = args.contentPreview;
    }
    if (args.contentMetadata !== undefined && args.contentMetadata !== null) {
      this.contentMetadata = Thrift.copyMap(args.contentMetadata, [null]);
    }
    if (args.sessionId !== undefined && args.sessionId !== null) {
      this.sessionId = args.sessionId;
    }
    if (args.chunks !== undefined && args.chunks !== null) {
      this.chunks = Thrift.copyList(args.chunks, [null]);
    }
    if (args.relatedMessageId !== undefined && args.relatedMessageId !== null) {
      this.relatedMessageId = args.relatedMessageId;
    }
    if (args.messageRelationType !== undefined && args.messageRelationType !== null) {
      this.messageRelationType = args.messageRelationType;
    }
    if (args.readCount !== undefined && args.readCount !== null) {
      this.readCount = args.readCount;
    }
    if (args.relatedMessageServiceCode !== undefined && args.relatedMessageServiceCode !== null) {
      this.relatedMessageServiceCode = args.relatedMessageServiceCode;
    }
  }
};
Message.prototype = {};
Message.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this._from = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.to = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.toType = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.id = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.I64) {
        this.createdTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.I64) {
        this.deliveredTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.text = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.STRUCT) {
        this.location = new Location();
        this.location.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 14:
      if (ftype == Thrift.Type.BOOL) {
        this.hasContent = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 15:
      if (ftype == Thrift.Type.I32) {
        this.contentType = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 17:
      if (ftype == Thrift.Type.STRING) {
        this.contentPreview = input.readBinary().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 18:
      if (ftype == Thrift.Type.MAP) {
        var _size16 = 0;
        var _rtmp320;
        this.contentMetadata = {};
        var _ktype17 = 0;
        var _vtype18 = 0;
        _rtmp320 = input.readMapBegin();
        _ktype17 = _rtmp320.ktype;
        _vtype18 = _rtmp320.vtype;
        _size16 = _rtmp320.size;
        for (var _i21 = 0; _i21 < _size16; ++_i21)
        {
          if (_i21 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key22 = null;
          var val23 = null;
          key22 = input.readString().value;
          val23 = input.readString().value;
          this.contentMetadata[key22] = val23;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 19:
      if (ftype == Thrift.Type.I64) {
        this.sessionId = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 20:
      if (ftype == Thrift.Type.LIST) {
        var _size24 = 0;
        var _rtmp328;
        this.chunks = [];
        var _etype27 = 0;
        _rtmp328 = input.readListBegin();
        _etype27 = _rtmp328.etype;
        _size24 = _rtmp328.size;
        for (var _i29 = 0; _i29 < _size24; ++_i29)
        {
          var elem30 = null;
          elem30 = input.readString().value;
          this.chunks.push(elem30);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 21:
      if (ftype == Thrift.Type.STRING) {
        this.relatedMessageId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 22:
      if (ftype == Thrift.Type.I64) {
        this.messageRelationType = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 23:
      if (ftype == Thrift.Type.I64) {
        this.readCount = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 24:
      if (ftype == Thrift.Type.I64) {
        this.relatedMessageServiceCode = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Message.prototype.write = function(output) {
  output.writeStructBegin('Message');
  if (this._from !== null && this._from !== undefined) {
    output.writeFieldBegin('_from', Thrift.Type.STRING, 1);
    output.writeString(this._from);
    output.writeFieldEnd();
  }
  if (this.to !== null && this.to !== undefined) {
    output.writeFieldBegin('to', Thrift.Type.STRING, 2);
    output.writeString(this.to);
    output.writeFieldEnd();
  }
  if (this.toType !== null && this.toType !== undefined) {
    output.writeFieldBegin('toType', Thrift.Type.I32, 3);
    output.writeI32(this.toType);
    output.writeFieldEnd();
  }
  if (this.id !== null && this.id !== undefined) {
    output.writeFieldBegin('id', Thrift.Type.STRING, 4);
    output.writeString(this.id);
    output.writeFieldEnd();
  }
  if (this.createdTime !== null && this.createdTime !== undefined) {
    output.writeFieldBegin('createdTime', Thrift.Type.I64, 5);
    output.writeI64(this.createdTime);
    output.writeFieldEnd();
  }
  if (this.deliveredTime !== null && this.deliveredTime !== undefined) {
    output.writeFieldBegin('deliveredTime', Thrift.Type.I64, 6);
    output.writeI64(this.deliveredTime);
    output.writeFieldEnd();
  }
  if (this.text !== null && this.text !== undefined) {
    output.writeFieldBegin('text', Thrift.Type.STRING, 10);
    output.writeString(this.text);
    output.writeFieldEnd();
  }
  if (this.location !== null && this.location !== undefined) {
    output.writeFieldBegin('location', Thrift.Type.STRUCT, 11);
    this.location.write(output);
    output.writeFieldEnd();
  }
  if (this.hasContent !== null && this.hasContent !== undefined) {
    output.writeFieldBegin('hasContent', Thrift.Type.BOOL, 14);
    output.writeBool(this.hasContent);
    output.writeFieldEnd();
  }
  if (this.contentType !== null && this.contentType !== undefined) {
    output.writeFieldBegin('contentType', Thrift.Type.I32, 15);
    output.writeI32(this.contentType);
    output.writeFieldEnd();
  }
  if (this.contentPreview !== null && this.contentPreview !== undefined) {
    output.writeFieldBegin('contentPreview', Thrift.Type.STRING, 17);
    output.writeBinary(this.contentPreview);
    output.writeFieldEnd();
  }
  if (this.contentMetadata !== null && this.contentMetadata !== undefined) {
    output.writeFieldBegin('contentMetadata', Thrift.Type.MAP, 18);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRING, Thrift.objectLength(this.contentMetadata));
    for (var kiter31 in this.contentMetadata)
    {
      if (this.contentMetadata.hasOwnProperty(kiter31))
      {
        var viter32 = this.contentMetadata[kiter31];
        output.writeString(kiter31);
        output.writeString(viter32);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.sessionId !== null && this.sessionId !== undefined) {
    output.writeFieldBegin('sessionId', Thrift.Type.I64, 19);
    output.writeI64(this.sessionId);
    output.writeFieldEnd();
  }
  if (this.chunks !== null && this.chunks !== undefined) {
    output.writeFieldBegin('chunks', Thrift.Type.LIST, 20);
    output.writeListBegin(Thrift.Type.STRING, this.chunks.length);
    for (var iter33 in this.chunks)
    {
      if (this.chunks.hasOwnProperty(iter33))
      {
        iter33 = this.chunks[iter33];
        output.writeString(iter33);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.relatedMessageId !== null && this.relatedMessageId !== undefined) {
    output.writeFieldBegin('relatedMessageId', Thrift.Type.STRING, 21);
    output.writeString(this.relatedMessageId);
    output.writeFieldEnd();
  }
  if (this.messageRelationType !== null && this.messageRelationType !== undefined) {
    output.writeFieldBegin('messageRelationType', Thrift.Type.I64, 22);
    output.writeI64(this.messageRelationType);
    output.writeFieldEnd();
  }
  if (this.readCount !== null && this.readCount !== undefined) {
    output.writeFieldBegin('readCount', Thrift.Type.I64, 23);
    output.writeI64(this.readCount);
    output.writeFieldEnd();
  }
  if (this.relatedMessageServiceCode !== null && this.relatedMessageServiceCode !== undefined) {
    output.writeFieldBegin('relatedMessageServiceCode', Thrift.Type.I64, 24);
    output.writeI64(this.relatedMessageServiceCode);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MessageOperation = function(args) {
  this.revision = null;
  this.createdTime = null;
  this.type = null;
  this.reqSeq = null;
  this.status = null;
  this.param1 = null;
  this.param2 = null;
  this.param3 = null;
  this.message = null;
  if (args) {
    if (args.revision !== undefined && args.revision !== null) {
      this.revision = args.revision;
    }
    if (args.createdTime !== undefined && args.createdTime !== null) {
      this.createdTime = args.createdTime;
    }
    if (args.type !== undefined && args.type !== null) {
      this.type = args.type;
    }
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.status !== undefined && args.status !== null) {
      this.status = args.status;
    }
    if (args.param1 !== undefined && args.param1 !== null) {
      this.param1 = args.param1;
    }
    if (args.param2 !== undefined && args.param2 !== null) {
      this.param2 = args.param2;
    }
    if (args.param3 !== undefined && args.param3 !== null) {
      this.param3 = args.param3;
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = new Message(args.message);
    }
  }
};
MessageOperation.prototype = {};
MessageOperation.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I64) {
        this.revision = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.createdTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.type = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.I32) {
        this.status = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.param1 = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.STRING) {
        this.param2 = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 12:
      if (ftype == Thrift.Type.STRING) {
        this.param3 = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 20:
      if (ftype == Thrift.Type.STRUCT) {
        this.message = new Message();
        this.message.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MessageOperation.prototype.write = function(output) {
  output.writeStructBegin('MessageOperation');
  if (this.revision !== null && this.revision !== undefined) {
    output.writeFieldBegin('revision', Thrift.Type.I64, 1);
    output.writeI64(this.revision);
    output.writeFieldEnd();
  }
  if (this.createdTime !== null && this.createdTime !== undefined) {
    output.writeFieldBegin('createdTime', Thrift.Type.I64, 2);
    output.writeI64(this.createdTime);
    output.writeFieldEnd();
  }
  if (this.type !== null && this.type !== undefined) {
    output.writeFieldBegin('type', Thrift.Type.I32, 3);
    output.writeI32(this.type);
    output.writeFieldEnd();
  }
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 4);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.status !== null && this.status !== undefined) {
    output.writeFieldBegin('status', Thrift.Type.I32, 5);
    output.writeI32(this.status);
    output.writeFieldEnd();
  }
  if (this.param1 !== null && this.param1 !== undefined) {
    output.writeFieldBegin('param1', Thrift.Type.STRING, 10);
    output.writeString(this.param1);
    output.writeFieldEnd();
  }
  if (this.param2 !== null && this.param2 !== undefined) {
    output.writeFieldBegin('param2', Thrift.Type.STRING, 11);
    output.writeString(this.param2);
    output.writeFieldEnd();
  }
  if (this.param3 !== null && this.param3 !== undefined) {
    output.writeFieldBegin('param3', Thrift.Type.STRING, 12);
    output.writeString(this.param3);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRUCT, 20);
    this.message.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

MessageOperations = function(args) {
  this.operations = null;
  this.endFlag = null;
  if (args) {
    if (args.operations !== undefined && args.operations !== null) {
      this.operations = Thrift.copyList(args.operations, [MessageOperation]);
    }
    if (args.endFlag !== undefined && args.endFlag !== null) {
      this.endFlag = args.endFlag;
    }
  }
};
MessageOperations.prototype = {};
MessageOperations.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.LIST) {
        var _size34 = 0;
        var _rtmp338;
        this.operations = [];
        var _etype37 = 0;
        _rtmp338 = input.readListBegin();
        _etype37 = _rtmp338.etype;
        _size34 = _rtmp338.size;
        for (var _i39 = 0; _i39 < _size34; ++_i39)
        {
          var elem40 = null;
          elem40 = new MessageOperation();
          elem40.read(input);
          this.operations.push(elem40);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.BOOL) {
        this.endFlag = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

MessageOperations.prototype.write = function(output) {
  output.writeStructBegin('MessageOperations');
  if (this.operations !== null && this.operations !== undefined) {
    output.writeFieldBegin('operations', Thrift.Type.LIST, 1);
    output.writeListBegin(Thrift.Type.STRUCT, this.operations.length);
    for (var iter41 in this.operations)
    {
      if (this.operations.hasOwnProperty(iter41))
      {
        iter41 = this.operations[iter41];
        iter41.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.endFlag !== null && this.endFlag !== undefined) {
    output.writeFieldBegin('endFlag', Thrift.Type.BOOL, 2);
    output.writeBool(this.endFlag);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Operation = function(args) {
  this.revision = null;
  this.createdTime = null;
  this.type = null;
  this.reqSeq = null;
  this.checksum = null;
  this.status = null;
  this.param1 = null;
  this.param2 = null;
  this.param3 = null;
  this.message = null;
  if (args) {
    if (args.revision !== undefined && args.revision !== null) {
      this.revision = args.revision;
    }
    if (args.createdTime !== undefined && args.createdTime !== null) {
      this.createdTime = args.createdTime;
    }
    if (args.type !== undefined && args.type !== null) {
      this.type = args.type;
    }
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.checksum !== undefined && args.checksum !== null) {
      this.checksum = args.checksum;
    }
    if (args.status !== undefined && args.status !== null) {
      this.status = args.status;
    }
    if (args.param1 !== undefined && args.param1 !== null) {
      this.param1 = args.param1;
    }
    if (args.param2 !== undefined && args.param2 !== null) {
      this.param2 = args.param2;
    }
    if (args.param3 !== undefined && args.param3 !== null) {
      this.param3 = args.param3;
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = new Message(args.message);
    }
  }
};
Operation.prototype = {};
Operation.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I64) {
        this.revision = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.createdTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.type = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.STRING) {
        this.checksum = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.I32) {
        this.status = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.param1 = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.STRING) {
        this.param2 = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 12:
      if (ftype == Thrift.Type.STRING) {
        this.param3 = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 20:
      if (ftype == Thrift.Type.STRUCT) {
        this.message = new Message();
        this.message.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Operation.prototype.write = function(output) {
  output.writeStructBegin('Operation');
  if (this.revision !== null && this.revision !== undefined) {
    output.writeFieldBegin('revision', Thrift.Type.I64, 1);
    output.writeI64(this.revision);
    output.writeFieldEnd();
  }
  if (this.createdTime !== null && this.createdTime !== undefined) {
    output.writeFieldBegin('createdTime', Thrift.Type.I64, 2);
    output.writeI64(this.createdTime);
    output.writeFieldEnd();
  }
  if (this.type !== null && this.type !== undefined) {
    output.writeFieldBegin('type', Thrift.Type.I32, 3);
    output.writeI32(this.type);
    output.writeFieldEnd();
  }
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 4);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.checksum !== null && this.checksum !== undefined) {
    output.writeFieldBegin('checksum', Thrift.Type.STRING, 5);
    output.writeString(this.checksum);
    output.writeFieldEnd();
  }
  if (this.status !== null && this.status !== undefined) {
    output.writeFieldBegin('status', Thrift.Type.I32, 7);
    output.writeI32(this.status);
    output.writeFieldEnd();
  }
  if (this.param1 !== null && this.param1 !== undefined) {
    output.writeFieldBegin('param1', Thrift.Type.STRING, 10);
    output.writeString(this.param1);
    output.writeFieldEnd();
  }
  if (this.param2 !== null && this.param2 !== undefined) {
    output.writeFieldBegin('param2', Thrift.Type.STRING, 11);
    output.writeString(this.param2);
    output.writeFieldEnd();
  }
  if (this.param3 !== null && this.param3 !== undefined) {
    output.writeFieldBegin('param3', Thrift.Type.STRING, 12);
    output.writeString(this.param3);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRUCT, 20);
    this.message.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Profile = function(args) {
  this.mid = null;
  this.userid = null;
  this.phone = null;
  this.email = null;
  this.regionCode = null;
  this.displayName = null;
  this.phoneticName = null;
  this.pictureStatus = null;
  this.thumbnailUrl = null;
  this.statusMessage = null;
  this.allowSearchByUserid = null;
  this.allowSearchByEmail = null;
  this.picturePath = null;
  this.musicProfile = null;
  if (args) {
    if (args.mid !== undefined && args.mid !== null) {
      this.mid = args.mid;
    }
    if (args.userid !== undefined && args.userid !== null) {
      this.userid = args.userid;
    }
    if (args.phone !== undefined && args.phone !== null) {
      this.phone = args.phone;
    }
    if (args.email !== undefined && args.email !== null) {
      this.email = args.email;
    }
    if (args.regionCode !== undefined && args.regionCode !== null) {
      this.regionCode = args.regionCode;
    }
    if (args.displayName !== undefined && args.displayName !== null) {
      this.displayName = args.displayName;
    }
    if (args.phoneticName !== undefined && args.phoneticName !== null) {
      this.phoneticName = args.phoneticName;
    }
    if (args.pictureStatus !== undefined && args.pictureStatus !== null) {
      this.pictureStatus = args.pictureStatus;
    }
    if (args.thumbnailUrl !== undefined && args.thumbnailUrl !== null) {
      this.thumbnailUrl = args.thumbnailUrl;
    }
    if (args.statusMessage !== undefined && args.statusMessage !== null) {
      this.statusMessage = args.statusMessage;
    }
    if (args.allowSearchByUserid !== undefined && args.allowSearchByUserid !== null) {
      this.allowSearchByUserid = args.allowSearchByUserid;
    }
    if (args.allowSearchByEmail !== undefined && args.allowSearchByEmail !== null) {
      this.allowSearchByEmail = args.allowSearchByEmail;
    }
    if (args.picturePath !== undefined && args.picturePath !== null) {
      this.picturePath = args.picturePath;
    }
    if (args.musicProfile !== undefined && args.musicProfile !== null) {
      this.musicProfile = args.musicProfile;
    }
  }
};
Profile.prototype = {};
Profile.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.mid = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.userid = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.STRING) {
        this.phone = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 11:
      if (ftype == Thrift.Type.STRING) {
        this.email = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 12:
      if (ftype == Thrift.Type.STRING) {
        this.regionCode = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 20:
      if (ftype == Thrift.Type.STRING) {
        this.displayName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 21:
      if (ftype == Thrift.Type.STRING) {
        this.phoneticName = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 22:
      if (ftype == Thrift.Type.STRING) {
        this.pictureStatus = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 23:
      if (ftype == Thrift.Type.STRING) {
        this.thumbnailUrl = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 24:
      if (ftype == Thrift.Type.STRING) {
        this.statusMessage = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 31:
      if (ftype == Thrift.Type.BOOL) {
        this.allowSearchByUserid = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 32:
      if (ftype == Thrift.Type.BOOL) {
        this.allowSearchByEmail = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 33:
      if (ftype == Thrift.Type.STRING) {
        this.picturePath = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 34:
      if (ftype == Thrift.Type.STRING) {
        this.musicProfile = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Profile.prototype.write = function(output) {
  output.writeStructBegin('Profile');
  if (this.mid !== null && this.mid !== undefined) {
    output.writeFieldBegin('mid', Thrift.Type.STRING, 1);
    output.writeString(this.mid);
    output.writeFieldEnd();
  }
  if (this.userid !== null && this.userid !== undefined) {
    output.writeFieldBegin('userid', Thrift.Type.STRING, 3);
    output.writeString(this.userid);
    output.writeFieldEnd();
  }
  if (this.phone !== null && this.phone !== undefined) {
    output.writeFieldBegin('phone', Thrift.Type.STRING, 10);
    output.writeString(this.phone);
    output.writeFieldEnd();
  }
  if (this.email !== null && this.email !== undefined) {
    output.writeFieldBegin('email', Thrift.Type.STRING, 11);
    output.writeString(this.email);
    output.writeFieldEnd();
  }
  if (this.regionCode !== null && this.regionCode !== undefined) {
    output.writeFieldBegin('regionCode', Thrift.Type.STRING, 12);
    output.writeString(this.regionCode);
    output.writeFieldEnd();
  }
  if (this.displayName !== null && this.displayName !== undefined) {
    output.writeFieldBegin('displayName', Thrift.Type.STRING, 20);
    output.writeString(this.displayName);
    output.writeFieldEnd();
  }
  if (this.phoneticName !== null && this.phoneticName !== undefined) {
    output.writeFieldBegin('phoneticName', Thrift.Type.STRING, 21);
    output.writeString(this.phoneticName);
    output.writeFieldEnd();
  }
  if (this.pictureStatus !== null && this.pictureStatus !== undefined) {
    output.writeFieldBegin('pictureStatus', Thrift.Type.STRING, 22);
    output.writeString(this.pictureStatus);
    output.writeFieldEnd();
  }
  if (this.thumbnailUrl !== null && this.thumbnailUrl !== undefined) {
    output.writeFieldBegin('thumbnailUrl', Thrift.Type.STRING, 23);
    output.writeString(this.thumbnailUrl);
    output.writeFieldEnd();
  }
  if (this.statusMessage !== null && this.statusMessage !== undefined) {
    output.writeFieldBegin('statusMessage', Thrift.Type.STRING, 24);
    output.writeString(this.statusMessage);
    output.writeFieldEnd();
  }
  if (this.allowSearchByUserid !== null && this.allowSearchByUserid !== undefined) {
    output.writeFieldBegin('allowSearchByUserid', Thrift.Type.BOOL, 31);
    output.writeBool(this.allowSearchByUserid);
    output.writeFieldEnd();
  }
  if (this.allowSearchByEmail !== null && this.allowSearchByEmail !== undefined) {
    output.writeFieldBegin('allowSearchByEmail', Thrift.Type.BOOL, 32);
    output.writeBool(this.allowSearchByEmail);
    output.writeFieldEnd();
  }
  if (this.picturePath !== null && this.picturePath !== undefined) {
    output.writeFieldBegin('picturePath', Thrift.Type.STRING, 33);
    output.writeString(this.picturePath);
    output.writeFieldEnd();
  }
  if (this.musicProfile !== null && this.musicProfile !== undefined) {
    output.writeFieldBegin('musicProfile', Thrift.Type.STRING, 34);
    output.writeString(this.musicProfile);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Room = function(args) {
  this.mid = null;
  this.createdTime = null;
  this.contacts = null;
  this.notificationDisabled = null;
  if (args) {
    if (args.mid !== undefined && args.mid !== null) {
      this.mid = args.mid;
    }
    if (args.createdTime !== undefined && args.createdTime !== null) {
      this.createdTime = args.createdTime;
    }
    if (args.contacts !== undefined && args.contacts !== null) {
      this.contacts = Thrift.copyList(args.contacts, [Contact]);
    }
    if (args.notificationDisabled !== undefined && args.notificationDisabled !== null) {
      this.notificationDisabled = args.notificationDisabled;
    }
  }
};
Room.prototype = {};
Room.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.mid = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.createdTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.LIST) {
        var _size42 = 0;
        var _rtmp346;
        this.contacts = [];
        var _etype45 = 0;
        _rtmp346 = input.readListBegin();
        _etype45 = _rtmp346.etype;
        _size42 = _rtmp346.size;
        for (var _i47 = 0; _i47 < _size42; ++_i47)
        {
          var elem48 = null;
          elem48 = new Contact();
          elem48.read(input);
          this.contacts.push(elem48);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 31:
      if (ftype == Thrift.Type.BOOL) {
        this.notificationDisabled = input.readBool().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Room.prototype.write = function(output) {
  output.writeStructBegin('Room');
  if (this.mid !== null && this.mid !== undefined) {
    output.writeFieldBegin('mid', Thrift.Type.STRING, 1);
    output.writeString(this.mid);
    output.writeFieldEnd();
  }
  if (this.createdTime !== null && this.createdTime !== undefined) {
    output.writeFieldBegin('createdTime', Thrift.Type.I64, 2);
    output.writeI64(this.createdTime);
    output.writeFieldEnd();
  }
  if (this.contacts !== null && this.contacts !== undefined) {
    output.writeFieldBegin('contacts', Thrift.Type.LIST, 10);
    output.writeListBegin(Thrift.Type.STRUCT, this.contacts.length);
    for (var iter49 in this.contacts)
    {
      if (this.contacts.hasOwnProperty(iter49))
      {
        iter49 = this.contacts[iter49];
        iter49.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.notificationDisabled !== null && this.notificationDisabled !== undefined) {
    output.writeFieldBegin('notificationDisabled', Thrift.Type.BOOL, 31);
    output.writeBool(this.notificationDisabled);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

RSAKey = function(args) {
  this.keynm = null;
  this.nvalue = null;
  this.evalue = null;
  this.sessionKey = null;
  if (args) {
    if (args.keynm !== undefined && args.keynm !== null) {
      this.keynm = args.keynm;
    }
    if (args.nvalue !== undefined && args.nvalue !== null) {
      this.nvalue = args.nvalue;
    }
    if (args.evalue !== undefined && args.evalue !== null) {
      this.evalue = args.evalue;
    }
    if (args.sessionKey !== undefined && args.sessionKey !== null) {
      this.sessionKey = args.sessionKey;
    }
  }
};
RSAKey.prototype = {};
RSAKey.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.keynm = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.nvalue = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.evalue = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.STRING) {
        this.sessionKey = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

RSAKey.prototype.write = function(output) {
  output.writeStructBegin('RSAKey');
  if (this.keynm !== null && this.keynm !== undefined) {
    output.writeFieldBegin('keynm', Thrift.Type.STRING, 1);
    output.writeString(this.keynm);
    output.writeFieldEnd();
  }
  if (this.nvalue !== null && this.nvalue !== undefined) {
    output.writeFieldBegin('nvalue', Thrift.Type.STRING, 2);
    output.writeString(this.nvalue);
    output.writeFieldEnd();
  }
  if (this.evalue !== null && this.evalue !== undefined) {
    output.writeFieldBegin('evalue', Thrift.Type.STRING, 3);
    output.writeString(this.evalue);
    output.writeFieldEnd();
  }
  if (this.sessionKey !== null && this.sessionKey !== undefined) {
    output.writeFieldBegin('sessionKey', Thrift.Type.STRING, 4);
    output.writeString(this.sessionKey);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkException = function(args) {
  this.code = null;
  this.reason = null;
  this.parameterMap = null;
  if (args) {
    if (args.code !== undefined && args.code !== null) {
      this.code = args.code;
    }
    if (args.reason !== undefined && args.reason !== null) {
      this.reason = args.reason;
    }
    if (args.parameterMap !== undefined && args.parameterMap !== null) {
      this.parameterMap = Thrift.copyMap(args.parameterMap, [null]);
    }
  }
};
Thrift.inherits(TalkException, Thrift.TException);
TalkException.prototype.name = 'TalkException';
TalkException.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.code = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.reason = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.MAP) {
        var _size50 = 0;
        var _rtmp354;
        this.parameterMap = {};
        var _ktype51 = 0;
        var _vtype52 = 0;
        _rtmp354 = input.readMapBegin();
        _ktype51 = _rtmp354.ktype;
        _vtype52 = _rtmp354.vtype;
        _size50 = _rtmp354.size;
        for (var _i55 = 0; _i55 < _size50; ++_i55)
        {
          if (_i55 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key56 = null;
          var val57 = null;
          key56 = input.readString().value;
          val57 = input.readString().value;
          this.parameterMap[key56] = val57;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkException.prototype.write = function(output) {
  output.writeStructBegin('TalkException');
  if (this.code !== null && this.code !== undefined) {
    output.writeFieldBegin('code', Thrift.Type.I32, 1);
    output.writeI32(this.code);
    output.writeFieldEnd();
  }
  if (this.reason !== null && this.reason !== undefined) {
    output.writeFieldBegin('reason', Thrift.Type.STRING, 2);
    output.writeString(this.reason);
    output.writeFieldEnd();
  }
  if (this.parameterMap !== null && this.parameterMap !== undefined) {
    output.writeFieldBegin('parameterMap', Thrift.Type.MAP, 3);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRING, Thrift.objectLength(this.parameterMap));
    for (var kiter58 in this.parameterMap)
    {
      if (this.parameterMap.hasOwnProperty(kiter58))
      {
        var viter59 = this.parameterMap[kiter58];
        output.writeString(kiter58);
        output.writeString(viter59);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

Ticket = function(args) {
  this.id = null;
  this.expirationTime = null;
  this.maxUseCount = null;
  if (args) {
    if (args.id !== undefined && args.id !== null) {
      this.id = args.id;
    }
    if (args.expirationTime !== undefined && args.expirationTime !== null) {
      this.expirationTime = args.expirationTime;
    }
    if (args.maxUseCount !== undefined && args.maxUseCount !== null) {
      this.maxUseCount = args.maxUseCount;
    }
  }
};
Ticket.prototype = {};
Ticket.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRING) {
        this.id = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 10:
      if (ftype == Thrift.Type.I64) {
        this.expirationTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 21:
      if (ftype == Thrift.Type.I32) {
        this.maxUseCount = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

Ticket.prototype.write = function(output) {
  output.writeStructBegin('Ticket');
  if (this.id !== null && this.id !== undefined) {
    output.writeFieldBegin('id', Thrift.Type.STRING, 1);
    output.writeString(this.id);
    output.writeFieldEnd();
  }
  if (this.expirationTime !== null && this.expirationTime !== undefined) {
    output.writeFieldBegin('expirationTime', Thrift.Type.I64, 10);
    output.writeI64(this.expirationTime);
    output.writeFieldEnd();
  }
  if (this.maxUseCount !== null && this.maxUseCount !== undefined) {
    output.writeFieldBegin('maxUseCount', Thrift.Type.I32, 21);
    output.writeI32(this.maxUseCount);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

