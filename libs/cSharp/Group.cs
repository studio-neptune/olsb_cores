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
public partial class @Group : TBase
{
  private string _id;
  private long _createdTime;
  private string _name;
  private string _pictureStatus;
  private bool _preventedJoinByTicket;
  private GroupPreference _groupPreference;
  private List<Contact> _members;
  private Contact _creator;
  private List<Contact> _invitee;
  private bool _notificationDisabled;

  public string Id
  {
    get
    {
      return _id;
    }
    set
    {
      __isset.id = true;
      this._id = value;
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

  public string Name
  {
    get
    {
      return _name;
    }
    set
    {
      __isset.name = true;
      this._name = value;
    }
  }

  public string PictureStatus
  {
    get
    {
      return _pictureStatus;
    }
    set
    {
      __isset.pictureStatus = true;
      this._pictureStatus = value;
    }
  }

  public bool PreventedJoinByTicket
  {
    get
    {
      return _preventedJoinByTicket;
    }
    set
    {
      __isset.preventedJoinByTicket = true;
      this._preventedJoinByTicket = value;
    }
  }

  public GroupPreference GroupPreference
  {
    get
    {
      return _groupPreference;
    }
    set
    {
      __isset.groupPreference = true;
      this._groupPreference = value;
    }
  }

  public List<Contact> Members
  {
    get
    {
      return _members;
    }
    set
    {
      __isset.members = true;
      this._members = value;
    }
  }

  public Contact Creator
  {
    get
    {
      return _creator;
    }
    set
    {
      __isset.creator = true;
      this._creator = value;
    }
  }

  public List<Contact> Invitee
  {
    get
    {
      return _invitee;
    }
    set
    {
      __isset.invitee = true;
      this._invitee = value;
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
    public bool id;
    public bool createdTime;
    public bool name;
    public bool pictureStatus;
    public bool preventedJoinByTicket;
    public bool groupPreference;
    public bool members;
    public bool creator;
    public bool invitee;
    public bool notificationDisabled;
  }

  public @Group() {
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
              Id = iprot.ReadString();
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
            if (field.Type == TType.String) {
              Name = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 11:
            if (field.Type == TType.String) {
              PictureStatus = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 12:
            if (field.Type == TType.Bool) {
              PreventedJoinByTicket = iprot.ReadBool();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 13:
            if (field.Type == TType.Struct) {
              GroupPreference = new GroupPreference();
              GroupPreference.Read(iprot);
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 20:
            if (field.Type == TType.List) {
              {
                Members = new List<Contact>();
                TList _list0 = iprot.ReadListBegin();
                for( int _i1 = 0; _i1 < _list0.Count; ++_i1)
                {
                  Contact _elem2;
                  _elem2 = new Contact();
                  _elem2.Read(iprot);
                  Members.Add(_elem2);
                }
                iprot.ReadListEnd();
              }
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 21:
            if (field.Type == TType.Struct) {
              Creator = new Contact();
              Creator.Read(iprot);
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 22:
            if (field.Type == TType.List) {
              {
                Invitee = new List<Contact>();
                TList _list3 = iprot.ReadListBegin();
                for( int _i4 = 0; _i4 < _list3.Count; ++_i4)
                {
                  Contact _elem5;
                  _elem5 = new Contact();
                  _elem5.Read(iprot);
                  Invitee.Add(_elem5);
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
      TStruct struc = new TStruct("Group");
      oprot.WriteStructBegin(struc);
      TField field = new TField();
      if (Id != null && __isset.id) {
        field.Name = "id";
        field.Type = TType.String;
        field.ID = 1;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(Id);
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
      if (Name != null && __isset.name) {
        field.Name = "name";
        field.Type = TType.String;
        field.ID = 10;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(Name);
        oprot.WriteFieldEnd();
      }
      if (PictureStatus != null && __isset.pictureStatus) {
        field.Name = "pictureStatus";
        field.Type = TType.String;
        field.ID = 11;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(PictureStatus);
        oprot.WriteFieldEnd();
      }
      if (__isset.preventedJoinByTicket) {
        field.Name = "preventedJoinByTicket";
        field.Type = TType.Bool;
        field.ID = 12;
        oprot.WriteFieldBegin(field);
        oprot.WriteBool(PreventedJoinByTicket);
        oprot.WriteFieldEnd();
      }
      if (GroupPreference != null && __isset.groupPreference) {
        field.Name = "groupPreference";
        field.Type = TType.Struct;
        field.ID = 13;
        oprot.WriteFieldBegin(field);
        GroupPreference.Write(oprot);
        oprot.WriteFieldEnd();
      }
      if (Members != null && __isset.members) {
        field.Name = "members";
        field.Type = TType.List;
        field.ID = 20;
        oprot.WriteFieldBegin(field);
        {
          oprot.WriteListBegin(new TList(TType.Struct, Members.Count));
          foreach (Contact _iter6 in Members)
          {
            _iter6.Write(oprot);
          }
          oprot.WriteListEnd();
        }
        oprot.WriteFieldEnd();
      }
      if (Creator != null && __isset.creator) {
        field.Name = "creator";
        field.Type = TType.Struct;
        field.ID = 21;
        oprot.WriteFieldBegin(field);
        Creator.Write(oprot);
        oprot.WriteFieldEnd();
      }
      if (Invitee != null && __isset.invitee) {
        field.Name = "invitee";
        field.Type = TType.List;
        field.ID = 22;
        oprot.WriteFieldBegin(field);
        {
          oprot.WriteListBegin(new TList(TType.Struct, Invitee.Count));
          foreach (Contact _iter7 in Invitee)
          {
            _iter7.Write(oprot);
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
    StringBuilder __sb = new StringBuilder("Group(");
    bool __first = true;
    if (Id != null && __isset.id) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Id: ");
      __sb.Append(Id);
    }
    if (__isset.createdTime) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("CreatedTime: ");
      __sb.Append(CreatedTime);
    }
    if (Name != null && __isset.name) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Name: ");
      __sb.Append(Name);
    }
    if (PictureStatus != null && __isset.pictureStatus) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("PictureStatus: ");
      __sb.Append(PictureStatus);
    }
    if (__isset.preventedJoinByTicket) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("PreventedJoinByTicket: ");
      __sb.Append(PreventedJoinByTicket);
    }
    if (GroupPreference != null && __isset.groupPreference) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("GroupPreference: ");
      __sb.Append(GroupPreference== null ? "<null>" : GroupPreference.ToString());
    }
    if (Members != null && __isset.members) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Members: ");
      __sb.Append(Members);
    }
    if (Creator != null && __isset.creator) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Creator: ");
      __sb.Append(Creator== null ? "<null>" : Creator.ToString());
    }
    if (Invitee != null && __isset.invitee) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Invitee: ");
      __sb.Append(Invitee);
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
