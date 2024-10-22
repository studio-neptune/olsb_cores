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
public partial class ChannelNotificationSetting : TBase
{
  private string _channelId;
  private string _name;
  private bool _notificationReceivable;
  private bool _messageReceivable;
  private bool _showDefault;

  public string ChannelId
  {
    get
    {
      return _channelId;
    }
    set
    {
      __isset.channelId = true;
      this._channelId = value;
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

  public bool NotificationReceivable
  {
    get
    {
      return _notificationReceivable;
    }
    set
    {
      __isset.notificationReceivable = true;
      this._notificationReceivable = value;
    }
  }

  public bool MessageReceivable
  {
    get
    {
      return _messageReceivable;
    }
    set
    {
      __isset.messageReceivable = true;
      this._messageReceivable = value;
    }
  }

  public bool ShowDefault
  {
    get
    {
      return _showDefault;
    }
    set
    {
      __isset.showDefault = true;
      this._showDefault = value;
    }
  }


  public Isset __isset;
  #if !SILVERLIGHT
  [Serializable]
  #endif
  public struct Isset {
    public bool channelId;
    public bool name;
    public bool notificationReceivable;
    public bool messageReceivable;
    public bool showDefault;
  }

  public ChannelNotificationSetting() {
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
              ChannelId = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 2:
            if (field.Type == TType.String) {
              Name = iprot.ReadString();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 3:
            if (field.Type == TType.Bool) {
              NotificationReceivable = iprot.ReadBool();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 4:
            if (field.Type == TType.Bool) {
              MessageReceivable = iprot.ReadBool();
            } else { 
              TProtocolUtil.Skip(iprot, field.Type);
            }
            break;
          case 5:
            if (field.Type == TType.Bool) {
              ShowDefault = iprot.ReadBool();
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
      TStruct struc = new TStruct("ChannelNotificationSetting");
      oprot.WriteStructBegin(struc);
      TField field = new TField();
      if (ChannelId != null && __isset.channelId) {
        field.Name = "channelId";
        field.Type = TType.String;
        field.ID = 1;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(ChannelId);
        oprot.WriteFieldEnd();
      }
      if (Name != null && __isset.name) {
        field.Name = "name";
        field.Type = TType.String;
        field.ID = 2;
        oprot.WriteFieldBegin(field);
        oprot.WriteString(Name);
        oprot.WriteFieldEnd();
      }
      if (__isset.notificationReceivable) {
        field.Name = "notificationReceivable";
        field.Type = TType.Bool;
        field.ID = 3;
        oprot.WriteFieldBegin(field);
        oprot.WriteBool(NotificationReceivable);
        oprot.WriteFieldEnd();
      }
      if (__isset.messageReceivable) {
        field.Name = "messageReceivable";
        field.Type = TType.Bool;
        field.ID = 4;
        oprot.WriteFieldBegin(field);
        oprot.WriteBool(MessageReceivable);
        oprot.WriteFieldEnd();
      }
      if (__isset.showDefault) {
        field.Name = "showDefault";
        field.Type = TType.Bool;
        field.ID = 5;
        oprot.WriteFieldBegin(field);
        oprot.WriteBool(ShowDefault);
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
    StringBuilder __sb = new StringBuilder("ChannelNotificationSetting(");
    bool __first = true;
    if (ChannelId != null && __isset.channelId) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("ChannelId: ");
      __sb.Append(ChannelId);
    }
    if (Name != null && __isset.name) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("Name: ");
      __sb.Append(Name);
    }
    if (__isset.notificationReceivable) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("NotificationReceivable: ");
      __sb.Append(NotificationReceivable);
    }
    if (__isset.messageReceivable) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("MessageReceivable: ");
      __sb.Append(MessageReceivable);
    }
    if (__isset.showDefault) {
      if(!__first) { __sb.Append(", "); }
      __first = false;
      __sb.Append("ShowDefault: ");
      __sb.Append(ShowDefault);
    }
    __sb.Append(")");
    return __sb.ToString();
  }

}

