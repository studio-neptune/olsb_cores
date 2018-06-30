/**
 * Compiled for SuperSonic Line API Lite
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
public partial class Room : TBase
{
  private string _mid;
  private long _createdTime;
  private List<Contact> _contacts;
  private bool _notificationDisabled;

  public string Mid
  {
    get
    {
      return _mid;
    }
    set
    {
      __isset.mid = true;
      this._mid = value;
    }
  }

  public long CreatedTime
  {
    get
    {
      return _createdTime;
    }
    set
    {
      __isset.createdTime = true;
      this._createdTime = value;
    }
  }

  public List<Contact> Contacts
  {
    get
    {
      return _contacts;
    }
    set
    {
      __isset.contacts = true;
      this._contacts = value;
    }
  }

  public bool NotificationDisabled
  {
    get
    {
      return _notificationDisabled;
    }
    set
    {
      __isset.notificationDisabled = true;
      this._notificationDisabled = value;
    }
  }


  public Isset __isset;
  #if !SILVERLIGHT
  [Serializable]
  #endif
  public struct Isset {
    public bool mid;
    public bool createdTime;
    public bool contacts;
    public bool notificationDisabled;
  }

  public Room() {
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
            if (field.Type == TType.String) {
              Mid = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 2:
            if (field.Type == TType.I64) {
              CreatedTime = iprot.ReadI64();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 10:
            if (field.Type == TType.List) {
              {
                Contacts = new List<Contact>();
                TList _list21 = iprot.ReadListBegin();
                for( int _i22 = 0; _i22 < _list21.Count; ++_i22)
                {
                  Contact _elem23;
                  _elem23 = new Contact();
                  _elem23.Read(iprot);
                  Contacts.Add(_elem23);
                }
                iprot.ReadListEnd();
              }
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 31:
            if (field.Type == TType.Bool) {
              NotificationDisabled = iprot.ReadBool();
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
      TStruct struc = new TStruct("Room");
      oprot.WriteStructBegin(struc);
      TField field = new TField();
      if (Mid != null && __isset.mid) {
        field.Name = "mid";
        field.Type = TType.String;
        field.ID = 1;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(Mid);
        oprot.WriteFieldEnd();
      }
      if (__isset.createdTime) {
        field.Name = "createdTime";
        field.Type = TType.I64;
        field.ID = 2;
        oprot.WriteFieldBegin(field);
        oprot.WriteI64(CreatedTime);
        oprot.WriteFieldEnd();
      }
      if (Contacts != null && __isset.contacts) {
        field.Name = "contacts";
        field.Type = TType.List;
        field.ID = 10;
        oprot.WriteFieldBegin(field);
        {
          oprot.WriteListBegin(new TList(TType.Struct, Contacts.Count));
          foreach (Contact _iter24 in Contacts)
          {
            _iter24.Write(oprot);
          }
          oprot.WriteListEnd();
        }
        oprot.WriteFieldEnd();
      }
      if (__isset.notificationDisabled) {
        field.Name = "notificationDisabled";
        field.Type = TType.Bool;
        field.ID = 31;
        oprot.WriteFieldBegin(field);
        oprot.WriteBool(NotificationDisabled);
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
    StringBuilder __sb = new StringBuilder("Room(");
    bool __first = true;
    if (Mid != null && __isset.mid) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Mid: ");
      __sb.Append(Mid);
    }
    if (__isset.createdTime) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("CreatedTime: ");
      __sb.Append(CreatedTime);
    }
    if (Contacts != null && __isset.contacts) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Contacts: ");
      __sb.Append(Contacts);
    }
    if (__isset.notificationDisabled) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("NotificationDisabled: ");
      __sb.Append(NotificationDisabled);
    }
    __sb.Append(")");
    return __sb.ToString();
  }

}

