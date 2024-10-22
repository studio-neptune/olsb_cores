/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.Hashtable;
import java.util.Vector;
import java.util.Enumeration;

import org.apache.thrift.*;
import org.apache.thrift.meta_data.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

public class VerificationSessionData implements TBase {
  private static final TStruct STRUCT_DESC = new TStruct("VerificationSessionData");

  private static final TField SESSION_ID_FIELD_DESC = new TField("sessionId", TType.STRING, (short)1);
  private static final TField METHOD_FIELD_DESC = new TField("method", TType.I32, (short)2);
  private static final TField CALLBACK_FIELD_DESC = new TField("callback", TType.STRING, (short)3);
  private static final TField NORMALIZED_PHONE_FIELD_DESC = new TField("normalizedPhone", TType.STRING, (short)4);
  private static final TField COUNTRY_CODE_FIELD_DESC = new TField("countryCode", TType.STRING, (short)5);
  private static final TField NATIONAL_SIGNIFICANT_NUMBER_FIELD_DESC = new TField("nationalSignificantNumber", TType.STRING, (short)6);
  private static final TField AVAILABLE_VERIFICATION_METHODS_FIELD_DESC = new TField("availableVerificationMethods", TType.LIST, (short)7);

  private String sessionId;
  private VerificationMethod method;
  private String callback;
  private String normalizedPhone;
  private String countryCode;
  private String nationalSignificantNumber;
  private Vector availableVerificationMethods;

  // isset id assignments

  public VerificationSessionData() {
  }

  public VerificationSessionData(
    String sessionId,
    VerificationMethod method,
    String callback,
    String normalizedPhone,
    String countryCode,
    String nationalSignificantNumber,
    Vector availableVerificationMethods)
  {
    this();
    this.sessionId = sessionId;
    this.method = method;
    this.callback = callback;
    this.normalizedPhone = normalizedPhone;
    this.countryCode = countryCode;
    this.nationalSignificantNumber = nationalSignificantNumber;
    this.availableVerificationMethods = availableVerificationMethods;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public VerificationSessionData(VerificationSessionData other) {
    if (other.isSetSessionId()) {
      this.sessionId = other.sessionId;
    }
    if (other.isSetMethod()) {
      this.method = other.method;
    }
    if (other.isSetCallback()) {
      this.callback = other.callback;
    }
    if (other.isSetNormalizedPhone()) {
      this.normalizedPhone = other.normalizedPhone;
    }
    if (other.isSetCountryCode()) {
      this.countryCode = other.countryCode;
    }
    if (other.isSetNationalSignificantNumber()) {
      this.nationalSignificantNumber = other.nationalSignificantNumber;
    }
    if (other.isSetAvailableVerificationMethods()) {
      Vector __this__availableVerificationMethods = new Vector();
      for (Enumeration other_enum = other.availableVerificationMethods.elements(); other_enum.hasMoreElements(); ) {
        VerificationMethod other_element = (VerificationMethod)other_enum.nextElement();
        __this__availableVerificationMethods.addElement(other_element);
      }
      this.availableVerificationMethods = __this__availableVerificationMethods;
    }
  }

  public VerificationSessionData deepCopy() {
    return new VerificationSessionData(this);
  }

  public void clear() {
    this.sessionId = null;
    this.method = null;
    this.callback = null;
    this.normalizedPhone = null;
    this.countryCode = null;
    this.nationalSignificantNumber = null;
    this.availableVerificationMethods = null;
  }

  public String getSessionId() {
    return this.sessionId;
  }

  public void setSessionId(String sessionId) {
    this.sessionId = sessionId;
  }

  public void unsetSessionId() {
    this.sessionId = null;
  }

  /** Returns true if field sessionId is set (has been assigned a value) and false otherwise */
  public boolean isSetSessionId() {
    return this.sessionId != null;
  }

  public void setSessionIdIsSet(boolean value) {
    if (!value) {
      this.sessionId = null;
    }
  }

  /**
   * 
   * @see VerificationMethod
   */
  public VerificationMethod getMethod() {
    return this.method;
  }

  /**
   * 
   * @see VerificationMethod
   */
  public void setMethod(VerificationMethod method) {
    this.method = method;
  }

  public void unsetMethod() {
    this.method = null;
  }

  /** Returns true if field method is set (has been assigned a value) and false otherwise */
  public boolean isSetMethod() {
    return this.method != null;
  }

  public void setMethodIsSet(boolean value) {
    if (!value) {
      this.method = null;
    }
  }

  public String getCallback() {
    return this.callback;
  }

  public void setCallback(String callback) {
    this.callback = callback;
  }

  public void unsetCallback() {
    this.callback = null;
  }

  /** Returns true if field callback is set (has been assigned a value) and false otherwise */
  public boolean isSetCallback() {
    return this.callback != null;
  }

  public void setCallbackIsSet(boolean value) {
    if (!value) {
      this.callback = null;
    }
  }

  public String getNormalizedPhone() {
    return this.normalizedPhone;
  }

  public void setNormalizedPhone(String normalizedPhone) {
    this.normalizedPhone = normalizedPhone;
  }

  public void unsetNormalizedPhone() {
    this.normalizedPhone = null;
  }

  /** Returns true if field normalizedPhone is set (has been assigned a value) and false otherwise */
  public boolean isSetNormalizedPhone() {
    return this.normalizedPhone != null;
  }

  public void setNormalizedPhoneIsSet(boolean value) {
    if (!value) {
      this.normalizedPhone = null;
    }
  }

  public String getCountryCode() {
    return this.countryCode;
  }

  public void setCountryCode(String countryCode) {
    this.countryCode = countryCode;
  }

  public void unsetCountryCode() {
    this.countryCode = null;
  }

  /** Returns true if field countryCode is set (has been assigned a value) and false otherwise */
  public boolean isSetCountryCode() {
    return this.countryCode != null;
  }

  public void setCountryCodeIsSet(boolean value) {
    if (!value) {
      this.countryCode = null;
    }
  }

  public String getNationalSignificantNumber() {
    return this.nationalSignificantNumber;
  }

  public void setNationalSignificantNumber(String nationalSignificantNumber) {
    this.nationalSignificantNumber = nationalSignificantNumber;
  }

  public void unsetNationalSignificantNumber() {
    this.nationalSignificantNumber = null;
  }

  /** Returns true if field nationalSignificantNumber is set (has been assigned a value) and false otherwise */
  public boolean isSetNationalSignificantNumber() {
    return this.nationalSignificantNumber != null;
  }

  public void setNationalSignificantNumberIsSet(boolean value) {
    if (!value) {
      this.nationalSignificantNumber = null;
    }
  }

  public int getAvailableVerificationMethodsSize() {
    return (this.availableVerificationMethods == null) ? 0 : this.availableVerificationMethods.size();
  }

  public Enumeration getAvailableVerificationMethodsEnumeration() {
    return (this.availableVerificationMethods == null) ? null : this.availableVerificationMethods.elements();
  }

  public void addToAvailableVerificationMethods(VerificationMethod elem) {
    if (this.availableVerificationMethods == null) {
      this.availableVerificationMethods = new Vector();
    }
    this.availableVerificationMethods.addElement(elem);
  }

  public Vector getAvailableVerificationMethods() {
    return this.availableVerificationMethods;
  }

  public void setAvailableVerificationMethods(Vector availableVerificationMethods) {
    this.availableVerificationMethods = availableVerificationMethods;
  }

  public void unsetAvailableVerificationMethods() {
    this.availableVerificationMethods = null;
  }

  /** Returns true if field availableVerificationMethods is set (has been assigned a value) and false otherwise */
  public boolean isSetAvailableVerificationMethods() {
    return this.availableVerificationMethods != null;
  }

  public void setAvailableVerificationMethodsIsSet(boolean value) {
    if (!value) {
      this.availableVerificationMethods = null;
    }
  }

  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof VerificationSessionData)
      return this.equals((VerificationSessionData)that);
    return false;
  }

  public boolean equals(VerificationSessionData that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_sessionId = true && this.isSetSessionId();
    boolean that_present_sessionId = true && that.isSetSessionId();
    if (this_present_sessionId || that_present_sessionId) {
      if (!(this_present_sessionId && that_present_sessionId))
        return false;
      if (!this.sessionId.equals(that.sessionId))
        return false;
    }

    boolean this_present_method = true && this.isSetMethod();
    boolean that_present_method = true && that.isSetMethod();
    if (this_present_method || that_present_method) {
      if (!(this_present_method && that_present_method))
        return false;
      if (!this.method.equals(that.method))
        return false;
    }

    boolean this_present_callback = true && this.isSetCallback();
    boolean that_present_callback = true && that.isSetCallback();
    if (this_present_callback || that_present_callback) {
      if (!(this_present_callback && that_present_callback))
        return false;
      if (!this.callback.equals(that.callback))
        return false;
    }

    boolean this_present_normalizedPhone = true && this.isSetNormalizedPhone();
    boolean that_present_normalizedPhone = true && that.isSetNormalizedPhone();
    if (this_present_normalizedPhone || that_present_normalizedPhone) {
      if (!(this_present_normalizedPhone && that_present_normalizedPhone))
        return false;
      if (!this.normalizedPhone.equals(that.normalizedPhone))
        return false;
    }

    boolean this_present_countryCode = true && this.isSetCountryCode();
    boolean that_present_countryCode = true && that.isSetCountryCode();
    if (this_present_countryCode || that_present_countryCode) {
      if (!(this_present_countryCode && that_present_countryCode))
        return false;
      if (!this.countryCode.equals(that.countryCode))
        return false;
    }

    boolean this_present_nationalSignificantNumber = true && this.isSetNationalSignificantNumber();
    boolean that_present_nationalSignificantNumber = true && that.isSetNationalSignificantNumber();
    if (this_present_nationalSignificantNumber || that_present_nationalSignificantNumber) {
      if (!(this_present_nationalSignificantNumber && that_present_nationalSignificantNumber))
        return false;
      if (!this.nationalSignificantNumber.equals(that.nationalSignificantNumber))
        return false;
    }

    boolean this_present_availableVerificationMethods = true && this.isSetAvailableVerificationMethods();
    boolean that_present_availableVerificationMethods = true && that.isSetAvailableVerificationMethods();
    if (this_present_availableVerificationMethods || that_present_availableVerificationMethods) {
      if (!(this_present_availableVerificationMethods && that_present_availableVerificationMethods))
        return false;
      if (!this.availableVerificationMethods.equals(that.availableVerificationMethods))
        return false;
    }

    return true;
  }

  public int hashCode() {
    return 0;
  }

  public int compareTo(Object otherObject) {
    if (!getClass().equals(otherObject.getClass())) {
      return getClass().getName().compareTo(otherObject.getClass().getName());
    }

    VerificationSessionData other = (VerificationSessionData)otherObject;    int lastComparison = 0;

    lastComparison = TBaseHelper.compareTo(isSetSessionId(), other.isSetSessionId());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetSessionId()) {
      lastComparison = TBaseHelper.compareTo(this.sessionId, other.sessionId);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetMethod(), other.isSetMethod());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetMethod()) {
      lastComparison = TBaseHelper.compareTo(this.method, other.method);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetCallback(), other.isSetCallback());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetCallback()) {
      lastComparison = TBaseHelper.compareTo(this.callback, other.callback);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetNormalizedPhone(), other.isSetNormalizedPhone());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetNormalizedPhone()) {
      lastComparison = TBaseHelper.compareTo(this.normalizedPhone, other.normalizedPhone);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetCountryCode(), other.isSetCountryCode());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetCountryCode()) {
      lastComparison = TBaseHelper.compareTo(this.countryCode, other.countryCode);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetNationalSignificantNumber(), other.isSetNationalSignificantNumber());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetNationalSignificantNumber()) {
      lastComparison = TBaseHelper.compareTo(this.nationalSignificantNumber, other.nationalSignificantNumber);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetAvailableVerificationMethods(), other.isSetAvailableVerificationMethods());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetAvailableVerificationMethods()) {
      lastComparison = TBaseHelper.compareTo(this.availableVerificationMethods, other.availableVerificationMethods);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField field;
    iprot.readStructBegin();
    while (true)
    {
      field = iprot.readFieldBegin();
      if (field.type == TType.STOP) { 
        break;
      }
      switch (field.id) {
        case 1: // SESSION_ID
          if (field.type == TType.STRING) {
            this.sessionId = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 2: // METHOD
          if (field.type == TType.I32) {
            this.method = VerificationMethod.findByValue(iprot.readI32());
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 3: // CALLBACK
          if (field.type == TType.STRING) {
            this.callback = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 4: // NORMALIZED_PHONE
          if (field.type == TType.STRING) {
            this.normalizedPhone = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 5: // COUNTRY_CODE
          if (field.type == TType.STRING) {
            this.countryCode = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 6: // NATIONAL_SIGNIFICANT_NUMBER
          if (field.type == TType.STRING) {
            this.nationalSignificantNumber = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 7: // AVAILABLE_VERIFICATION_METHODS
          if (field.type == TType.LIST) {
            {
              TList _list184 = iprot.readListBegin();
              this.availableVerificationMethods = new Vector(_list184.size);
              for (int _i185 = 0; _i185 < _list184.size; ++_i185)
              {
                VerificationMethod _elem186;
                _elem186 = VerificationMethod.findByValue(iprot.readI32());
                this.availableVerificationMethods.addElement(_elem186);
              }
              iprot.readListEnd();
            }
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, field.type);
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.sessionId != null) {
      oprot.writeFieldBegin(SESSION_ID_FIELD_DESC);
      oprot.writeString(this.sessionId);
      oprot.writeFieldEnd();
    }
    if (this.method != null) {
      oprot.writeFieldBegin(METHOD_FIELD_DESC);
      oprot.writeI32(this.method.getValue());
      oprot.writeFieldEnd();
    }
    if (this.callback != null) {
      oprot.writeFieldBegin(CALLBACK_FIELD_DESC);
      oprot.writeString(this.callback);
      oprot.writeFieldEnd();
    }
    if (this.normalizedPhone != null) {
      oprot.writeFieldBegin(NORMALIZED_PHONE_FIELD_DESC);
      oprot.writeString(this.normalizedPhone);
      oprot.writeFieldEnd();
    }
    if (this.countryCode != null) {
      oprot.writeFieldBegin(COUNTRY_CODE_FIELD_DESC);
      oprot.writeString(this.countryCode);
      oprot.writeFieldEnd();
    }
    if (this.nationalSignificantNumber != null) {
      oprot.writeFieldBegin(NATIONAL_SIGNIFICANT_NUMBER_FIELD_DESC);
      oprot.writeString(this.nationalSignificantNumber);
      oprot.writeFieldEnd();
    }
    if (this.availableVerificationMethods != null) {
      oprot.writeFieldBegin(AVAILABLE_VERIFICATION_METHODS_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.I32, this.availableVerificationMethods.size()));
        for (Enumeration _iter187_enum = this.availableVerificationMethods.elements(); _iter187_enum.hasMoreElements(); )         {
          VerificationMethod _iter187 = (VerificationMethod)_iter187_enum.nextElement();
          oprot.writeI32(_iter187.getValue());
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  public String toString() {
    StringBuffer sb = new StringBuffer("VerificationSessionData(");
    boolean first = true;

    sb.append("sessionId:");
    if (this.sessionId == null) {
      sb.append("null");
    } else {
      sb.append(this.sessionId);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("method:");
    if (this.method == null) {
      sb.append("null");
    } else {
      sb.append(this.method);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("callback:");
    if (this.callback == null) {
      sb.append("null");
    } else {
      sb.append(this.callback);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("normalizedPhone:");
    if (this.normalizedPhone == null) {
      sb.append("null");
    } else {
      sb.append(this.normalizedPhone);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("countryCode:");
    if (this.countryCode == null) {
      sb.append("null");
    } else {
      sb.append(this.countryCode);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("nationalSignificantNumber:");
    if (this.nationalSignificantNumber == null) {
      sb.append("null");
    } else {
      sb.append(this.nationalSignificantNumber);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("availableVerificationMethods:");
    if (this.availableVerificationMethods == null) {
      sb.append("null");
    } else {
      sb.append(this.availableVerificationMethods);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

