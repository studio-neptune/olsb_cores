/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Thrift;
using Thrift.Collections;
using System.Runtime.Serialization;
using Thrift.Protocol;
using Thrift.Transport;


#if !SILVERLIGHT
[Serializable]
#endif
public partial class ContactRegistration : TBase
{
  private Contact _contact;
  private string _luid;
  private ContactType _contactType;
  private string _contactKey;

  public Contact Contact
  {
    get
    {
      return _contact;
    }
    set
    {
      __isset.contact = true;
      this._contact = value;
    }
  }

  public string Luid
  {
    get
    {
      return _luid;
    }
    set
    {
      __isset.luid = true;
      this._luid = value;
    }
  }

  /// <summary>
  /// 
  /// <seealso cref="ContactType"/>
  /// </summary>
  public ContactType ContactType
  {
    get
    {
      return _contactType;
    }
    set
    {
      __isset.contactType = true;
      this._contactType = value;
    }
  }

  public string ContactKey
  {
    get
    {
      return _contactKey;
    }
    set
    {
      __isset.contactKey = true;
      this._contactKey = value;
    }
  }


  public Isset __isset;
  #if !SILVERLIGHT
  [Serializable]
  #endif
  public struct Isset {
    public bool contact;
    public bool luid;
    public bool contactType;
    public bool contactKey;
  }

  public ContactRegistration() {
  }

  public void Read (TProtocol iprot)
  {
    iprot.IncrementRecursionDepth();
    try
    {
      TField field;
      iprot.ReadStructBegin();
      while (true)
      {
        field = iprot.ReadFieldBegin();
        if (field.Type == TType.Stop) { 
          break;
        }
        switch (field.ID)
        {
          case 1:
            if (field.Type == TType.Struct) {
              Contact = new Contact();
              Contact.Read(iprot);
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 10:
            if (field.Type == TType.String) {
              Luid = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 11:
            if (field.Type == TType.I32) {
              ContactType = (ContactType)iprot.ReadI32();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 12:
            if (field.Type == TType.String) {
              ContactKey = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          default: 
            TProtocolUtil.Skip(iprot, field.Type);
            break;
        }
        iprot.ReadFieldEnd();
      }
      iprot.ReadStructEnd();
    }
    finally
    {
      iprot.DecrementRecursionDepth();
    }
  }

  public void Write(TProtocol oprot) {
    oprot.IncrementRecursionDepth();
    try
    {
      TStruct struc = new TStruct("ContactRegistration");
      oprot.WriteStructBegin(struc);
      TField field = new TField();
      if (Contact != null && __isset.contact) {
        field.Name = "contact";
        field.Type = TType.Struct;
        field.ID = 1;
        oprot.WriteFieldBegin(field);
        Contact.Write(oprot);
        oprot.WriteFieldEnd();
      }
      if (Luid != null && __isset.luid) {
        field.Name = "luid";
        field.Type = TType.String;
        field.ID = 10;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(Luid);
        oprot.WriteFieldEnd();
      }
      if (__isset.contactType) {
        field.Name = "contactType";
        field.Type = TType.I32;
        field.ID = 11;
        oprot.WriteFieldBegin(field);
        oprot.WriteI32((int)ContactType);
        oprot.WriteFieldEnd();
      }
      if (ContactKey != null && __isset.contactKey) {
        field.Name = "contactKey";
        field.Type = TType.String;
        field.ID = 12;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(ContactKey);
        oprot.WriteFieldEnd();
      }
      oprot.WriteFieldStop();
      oprot.WriteStructEnd();
    }
    finally
    {
      oprot.DecrementRecursionDepth();
    }
  }

  public override string ToString() {
    StringBuilder __sb = new StringBuilder("ContactRegistration(");
    bool __first = true;
    if (Contact != null && __isset.contact) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Contact: ");
      __sb.Append(Contact== null ? "<null>" : Contact.ToString());
    }
    if (Luid != null && __isset.luid) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Luid: ");
      __sb.Append(Luid);
    }
    if (__isset.contactType) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("ContactType: ");
      __sb.Append(ContactType);
    }
    if (ContactKey != null && __isset.contactKey) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("ContactKey: ");
      __sb.Append(ContactKey);
    }
    __sb.Append(")");
    return __sb.ToString();
  }

}

