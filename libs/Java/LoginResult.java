/**
 * Compiled for SuperSonic Line API Lite
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
@SuppressWarnings({"cast", "rawtypes", "serial", "unchecked", "unused"})
@javax.annotation.Generated(value = "Compiled for SuperSonic Line API Lite", date = "2018-06-30")
public class LoginResult implements org.apache.thrift.TBase<LoginResult, LoginResult._Fields>, java.io.Serializable, Cloneable, Comparable<LoginResult> {
  private static final org.apache.thrift.protocol.TStruct STRUCT_DESC = new org.apache.thrift.protocol.TStruct("LoginResult");

  private static final org.apache.thrift.protocol.TField AUTH_TOKEN_FIELD_DESC = new org.apache.thrift.protocol.TField("authToken", org.apache.thrift.protocol.TType.STRING, (short)1);
  private static final org.apache.thrift.protocol.TField CERTIFICATE_FIELD_DESC = new org.apache.thrift.protocol.TField("certificate", org.apache.thrift.protocol.TType.STRING, (short)2);
  private static final org.apache.thrift.protocol.TField VERIFIER_FIELD_DESC = new org.apache.thrift.protocol.TField("verifier", org.apache.thrift.protocol.TType.STRING, (short)3);
  private static final org.apache.thrift.protocol.TField PIN_CODE_FIELD_DESC = new org.apache.thrift.protocol.TField("pinCode", org.apache.thrift.protocol.TType.STRING, (short)4);
  private static final org.apache.thrift.protocol.TField TYPE_FIELD_DESC = new org.apache.thrift.protocol.TField("type", org.apache.thrift.protocol.TType.I32, (short)5);

  private static final org.apache.thrift.scheme.SchemeFactory STANDARD_SCHEME_FACTORY = new LoginResultStandardSchemeFactory();
  private static final org.apache.thrift.scheme.SchemeFactory TUPLE_SCHEME_FACTORY = new LoginResultTupleSchemeFactory();

  public java.lang.String authToken; // required
  public java.lang.String certificate; // required
  public java.lang.String verifier; // required
  public java.lang.String pinCode; // required
  public LoginResultType type; // required

  /** The set of fields this struct contains, along with convenience methods for finding and manipulating them. */
  public enum _Fields implements org.apache.thrift.TFieldIdEnum {
    AUTH_TOKEN((short)1, "authToken"),
    CERTIFICATE((short)2, "certificate"),
    VERIFIER((short)3, "verifier"),
    PIN_CODE((short)4, "pinCode"),
    TYPE((short)5, "type");

    private static final java.util.Map<java.lang.String, _Fields> byName = new java.util.HashMap<java.lang.String, _Fields>();

    static {
      for (_Fields field : java.util.EnumSet.allOf(_Fields.class)) {
        byName.put(field.getFieldName(), field);
      }
    }

    /**
     * Find the _Fields constant that matches fieldId, or null if its not found.
     */
    public static _Fields findByThriftId(int fieldId) {
      switch(fieldId) {
        case 1: // AUTH_TOKEN
          return AUTH_TOKEN;
        case 2: // CERTIFICATE
          return CERTIFICATE;
        case 3: // VERIFIER
          return VERIFIER;
        case 4: // PIN_CODE
          return PIN_CODE;
        case 5: // TYPE
          return TYPE;
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
    tmpMap.put(_Fields.AUTH_TOKEN, new org.apache.thrift.meta_data.FieldMetaData("authToken", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.CERTIFICATE, new org.apache.thrift.meta_data.FieldMetaData("certificate", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.VERIFIER, new org.apache.thrift.meta_data.FieldMetaData("verifier", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.PIN_CODE, new org.apache.thrift.meta_data.FieldMetaData("pinCode", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.STRING)));
    tmpMap.put(_Fields.TYPE, new org.apache.thrift.meta_data.FieldMetaData("type", org.apache.thrift.TFieldRequirementType.DEFAULT, 
        new org.apache.thrift.meta_data.FieldValueMetaData(org.apache.thrift.protocol.TType.ENUM        , "LoginResultType")));
    metaDataMap = java.util.Collections.unmodifiableMap(tmpMap);
    org.apache.thrift.meta_data.FieldMetaData.addStructMetaDataMap(LoginResult.class, metaDataMap);
  }

  public LoginResult() {
  }

  public LoginResult(
    java.lang.String authToken,
    java.lang.String certificate,
    java.lang.String verifier,
    java.lang.String pinCode,
    LoginResultType type)
  {
    this();
    this.authToken = authToken;
    this.certificate = certificate;
    this.verifier = verifier;
    this.pinCode = pinCode;
    this.type = type;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public LoginResult(LoginResult other) {
    if (other.isSetAuthToken()) {
      this.authToken = other.authToken;
    }
    if (other.isSetCertificate()) {
      this.certificate = other.certificate;
    }
    if (other.isSetVerifier()) {
      this.verifier = other.verifier;
    }
    if (other.isSetPinCode()) {
      this.pinCode = other.pinCode;
    }
    if (other.isSetType()) {
      this.type = other.type;
    }
  }

  public LoginResult deepCopy() {
    return new LoginResult(this);
  }

  @Override
  public void clear() {
    this.authToken = null;
    this.certificate = null;
    this.verifier = null;
    this.pinCode = null;
    this.type = null;
  }

  public java.lang.String getAuthToken() {
    return this.authToken;
  }

  public LoginResult setAuthToken(java.lang.String authToken) {
    this.authToken = authToken;
    return this;
  }

  public void unsetAuthToken() {
    this.authToken = null;
  }

  /** Returns true if field authToken is set (has been assigned a value) and false otherwise */
  public boolean isSetAuthToken() {
    return this.authToken != null;
  }

  public void setAuthTokenIsSet(boolean value) {
    if (!value) {
      this.authToken = null;
    }
  }

  public java.lang.String getCertificate() {
    return this.certificate;
  }

  public LoginResult setCertificate(java.lang.String certificate) {
    this.certificate = certificate;
    return this;
  }

  public void unsetCertificate() {
    this.certificate = null;
  }

  /** Returns true if field certificate is set (has been assigned a value) and false otherwise */
  public boolean isSetCertificate() {
    return this.certificate != null;
  }

  public void setCertificateIsSet(boolean value) {
    if (!value) {
      this.certificate = null;
    }
  }

  public java.lang.String getVerifier() {
    return this.verifier;
  }

  public LoginResult setVerifier(java.lang.String verifier) {
    this.verifier = verifier;
    return this;
  }

  public void unsetVerifier() {
    this.verifier = null;
  }

  /** Returns true if field verifier is set (has been assigned a value) and false otherwise */
  public boolean isSetVerifier() {
    return this.verifier != null;
  }

  public void setVerifierIsSet(boolean value) {
    if (!value) {
      this.verifier = null;
    }
  }

  public java.lang.String getPinCode() {
    return this.pinCode;
  }

  public LoginResult setPinCode(java.lang.String pinCode) {
    this.pinCode = pinCode;
    return this;
  }

  public void unsetPinCode() {
    this.pinCode = null;
  }

  /** Returns true if field pinCode is set (has been assigned a value) and false otherwise */
  public boolean isSetPinCode() {
    return this.pinCode != null;
  }

  public void setPinCodeIsSet(boolean value) {
    if (!value) {
      this.pinCode = null;
    }
  }

  public LoginResultType getType() {
    return this.type;
  }

  public LoginResult setType(LoginResultType type) {
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

  public void setFieldValue(_Fields field, java.lang.Object value) {
    switch (field) {
    case AUTH_TOKEN:
      if (value == null) {
        unsetAuthToken();
      } else {
        setAuthToken((java.lang.String)value);
      }
      break;

    case CERTIFICATE:
      if (value == null) {
        unsetCertificate();
      } else {
        setCertificate((java.lang.String)value);
      }
      break;

    case VERIFIER:
      if (value == null) {
        unsetVerifier();
      } else {
        setVerifier((java.lang.String)value);
      }
      break;

    case PIN_CODE:
      if (value == null) {
        unsetPinCode();
      } else {
        setPinCode((java.lang.String)value);
      }
      break;

    case TYPE:
      if (value == null) {
        unsetType();
      } else {
        setType((LoginResultType)value);
      }
      break;

    }
  }

  public java.lang.Object getFieldValue(_Fields field) {
    switch (field) {
    case AUTH_TOKEN:
      return getAuthToken();

    case CERTIFICATE:
      return getCertificate();

    case VERIFIER:
      return getVerifier();

    case PIN_CODE:
      return getPinCode();

    case TYPE:
      return getType();

    }
    throw new java.lang.IllegalStateException();
  }

  /** Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise */
  public boolean isSet(_Fields field) {
    if (field == null) {
      throw new java.lang.IllegalArgumentException();
    }

    switch (field) {
    case AUTH_TOKEN:
      return isSetAuthToken();
    case CERTIFICATE:
      return isSetCertificate();
    case VERIFIER:
      return isSetVerifier();
    case PIN_CODE:
      return isSetPinCode();
    case TYPE:
      return isSetType();
    }
    throw new java.lang.IllegalStateException();
  }

  @Override
  public boolean equals(java.lang.Object that) {
    if (that == null)
      return false;
    if (that instanceof LoginResult)
      return this.equals((LoginResult)that);
    return false;
  }

  public boolean equals(LoginResult that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_authToken = true && this.isSetAuthToken();
    boolean that_present_authToken = true && that.isSetAuthToken();
    if (this_present_authToken || that_present_authToken) {
      if (!(this_present_authToken && that_present_authToken))
        return false;
      if (!this.authToken.equals(that.authToken))
        return false;
    }

    boolean this_present_certificate = true && this.isSetCertificate();
    boolean that_present_certificate = true && that.isSetCertificate();
    if (this_present_certificate || that_present_certificate) {
      if (!(this_present_certificate && that_present_certificate))
        return false;
      if (!this.certificate.equals(that.certificate))
        return false;
    }

    boolean this_present_verifier = true && this.isSetVerifier();
    boolean that_present_verifier = true && that.isSetVerifier();
    if (this_present_verifier || that_present_verifier) {
      if (!(this_present_verifier && that_present_verifier))
        return false;
      if (!this.verifier.equals(that.verifier))
        return false;
    }

    boolean this_present_pinCode = true && this.isSetPinCode();
    boolean that_present_pinCode = true && that.isSetPinCode();
    if (this_present_pinCode || that_present_pinCode) {
      if (!(this_present_pinCode && that_present_pinCode))
        return false;
      if (!this.pinCode.equals(that.pinCode))
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

    return true;
  }

  @Override
  public int hashCode() {
    int hashCode = 1;

    hashCode = hashCode * 8191 + ((isSetAuthToken()) ? 131071 : 524287);
    if (isSetAuthToken())
      hashCode = hashCode * 8191 + authToken.hashCode();

    hashCode = hashCode * 8191 + ((isSetCertificate()) ? 131071 : 524287);
    if (isSetCertificate())
      hashCode = hashCode * 8191 + certificate.hashCode();

    hashCode = hashCode * 8191 + ((isSetVerifier()) ? 131071 : 524287);
    if (isSetVerifier())
      hashCode = hashCode * 8191 + verifier.hashCode();

    hashCode = hashCode * 8191 + ((isSetPinCode()) ? 131071 : 524287);
    if (isSetPinCode())
      hashCode = hashCode * 8191 + pinCode.hashCode();

    hashCode = hashCode * 8191 + ((isSetType()) ? 131071 : 524287);
    if (isSetType())
      hashCode = hashCode * 8191 + type.getValue();

    return hashCode;
  }

  @Override
  public int compareTo(LoginResult other) {
    if (!getClass().equals(other.getClass())) {
      return getClass().getName().compareTo(other.getClass().getName());
    }

    int lastComparison = 0;

    lastComparison = java.lang.Boolean.valueOf(isSetAuthToken()).compareTo(other.isSetAuthToken());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetAuthToken()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.authToken, other.authToken);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetCertificate()).compareTo(other.isSetCertificate());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetCertificate()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.certificate, other.certificate);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetVerifier()).compareTo(other.isSetVerifier());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetVerifier()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.verifier, other.verifier);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = java.lang.Boolean.valueOf(isSetPinCode()).compareTo(other.isSetPinCode());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetPinCode()) {
      lastComparison = org.apache.thrift.TBaseHelper.compareTo(this.pinCode, other.pinCode);
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
    return 0;
  }

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
    java.lang.StringBuilder sb = new java.lang.StringBuilder("LoginResult(");
    boolean first = true;

    sb.append("authToken:");
    if (this.authToken == null) {
      sb.append("null");
    } else {
      sb.append(this.authToken);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("certificate:");
    if (this.certificate == null) {
      sb.append("null");
    } else {
      sb.append(this.certificate);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("verifier:");
    if (this.verifier == null) {
      sb.append("null");
    } else {
      sb.append(this.verifier);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("pinCode:");
    if (this.pinCode == null) {
      sb.append("null");
    } else {
      sb.append(this.pinCode);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("type:");
    if (this.type == null) {
      sb.append("null");
    } else {
      sb.append(this.type);
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

  private static class LoginResultStandardSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public LoginResultStandardScheme getScheme() {
      return new LoginResultStandardScheme();
    }
  }

  private static class LoginResultStandardScheme extends org.apache.thrift.scheme.StandardScheme<LoginResult> {

    public void read(org.apache.thrift.protocol.TProtocol iprot, LoginResult struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TField schemeField;
      iprot.readStructBegin();
      while (true)
      {
        schemeField = iprot.readFieldBegin();
        if (schemeField.type == org.apache.thrift.protocol.TType.STOP) { 
          break;
        }
        switch (schemeField.id) {
          case 1: // AUTH_TOKEN
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.authToken = iprot.readString();
              struct.setAuthTokenIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 2: // CERTIFICATE
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.certificate = iprot.readString();
              struct.setCertificateIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 3: // VERIFIER
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.verifier = iprot.readString();
              struct.setVerifierIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 4: // PIN_CODE
            if (schemeField.type == org.apache.thrift.protocol.TType.STRING) {
              struct.pinCode = iprot.readString();
              struct.setPinCodeIsSet(true);
            } else { 
              org.apache.thrift.protocol.TProtocolUtil.skip(iprot, schemeField.type);
            }
            break;
          case 5: // TYPE
            if (schemeField.type == org.apache.thrift.protocol.TType.I32) {
              struct.type = LoginResultType.findByValue(iprot.readI32());
              struct.setTypeIsSet(true);
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

    public void write(org.apache.thrift.protocol.TProtocol oprot, LoginResult struct) throws org.apache.thrift.TException {
      struct.validate();

      oprot.writeStructBegin(STRUCT_DESC);
      if (struct.authToken != null) {
        oprot.writeFieldBegin(AUTH_TOKEN_FIELD_DESC);
        oprot.writeString(struct.authToken);
        oprot.writeFieldEnd();
      }
      if (struct.certificate != null) {
        oprot.writeFieldBegin(CERTIFICATE_FIELD_DESC);
        oprot.writeString(struct.certificate);
        oprot.writeFieldEnd();
      }
      if (struct.verifier != null) {
        oprot.writeFieldBegin(VERIFIER_FIELD_DESC);
        oprot.writeString(struct.verifier);
        oprot.writeFieldEnd();
      }
      if (struct.pinCode != null) {
        oprot.writeFieldBegin(PIN_CODE_FIELD_DESC);
        oprot.writeString(struct.pinCode);
        oprot.writeFieldEnd();
      }
      if (struct.type != null) {
        oprot.writeFieldBegin(TYPE_FIELD_DESC);
        oprot.writeI32(struct.type.getValue());
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }

  }

  private static class LoginResultTupleSchemeFactory implements org.apache.thrift.scheme.SchemeFactory {
    public LoginResultTupleScheme getScheme() {
      return new LoginResultTupleScheme();
    }
  }

  private static class LoginResultTupleScheme extends org.apache.thrift.scheme.TupleScheme<LoginResult> {

    @Override
    public void write(org.apache.thrift.protocol.TProtocol prot, LoginResult struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol oprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet optionals = new java.util.BitSet();
      if (struct.isSetAuthToken()) {
        optionals.set(0);
      }
      if (struct.isSetCertificate()) {
        optionals.set(1);
      }
      if (struct.isSetVerifier()) {
        optionals.set(2);
      }
      if (struct.isSetPinCode()) {
        optionals.set(3);
      }
      if (struct.isSetType()) {
        optionals.set(4);
      }
      oprot.writeBitSet(optionals, 5);
      if (struct.isSetAuthToken()) {
        oprot.writeString(struct.authToken);
      }
      if (struct.isSetCertificate()) {
        oprot.writeString(struct.certificate);
      }
      if (struct.isSetVerifier()) {
        oprot.writeString(struct.verifier);
      }
      if (struct.isSetPinCode()) {
        oprot.writeString(struct.pinCode);
      }
      if (struct.isSetType()) {
        oprot.writeI32(struct.type.getValue());
      }
    }

    @Override
    public void read(org.apache.thrift.protocol.TProtocol prot, LoginResult struct) throws org.apache.thrift.TException {
      org.apache.thrift.protocol.TTupleProtocol iprot = (org.apache.thrift.protocol.TTupleProtocol) prot;
      java.util.BitSet incoming = iprot.readBitSet(5);
      if (incoming.get(0)) {
        struct.authToken = iprot.readString();
        struct.setAuthTokenIsSet(true);
      }
      if (incoming.get(1)) {
        struct.certificate = iprot.readString();
        struct.setCertificateIsSet(true);
      }
      if (incoming.get(2)) {
        struct.verifier = iprot.readString();
        struct.setVerifierIsSet(true);
      }
      if (incoming.get(3)) {
        struct.pinCode = iprot.readString();
        struct.setPinCodeIsSet(true);
      }
      if (incoming.get(4)) {
        struct.type = LoginResultType.findByValue(iprot.readI32());
        struct.setTypeIsSet(true);
      }
    }
  }

  private static <S extends org.apache.thrift.scheme.IScheme> S scheme(org.apache.thrift.protocol.TProtocol proto) {
    return (org.apache.thrift.scheme.StandardScheme.class.equals(proto.getScheme()) ? STANDARD_SCHEME_FACTORY : TUPLE_SCHEME_FACTORY).getScheme();
  }
}

