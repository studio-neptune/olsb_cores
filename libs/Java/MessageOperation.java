/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked", "unused"})
@javax.annotation.Generated(value = "Autogenerated by Thrift Compiler (0.14.0)", date = "2019-11-06")
public class MessageOperation implements org.apache.thrift.TBase<MessageOperation, MessageOperation._Fields>, java.io.Serializable, Cloneable, Comparable<MessageOperation> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("MessageOperation");

  private static final org.apache.thrift.protocol.TField REVISION_FIELD_DESC = new org.apache.thrift.protocol.TField("revision", org.apache.thrift.protocol.TType.I64, (short)1);
  private static final org.apache.thrift.protocol.TField CREATED_TIME_FIELD_DESC = new org.apache.thrift.protocol.TField("createdTime", org.apache.thrift.protocol.TType.I64, (short)2);
  private static final org.apache.thrift.protocol.TField TYPE_FIELD_DESC = new org.apache.thrift.protocol.TField("type", org.apache.thrift.protocol.TType.I32, (short)3);
  private static final org.apache.thrift.protocol.TField REQ_SEQ_FIELD_DESC = new org.apache.thrift.protocol.TField("reqSeq", org.apache.thrift.protocol.TType.I32, (short)4);
  private static final org.apache.thrift.protocol.TField STATUS_FIELD_DESC = new org.apache.thrift.protocol.TField("status", org.apache.thrift.protocol.TType.I32, (short)5);
  private static final org.apache.thrift.protocol.TField PARAM1_FIELD_DESC = new org.apache.thrift.protocol.TField("param1", org.apache.thrift.protocol.TType.STRING, (short)10);
  private static final org.apache.thrift.protocol.TField PARAM2_FIELD_DESC = new org.apache.thrift.protocol.TField("param2", org.apache.thrift.protocol.TType.STRING, (short)11);
  private static final org.apache.thrift.protocol.TField PARAM3_FIELD_DESC = new org.apache.thrift.protocol.TField("param3", org.apache.thrift.protocol.TType.STRING, (short)12);
  private static final org.apache.thrift.protocol.TField MESSAGE_FIELD_DESC = new org.apache.thrift.protocol.TField("message", org.apache.thrift.protocol.TType.STRUCT, (short)20);

  private static final org.apache.thrift.scheme.SchemeFactory STANDARD_SCHEME_FACTORY = new MessageOperationStandardSchemeFactory();
  private static final org.apache.thrift.scheme.SchemeFactory TUPLE_SCHEME_FACTORY = new MessageOperationTupleSchemeFactory();

  public long revision; // required
  public long createdTime; // required
  /**
   * 
   * @see MessageOperationType
   */
  public @org.apache.thrift.annotation.Nullable MessageOperationType type; // required
  public int reqSeq; // required
  /**
   * 
   * @see OpStatus
   */
  public @org.apache.thrift.annotation.Nullable OpStatus status; // required
  public @org.apache.thrift.annotation.Nullable java.lang.String param1; // required
  public @org.apache.thrift.annotation.Nullable java.lang.String param2; // required
  public @org.apache.thrift.annotation.Nullable java.lang.String param3; // required
  public @org.apache.thrift.annotation.Nullable Message message; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    REVISION((short)1, "revision"),
    CREATED_TIME((short)2, "createdTime"),
    /**
     * 
     * @see MessageOperationType
     */
    TYPE((short)3, "type"),
    REQ_SEQ((short)4, "reqSeq"),
    /**
     * 
     * @see OpStatus
     */
    STATUS((short)5, "status"),
    PARAM1((short)10, "param1"),
    PARAM2((short)11, "param2"),
    PARAM3((short)12, "param3"),
    MESSAGE((short)20, "message");

    private static final java.util.Map<java.lang.String, _Fields> byName = new java.util.HashMap<java.lang.String, _Fields>();

    static {
      for (_Fields field : java.util.EnumSet.allOf(_Fields.class)) {
        byName.put(field.getFieldName(), field);
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, or null if its not found.
     */
    @org.apache.thrift.annotation.Nullable
    public static _Fields findByThriftId(int fieldId) {
      switch(fieldId) {
        case 1: // REVISION
          return REVISION;
        case 2: // CREATED_TIME
          return CREATED_TIME;
        case 3: // TYPE
          return TYPE;
        case 4: // REQ_SEQ
          return REQ_SEQ;
        case 5: // STATUS
          return STATUS;
        case 10: // PARAM1
          return PARAM1;
        case 11: // PARAM2
          return PARAM2;
        case 12: // PARAM3
          return PARAM3;
        case 20: // MESSAGE
          return MESSAGE;
        default:
          return null;
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, throwing an exception
     * if it is not found.
     */
    public static _Fields findByThriftIdOrThrow(int fieldId) {
      _Fields fields = findByThriftId(fieldId);
      if (fields == null) throw new java.lang.IllegalArgumentException("Field " + fieldId + " doesn't exist!");
      return fields;
    }

    /**
     * Find the _Fields constant that matches name, or null if its not found.
     */
    @org.apache.thrift.annotation.Nullable
    public static _Fields findByName(java.lang.String name) {
      return byName.get(name);
    }

    private final short _thriftId;
    private final java.lang.String _fieldName;

    _Fields(short thriftId, java.lang.String fieldName) {
      _thriftId = thriftId;
      _fieldName = fieldName;
    }

    public short getThriftFieldId() {
      return _thriftId;
    }

    public java.lang.String getFieldName() {
      return _fieldName;
    }
  }

  // isset id assignments
  private static final int __REVISION_ISSET_ID = 0;
  private static final int __CREATEDTIME_ISSET_ID = 1;
  private static final int __REQSEQ_ISSET_ID = 2;
  private byte __isset_bitfield = 0;
  public static final java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new java.util.EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.REVISION, new org.apache.thrift.meta_data.FieldMetaData("revision", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I64)));
    tmpMap.put(_Fields.CREATED_TIME, new org.apache.thrift.meta_data.FieldMetaData("createdTime", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I64)));
    tmpMap.put(_Fields.TYPE, new org.apache.thrift.meta_data.FieldMetaData("type", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.EnumMetaData(org.apache.thrift.protocol.TType.ENUM, MessageOperationType.class)));
    tmpMap.put(_Fields.REQ_SEQ, new org.apache.thrift.meta_data.FieldMetaData("reqSeq", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.I32)));
    tmpMap.put(_Fields.STATUS, new org.apache.thrift.meta_data.FieldMetaData("status", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.EnumMetaData(org.apache.thrift.protocol.TType.ENUM, OpStatus.class)));
    tmpMap.put(_Fields.PARAM1, new org.apache.thrift.meta_data.FieldMetaData("param1", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.PARAM2, new org.apache.thrift.meta_data.FieldMetaData("param2", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.PARAM3, new org.apache.thrift.meta_data.FieldMetaData("param3", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.MESSAGE, new org.apache.thrift.meta_data.FieldMetaData("message", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.StructMetaData(org.apache.thrift.protocol.TType.STRUCT, Message.class)));
    metaDataMap = java.util.Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(MessageOperation.class, metaDataMap);
  }

  public MessageOperation() {
  }

  public MessageOperation(
    long revision,
    long createdTime,
    MessageOperationType type,
    int reqSeq,
    OpStatus status,
    java.lang.String param1,
    java.lang.String param2,
    java.lang.String param3,
    Message message)
  {
    this();
    this.revision = revision;
    setRevisionIsSet(true);
    this.createdTime = createdTime;
    setCreatedTimeIsSet(true);
    this.type = type;
    this.reqSeq = reqSeq;
    setReqSeqIsSet(true);
    this.status = status;
    this.param1 = param1;
    this.param2 = param2;
    this.param3 = param3;
    this.message = message;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MessageOperation(MessageOperation other) {
    __isset_bitfield = other.__isset_bitfield;
    this.revision = other.revision;
    this.createdTime = other.createdTime;
    if (other.isSetType()) {
      this.type = other.type;
    }
    this.reqSeq = other.reqSeq;
    if (other.isSetStatus()) {
      this.status = other.status;
    }
    if (other.isSetParam1()) {
      this.param1 = other.param1;
    }
    if (other.isSetParam2()) {
      this.param2 = other.param2;
    }
    if (other.isSetParam3()) {
      this.param3 = other.param3;
    }
    if (other.isSetMessage()) {
      this.message = new Message(other.message);
    }
  }

  public MessageOperation deepCopy() {
    return new MessageOperation(this);
  }

  @Override
  public void clear() {
    setRevisionIsSet(false);
    this.revision = 0;
    setCreatedTimeIsSet(false);
    this.createdTime = 0;
    this.type = null;
    setReqSeqIsSet(false);
    this.reqSeq = 0;
    this.status = null;
    this.param1 = null;
    this.param2 = null;
    this.param3 = null;
    this.message = null;
  }

  public long getRevision() {
    return this.revision;
  }

  public MessageOperation setRevision(long revision) {
    this.revision = revision;
    setRevisionIsSet(true);
    return this;
  }

  public void unsetRevision() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __REVISION_ISSET_ID);
  }

  /** Returns true if field revision is set (has been assigned a value) and false otherwise */
  public boolean isSetRevision() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __REVISION_ISSET_ID);
  }

  public void setRevisionIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __REVISION_ISSET_ID, value);
  }

  public long getCreatedTime() {
    return this.createdTime;
  }

  public MessageOperation setCreatedTime(long createdTime) {
    this.createdTime = createdTime;
    setCreatedTimeIsSet(true);
    return this;
  }

  public void unsetCreatedTime() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __CREATEDTIME_ISSET_ID);
  }

  /** Returns true if field createdTime is set (has been assigned a value) and false otherwise */
  public boolean isSetCreatedTime() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __CREATEDTIME_ISSET_ID);
  }

  public void setCreatedTimeIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __CREATEDTIME_ISSET_ID, value);
  }

  /**
   * 
   * @see MessageOperationType
   */
  @org.apache.thrift.annotation.Nullable
  public MessageOperationType getType() {
    return this.type;
  }

  /**
   * 
   * @see MessageOperationType
   */
  public MessageOperation setType(@org.apache.thrift.annotation.Nullable MessageOperationType type) {
    this.type = type;
    return this;
  }

  public void unsetType() {
    this.type = null;
  }

  /** Returns true if field type is set (has been assigned a value) and false otherwise */
  public boolean isSetType() {
    return this.type != null;
  }

  public void setTypeIsSet(boolean value) {
    if (!value) {
      this.type = null;
    }
  }

  public int getReqSeq() {
    return this.reqSeq;
  }

  public MessageOperation setReqSeq(int reqSeq) {
    this.reqSeq = reqSeq;
    setReqSeqIsSet(true);
    return this;
  }

  public void unsetReqSeq() {
    __isset_bitfield = org.apache.thrift.EncodingUtils.clearBit(__isset_bitfield, __REQSEQ_ISSET_ID);
  }

  /** Returns true if field reqSeq is set (has been assigned a value) and false otherwise */
  public boolean isSetReqSeq() {
    return org.apache.thrift.EncodingUtils.testBit(__isset_bitfield, __REQSEQ_ISSET_ID);
  }

  public void setReqSeqIsSet(boolean value) {
    __isset_bitfield = org.apache.thrift.EncodingUtils.setBit(__isset_bitfield, __REQSEQ_ISSET_ID, value);
  }

  /**
   * 
   * @see OpStatus
   */
  @org.apache.thrift.annotation.Nullable
  public OpStatus getStatus() {
    return this.status;
  }

  /**
   * 
   * @see OpStatus
   */
  public MessageOperation setStatus(@org.apache.thrift.annotation.Nullable OpStatus status) {
    this.status = status;
    return this;
  }

  public void unsetStatus() {
    this.status = null;
  }

  /** Returns true if field status is set (has been assigned a value) and false otherwise */
  public boolean isSetStatus() {
    return this.status != null;
  }

  public void setStatusIsSet(boolean value) {
    if (!value) {
      this.status = null;
    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.String getParam1() {
    return this.param1;
  }

  public MessageOperation setParam1(@org.apache.thrift.annotation.Nullable java.lang.String param1) {
    this.param1 = param1;
    return this;
  }

  public void unsetParam1() {
    this.param1 = null;
  }

  /** Returns true if field param1 is set (has been assigned a value) and false otherwise */
  public boolean isSetParam1() {
    return this.param1 != null;
  }

  public void setParam1IsSet(boolean value) {
    if (!value) {
      this.param1 = null;
    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.String getParam2() {
    return this.param2;
  }

  public MessageOperation setParam2(@org.apache.thrift.annotation.Nullable java.lang.String param2) {
    this.param2 = param2;
    return this;
  }

  public void unsetParam2() {
    this.param2 = null;
  }

  /** Returns true if field param2 is set (has been assigned a value) and false otherwise */
  public boolean isSetParam2() {
    return this.param2 != null;
  }

  public void setParam2IsSet(boolean value) {
    if (!value) {
      this.param2 = null;
    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.String getParam3() {
    return this.param3;
  }

  public MessageOperation setParam3(@org.apache.thrift.annotation.Nullable java.lang.String param3) {
    this.param3 = param3;
    return this;
  }

  public void unsetParam3() {
    this.param3 = null;
  }

  /** Returns true if field param3 is set (has been assigned a value) and false otherwise */
  public boolean isSetParam3() {
    return this.param3 != null;
  }

  public void setParam3IsSet(boolean value) {
    if (!value) {
      this.param3 = null;
    }
  }

  @org.apache.thrift.annotation.Nullable
  public Message getMessage() {
    return this.message;
  }

  public MessageOperation setMessage(@org.apache.thrift.annotation.Nullable Message message) {
    this.message = message;
    return this;
  }

  public void unsetMessage() {
    this.message = null;
  }

  /** Returns true if field message is set (has been assigned a value) and false otherwise */
  public boolean isSetMessage() {
    return this.message != null;
  }

  public void setMessageIsSet(boolean value) {
    if (!value) {
      this.message = null;
    }
  }

  public void setFieldValue(_Fields field, @org.apache.thrift.annotation.Nullable java.lang.Object value) {
    switch (field) {
    case REVISION:
      if (value == null) {
        unsetRevision();
      } else {
        setRevision((java.lang.Long)value);
      }
      break;

    case CREATED_TIME:
      if (value == null) {
        unsetCreatedTime();
      } else {
        setCreatedTime((java.lang.Long)value);
      }
      break;

    case TYPE:
      if (value == null) {
        unsetType();
      } else {
        setType((MessageOperationType)value);
      }
      break;

    case REQ_SEQ:
      if (value == null) {
        unsetReqSeq();
      } else {
        setReqSeq((java.lang.Integer)value);
      }
      break;

    case STATUS:
      if (value == null) {
        unsetStatus();
      } else {
        setStatus((OpStatus)value);
      }
      break;

    case PARAM1:
      if (value == null) {
        unsetParam1();
      } else {
        setParam1((java.lang.String)value);
      }
      break;

    case PARAM2:
      if (value == null) {
        unsetParam2();
      } else {
        setParam2((java.lang.String)value);
      }
      break;

    case PARAM3:
      if (value == null) {
        unsetParam3();
      } else {
        setParam3((java.lang.String)value);
      }
      break;

    case MESSAGE:
      if (value == null) {
        unsetMessage();
      } else {
        setMessage((Message)value);
      }
      break;

    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.Object getFieldValue(_Fields field) {
    switch (field) {
    case REVISION:
      return getRevision();

    case CREATED_TIME:
      return getCreatedTime();

    case TYPE:
      return getType();

    case REQ_SEQ:
      return getReqSeq();

    case STATUS:
      return getStatus();

    case PARAM1:
      return getParam1();

    case PARAM2:
      return getParam2();

    case PARAM3:
      return getParam3();

    case MESSAGE:
      return getMessage();

    }
    throw new java.lang.IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new java.lang.IllegalArgumentException();
    }

    switch (field) {
    case REVISION:
      return isSetRevision();
    case CREATED_TIME:
      return isSetCreatedTime();
    case TYPE:
      return isSetType();
    case REQ_SEQ:
      return isSetReqSeq();
    case STATUS:
      return isSetStatus();
    case PARAM1:
      return isSetParam1();
    case PARAM2:
      return isSetParam2();
    case PARAM3:
      return isSetParam3();
    case MESSAGE:
      return isSetMessage();
    }
    throw new java.lang.IllegalStateException();
  }

  @Override
  public boolean equals(java.lang.Object that) {
    if (that == null)
      return false;
    if (that instanceof MessageOperation)
      return this.equals((MessageOperation)that);
    return false;
  }

  public boolean equals(MessageOperation that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_revision = true;
    boolean that_present_revision = true;
    if (this_present_revision || that_present_revision) {
      if (!(this_present_revision && that_present_revision))
        return false;
      if (this.revision != that.revision)
        return false;
    }

    boolean this_present_createdTime = true;
    boolean that_present_createdTime = true;
    if (this_present_createdTime || that_present_createdTime) {
      if (!(this_present_createdTime && that_present_createdTime))
        return false;
      if (this.createdTime != that.createdTime)
        return false;
    }

    boolean this_present_type = true && this.isSetType();
    boolean that_present_type = true && that.isSetType();
    if (this_present_type || that_present_type) {
      if (!(this_present_type && that_present_type))
        return false;
      if (!this.type.equals(that.type))
        return false;
    }

    boolean this_present_reqSeq = true;
    boolean that_present_reqSeq = true;
    if (this_present_reqSeq || that_present_reqSeq) {
      if (!(this_present_reqSeq && that_present_reqSeq))
        return false;
      if (this.reqSeq != that.reqSeq)
        return false;
    }

    boolean this_present_status = true && this.isSetStatus();
    boolean that_present_status = true && that.isSetStatus();
    if (this_present_status || that_present_status) {
      if (!(this_present_status && that_present_status))
        return false;
      if (!this.status.equals(that.status))
        return false;
    }

    boolean this_present_param1 = true && this.isSetParam1();
    boolean that_present_param1 = true && that.isSetParam1();
    if (this_present_param1 || that_present_param1) {
      if (!(this_present_param1 && that_present_param1))
        return false;
      if (!this.param1.equals(that.param1))
        return false;
    }

    boolean this_present_param2 = true && this.isSetParam2();
    boolean that_present_param2 = true && that.isSetParam2();
    if (this_present_param2 || that_present_param2) {
      if (!(this_present_param2 && that_present_param2))
        return false;
      if (!this.param2.equals(that.param2))
        return false;
    }

    boolean this_present_param3 = true && this.isSetParam3();
    boolean that_present_param3 = true && that.isSetParam3();
    if (this_present_param3 || that_present_param3) {
      if (!(this_present_param3 && that_present_param3))
        return false;
      if (!this.param3.equals(that.param3))
        return false;
    }

    boolean this_present_message = true && this.isSetMessage();
    boolean that_present_message = true && that.isSetMessage();
    if (this_present_message || that_present_message) {
      if (!(this_present_message && that_present_message))
        return false;
      if (!this.message.equals(that.message))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    int hashCode = 1;

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(revision);

    hashCode = hashCode * 8191 + org.apache.thrift.TBaseHelper.hashCode(createdTime);

    hashCode = hashCode * 8191 + ((isSetType()) ? 131071 : 524287);
    if (isSetType())
      hashCode = hashCode * 8191 + type.getValue();

    hashCode = hashCode * 8191 + reqSeq;

    hashCode = hashCode * 8191 + ((isSetStatus()) ? 131071 : 524287);
    if (isSetStatus())
      hashCode = hashCode * 8191 + status.getValue();

    hashCode = hashCode * 8191 + ((isSetParam1()) ? 131071 : 524287);
    if (isSetParam1())
      hashCode = hashCode * 8191 + param1.hashCode();

    hashCode = hashCode * 8191 + ((isSetParam2()) ? 131071 : 524287);
    if (isSetParam2())
      hashCode = hashCode * 8191 + param2.hashCode();

    hashCode = hashCode * 8191 + ((isSetParam3()) ? 131071 : 524287);
    if (isSetParam3())
      hashCode = hashCode * 8191 + param3.hashCode();

    hashCode = hashCode * 8191 + ((isSetMessage()) ? 131071 : 524287);
    if (isSetMessage())
      hashCode = hashCode * 8191 + message.hashCode();

    return hashCode;
  }

  @Override
  public int compareTo(MessageOperation other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = java.lang.Boolean.valueOf(isSetRevision()).compareTo(other.isSetRevision());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetRevision()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.revision, other.revision);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetCreatedTime()).compareTo(other.isSetCreatedTime());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetCreatedTime()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.createdTime, other.createdTime);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetType()).compareTo(other.isSetType());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetType()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.type, other.type);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetReqSeq()).compareTo(other.isSetReqSeq());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetReqSeq()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.reqSeq, other.reqSeq);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetStatus()).compareTo(other.isSetStatus());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetStatus()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.status, other.status);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetParam1()).compareTo(other.isSetParam1());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetParam1()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.param1, other.param1);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetParam2()).compareTo(other.isSetParam2());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetParam2()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.param2, other.param2);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetParam3()).compareTo(other.isSetParam3());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetParam3()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.param3, other.param3);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetMessage()).compareTo(other.isSetMessage());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMessage()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.message, other.message);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    return 0;
  }

  @org.apache.thrift.annotation.Nullable
  public _Fields fieldForId(int fieldId) {
    return _Fields.findByThriftId(fieldId);
  }

  public void read(org.apache.thrift.protocol.TProtocol iprot) throws org.apache.thrift.TException {
    scheme(iprot).read(iprot, this);
  }

  public void write(org.apache.thrift.protocol.TProtocol oprot) throws org.apache.thrift.TException {
    scheme(oprot).write(oprot, this);
  }

  @Override
  public java.lang.String toString() {
    java.lang.StringBuilder sb = new java.lang.StringBuilder("MessageOperation(");
    boolean first = true;

    sb.append("revision:");
    sb.append(this.revision);
    first = false;
    if (!first) sb.append(", ");
    sb.append("createdTime:");
    sb.append(this.createdTime);
    first = false;
    if (!first) sb.append(", ");
    sb.append("type:");
    if (this.type == null) {
      sb.append("null");
    } else {
      sb.append(this.type);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("reqSeq:");
    sb.append(this.reqSeq);
    first = false;
    if (!first) sb.append(", ");
    sb.append("status:");
    if (this.status == null) {
      sb.append("null");
    } else {
      sb.append(this.status);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("param1:");
    if (this.param1 == null) {
      sb.append("null");
    } else {
      sb.append(this.param1);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("param2:");
    if (this.param2 == null) {
      sb.append("null");
    } else {
      sb.append(this.param2);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("param3:");
    if (this.param3 == null) {
      sb.append("null");
    } else {
      sb.append(this.param3);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("message:");
    if (this.message == null) {
      sb.append("null");
    } else {
      sb.append(this.message);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    // check for sub-struct validity
    if (message != null) {
      message.validate();
    }
  }

  private void writeObject(java.io.ObjectOutputStream out) throws java.io.IOException {
    try {
      write(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(out)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private void readObject(java.io.ObjectInputStream in) throws java.io.IOException, java.lang.ClassNotFoundException {
    try {
      // it doesn't seem like you should have to do this, but java serialization is wacky, and doesn't call the default constructor.
      __isset_bitfield = 0;
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class MessageOperationStandardSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public MessageOperationStandardScheme getScheme() {
      return new MessageOperationStandardScheme();
    }
  }

  private static class MessageOperationStandardScheme extends org.apache.thrift.scheme.StandardScheme<MessageOperation> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, MessageOperation struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // REVISION
            if (schemeField.type == org.apache.thrift.protocol.TType.I64) {
              struct.revision = iprot.readI64();
              struct.setRevisionIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // CREATED_TIME
            if (schemeField.type == org.apache.thrift.protocol.TType.I64) {
              struct.createdTime = iprot.readI64();
              struct.setCreatedTimeIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // TYPE
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.type = MessageOperationType.findByValue(iprot.readI32());
              struct.setTypeIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // REQ_SEQ
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.reqSeq = iprot.readI32();
              struct.setReqSeqIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 5: // STATUS
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.status = OpStatus.findByValue(iprot.readI32());
              struct.setStatusIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 10: // PARAM1
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.param1 = iprot.readString();
              struct.setParam1IsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 11: // PARAM2
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.param2 = iprot.readString();
              struct.setParam2IsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 12: // PARAM3
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.param3 = iprot.readString();
              struct.setParam3IsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 20: // MESSAGE
            if (schemeField.type == org.apache.thrift.protocol.TType.STRUCT) {
              struct.message = new Message();
              struct.message.read(iprot);
              struct.setMessageIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          default:
            org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
        }
        iprot.readFieldEnd();
      }
      iprot.readStructEnd();

      // check for required fields of primitive type, which can't be checked in the validate method
      struct.validate();
    }

    public void write(org.apache.thrift.protocol.TProtocol oprot, MessageOperation struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(REVISION_FIELD_DESC);
      oprot.writeI64(struct.revision);
      oprot.writeFieldEnd();
      oprot.writeFieldBegin(CREATED_TIME_FIELD_DESC);
      oprot.writeI64(struct.createdTime);
      oprot.writeFieldEnd();
      if (struct.type != null) {
        oprot.writeFieldBegin(TYPE_FIELD_DESC);
        oprot.writeI32(struct.type.getValue());
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(REQ_SEQ_FIELD_DESC);
      oprot.writeI32(struct.reqSeq);
      oprot.writeFieldEnd();
      if (struct.status != null) {
        oprot.writeFieldBegin(STATUS_FIELD_DESC);
        oprot.writeI32(struct.status.getValue());
        oprot.writeFieldEnd();
      }
      if (struct.param1 != null) {
        oprot.writeFieldBegin(PARAM1_FIELD_DESC);
        oprot.writeString(struct.param1);
        oprot.writeFieldEnd();
      }
      if (struct.param2 != null) {
        oprot.writeFieldBegin(PARAM2_FIELD_DESC);
        oprot.writeString(struct.param2);
        oprot.writeFieldEnd();
      }
      if (struct.param3 != null) {
        oprot.writeFieldBegin(PARAM3_FIELD_DESC);
        oprot.writeString(struct.param3);
        oprot.writeFieldEnd();
      }
      if (struct.message != null) {
        oprot.writeFieldBegin(MESSAGE_FIELD_DESC);
        struct.message.write(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class MessageOperationTupleSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public MessageOperationTupleScheme getScheme() {
      return new MessageOperationTupleScheme();
    }
  }

  private static class MessageOperationTupleScheme extends org.apache.thrift.scheme.TupleScheme<MessageOperation> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, MessageOperation struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol oprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet optionals = new java.util.BitSet();
      if (struct.isSetRevision()) {
        optionals.set(0);
      }
      if (struct.isSetCreatedTime()) {
        optionals.set(1);
      }
      if (struct.isSetType()) {
        optionals.set(2);
      }
      if (struct.isSetReqSeq()) {
        optionals.set(3);
      }
      if (struct.isSetStatus()) {
        optionals.set(4);
      }
      if (struct.isSetParam1()) {
        optionals.set(5);
      }
      if (struct.isSetParam2()) {
        optionals.set(6);
      }
      if (struct.isSetParam3()) {
        optionals.set(7);
      }
      if (struct.isSetMessage()) {
        optionals.set(8);
      }
      oprot.writeBitSet(optionals, 9);
      if (struct.isSetRevision()) {
        oprot.writeI64(struct.revision);
      }
      if (struct.isSetCreatedTime()) {
        oprot.writeI64(struct.createdTime);
      }
      if (struct.isSetType()) {
        oprot.writeI32(struct.type.getValue());
      }
      if (struct.isSetReqSeq()) {
        oprot.writeI32(struct.reqSeq);
      }
      if (struct.isSetStatus()) {
        oprot.writeI32(struct.status.getValue());
      }
      if (struct.isSetParam1()) {
        oprot.writeString(struct.param1);
      }
      if (struct.isSetParam2()) {
        oprot.writeString(struct.param2);
      }
      if (struct.isSetParam3()) {
        oprot.writeString(struct.param3);
      }
      if (struct.isSetMessage()) {
        struct.message.write(oprot);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, MessageOperation struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol iprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet incoming = iprot.readBitSet(9);
      if (incoming.get(0)) {
        struct.revision = iprot.readI64();
        struct.setRevisionIsSet(true);
      }
      if (incoming.get(1)) {
        struct.createdTime = iprot.readI64();
        struct.setCreatedTimeIsSet(true);
      }
      if (incoming.get(2)) {
        struct.type = MessageOperationType.findByValue(iprot.readI32());
        struct.setTypeIsSet(true);
      }
      if (incoming.get(3)) {
        struct.reqSeq = iprot.readI32();
        struct.setReqSeqIsSet(true);
      }
      if (incoming.get(4)) {
        struct.status = OpStatus.findByValue(iprot.readI32());
        struct.setStatusIsSet(true);
      }
      if (incoming.get(5)) {
        struct.param1 = iprot.readString();
        struct.setParam1IsSet(true);
      }
      if (incoming.get(6)) {
        struct.param2 = iprot.readString();
        struct.setParam2IsSet(true);
      }
      if (incoming.get(7)) {
        struct.param3 = iprot.readString();
        struct.setParam3IsSet(true);
      }
      if (incoming.get(8)) {
        struct.message = new Message();
        struct.message.read(iprot);
        struct.setMessageIsSet(true);
      }
    }
  }

  private static <S extends org.apache.thrift.scheme.IScheme> S scheme(org.apache.thrift.protocol.TProtocol proto) {
    return (org.apache.thrift.scheme.StandardScheme.class.equals(proto.getScheme()) ? STANDARD_SCHEME_FACTORY : TUPLE_SCHEME_FACTORY).getScheme();
  }
}

