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

public class UniversalNotificationServiceException extends Exception implements TBase {
  private static final TStruct STRUCT_DESC = new TStruct("UniversalNotificationServiceException");

  private static final TField CODE_FIELD_DESC = new TField("code", TType.I32, (short)1);
  private static final TField REASON_FIELD_DESC = new TField("reason", TType.STRING, (short)2);
  private static final TField PARAMETER_MAP_FIELD_DESC = new TField("parameterMap", TType.MAP, (short)3);

  private UniversalNotificationServiceErrorCode code;
  private String reason;
  private Hashtable parameterMap;

  // isset id assignments

  public UniversalNotificationServiceException() {
  }

  public UniversalNotificationServiceException(
    UniversalNotificationServiceErrorCode code,
    String reason,
    Hashtable parameterMap)
  {
    this();
    this.code = code;
    this.reason = reason;
    this.parameterMap = parameterMap;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public UniversalNotificationServiceException(UniversalNotificationServiceException other) {
    if (other.isSetCode()) {
      this.code = other.code;
    }
    if (other.isSetReason()) {
      this.reason = other.reason;
    }
    if (other.isSetParameterMap()) {
      Hashtable __this__parameterMap = new Hashtable();
      for (Enumeration other_enum = other.parameterMap.keys(); other_enum.hasMoreElements(); ) {

        String other_element_key = (String)other_enum.nextElement();
        String other_element_value = (String)other.parameterMap.get(other_element_key);

        String __this__parameterMap_copy_key = other_element_key;

        String __this__parameterMap_copy_value = other_element_value;

        __this__parameterMap.put(__this__parameterMap_copy_key, __this__parameterMap_copy_value);
      }
      this.parameterMap = __this__parameterMap;
    }
  }

  public UniversalNotificationServiceException deepCopy() {
    return new UniversalNotificationServiceException(this);
  }

  public void clear() {
    this.code = null;
    this.reason = null;
    this.parameterMap = null;
  }

  /**
   * 
   * @see UniversalNotificationServiceErrorCode
   */
  public UniversalNotificationServiceErrorCode getCode() {
    return this.code;
  }

  /**
   * 
   * @see UniversalNotificationServiceErrorCode
   */
  public void setCode(UniversalNotificationServiceErrorCode code) {
    this.code = code;
  }

  public void unsetCode() {
    this.code = null;
  }

  /** Returns true if field code is set (has been assigned a value) and false otherwise */
  public boolean isSetCode() {
    return this.code != null;
  }

  public void setCodeIsSet(boolean value) {
    if (!value) {
      this.code = null;
    }
  }

  public String getReason() {
    return this.reason;
  }

  public void setReason(String reason) {
    this.reason = reason;
  }

  public void unsetReason() {
    this.reason = null;
  }

  /** Returns true if field reason is set (has been assigned a value) and false otherwise */
  public boolean isSetReason() {
    return this.reason != null;
  }

  public void setReasonIsSet(boolean value) {
    if (!value) {
      this.reason = null;
    }
  }

  public int getParameterMapSize() {
    return (this.parameterMap == null) ? 0 : this.parameterMap.size();
  }

  public void putToParameterMap(String key, String val) {
    if (this.parameterMap == null) {
      this.parameterMap = new Hashtable();
    }
    this.parameterMap.put(key, val);
  }

  public Hashtable getParameterMap() {
    return this.parameterMap;
  }

  public void setParameterMap(Hashtable parameterMap) {
    this.parameterMap = parameterMap;
  }

  public void unsetParameterMap() {
    this.parameterMap = null;
  }

  /** Returns true if field parameterMap is set (has been assigned a value) and false otherwise */
  public boolean isSetParameterMap() {
    return this.parameterMap != null;
  }

  public void setParameterMapIsSet(boolean value) {
    if (!value) {
      this.parameterMap = null;
    }
  }

  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof UniversalNotificationServiceException)
      return this.equals((UniversalNotificationServiceException)that);
    return false;
  }

  public boolean equals(UniversalNotificationServiceException that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_code = true && this.isSetCode();
    boolean that_present_code = true && that.isSetCode();
    if (this_present_code || that_present_code) {
      if (!(this_present_code && that_present_code))
        return false;
      if (!this.code.equals(that.code))
        return false;
    }

    boolean this_present_reason = true && this.isSetReason();
    boolean that_present_reason = true && that.isSetReason();
    if (this_present_reason || that_present_reason) {
      if (!(this_present_reason && that_present_reason))
        return false;
      if (!this.reason.equals(that.reason))
        return false;
    }

    boolean this_present_parameterMap = true && this.isSetParameterMap();
    boolean that_present_parameterMap = true && that.isSetParameterMap();
    if (this_present_parameterMap || that_present_parameterMap) {
      if (!(this_present_parameterMap && that_present_parameterMap))
        return false;
      if (!this.parameterMap.equals(that.parameterMap))
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

    UniversalNotificationServiceException other = (UniversalNotificationServiceException)otherObject;    int lastComparison = 0;

    lastComparison = TBaseHelper.compareTo(isSetCode(), other.isSetCode());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetCode()) {
      lastComparison = TBaseHelper.compareTo(this.code, other.code);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetReason(), other.isSetReason());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetReason()) {
      lastComparison = TBaseHelper.compareTo(this.reason, other.reason);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetParameterMap(), other.isSetParameterMap());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetParameterMap()) {
      lastComparison = TBaseHelper.compareTo(this.parameterMap, other.parameterMap);
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
        case 1: // CODE
          if (field.type == TType.I32) {
            this.code = UniversalNotificationServiceErrorCode.findByValue(iprot.readI32());
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 2: // REASON
          if (field.type == TType.STRING) {
            this.reason = iprot.readString();
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 3: // PARAMETER_MAP
          if (field.type == TType.MAP) {
            {
              TMap _map175 = iprot.readMapBegin();
              this.parameterMap = new Hashtable(2*_map175.size);
              for (int _i176 = 0; _i176 < _map175.size; ++_i176)
              {
                String _key177;
                String _val178;
                _key177 = iprot.readString();
                _val178 = iprot.readString();
                this.parameterMap.put(_key177, _val178);
              }
              iprot.readMapEnd();
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
    if (this.code != null) {
      oprot.writeFieldBegin(CODE_FIELD_DESC);
      oprot.writeI32(this.code.getValue());
      oprot.writeFieldEnd();
    }
    if (this.reason != null) {
      oprot.writeFieldBegin(REASON_FIELD_DESC);
      oprot.writeString(this.reason);
      oprot.writeFieldEnd();
    }
    if (this.parameterMap != null) {
      oprot.writeFieldBegin(PARAMETER_MAP_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, this.parameterMap.size()));
        for (Enumeration _iter179_enum = this.parameterMap.keys(); _iter179_enum.hasMoreElements(); )         {
          String _iter179 = (String)_iter179_enum.nextElement();
          oprot.writeString(_iter179);
          oprot.writeString(((String)this.parameterMap.get(_iter179)));
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  public String toString() {
    StringBuffer sb = new StringBuffer("UniversalNotificationServiceException(");
    boolean first = true;

    sb.append("code:");
    if (this.code == null) {
      sb.append("null");
    } else {
      sb.append(this.code);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("reason:");
    if (this.reason == null) {
      sb.append("null");
    } else {
      sb.append(this.reason);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("parameterMap:");
    if (this.parameterMap == null) {
      sb.append("null");
    } else {
      sb.append(this.parameterMap);
    }
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

