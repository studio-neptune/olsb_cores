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

public class ChannelDomains implements TBase {
  private static final TStruct STRUCT_DESC = new TStruct("ChannelDomains");

  private static final TField CHANNEL_DOMAINS_FIELD_DESC = new TField("channelDomains", TType.LIST, (short)1);
  private static final TField REVISION_FIELD_DESC = new TField("revision", TType.I64, (short)2);

  private Vector channelDomains;
  private long revision;

  // isset id assignments
  private static final int __REVISION_ISSET_ID = 0;
  private boolean[] __isset_vector = new boolean[1];

  public ChannelDomains() {
  }

  public ChannelDomains(
    Vector channelDomains,
    long revision)
  {
    this();
    this.channelDomains = channelDomains;
    this.revision = revision;
    setRevisionIsSet(true);
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public ChannelDomains(ChannelDomains other) {
    System.arraycopy(other.__isset_vector, 0, __isset_vector, 0, other.__isset_vector.length);
    if (other.isSetChannelDomains()) {
      Vector __this__channelDomains = new Vector();
      for (Enumeration other_enum = other.channelDomains.elements(); other_enum.hasMoreElements(); ) {
        ChannelDomain other_element = (ChannelDomain)other_enum.nextElement();
        __this__channelDomains.addElement(new ChannelDomain(other_element));
      }
      this.channelDomains = __this__channelDomains;
    }
    this.revision = other.revision;
  }

  public ChannelDomains deepCopy() {
    return new ChannelDomains(this);
  }

  public void clear() {
    this.channelDomains = null;
    setRevisionIsSet(false);
    this.revision = 0;
  }

  public int getChannelDomainsSize() {
    return (this.channelDomains == null) ? 0 : this.channelDomains.size();
  }

  public Enumeration getChannelDomainsEnumeration() {
    return (this.channelDomains == null) ? null : this.channelDomains.elements();
  }

  public void addToChannelDomains(ChannelDomain elem) {
    if (this.channelDomains == null) {
      this.channelDomains = new Vector();
    }
    this.channelDomains.addElement(elem);
  }

  public Vector getChannelDomains() {
    return this.channelDomains;
  }

  public void setChannelDomains(Vector channelDomains) {
    this.channelDomains = channelDomains;
  }

  public void unsetChannelDomains() {
    this.channelDomains = null;
  }

  /** Returns true if field channelDomains is set (has been assigned a value) and false otherwise */
  public boolean isSetChannelDomains() {
    return this.channelDomains != null;
  }

  public void setChannelDomainsIsSet(boolean value) {
    if (!value) {
      this.channelDomains = null;
    }
  }

  public long getRevision() {
    return this.revision;
  }

  public void setRevision(long revision) {
    this.revision = revision;
    setRevisionIsSet(true);
  }

  public void unsetRevision() {
    __isset_vector[__REVISION_ISSET_ID] = false;
  }

  /** Returns true if field revision is set (has been assigned a value) and false otherwise */
  public boolean isSetRevision() {
    return __isset_vector[__REVISION_ISSET_ID];
  }

  public void setRevisionIsSet(boolean value) {
    __isset_vector[__REVISION_ISSET_ID] = value;
  }

  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof ChannelDomains)
      return this.equals((ChannelDomains)that);
    return false;
  }

  public boolean equals(ChannelDomains that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_channelDomains = true && this.isSetChannelDomains();
    boolean that_present_channelDomains = true && that.isSetChannelDomains();
    if (this_present_channelDomains || that_present_channelDomains) {
      if (!(this_present_channelDomains && that_present_channelDomains))
        return false;
      if (!this.channelDomains.equals(that.channelDomains))
        return false;
    }

    boolean this_present_revision = true;
    boolean that_present_revision = true;
    if (this_present_revision || that_present_revision) {
      if (!(this_present_revision && that_present_revision))
        return false;
      if (this.revision != that.revision)
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

    ChannelDomains other = (ChannelDomains)otherObject;    int lastComparison = 0;

    lastComparison = TBaseHelper.compareTo(isSetChannelDomains(), other.isSetChannelDomains());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetChannelDomains()) {
      lastComparison = TBaseHelper.compareTo(this.channelDomains, other.channelDomains);
      if (lastComparison != 0) {
        return lastComparison;
      }
    }
    lastComparison = TBaseHelper.compareTo(isSetRevision(), other.isSetRevision());
    if (lastComparison != 0) {
      return lastComparison;
    }
    if (isSetRevision()) {
      lastComparison = TBaseHelper.compareTo(this.revision, other.revision);
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
        case 1: // CHANNEL_DOMAINS
          if (field.type == TType.LIST) {
            {
              TList _list35 = iprot.readListBegin();
              this.channelDomains = new Vector(_list35.size);
              for (int _i36 = 0; _i36 < _list35.size; ++_i36)
              {
                ChannelDomain _elem37;
                _elem37 = new ChannelDomain();
                _elem37.read(iprot);
                this.channelDomains.addElement(_elem37);
              }
              iprot.readListEnd();
            }
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case 2: // REVISION
          if (field.type == TType.I64) {
            this.revision = iprot.readI64();
            setRevisionIsSet(true);
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
    if (this.channelDomains != null) {
      oprot.writeFieldBegin(CHANNEL_DOMAINS_FIELD_DESC);
      {
        oprot.writeListBegin(new TList(TType.STRUCT, this.channelDomains.size()));
        for (Enumeration _iter38_enum = this.channelDomains.elements(); _iter38_enum.hasMoreElements(); )         {
          ChannelDomain _iter38 = (ChannelDomain)_iter38_enum.nextElement();
          _iter38.write(oprot);
        }
        oprot.writeListEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldBegin(REVISION_FIELD_DESC);
    oprot.writeI64(this.revision);
    oprot.writeFieldEnd();
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  public String toString() {
    StringBuffer sb = new StringBuffer("ChannelDomains(");
    boolean first = true;

    sb.append("channelDomains:");
    if (this.channelDomains == null) {
      sb.append("null");
    } else {
      sb.append(this.channelDomains);
    }
    first = false;
    if (!first) sb.append(", ");
    sb.append("revision:");
    sb.append(this.revision);
    first = false;
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

