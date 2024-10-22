/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked", "unused"})
@javax.annotation.Generated(value = "Autogenerated by Thrift Compiler (0.14.0)", date = "2019-11-06")
public class SnsProfile implements org.apache.thrift.TBase<SnsProfile, SnsProfile._Fields>, java.io.Serializable, Cloneable, Comparable<SnsProfile> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("SnsProfile");

  private static final org.apache.thrift.protocol.TField SNS_USER_ID_FIELD_DESC = new org.apache.thrift.protocol.TField("snsUserId", org.apache.thrift.protocol.TType.STRING, (short)1);
  private static final org.apache.thrift.protocol.TField SNS_USER_NAME_FIELD_DESC = new org.apache.thrift.protocol.TField("snsUserName", org.apache.thrift.protocol.TType.STRING, (short)2);
  private static final org.apache.thrift.protocol.TField EMAIL_FIELD_DESC = new org.apache.thrift.protocol.TField("email", org.apache.thrift.protocol.TType.STRING, (short)3);
  private static final org.apache.thrift.protocol.TField THUMBNAIL_URL_FIELD_DESC = new org.apache.thrift.protocol.TField("thumbnailUrl", org.apache.thrift.protocol.TType.STRING, (short)4);

  private static final org.apache.thrift.scheme.SchemeFactory STANDARD_SCHEME_FACTORY = new SnsProfileStandardSchemeFactory();
  private static final org.apache.thrift.scheme.SchemeFactory TUPLE_SCHEME_FACTORY = new SnsProfileTupleSchemeFactory();

  public @org.apache.thrift.annotation.Nullable java.lang.String snsUserId; // required
  public @org.apache.thrift.annotation.Nullable java.lang.String snsUserName; // required
  public @org.apache.thrift.annotation.Nullable java.lang.String email; // required
  public @org.apache.thrift.annotation.Nullable java.lang.String thumbnailUrl; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    SNS_USER_ID((short)1, "snsUserId"),
    SNS_USER_NAME((short)2, "snsUserName"),
    EMAIL((short)3, "email"),
    THUMBNAIL_URL((short)4, "thumbnailUrl");

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
        case 1: // SNS_USER_ID
          return SNS_USER_ID;
        case 2: // SNS_USER_NAME
          return SNS_USER_NAME;
        case 3: // EMAIL
          return EMAIL;
        case 4: // THUMBNAIL_URL
          return THUMBNAIL_URL;
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
  public static final java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> metaDataMap;
  static {
    java.util.Map<_Fields, org.apache.thrift.meta_data.FieldMetaData> tmpMap = new java.util.EnumMap<_Fields, org.apache.thrift.meta_data.FieldMetaData>(_Fields.class);
    tmpMap.put(_Fields.SNS_USER_ID, new org.apache.thrift.meta_data.FieldMetaData("snsUserId", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.SNS_USER_NAME, new org.apache.thrift.meta_data.FieldMetaData("snsUserName", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.EMAIL, new org.apache.thrift.meta_data.FieldMetaData("email", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.THUMBNAIL_URL, new org.apache.thrift.meta_data.FieldMetaData("thumbnailUrl", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    metaDataMap = java.util.Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(SnsProfile.class, metaDataMap);
  }

  public SnsProfile() {
  }

  public SnsProfile(
    java.lang.String snsUserId,
    java.lang.String snsUserName,
    java.lang.String email,
    java.lang.String thumbnailUrl)
  {
    this();
    this.snsUserId = snsUserId;
    this.snsUserName = snsUserName;
    this.email = email;
    this.thumbnailUrl = thumbnailUrl;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public SnsProfile(SnsProfile other) {
    if (other.isSetSnsUserId()) {
      this.snsUserId = other.snsUserId;
    }
    if (other.isSetSnsUserName()) {
      this.snsUserName = other.snsUserName;
    }
    if (other.isSetEmail()) {
      this.email = other.email;
    }
    if (other.isSetThumbnailUrl()) {
      this.thumbnailUrl = other.thumbnailUrl;
    }
  }

  public SnsProfile deepCopy() {
    return new SnsProfile(this);
  }

  @Override
  public void clear() {
    this.snsUserId = null;
    this.snsUserName = null;
    this.email = null;
    this.thumbnailUrl = null;
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.String getSnsUserId() {
    return this.snsUserId;
  }

  public SnsProfile setSnsUserId(@org.apache.thrift.annotation.Nullable java.lang.String snsUserId) {
    this.snsUserId = snsUserId;
    return this;
  }

  public void unsetSnsUserId() {
    this.snsUserId = null;
  }

  /** Returns true if field snsUserId is set (has been assigned a value) and false otherwise */
  public boolean isSetSnsUserId() {
    return this.snsUserId != null;
  }

  public void setSnsUserIdIsSet(boolean value) {
    if (!value) {
      this.snsUserId = null;
    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.String getSnsUserName() {
    return this.snsUserName;
  }

  public SnsProfile setSnsUserName(@org.apache.thrift.annotation.Nullable java.lang.String snsUserName) {
    this.snsUserName = snsUserName;
    return this;
  }

  public void unsetSnsUserName() {
    this.snsUserName = null;
  }

  /** Returns true if field snsUserName is set (has been assigned a value) and false otherwise */
  public boolean isSetSnsUserName() {
    return this.snsUserName != null;
  }

  public void setSnsUserNameIsSet(boolean value) {
    if (!value) {
      this.snsUserName = null;
    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.String getEmail() {
    return this.email;
  }

  public SnsProfile setEmail(@org.apache.thrift.annotation.Nullable java.lang.String email) {
    this.email = email;
    return this;
  }

  public void unsetEmail() {
    this.email = null;
  }

  /** Returns true if field email is set (has been assigned a value) and false otherwise */
  public boolean isSetEmail() {
    return this.email != null;
  }

  public void setEmailIsSet(boolean value) {
    if (!value) {
      this.email = null;
    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.String getThumbnailUrl() {
    return this.thumbnailUrl;
  }

  public SnsProfile setThumbnailUrl(@org.apache.thrift.annotation.Nullable java.lang.String thumbnailUrl) {
    this.thumbnailUrl = thumbnailUrl;
    return this;
  }

  public void unsetThumbnailUrl() {
    this.thumbnailUrl = null;
  }

  /** Returns true if field thumbnailUrl is set (has been assigned a value) and false otherwise */
  public boolean isSetThumbnailUrl() {
    return this.thumbnailUrl != null;
  }

  public void setThumbnailUrlIsSet(boolean value) {
    if (!value) {
      this.thumbnailUrl = null;
    }
  }

  public void setFieldValue(_Fields field, @org.apache.thrift.annotation.Nullable java.lang.Object value) {
    switch (field) {
    case SNS_USER_ID:
      if (value == null) {
        unsetSnsUserId();
      } else {
        setSnsUserId((java.lang.String)value);
      }
      break;

    case SNS_USER_NAME:
      if (value == null) {
        unsetSnsUserName();
      } else {
        setSnsUserName((java.lang.String)value);
      }
      break;

    case EMAIL:
      if (value == null) {
        unsetEmail();
      } else {
        setEmail((java.lang.String)value);
      }
      break;

    case THUMBNAIL_URL:
      if (value == null) {
        unsetThumbnailUrl();
      } else {
        setThumbnailUrl((java.lang.String)value);
      }
      break;

    }
  }

  @org.apache.thrift.annotation.Nullable
  public java.lang.Object getFieldValue(_Fields field) {
    switch (field) {
    case SNS_USER_ID:
      return getSnsUserId();

    case SNS_USER_NAME:
      return getSnsUserName();

    case EMAIL:
      return getEmail();

    case THUMBNAIL_URL:
      return getThumbnailUrl();

    }
    throw new java.lang.IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new java.lang.IllegalArgumentException();
    }

    switch (field) {
    case SNS_USER_ID:
      return isSetSnsUserId();
    case SNS_USER_NAME:
      return isSetSnsUserName();
    case EMAIL:
      return isSetEmail();
    case THUMBNAIL_URL:
      return isSetThumbnailUrl();
    }
    throw new java.lang.IllegalStateException();
  }

  @Override
  public boolean equals(java.lang.Object that) {
    if (that == null)
      return false;
    if (that instanceof SnsProfile)
      return this.equals((SnsProfile)that);
    return false;
  }

  public boolean equals(SnsProfile that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_snsUserId = true && this.isSetSnsUserId();
    boolean that_present_snsUserId = true && that.isSetSnsUserId();
    if (this_present_snsUserId || that_present_snsUserId) {
      if (!(this_present_snsUserId && that_present_snsUserId))
        return false;
      if (!this.snsUserId.equals(that.snsUserId))
        return false;
    }

    boolean this_present_snsUserName = true && this.isSetSnsUserName();
    boolean that_present_snsUserName = true && that.isSetSnsUserName();
    if (this_present_snsUserName || that_present_snsUserName) {
      if (!(this_present_snsUserName && that_present_snsUserName))
        return false;
      if (!this.snsUserName.equals(that.snsUserName))
        return false;
    }

    boolean this_present_email = true && this.isSetEmail();
    boolean that_present_email = true && that.isSetEmail();
    if (this_present_email || that_present_email) {
      if (!(this_present_email && that_present_email))
        return false;
      if (!this.email.equals(that.email))
        return false;
    }

    boolean this_present_thumbnailUrl = true && this.isSetThumbnailUrl();
    boolean that_present_thumbnailUrl = true && that.isSetThumbnailUrl();
    if (this_present_thumbnailUrl || that_present_thumbnailUrl) {
      if (!(this_present_thumbnailUrl && that_present_thumbnailUrl))
        return false;
      if (!this.thumbnailUrl.equals(that.thumbnailUrl))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    int hashCode = 1;

    hashCode = hashCode * 8191 + ((isSetSnsUserId()) ? 131071 : 524287);
    if (isSetSnsUserId())
      hashCode = hashCode * 8191 + snsUserId.hashCode();

    hashCode = hashCode * 8191 + ((isSetSnsUserName()) ? 131071 : 524287);
    if (isSetSnsUserName())
      hashCode = hashCode * 8191 + snsUserName.hashCode();

    hashCode = hashCode * 8191 + ((isSetEmail()) ? 131071 : 524287);
    if (isSetEmail())
      hashCode = hashCode * 8191 + email.hashCode();

    hashCode = hashCode * 8191 + ((isSetThumbnailUrl()) ? 131071 : 524287);
    if (isSetThumbnailUrl())
      hashCode = hashCode * 8191 + thumbnailUrl.hashCode();

    return hashCode;
  }

  @Override
  public int compareTo(SnsProfile other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = java.lang.Boolean.valueOf(isSetSnsUserId()).compareTo(other.isSetSnsUserId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSnsUserId()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.snsUserId, other.snsUserId);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetSnsUserName()).compareTo(other.isSetSnsUserName());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSnsUserName()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.snsUserName, other.snsUserName);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetEmail()).compareTo(other.isSetEmail());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetEmail()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.email, other.email);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetThumbnailUrl()).compareTo(other.isSetThumbnailUrl());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetThumbnailUrl()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.thumbnailUrl, other.thumbnailUrl);
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
    java.lang.StringBuilder sb = new java.lang.StringBuilder("SnsProfile(");
    boolean first = true;

    sb.append("snsUserId:");
    if (this.snsUserId == null) {
      sb.append("null");
    } else {
      sb.append(this.snsUserId);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("snsUserName:");
    if (this.snsUserName == null) {
      sb.append("null");
    } else {
      sb.append(this.snsUserName);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("email:");
    if (this.email == null) {
      sb.append("null");
    } else {
      sb.append(this.email);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("thumbnailUrl:");
    if (this.thumbnailUrl == null) {
      sb.append("null");
    } else {
      sb.append(this.thumbnailUrl);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws org.apache.thrift.TException {
    // check for required fields
    // check for sub-struct validity
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
      read(new org.apache.thrift.protocol.TCompactProtocol(new org.apache.thrift.transport.TIOStreamTransport(in)));
    } catch (org.apache.thrift.TException te) {
      throw new java.io.IOException(te);
    }
  }

  private static class SnsProfileStandardSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public SnsProfileStandardScheme getScheme() {
      return new SnsProfileStandardScheme();
    }
  }

  private static class SnsProfileStandardScheme extends org.apache.thrift.scheme.StandardScheme<SnsProfile> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, SnsProfile struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // SNS_USER_ID
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.snsUserId = iprot.readString();
              struct.setSnsUserIdIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // SNS_USER_NAME
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.snsUserName = iprot.readString();
              struct.setSnsUserNameIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // EMAIL
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.email = iprot.readString();
              struct.setEmailIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // THUMBNAIL_URL
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.thumbnailUrl = iprot.readString();
              struct.setThumbnailUrlIsSet(true);
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

    public void write(org.apache.thrift.protocol.TProtocol oprot, SnsProfile struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (struct.snsUserId != null) {
        oprot.writeFieldBegin(SNS_USER_ID_FIELD_DESC);
        oprot.writeString(struct.snsUserId);
        oprot.writeFieldEnd();
      }
      if (struct.snsUserName != null) {
        oprot.writeFieldBegin(SNS_USER_NAME_FIELD_DESC);
        oprot.writeString(struct.snsUserName);
        oprot.writeFieldEnd();
      }
      if (struct.email != null) {
        oprot.writeFieldBegin(EMAIL_FIELD_DESC);
        oprot.writeString(struct.email);
        oprot.writeFieldEnd();
      }
      if (struct.thumbnailUrl != null) {
        oprot.writeFieldBegin(THUMBNAIL_URL_FIELD_DESC);
        oprot.writeString(struct.thumbnailUrl);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class SnsProfileTupleSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public SnsProfileTupleScheme getScheme() {
      return new SnsProfileTupleScheme();
    }
  }

  private static class SnsProfileTupleScheme extends org.apache.thrift.scheme.TupleScheme<SnsProfile> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, SnsProfile struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol oprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet optionals = new java.util.BitSet();
      if (struct.isSetSnsUserId()) {
        optionals.set(0);
      }
      if (struct.isSetSnsUserName()) {
        optionals.set(1);
      }
      if (struct.isSetEmail()) {
        optionals.set(2);
      }
      if (struct.isSetThumbnailUrl()) {
        optionals.set(3);
      }
      oprot.writeBitSet(optionals, 4);
      if (struct.isSetSnsUserId()) {
        oprot.writeString(struct.snsUserId);
      }
      if (struct.isSetSnsUserName()) {
        oprot.writeString(struct.snsUserName);
      }
      if (struct.isSetEmail()) {
        oprot.writeString(struct.email);
      }
      if (struct.isSetThumbnailUrl()) {
        oprot.writeString(struct.thumbnailUrl);
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, SnsProfile struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol iprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet incoming = iprot.readBitSet(4);
      if (incoming.get(0)) {
        struct.snsUserId = iprot.readString();
        struct.setSnsUserIdIsSet(true);
      }
      if (incoming.get(1)) {
        struct.snsUserName = iprot.readString();
        struct.setSnsUserNameIsSet(true);
      }
      if (incoming.get(2)) {
        struct.email = iprot.readString();
        struct.setEmailIsSet(true);
      }
      if (incoming.get(3)) {
        struct.thumbnailUrl = iprot.readString();
        struct.setThumbnailUrlIsSet(true);
      }
    }
  }

  private static <S extends org.apache.thrift.scheme.IScheme> S scheme(org.apache.thrift.protocol.TProtocol proto) {
    return (org.apache.thrift.scheme.StandardScheme.class.equals(proto.getScheme()) ? STANDARD_SCHEME_FACTORY : TUPLE_SCHEME_FACTORY).getScheme();
  }
}

