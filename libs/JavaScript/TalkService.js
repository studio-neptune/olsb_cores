//
// Compiled for SuperSonic Line API Lite
//
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
//


//HELPER FUNCTIONS AND STRUCTURES

TalkService_acceptGroupInvitation_args = function(args) {
  this.reqSeq = null;
  this.groupId = null;
  if (args) {
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.groupId !== undefined && args.groupId !== null) {
      this.groupId = args.groupId;
    }
  }
};
TalkService_acceptGroupInvitation_args.prototype = {};
TalkService_acceptGroupInvitation_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.groupId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_acceptGroupInvitation_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_acceptGroupInvitation_args');
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 1);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.groupId !== null && this.groupId !== undefined) {
    output.writeFieldBegin('groupId', Thrift.Type.STRING, 2);
    output.writeString(this.groupId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_acceptGroupInvitation_result = function(args) {
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_acceptGroupInvitation_result.prototype = {};
TalkService_acceptGroupInvitation_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_acceptGroupInvitation_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_acceptGroupInvitation_result');
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createGroup_args = function(args) {
  this.seq = null;
  this.name = null;
  this.contactIds = null;
  if (args) {
    if (args.seq !== undefined && args.seq !== null) {
      this.seq = args.seq;
    }
    if (args.name !== undefined && args.name !== null) {
      this.name = args.name;
    }
    if (args.contactIds !== undefined && args.contactIds !== null) {
      this.contactIds = Thrift.copyList(args.contactIds, [null]);
    }
  }
};
TalkService_createGroup_args.prototype = {};
TalkService_createGroup_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.seq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.name = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.LIST) {
        var _size60 = 0;
        var _rtmp364;
        this.contactIds = [];
        var _etype63 = 0;
        _rtmp364 = input.readListBegin();
        _etype63 = _rtmp364.etype;
        _size60 = _rtmp364.size;
        for (var _i65 = 0; _i65 < _size60; ++_i65)
        {
          var elem66 = null;
          elem66 = input.readString().value;
          this.contactIds.push(elem66);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createGroup_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createGroup_args');
  if (this.seq !== null && this.seq !== undefined) {
    output.writeFieldBegin('seq', Thrift.Type.I32, 1);
    output.writeI32(this.seq);
    output.writeFieldEnd();
  }
  if (this.name !== null && this.name !== undefined) {
    output.writeFieldBegin('name', Thrift.Type.STRING, 2);
    output.writeString(this.name);
    output.writeFieldEnd();
  }
  if (this.contactIds !== null && this.contactIds !== undefined) {
    output.writeFieldBegin('contactIds', Thrift.Type.LIST, 3);
    output.writeListBegin(Thrift.Type.STRING, this.contactIds.length);
    for (var iter67 in this.contactIds)
    {
      if (this.contactIds.hasOwnProperty(iter67))
      {
        iter67 = this.contactIds[iter67];
        output.writeString(iter67);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createGroup_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Group(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_createGroup_result.prototype = {};
TalkService_createGroup_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Group();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createGroup_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createGroup_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createQrcodeBase64Image_args = function(args) {
  this.url = null;
  this.characterSet = null;
  this.imageSize = null;
  this.x = null;
  this.y = null;
  this.width = null;
  this.height = null;
  if (args) {
    if (args.url !== undefined && args.url !== null) {
      this.url = args.url;
    }
    if (args.characterSet !== undefined && args.characterSet !== null) {
      this.characterSet = args.characterSet;
    }
    if (args.imageSize !== undefined && args.imageSize !== null) {
      this.imageSize = args.imageSize;
    }
    if (args.x !== undefined && args.x !== null) {
      this.x = args.x;
    }
    if (args.y !== undefined && args.y !== null) {
      this.y = args.y;
    }
    if (args.width !== undefined && args.width !== null) {
      this.width = args.width;
    }
    if (args.height !== undefined && args.height !== null) {
      this.height = args.height;
    }
  }
};
TalkService_createQrcodeBase64Image_args.prototype = {};
TalkService_createQrcodeBase64Image_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.url = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.STRING) {
        this.characterSet = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.I32) {
        this.imageSize = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 5:
      if (ftype == Thrift.Type.I32) {
        this.x = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 6:
      if (ftype == Thrift.Type.I32) {
        this.y = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 7:
      if (ftype == Thrift.Type.I32) {
        this.width = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 8:
      if (ftype == Thrift.Type.I32) {
        this.height = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createQrcodeBase64Image_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createQrcodeBase64Image_args');
  if (this.url !== null && this.url !== undefined) {
    output.writeFieldBegin('url', Thrift.Type.STRING, 2);
    output.writeString(this.url);
    output.writeFieldEnd();
  }
  if (this.characterSet !== null && this.characterSet !== undefined) {
    output.writeFieldBegin('characterSet', Thrift.Type.STRING, 3);
    output.writeString(this.characterSet);
    output.writeFieldEnd();
  }
  if (this.imageSize !== null && this.imageSize !== undefined) {
    output.writeFieldBegin('imageSize', Thrift.Type.I32, 4);
    output.writeI32(this.imageSize);
    output.writeFieldEnd();
  }
  if (this.x !== null && this.x !== undefined) {
    output.writeFieldBegin('x', Thrift.Type.I32, 5);
    output.writeI32(this.x);
    output.writeFieldEnd();
  }
  if (this.y !== null && this.y !== undefined) {
    output.writeFieldBegin('y', Thrift.Type.I32, 6);
    output.writeI32(this.y);
    output.writeFieldEnd();
  }
  if (this.width !== null && this.width !== undefined) {
    output.writeFieldBegin('width', Thrift.Type.I32, 7);
    output.writeI32(this.width);
    output.writeFieldEnd();
  }
  if (this.height !== null && this.height !== undefined) {
    output.writeFieldBegin('height', Thrift.Type.I32, 8);
    output.writeI32(this.height);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createQrcodeBase64Image_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = args.success;
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_createQrcodeBase64Image_result.prototype = {};
TalkService_createQrcodeBase64Image_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRING) {
        this.success = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createQrcodeBase64Image_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createQrcodeBase64Image_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRING, 0);
    output.writeString(this.success);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createRoom_args = function(args) {
  this.reqSeq = null;
  this.contactIds = null;
  if (args) {
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.contactIds !== undefined && args.contactIds !== null) {
      this.contactIds = Thrift.copyList(args.contactIds, [null]);
    }
  }
};
TalkService_createRoom_args.prototype = {};
TalkService_createRoom_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.LIST) {
        var _size68 = 0;
        var _rtmp372;
        this.contactIds = [];
        var _etype71 = 0;
        _rtmp372 = input.readListBegin();
        _etype71 = _rtmp372.etype;
        _size68 = _rtmp372.size;
        for (var _i73 = 0; _i73 < _size68; ++_i73)
        {
          var elem74 = null;
          elem74 = input.readString().value;
          this.contactIds.push(elem74);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createRoom_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createRoom_args');
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 1);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.contactIds !== null && this.contactIds !== undefined) {
    output.writeFieldBegin('contactIds', Thrift.Type.LIST, 2);
    output.writeListBegin(Thrift.Type.STRING, this.contactIds.length);
    for (var iter75 in this.contactIds)
    {
      if (this.contactIds.hasOwnProperty(iter75))
      {
        iter75 = this.contactIds[iter75];
        output.writeString(iter75);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createRoom_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Room(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_createRoom_result.prototype = {};
TalkService_createRoom_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Room();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createRoom_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createRoom_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createSession_args = function(args) {
};
TalkService_createSession_args.prototype = {};
TalkService_createSession_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createSession_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createSession_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_createSession_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = args.success;
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_createSession_result.prototype = {};
TalkService_createSession_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRING) {
        this.success = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_createSession_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_createSession_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRING, 0);
    output.writeString(this.success);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_fetchOperations_args = function(args) {
  this.localRev = null;
  this.count = null;
  if (args) {
    if (args.localRev !== undefined && args.localRev !== null) {
      this.localRev = args.localRev;
    }
    if (args.count !== undefined && args.count !== null) {
      this.count = args.count;
    }
  }
};
TalkService_fetchOperations_args.prototype = {};
TalkService_fetchOperations_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.I64) {
        this.localRev = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.count = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_fetchOperations_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_fetchOperations_args');
  if (this.localRev !== null && this.localRev !== undefined) {
    output.writeFieldBegin('localRev', Thrift.Type.I64, 2);
    output.writeI64(this.localRev);
    output.writeFieldEnd();
  }
  if (this.count !== null && this.count !== undefined) {
    output.writeFieldBegin('count', Thrift.Type.I32, 3);
    output.writeI32(this.count);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_fetchOperations_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [Operation]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_fetchOperations_result.prototype = {};
TalkService_fetchOperations_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size76 = 0;
        var _rtmp380;
        this.success = [];
        var _etype79 = 0;
        _rtmp380 = input.readListBegin();
        _etype79 = _rtmp380.etype;
        _size76 = _rtmp380.size;
        for (var _i81 = 0; _i81 < _size76; ++_i81)
        {
          var elem82 = null;
          elem82 = new Operation();
          elem82.read(input);
          this.success.push(elem82);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_fetchOperations_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_fetchOperations_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRUCT, this.success.length);
    for (var iter83 in this.success)
    {
      if (this.success.hasOwnProperty(iter83))
      {
        iter83 = this.success[iter83];
        iter83.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getProfile_args = function(args) {
};
TalkService_getProfile_args.prototype = {};
TalkService_getProfile_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getProfile_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getProfile_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getProfile_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Profile(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getProfile_result.prototype = {};
TalkService_getProfile_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Profile();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getProfile_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getProfile_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByEmail_args = function(args) {
  this.reqSeq = null;
  this.emails = null;
  if (args) {
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.emails !== undefined && args.emails !== null) {
      this.emails = Thrift.copyList(args.emails, [null]);
    }
  }
};
TalkService_findAndAddContactsByEmail_args.prototype = {};
TalkService_findAndAddContactsByEmail_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.SET) {
        var _size84 = 0;
        var _rtmp388;
        this.emails = [];
        var _etype87 = 0;
        _rtmp388 = input.readSetBegin();
        _etype87 = _rtmp388.etype;
        _size84 = _rtmp388.size;
        for (var _i89 = 0; _i89 < _size84; ++_i89)
        {
          var elem90 = null;
          elem90 = input.readString().value;
          this.emails.push(elem90);
        }
        input.readSetEnd();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByEmail_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByEmail_args');
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 1);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.emails !== null && this.emails !== undefined) {
    output.writeFieldBegin('emails', Thrift.Type.SET, 2);
    output.writeSetBegin(Thrift.Type.STRING, this.emails.length);
    for (var iter91 in this.emails)
    {
      if (this.emails.hasOwnProperty(iter91))
      {
        iter91 = this.emails[iter91];
        output.writeString(iter91);
      }
    }
    output.writeSetEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByEmail_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyMap(args.success, [Contact]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findAndAddContactsByEmail_result.prototype = {};
TalkService_findAndAddContactsByEmail_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.MAP) {
        var _size92 = 0;
        var _rtmp396;
        this.success = {};
        var _ktype93 = 0;
        var _vtype94 = 0;
        _rtmp396 = input.readMapBegin();
        _ktype93 = _rtmp396.ktype;
        _vtype94 = _rtmp396.vtype;
        _size92 = _rtmp396.size;
        for (var _i97 = 0; _i97 < _size92; ++_i97)
        {
          if (_i97 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key98 = null;
          var val99 = null;
          key98 = input.readString().value;
          val99 = new Contact();
          val99.read(input);
          this.success[key98] = val99;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByEmail_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByEmail_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.MAP, 0);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRUCT, Thrift.objectLength(this.success));
    for (var kiter100 in this.success)
    {
      if (this.success.hasOwnProperty(kiter100))
      {
        var viter101 = this.success[kiter100];
        output.writeString(kiter100);
        viter101.write(output);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByMid_args = function(args) {
  this.reqSeq = null;
  this.mid = null;
  if (args) {
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.mid !== undefined && args.mid !== null) {
      this.mid = args.mid;
    }
  }
};
TalkService_findAndAddContactsByMid_args.prototype = {};
TalkService_findAndAddContactsByMid_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.mid = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByMid_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByMid_args');
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 1);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.mid !== null && this.mid !== undefined) {
    output.writeFieldBegin('mid', Thrift.Type.STRING, 2);
    output.writeString(this.mid);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByMid_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyMap(args.success, [Contact]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findAndAddContactsByMid_result.prototype = {};
TalkService_findAndAddContactsByMid_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.MAP) {
        var _size102 = 0;
        var _rtmp3106;
        this.success = {};
        var _ktype103 = 0;
        var _vtype104 = 0;
        _rtmp3106 = input.readMapBegin();
        _ktype103 = _rtmp3106.ktype;
        _vtype104 = _rtmp3106.vtype;
        _size102 = _rtmp3106.size;
        for (var _i107 = 0; _i107 < _size102; ++_i107)
        {
          if (_i107 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key108 = null;
          var val109 = null;
          key108 = input.readString().value;
          val109 = new Contact();
          val109.read(input);
          this.success[key108] = val109;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByMid_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByMid_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.MAP, 0);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRUCT, Thrift.objectLength(this.success));
    for (var kiter110 in this.success)
    {
      if (this.success.hasOwnProperty(kiter110))
      {
        var viter111 = this.success[kiter110];
        output.writeString(kiter110);
        viter111.write(output);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByPhone_args = function(args) {
  this.reqSeq = null;
  this.phones = null;
  if (args) {
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.phones !== undefined && args.phones !== null) {
      this.phones = Thrift.copyList(args.phones, [null]);
    }
  }
};
TalkService_findAndAddContactsByPhone_args.prototype = {};
TalkService_findAndAddContactsByPhone_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.SET) {
        var _size112 = 0;
        var _rtmp3116;
        this.phones = [];
        var _etype115 = 0;
        _rtmp3116 = input.readSetBegin();
        _etype115 = _rtmp3116.etype;
        _size112 = _rtmp3116.size;
        for (var _i117 = 0; _i117 < _size112; ++_i117)
        {
          var elem118 = null;
          elem118 = input.readString().value;
          this.phones.push(elem118);
        }
        input.readSetEnd();
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByPhone_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByPhone_args');
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 1);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.phones !== null && this.phones !== undefined) {
    output.writeFieldBegin('phones', Thrift.Type.SET, 2);
    output.writeSetBegin(Thrift.Type.STRING, this.phones.length);
    for (var iter119 in this.phones)
    {
      if (this.phones.hasOwnProperty(iter119))
      {
        iter119 = this.phones[iter119];
        output.writeString(iter119);
      }
    }
    output.writeSetEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByPhone_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyMap(args.success, [Contact]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findAndAddContactsByPhone_result.prototype = {};
TalkService_findAndAddContactsByPhone_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.MAP) {
        var _size120 = 0;
        var _rtmp3124;
        this.success = {};
        var _ktype121 = 0;
        var _vtype122 = 0;
        _rtmp3124 = input.readMapBegin();
        _ktype121 = _rtmp3124.ktype;
        _vtype122 = _rtmp3124.vtype;
        _size120 = _rtmp3124.size;
        for (var _i125 = 0; _i125 < _size120; ++_i125)
        {
          if (_i125 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key126 = null;
          var val127 = null;
          key126 = input.readString().value;
          val127 = new Contact();
          val127.read(input);
          this.success[key126] = val127;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByPhone_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByPhone_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.MAP, 0);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRUCT, Thrift.objectLength(this.success));
    for (var kiter128 in this.success)
    {
      if (this.success.hasOwnProperty(kiter128))
      {
        var viter129 = this.success[kiter128];
        output.writeString(kiter128);
        viter129.write(output);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByUserid_args = function(args) {
  this.reqSeq = null;
  this.userid = null;
  if (args) {
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.userid !== undefined && args.userid !== null) {
      this.userid = args.userid;
    }
  }
};
TalkService_findAndAddContactsByUserid_args.prototype = {};
TalkService_findAndAddContactsByUserid_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.userid = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByUserid_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByUserid_args');
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 1);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.userid !== null && this.userid !== undefined) {
    output.writeFieldBegin('userid', Thrift.Type.STRING, 2);
    output.writeString(this.userid);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findAndAddContactsByUserid_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyMap(args.success, [Contact]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findAndAddContactsByUserid_result.prototype = {};
TalkService_findAndAddContactsByUserid_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.MAP) {
        var _size130 = 0;
        var _rtmp3134;
        this.success = {};
        var _ktype131 = 0;
        var _vtype132 = 0;
        _rtmp3134 = input.readMapBegin();
        _ktype131 = _rtmp3134.ktype;
        _vtype132 = _rtmp3134.vtype;
        _size130 = _rtmp3134.size;
        for (var _i135 = 0; _i135 < _size130; ++_i135)
        {
          if (_i135 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key136 = null;
          var val137 = null;
          key136 = input.readString().value;
          val137 = new Contact();
          val137.read(input);
          this.success[key136] = val137;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findAndAddContactsByUserid_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findAndAddContactsByUserid_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.MAP, 0);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRUCT, Thrift.objectLength(this.success));
    for (var kiter138 in this.success)
    {
      if (this.success.hasOwnProperty(kiter138))
      {
        var viter139 = this.success[kiter138];
        output.writeString(kiter138);
        viter139.write(output);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactByUserid_args = function(args) {
  this.userid = null;
  if (args) {
    if (args.userid !== undefined && args.userid !== null) {
      this.userid = args.userid;
    }
  }
};
TalkService_findContactByUserid_args.prototype = {};
TalkService_findContactByUserid_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.userid = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactByUserid_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactByUserid_args');
  if (this.userid !== null && this.userid !== undefined) {
    output.writeFieldBegin('userid', Thrift.Type.STRING, 2);
    output.writeString(this.userid);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactByUserid_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Contact(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findContactByUserid_result.prototype = {};
TalkService_findContactByUserid_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Contact();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactByUserid_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactByUserid_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactByUserTicket_args = function(args) {
  this.ticketId = null;
  if (args) {
    if (args.ticketId !== undefined && args.ticketId !== null) {
      this.ticketId = args.ticketId;
    }
  }
};
TalkService_findContactByUserTicket_args.prototype = {};
TalkService_findContactByUserTicket_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.ticketId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactByUserTicket_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactByUserTicket_args');
  if (this.ticketId !== null && this.ticketId !== undefined) {
    output.writeFieldBegin('ticketId', Thrift.Type.STRING, 2);
    output.writeString(this.ticketId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactByUserTicket_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Contact(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findContactByUserTicket_result.prototype = {};
TalkService_findContactByUserTicket_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Contact();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactByUserTicket_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactByUserTicket_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactsByEmail_args = function(args) {
  this.emails = null;
  if (args) {
    if (args.emails !== undefined && args.emails !== null) {
      this.emails = Thrift.copyList(args.emails, [null]);
    }
  }
};
TalkService_findContactsByEmail_args.prototype = {};
TalkService_findContactsByEmail_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.SET) {
        var _size140 = 0;
        var _rtmp3144;
        this.emails = [];
        var _etype143 = 0;
        _rtmp3144 = input.readSetBegin();
        _etype143 = _rtmp3144.etype;
        _size140 = _rtmp3144.size;
        for (var _i145 = 0; _i145 < _size140; ++_i145)
        {
          var elem146 = null;
          elem146 = input.readString().value;
          this.emails.push(elem146);
        }
        input.readSetEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactsByEmail_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactsByEmail_args');
  if (this.emails !== null && this.emails !== undefined) {
    output.writeFieldBegin('emails', Thrift.Type.SET, 2);
    output.writeSetBegin(Thrift.Type.STRING, this.emails.length);
    for (var iter147 in this.emails)
    {
      if (this.emails.hasOwnProperty(iter147))
      {
        iter147 = this.emails[iter147];
        output.writeString(iter147);
      }
    }
    output.writeSetEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactsByEmail_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyMap(args.success, [Contact]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findContactsByEmail_result.prototype = {};
TalkService_findContactsByEmail_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.MAP) {
        var _size148 = 0;
        var _rtmp3152;
        this.success = {};
        var _ktype149 = 0;
        var _vtype150 = 0;
        _rtmp3152 = input.readMapBegin();
        _ktype149 = _rtmp3152.ktype;
        _vtype150 = _rtmp3152.vtype;
        _size148 = _rtmp3152.size;
        for (var _i153 = 0; _i153 < _size148; ++_i153)
        {
          if (_i153 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key154 = null;
          var val155 = null;
          key154 = input.readString().value;
          val155 = new Contact();
          val155.read(input);
          this.success[key154] = val155;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactsByEmail_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactsByEmail_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.MAP, 0);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRUCT, Thrift.objectLength(this.success));
    for (var kiter156 in this.success)
    {
      if (this.success.hasOwnProperty(kiter156))
      {
        var viter157 = this.success[kiter156];
        output.writeString(kiter156);
        viter157.write(output);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactsByPhone_args = function(args) {
  this.phones = null;
  if (args) {
    if (args.phones !== undefined && args.phones !== null) {
      this.phones = Thrift.copyList(args.phones, [null]);
    }
  }
};
TalkService_findContactsByPhone_args.prototype = {};
TalkService_findContactsByPhone_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.SET) {
        var _size158 = 0;
        var _rtmp3162;
        this.phones = [];
        var _etype161 = 0;
        _rtmp3162 = input.readSetBegin();
        _etype161 = _rtmp3162.etype;
        _size158 = _rtmp3162.size;
        for (var _i163 = 0; _i163 < _size158; ++_i163)
        {
          var elem164 = null;
          elem164 = input.readString().value;
          this.phones.push(elem164);
        }
        input.readSetEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactsByPhone_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactsByPhone_args');
  if (this.phones !== null && this.phones !== undefined) {
    output.writeFieldBegin('phones', Thrift.Type.SET, 2);
    output.writeSetBegin(Thrift.Type.STRING, this.phones.length);
    for (var iter165 in this.phones)
    {
      if (this.phones.hasOwnProperty(iter165))
      {
        iter165 = this.phones[iter165];
        output.writeString(iter165);
      }
    }
    output.writeSetEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_findContactsByPhone_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyMap(args.success, [Contact]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_findContactsByPhone_result.prototype = {};
TalkService_findContactsByPhone_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.MAP) {
        var _size166 = 0;
        var _rtmp3170;
        this.success = {};
        var _ktype167 = 0;
        var _vtype168 = 0;
        _rtmp3170 = input.readMapBegin();
        _ktype167 = _rtmp3170.ktype;
        _vtype168 = _rtmp3170.vtype;
        _size166 = _rtmp3170.size;
        for (var _i171 = 0; _i171 < _size166; ++_i171)
        {
          if (_i171 > 0 ) {
            if (input.rstack.length > input.rpos[input.rpos.length -1] + 1) {
              input.rstack.pop();
            }
          }
          var key172 = null;
          var val173 = null;
          key172 = input.readString().value;
          val173 = new Contact();
          val173.read(input);
          this.success[key172] = val173;
        }
        input.readMapEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_findContactsByPhone_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_findContactsByPhone_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.MAP, 0);
    output.writeMapBegin(Thrift.Type.STRING, Thrift.Type.STRUCT, Thrift.objectLength(this.success));
    for (var kiter174 in this.success)
    {
      if (this.success.hasOwnProperty(kiter174))
      {
        var viter175 = this.success[kiter174];
        output.writeString(kiter174);
        viter175.write(output);
      }
    }
    output.writeMapEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_generateUserTicket_args = function(args) {
  this.expirationTime = null;
  this.maxUseCount = null;
  if (args) {
    if (args.expirationTime !== undefined && args.expirationTime !== null) {
      this.expirationTime = args.expirationTime;
    }
    if (args.maxUseCount !== undefined && args.maxUseCount !== null) {
      this.maxUseCount = args.maxUseCount;
    }
  }
};
TalkService_generateUserTicket_args.prototype = {};
TalkService_generateUserTicket_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 3:
      if (ftype == Thrift.Type.I64) {
        this.expirationTime = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 4:
      if (ftype == Thrift.Type.I32) {
        this.maxUseCount = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_generateUserTicket_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_generateUserTicket_args');
  if (this.expirationTime !== null && this.expirationTime !== undefined) {
    output.writeFieldBegin('expirationTime', Thrift.Type.I64, 3);
    output.writeI64(this.expirationTime);
    output.writeFieldEnd();
  }
  if (this.maxUseCount !== null && this.maxUseCount !== undefined) {
    output.writeFieldBegin('maxUseCount', Thrift.Type.I32, 4);
    output.writeI32(this.maxUseCount);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_generateUserTicket_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Ticket(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_generateUserTicket_result.prototype = {};
TalkService_generateUserTicket_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Ticket();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_generateUserTicket_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_generateUserTicket_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getAllContactIds_args = function(args) {
};
TalkService_getAllContactIds_args.prototype = {};
TalkService_getAllContactIds_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getAllContactIds_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getAllContactIds_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getAllContactIds_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getAllContactIds_result.prototype = {};
TalkService_getAllContactIds_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size176 = 0;
        var _rtmp3180;
        this.success = [];
        var _etype179 = 0;
        _rtmp3180 = input.readListBegin();
        _etype179 = _rtmp3180.etype;
        _size176 = _rtmp3180.size;
        for (var _i181 = 0; _i181 < _size176; ++_i181)
        {
          var elem182 = null;
          elem182 = input.readString().value;
          this.success.push(elem182);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getAllContactIds_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getAllContactIds_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter183 in this.success)
    {
      if (this.success.hasOwnProperty(iter183))
      {
        iter183 = this.success[iter183];
        output.writeString(iter183);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getBlockedContactIds_args = function(args) {
};
TalkService_getBlockedContactIds_args.prototype = {};
TalkService_getBlockedContactIds_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getBlockedContactIds_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getBlockedContactIds_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getBlockedContactIds_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getBlockedContactIds_result.prototype = {};
TalkService_getBlockedContactIds_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size184 = 0;
        var _rtmp3188;
        this.success = [];
        var _etype187 = 0;
        _rtmp3188 = input.readListBegin();
        _etype187 = _rtmp3188.etype;
        _size184 = _rtmp3188.size;
        for (var _i189 = 0; _i189 < _size184; ++_i189)
        {
          var elem190 = null;
          elem190 = input.readString().value;
          this.success.push(elem190);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getBlockedContactIds_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getBlockedContactIds_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter191 in this.success)
    {
      if (this.success.hasOwnProperty(iter191))
      {
        iter191 = this.success[iter191];
        output.writeString(iter191);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getBlockedContactIdsByRange_args = function(args) {
  this.start = null;
  this.count = null;
  if (args) {
    if (args.start !== undefined && args.start !== null) {
      this.start = args.start;
    }
    if (args.count !== undefined && args.count !== null) {
      this.count = args.count;
    }
  }
};
TalkService_getBlockedContactIdsByRange_args.prototype = {};
TalkService_getBlockedContactIdsByRange_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.start = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 3:
      if (ftype == Thrift.Type.I32) {
        this.count = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getBlockedContactIdsByRange_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getBlockedContactIdsByRange_args');
  if (this.start !== null && this.start !== undefined) {
    output.writeFieldBegin('start', Thrift.Type.I32, 2);
    output.writeI32(this.start);
    output.writeFieldEnd();
  }
  if (this.count !== null && this.count !== undefined) {
    output.writeFieldBegin('count', Thrift.Type.I32, 3);
    output.writeI32(this.count);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getBlockedContactIdsByRange_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getBlockedContactIdsByRange_result.prototype = {};
TalkService_getBlockedContactIdsByRange_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size192 = 0;
        var _rtmp3196;
        this.success = [];
        var _etype195 = 0;
        _rtmp3196 = input.readListBegin();
        _etype195 = _rtmp3196.etype;
        _size192 = _rtmp3196.size;
        for (var _i197 = 0; _i197 < _size192; ++_i197)
        {
          var elem198 = null;
          elem198 = input.readString().value;
          this.success.push(elem198);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getBlockedContactIdsByRange_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getBlockedContactIdsByRange_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter199 in this.success)
    {
      if (this.success.hasOwnProperty(iter199))
      {
        iter199 = this.success[iter199];
        output.writeString(iter199);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getBlockedRecommendationIds_args = function(args) {
};
TalkService_getBlockedRecommendationIds_args.prototype = {};
TalkService_getBlockedRecommendationIds_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getBlockedRecommendationIds_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getBlockedRecommendationIds_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getBlockedRecommendationIds_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getBlockedRecommendationIds_result.prototype = {};
TalkService_getBlockedRecommendationIds_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size200 = 0;
        var _rtmp3204;
        this.success = [];
        var _etype203 = 0;
        _rtmp3204 = input.readListBegin();
        _etype203 = _rtmp3204.etype;
        _size200 = _rtmp3204.size;
        for (var _i205 = 0; _i205 < _size200; ++_i205)
        {
          var elem206 = null;
          elem206 = input.readString().value;
          this.success.push(elem206);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getBlockedRecommendationIds_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getBlockedRecommendationIds_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter207 in this.success)
    {
      if (this.success.hasOwnProperty(iter207))
      {
        iter207 = this.success[iter207];
        output.writeString(iter207);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getContact_args = function(args) {
  this.id = null;
  if (args) {
    if (args.id !== undefined && args.id !== null) {
      this.id = args.id;
    }
  }
};
TalkService_getContact_args.prototype = {};
TalkService_getContact_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.id = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getContact_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getContact_args');
  if (this.id !== null && this.id !== undefined) {
    output.writeFieldBegin('id', Thrift.Type.STRING, 2);
    output.writeString(this.id);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getContact_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Contact(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getContact_result.prototype = {};
TalkService_getContact_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Contact();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getContact_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getContact_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getContacts_args = function(args) {
  this.ids = null;
  if (args) {
    if (args.ids !== undefined && args.ids !== null) {
      this.ids = Thrift.copyList(args.ids, [null]);
    }
  }
};
TalkService_getContacts_args.prototype = {};
TalkService_getContacts_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.LIST) {
        var _size208 = 0;
        var _rtmp3212;
        this.ids = [];
        var _etype211 = 0;
        _rtmp3212 = input.readListBegin();
        _etype211 = _rtmp3212.etype;
        _size208 = _rtmp3212.size;
        for (var _i213 = 0; _i213 < _size208; ++_i213)
        {
          var elem214 = null;
          elem214 = input.readString().value;
          this.ids.push(elem214);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getContacts_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getContacts_args');
  if (this.ids !== null && this.ids !== undefined) {
    output.writeFieldBegin('ids', Thrift.Type.LIST, 2);
    output.writeListBegin(Thrift.Type.STRING, this.ids.length);
    for (var iter215 in this.ids)
    {
      if (this.ids.hasOwnProperty(iter215))
      {
        iter215 = this.ids[iter215];
        output.writeString(iter215);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getContacts_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [Contact]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getContacts_result.prototype = {};
TalkService_getContacts_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size216 = 0;
        var _rtmp3220;
        this.success = [];
        var _etype219 = 0;
        _rtmp3220 = input.readListBegin();
        _etype219 = _rtmp3220.etype;
        _size216 = _rtmp3220.size;
        for (var _i221 = 0; _i221 < _size216; ++_i221)
        {
          var elem222 = null;
          elem222 = new Contact();
          elem222.read(input);
          this.success.push(elem222);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getContacts_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getContacts_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRUCT, this.success.length);
    for (var iter223 in this.success)
    {
      if (this.success.hasOwnProperty(iter223))
      {
        iter223 = this.success[iter223];
        iter223.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroup_args = function(args) {
  this.groupId = null;
  if (args) {
    if (args.groupId !== undefined && args.groupId !== null) {
      this.groupId = args.groupId;
    }
  }
};
TalkService_getGroup_args.prototype = {};
TalkService_getGroup_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.groupId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroup_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroup_args');
  if (this.groupId !== null && this.groupId !== undefined) {
    output.writeFieldBegin('groupId', Thrift.Type.STRING, 2);
    output.writeString(this.groupId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroup_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Group(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getGroup_result.prototype = {};
TalkService_getGroup_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Group();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroup_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroup_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroupIdsInvited_args = function(args) {
};
TalkService_getGroupIdsInvited_args.prototype = {};
TalkService_getGroupIdsInvited_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroupIdsInvited_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroupIdsInvited_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroupIdsInvited_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getGroupIdsInvited_result.prototype = {};
TalkService_getGroupIdsInvited_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size224 = 0;
        var _rtmp3228;
        this.success = [];
        var _etype227 = 0;
        _rtmp3228 = input.readListBegin();
        _etype227 = _rtmp3228.etype;
        _size224 = _rtmp3228.size;
        for (var _i229 = 0; _i229 < _size224; ++_i229)
        {
          var elem230 = null;
          elem230 = input.readString().value;
          this.success.push(elem230);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroupIdsInvited_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroupIdsInvited_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter231 in this.success)
    {
      if (this.success.hasOwnProperty(iter231))
      {
        iter231 = this.success[iter231];
        output.writeString(iter231);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroupIdsJoined_args = function(args) {
};
TalkService_getGroupIdsJoined_args.prototype = {};
TalkService_getGroupIdsJoined_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroupIdsJoined_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroupIdsJoined_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroupIdsJoined_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getGroupIdsJoined_result.prototype = {};
TalkService_getGroupIdsJoined_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size232 = 0;
        var _rtmp3236;
        this.success = [];
        var _etype235 = 0;
        _rtmp3236 = input.readListBegin();
        _etype235 = _rtmp3236.etype;
        _size232 = _rtmp3236.size;
        for (var _i237 = 0; _i237 < _size232; ++_i237)
        {
          var elem238 = null;
          elem238 = input.readString().value;
          this.success.push(elem238);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroupIdsJoined_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroupIdsJoined_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter239 in this.success)
    {
      if (this.success.hasOwnProperty(iter239))
      {
        iter239 = this.success[iter239];
        output.writeString(iter239);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroups_args = function(args) {
  this.groupIds = null;
  if (args) {
    if (args.groupIds !== undefined && args.groupIds !== null) {
      this.groupIds = Thrift.copyList(args.groupIds, [null]);
    }
  }
};
TalkService_getGroups_args.prototype = {};
TalkService_getGroups_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.LIST) {
        var _size240 = 0;
        var _rtmp3244;
        this.groupIds = [];
        var _etype243 = 0;
        _rtmp3244 = input.readListBegin();
        _etype243 = _rtmp3244.etype;
        _size240 = _rtmp3244.size;
        for (var _i245 = 0; _i245 < _size240; ++_i245)
        {
          var elem246 = null;
          elem246 = input.readString().value;
          this.groupIds.push(elem246);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroups_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroups_args');
  if (this.groupIds !== null && this.groupIds !== undefined) {
    output.writeFieldBegin('groupIds', Thrift.Type.LIST, 2);
    output.writeListBegin(Thrift.Type.STRING, this.groupIds.length);
    for (var iter247 in this.groupIds)
    {
      if (this.groupIds.hasOwnProperty(iter247))
      {
        iter247 = this.groupIds[iter247];
        output.writeString(iter247);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getGroups_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [Group]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getGroups_result.prototype = {};
TalkService_getGroups_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size248 = 0;
        var _rtmp3252;
        this.success = [];
        var _etype251 = 0;
        _rtmp3252 = input.readListBegin();
        _etype251 = _rtmp3252.etype;
        _size248 = _rtmp3252.size;
        for (var _i253 = 0; _i253 < _size248; ++_i253)
        {
          var elem254 = null;
          elem254 = new Group();
          elem254.read(input);
          this.success.push(elem254);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getGroups_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getGroups_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRUCT, this.success.length);
    for (var iter255 in this.success)
    {
      if (this.success.hasOwnProperty(iter255))
      {
        iter255 = this.success[iter255];
        iter255.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getFavoriteMids_args = function(args) {
};
TalkService_getFavoriteMids_args.prototype = {};
TalkService_getFavoriteMids_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getFavoriteMids_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getFavoriteMids_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getFavoriteMids_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getFavoriteMids_result.prototype = {};
TalkService_getFavoriteMids_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size256 = 0;
        var _rtmp3260;
        this.success = [];
        var _etype259 = 0;
        _rtmp3260 = input.readListBegin();
        _etype259 = _rtmp3260.etype;
        _size256 = _rtmp3260.size;
        for (var _i261 = 0; _i261 < _size256; ++_i261)
        {
          var elem262 = null;
          elem262 = input.readString().value;
          this.success.push(elem262);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getFavoriteMids_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getFavoriteMids_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter263 in this.success)
    {
      if (this.success.hasOwnProperty(iter263))
      {
        iter263 = this.success[iter263];
        output.writeString(iter263);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getHiddenContactMids_args = function(args) {
};
TalkService_getHiddenContactMids_args.prototype = {};
TalkService_getHiddenContactMids_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getHiddenContactMids_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getHiddenContactMids_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getHiddenContactMids_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [null]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getHiddenContactMids_result.prototype = {};
TalkService_getHiddenContactMids_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size264 = 0;
        var _rtmp3268;
        this.success = [];
        var _etype267 = 0;
        _rtmp3268 = input.readListBegin();
        _etype267 = _rtmp3268.etype;
        _size264 = _rtmp3268.size;
        for (var _i269 = 0; _i269 < _size264; ++_i269)
        {
          var elem270 = null;
          elem270 = input.readString().value;
          this.success.push(elem270);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getHiddenContactMids_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getHiddenContactMids_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRING, this.success.length);
    for (var iter271 in this.success)
    {
      if (this.success.hasOwnProperty(iter271))
      {
        iter271 = this.success[iter271];
        output.writeString(iter271);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getLastOpRevision_args = function(args) {
};
TalkService_getLastOpRevision_args.prototype = {};
TalkService_getLastOpRevision_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getLastOpRevision_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getLastOpRevision_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getLastOpRevision_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = args.success;
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getLastOpRevision_result.prototype = {};
TalkService_getLastOpRevision_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.I64) {
        this.success = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getLastOpRevision_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getLastOpRevision_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.I64, 0);
    output.writeI64(this.success);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getRoom_args = function(args) {
  this.roomId = null;
  if (args) {
    if (args.roomId !== undefined && args.roomId !== null) {
      this.roomId = args.roomId;
    }
  }
};
TalkService_getRoom_args.prototype = {};
TalkService_getRoom_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.roomId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getRoom_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getRoom_args');
  if (this.roomId !== null && this.roomId !== undefined) {
    output.writeFieldBegin('roomId', Thrift.Type.STRING, 2);
    output.writeString(this.roomId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getRoom_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Room(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getRoom_result.prototype = {};
TalkService_getRoom_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Room();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getRoom_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getRoom_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getRSAKeyInfo_args = function(args) {
  this.provider = null;
  if (args) {
    if (args.provider !== undefined && args.provider !== null) {
      this.provider = args.provider;
    }
  }
};
TalkService_getRSAKeyInfo_args.prototype = {};
TalkService_getRSAKeyInfo_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.I32) {
        this.provider = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getRSAKeyInfo_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getRSAKeyInfo_args');
  if (this.provider !== null && this.provider !== undefined) {
    output.writeFieldBegin('provider', Thrift.Type.I32, 2);
    output.writeI32(this.provider);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getRSAKeyInfo_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new RSAKey(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getRSAKeyInfo_result.prototype = {};
TalkService_getRSAKeyInfo_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new RSAKey();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getRSAKeyInfo_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getRSAKeyInfo_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getServerTime_args = function(args) {
};
TalkService_getServerTime_args.prototype = {};
TalkService_getServerTime_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getServerTime_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getServerTime_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getServerTime_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = args.success;
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getServerTime_result.prototype = {};
TalkService_getServerTime_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.I64) {
        this.success = input.readI64().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getServerTime_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getServerTime_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.I64, 0);
    output.writeI64(this.success);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getSessions_args = function(args) {
};
TalkService_getSessions_args.prototype = {};
TalkService_getSessions_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getSessions_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getSessions_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_getSessions_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = Thrift.copyList(args.success, [LoginSession]);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_getSessions_result.prototype = {};
TalkService_getSessions_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.LIST) {
        var _size272 = 0;
        var _rtmp3276;
        this.success = [];
        var _etype275 = 0;
        _rtmp3276 = input.readListBegin();
        _etype275 = _rtmp3276.etype;
        _size272 = _rtmp3276.size;
        for (var _i277 = 0; _i277 < _size272; ++_i277)
        {
          var elem278 = null;
          elem278 = new LoginSession();
          elem278.read(input);
          this.success.push(elem278);
        }
        input.readListEnd();
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_getSessions_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_getSessions_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.LIST, 0);
    output.writeListBegin(Thrift.Type.STRUCT, this.success.length);
    for (var iter279 in this.success)
    {
      if (this.success.hasOwnProperty(iter279))
      {
        iter279 = this.success[iter279];
        iter279.write(output);
      }
    }
    output.writeListEnd();
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_leaveGroup_args = function(args) {
  this.reqSeq = null;
  this.groupId = null;
  if (args) {
    if (args.reqSeq !== undefined && args.reqSeq !== null) {
      this.reqSeq = args.reqSeq;
    }
    if (args.groupId !== undefined && args.groupId !== null) {
      this.groupId = args.groupId;
    }
  }
};
TalkService_leaveGroup_args.prototype = {};
TalkService_leaveGroup_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.reqSeq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.groupId = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_leaveGroup_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_leaveGroup_args');
  if (this.reqSeq !== null && this.reqSeq !== undefined) {
    output.writeFieldBegin('reqSeq', Thrift.Type.I32, 1);
    output.writeI32(this.reqSeq);
    output.writeFieldEnd();
  }
  if (this.groupId !== null && this.groupId !== undefined) {
    output.writeFieldBegin('groupId', Thrift.Type.STRING, 2);
    output.writeString(this.groupId);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_leaveGroup_result = function(args) {
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_leaveGroup_result.prototype = {};
TalkService_leaveGroup_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_leaveGroup_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_leaveGroup_result');
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_loginZ_args = function(args) {
  this.LoginRequest = null;
  if (args) {
    if (args.LoginRequest !== undefined && args.LoginRequest !== null) {
      this.LoginRequest = new loginRequest(args.LoginRequest);
    }
  }
};
TalkService_loginZ_args.prototype = {};
TalkService_loginZ_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.LoginRequest = new loginRequest();
        this.LoginRequest.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_loginZ_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_loginZ_args');
  if (this.LoginRequest !== null && this.LoginRequest !== undefined) {
    output.writeFieldBegin('LoginRequest', Thrift.Type.STRUCT, 2);
    this.LoginRequest.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_loginZ_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new LoginResult(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_loginZ_result.prototype = {};
TalkService_loginZ_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new LoginResult();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_loginZ_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_loginZ_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_logout_args = function(args) {
};
TalkService_logout_args.prototype = {};
TalkService_logout_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    input.skip(ftype);
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_logout_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_logout_args');
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_logout_result = function(args) {
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_logout_result.prototype = {};
TalkService_logout_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_logout_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_logout_result');
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_logoutSession_args = function(args) {
  this.tokenKey = null;
  if (args) {
    if (args.tokenKey !== undefined && args.tokenKey !== null) {
      this.tokenKey = args.tokenKey;
    }
  }
};
TalkService_logoutSession_args.prototype = {};
TalkService_logoutSession_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 2:
      if (ftype == Thrift.Type.STRING) {
        this.tokenKey = input.readString().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_logoutSession_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_logoutSession_args');
  if (this.tokenKey !== null && this.tokenKey !== undefined) {
    output.writeFieldBegin('tokenKey', Thrift.Type.STRING, 2);
    output.writeString(this.tokenKey);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_logoutSession_result = function(args) {
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_logoutSession_result.prototype = {};
TalkService_logoutSession_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 0:
        input.skip(ftype);
        break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_logoutSession_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_logoutSession_result');
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_sendMessage_args = function(args) {
  this.seq = null;
  this.message = null;
  if (args) {
    if (args.seq !== undefined && args.seq !== null) {
      this.seq = args.seq;
    }
    if (args.message !== undefined && args.message !== null) {
      this.message = new Message(args.message);
    }
  }
};
TalkService_sendMessage_args.prototype = {};
TalkService_sendMessage_args.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
      if (ftype == Thrift.Type.I32) {
        this.seq = input.readI32().value;
      } else {
        input.skip(ftype);
      }
      break;
      case 2:
      if (ftype == Thrift.Type.STRUCT) {
        this.message = new Message();
        this.message.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_sendMessage_args.prototype.write = function(output) {
  output.writeStructBegin('TalkService_sendMessage_args');
  if (this.seq !== null && this.seq !== undefined) {
    output.writeFieldBegin('seq', Thrift.Type.I32, 1);
    output.writeI32(this.seq);
    output.writeFieldEnd();
  }
  if (this.message !== null && this.message !== undefined) {
    output.writeFieldBegin('message', Thrift.Type.STRUCT, 2);
    this.message.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkService_sendMessage_result = function(args) {
  this.success = null;
  this.e = null;
  if (args instanceof TalkException) {
    this.e = args;
    return;
  }
  if (args) {
    if (args.success !== undefined && args.success !== null) {
      this.success = new Message(args.success);
    }
    if (args.e !== undefined && args.e !== null) {
      this.e = args.e;
    }
  }
};
TalkService_sendMessage_result.prototype = {};
TalkService_sendMessage_result.prototype.read = function(input) {
  input.readStructBegin();
  while (true)
  {
    var ret = input.readFieldBegin();
    var fname = ret.fname;
    var ftype = ret.ftype;
    var fid = ret.fid;
    if (ftype == Thrift.Type.STOP) {
      break;
    }
    switch (fid)
    {
      case 0:
      if (ftype == Thrift.Type.STRUCT) {
        this.success = new Message();
        this.success.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      case 1:
      if (ftype == Thrift.Type.STRUCT) {
        this.e = new TalkException();
        this.e.read(input);
      } else {
        input.skip(ftype);
      }
      break;
      default:
        input.skip(ftype);
    }
    input.readFieldEnd();
  }
  input.readStructEnd();
  return;
};

TalkService_sendMessage_result.prototype.write = function(output) {
  output.writeStructBegin('TalkService_sendMessage_result');
  if (this.success !== null && this.success !== undefined) {
    output.writeFieldBegin('success', Thrift.Type.STRUCT, 0);
    this.success.write(output);
    output.writeFieldEnd();
  }
  if (this.e !== null && this.e !== undefined) {
    output.writeFieldBegin('e', Thrift.Type.STRUCT, 1);
    this.e.write(output);
    output.writeFieldEnd();
  }
  output.writeFieldStop();
  output.writeStructEnd();
  return;
};

TalkServiceClient = function(input, output) {
    this.input = input;
    this.output = (!output) ? input : output;
    this.seqid = 0;
};
TalkServiceClient.prototype = {};
TalkServiceClient.prototype.acceptGroupInvitation = function(reqSeq, groupId, callback) {
  this.send_acceptGroupInvitation(reqSeq, groupId, callback); 
  if (!callback) {
  this.recv_acceptGroupInvitation();
  }
};

TalkServiceClient.prototype.send_acceptGroupInvitation = function(reqSeq, groupId, callback) {
  this.output.writeMessageBegin('acceptGroupInvitation', Thrift.MessageType.CALL, this.seqid);
  var params = {
    reqSeq: reqSeq,
    groupId: groupId
  };
  var args = new TalkService_acceptGroupInvitation_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_acceptGroupInvitation();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_acceptGroupInvitation = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_acceptGroupInvitation_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  return;
};
TalkServiceClient.prototype.createGroup = function(seq, name, contactIds, callback) {
  this.send_createGroup(seq, name, contactIds, callback); 
  if (!callback) {
    return this.recv_createGroup();
  }
};

TalkServiceClient.prototype.send_createGroup = function(seq, name, contactIds, callback) {
  this.output.writeMessageBegin('createGroup', Thrift.MessageType.CALL, this.seqid);
  var params = {
    seq: seq,
    name: name,
    contactIds: contactIds
  };
  var args = new TalkService_createGroup_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_createGroup();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_createGroup = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_createGroup_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'createGroup failed: unknown result';
};
TalkServiceClient.prototype.createQrcodeBase64Image = function(url, characterSet, imageSize, x, y, width, height, callback) {
  this.send_createQrcodeBase64Image(url, characterSet, imageSize, x, y, width, height, callback); 
  if (!callback) {
    return this.recv_createQrcodeBase64Image();
  }
};

TalkServiceClient.prototype.send_createQrcodeBase64Image = function(url, characterSet, imageSize, x, y, width, height, callback) {
  this.output.writeMessageBegin('createQrcodeBase64Image', Thrift.MessageType.CALL, this.seqid);
  var params = {
    url: url,
    characterSet: characterSet,
    imageSize: imageSize,
    x: x,
    y: y,
    width: width,
    height: height
  };
  var args = new TalkService_createQrcodeBase64Image_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_createQrcodeBase64Image();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_createQrcodeBase64Image = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_createQrcodeBase64Image_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'createQrcodeBase64Image failed: unknown result';
};
TalkServiceClient.prototype.createRoom = function(reqSeq, contactIds, callback) {
  this.send_createRoom(reqSeq, contactIds, callback); 
  if (!callback) {
    return this.recv_createRoom();
  }
};

TalkServiceClient.prototype.send_createRoom = function(reqSeq, contactIds, callback) {
  this.output.writeMessageBegin('createRoom', Thrift.MessageType.CALL, this.seqid);
  var params = {
    reqSeq: reqSeq,
    contactIds: contactIds
  };
  var args = new TalkService_createRoom_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_createRoom();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_createRoom = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_createRoom_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'createRoom failed: unknown result';
};
TalkServiceClient.prototype.createSession = function(callback) {
  this.send_createSession(callback); 
  if (!callback) {
    return this.recv_createSession();
  }
};

TalkServiceClient.prototype.send_createSession = function(callback) {
  this.output.writeMessageBegin('createSession', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_createSession_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_createSession();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_createSession = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_createSession_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'createSession failed: unknown result';
};
TalkServiceClient.prototype.fetchOperations = function(localRev, count, callback) {
  this.send_fetchOperations(localRev, count, callback); 
  if (!callback) {
    return this.recv_fetchOperations();
  }
};

TalkServiceClient.prototype.send_fetchOperations = function(localRev, count, callback) {
  this.output.writeMessageBegin('fetchOperations', Thrift.MessageType.CALL, this.seqid);
  var params = {
    localRev: localRev,
    count: count
  };
  var args = new TalkService_fetchOperations_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_fetchOperations();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_fetchOperations = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_fetchOperations_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'fetchOperations failed: unknown result';
};
TalkServiceClient.prototype.getProfile = function(callback) {
  this.send_getProfile(callback); 
  if (!callback) {
    return this.recv_getProfile();
  }
};

TalkServiceClient.prototype.send_getProfile = function(callback) {
  this.output.writeMessageBegin('getProfile', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getProfile_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getProfile();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getProfile = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getProfile_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getProfile failed: unknown result';
};
TalkServiceClient.prototype.findAndAddContactsByEmail = function(reqSeq, emails, callback) {
  this.send_findAndAddContactsByEmail(reqSeq, emails, callback); 
  if (!callback) {
    return this.recv_findAndAddContactsByEmail();
  }
};

TalkServiceClient.prototype.send_findAndAddContactsByEmail = function(reqSeq, emails, callback) {
  this.output.writeMessageBegin('findAndAddContactsByEmail', Thrift.MessageType.CALL, this.seqid);
  var params = {
    reqSeq: reqSeq,
    emails: emails
  };
  var args = new TalkService_findAndAddContactsByEmail_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findAndAddContactsByEmail();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findAndAddContactsByEmail = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findAndAddContactsByEmail_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findAndAddContactsByEmail failed: unknown result';
};
TalkServiceClient.prototype.findAndAddContactsByMid = function(reqSeq, mid, callback) {
  this.send_findAndAddContactsByMid(reqSeq, mid, callback); 
  if (!callback) {
    return this.recv_findAndAddContactsByMid();
  }
};

TalkServiceClient.prototype.send_findAndAddContactsByMid = function(reqSeq, mid, callback) {
  this.output.writeMessageBegin('findAndAddContactsByMid', Thrift.MessageType.CALL, this.seqid);
  var params = {
    reqSeq: reqSeq,
    mid: mid
  };
  var args = new TalkService_findAndAddContactsByMid_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findAndAddContactsByMid();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findAndAddContactsByMid = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findAndAddContactsByMid_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findAndAddContactsByMid failed: unknown result';
};
TalkServiceClient.prototype.findAndAddContactsByPhone = function(reqSeq, phones, callback) {
  this.send_findAndAddContactsByPhone(reqSeq, phones, callback); 
  if (!callback) {
    return this.recv_findAndAddContactsByPhone();
  }
};

TalkServiceClient.prototype.send_findAndAddContactsByPhone = function(reqSeq, phones, callback) {
  this.output.writeMessageBegin('findAndAddContactsByPhone', Thrift.MessageType.CALL, this.seqid);
  var params = {
    reqSeq: reqSeq,
    phones: phones
  };
  var args = new TalkService_findAndAddContactsByPhone_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findAndAddContactsByPhone();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findAndAddContactsByPhone = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findAndAddContactsByPhone_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findAndAddContactsByPhone failed: unknown result';
};
TalkServiceClient.prototype.findAndAddContactsByUserid = function(reqSeq, userid, callback) {
  this.send_findAndAddContactsByUserid(reqSeq, userid, callback); 
  if (!callback) {
    return this.recv_findAndAddContactsByUserid();
  }
};

TalkServiceClient.prototype.send_findAndAddContactsByUserid = function(reqSeq, userid, callback) {
  this.output.writeMessageBegin('findAndAddContactsByUserid', Thrift.MessageType.CALL, this.seqid);
  var params = {
    reqSeq: reqSeq,
    userid: userid
  };
  var args = new TalkService_findAndAddContactsByUserid_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findAndAddContactsByUserid();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findAndAddContactsByUserid = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findAndAddContactsByUserid_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findAndAddContactsByUserid failed: unknown result';
};
TalkServiceClient.prototype.findContactByUserid = function(userid, callback) {
  this.send_findContactByUserid(userid, callback); 
  if (!callback) {
    return this.recv_findContactByUserid();
  }
};

TalkServiceClient.prototype.send_findContactByUserid = function(userid, callback) {
  this.output.writeMessageBegin('findContactByUserid', Thrift.MessageType.CALL, this.seqid);
  var params = {
    userid: userid
  };
  var args = new TalkService_findContactByUserid_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findContactByUserid();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findContactByUserid = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findContactByUserid_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findContactByUserid failed: unknown result';
};
TalkServiceClient.prototype.findContactByUserTicket = function(ticketId, callback) {
  this.send_findContactByUserTicket(ticketId, callback); 
  if (!callback) {
    return this.recv_findContactByUserTicket();
  }
};

TalkServiceClient.prototype.send_findContactByUserTicket = function(ticketId, callback) {
  this.output.writeMessageBegin('findContactByUserTicket', Thrift.MessageType.CALL, this.seqid);
  var params = {
    ticketId: ticketId
  };
  var args = new TalkService_findContactByUserTicket_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findContactByUserTicket();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findContactByUserTicket = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findContactByUserTicket_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findContactByUserTicket failed: unknown result';
};
TalkServiceClient.prototype.findContactsByEmail = function(emails, callback) {
  this.send_findContactsByEmail(emails, callback); 
  if (!callback) {
    return this.recv_findContactsByEmail();
  }
};

TalkServiceClient.prototype.send_findContactsByEmail = function(emails, callback) {
  this.output.writeMessageBegin('findContactsByEmail', Thrift.MessageType.CALL, this.seqid);
  var params = {
    emails: emails
  };
  var args = new TalkService_findContactsByEmail_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findContactsByEmail();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findContactsByEmail = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findContactsByEmail_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findContactsByEmail failed: unknown result';
};
TalkServiceClient.prototype.findContactsByPhone = function(phones, callback) {
  this.send_findContactsByPhone(phones, callback); 
  if (!callback) {
    return this.recv_findContactsByPhone();
  }
};

TalkServiceClient.prototype.send_findContactsByPhone = function(phones, callback) {
  this.output.writeMessageBegin('findContactsByPhone', Thrift.MessageType.CALL, this.seqid);
  var params = {
    phones: phones
  };
  var args = new TalkService_findContactsByPhone_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_findContactsByPhone();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_findContactsByPhone = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_findContactsByPhone_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'findContactsByPhone failed: unknown result';
};
TalkServiceClient.prototype.generateUserTicket = function(expirationTime, maxUseCount, callback) {
  this.send_generateUserTicket(expirationTime, maxUseCount, callback); 
  if (!callback) {
    return this.recv_generateUserTicket();
  }
};

TalkServiceClient.prototype.send_generateUserTicket = function(expirationTime, maxUseCount, callback) {
  this.output.writeMessageBegin('generateUserTicket', Thrift.MessageType.CALL, this.seqid);
  var params = {
    expirationTime: expirationTime,
    maxUseCount: maxUseCount
  };
  var args = new TalkService_generateUserTicket_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_generateUserTicket();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_generateUserTicket = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_generateUserTicket_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'generateUserTicket failed: unknown result';
};
TalkServiceClient.prototype.getAllContactIds = function(callback) {
  this.send_getAllContactIds(callback); 
  if (!callback) {
    return this.recv_getAllContactIds();
  }
};

TalkServiceClient.prototype.send_getAllContactIds = function(callback) {
  this.output.writeMessageBegin('getAllContactIds', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getAllContactIds_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getAllContactIds();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getAllContactIds = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getAllContactIds_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getAllContactIds failed: unknown result';
};
TalkServiceClient.prototype.getBlockedContactIds = function(callback) {
  this.send_getBlockedContactIds(callback); 
  if (!callback) {
    return this.recv_getBlockedContactIds();
  }
};

TalkServiceClient.prototype.send_getBlockedContactIds = function(callback) {
  this.output.writeMessageBegin('getBlockedContactIds', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getBlockedContactIds_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getBlockedContactIds();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getBlockedContactIds = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getBlockedContactIds_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getBlockedContactIds failed: unknown result';
};
TalkServiceClient.prototype.getBlockedContactIdsByRange = function(start, count, callback) {
  this.send_getBlockedContactIdsByRange(start, count, callback); 
  if (!callback) {
    return this.recv_getBlockedContactIdsByRange();
  }
};

TalkServiceClient.prototype.send_getBlockedContactIdsByRange = function(start, count, callback) {
  this.output.writeMessageBegin('getBlockedContactIdsByRange', Thrift.MessageType.CALL, this.seqid);
  var params = {
    start: start,
    count: count
  };
  var args = new TalkService_getBlockedContactIdsByRange_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getBlockedContactIdsByRange();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getBlockedContactIdsByRange = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getBlockedContactIdsByRange_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getBlockedContactIdsByRange failed: unknown result';
};
TalkServiceClient.prototype.getBlockedRecommendationIds = function(callback) {
  this.send_getBlockedRecommendationIds(callback); 
  if (!callback) {
    return this.recv_getBlockedRecommendationIds();
  }
};

TalkServiceClient.prototype.send_getBlockedRecommendationIds = function(callback) {
  this.output.writeMessageBegin('getBlockedRecommendationIds', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getBlockedRecommendationIds_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getBlockedRecommendationIds();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getBlockedRecommendationIds = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getBlockedRecommendationIds_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getBlockedRecommendationIds failed: unknown result';
};
TalkServiceClient.prototype.getContact = function(id, callback) {
  this.send_getContact(id, callback); 
  if (!callback) {
    return this.recv_getContact();
  }
};

TalkServiceClient.prototype.send_getContact = function(id, callback) {
  this.output.writeMessageBegin('getContact', Thrift.MessageType.CALL, this.seqid);
  var params = {
    id: id
  };
  var args = new TalkService_getContact_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getContact();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getContact = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getContact_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getContact failed: unknown result';
};
TalkServiceClient.prototype.getContacts = function(ids, callback) {
  this.send_getContacts(ids, callback); 
  if (!callback) {
    return this.recv_getContacts();
  }
};

TalkServiceClient.prototype.send_getContacts = function(ids, callback) {
  this.output.writeMessageBegin('getContacts', Thrift.MessageType.CALL, this.seqid);
  var params = {
    ids: ids
  };
  var args = new TalkService_getContacts_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getContacts();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getContacts = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getContacts_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getContacts failed: unknown result';
};
TalkServiceClient.prototype.getGroup = function(groupId, callback) {
  this.send_getGroup(groupId, callback); 
  if (!callback) {
    return this.recv_getGroup();
  }
};

TalkServiceClient.prototype.send_getGroup = function(groupId, callback) {
  this.output.writeMessageBegin('getGroup', Thrift.MessageType.CALL, this.seqid);
  var params = {
    groupId: groupId
  };
  var args = new TalkService_getGroup_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getGroup();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getGroup = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getGroup_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getGroup failed: unknown result';
};
TalkServiceClient.prototype.getGroupIdsInvited = function(callback) {
  this.send_getGroupIdsInvited(callback); 
  if (!callback) {
    return this.recv_getGroupIdsInvited();
  }
};

TalkServiceClient.prototype.send_getGroupIdsInvited = function(callback) {
  this.output.writeMessageBegin('getGroupIdsInvited', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getGroupIdsInvited_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getGroupIdsInvited();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getGroupIdsInvited = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getGroupIdsInvited_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getGroupIdsInvited failed: unknown result';
};
TalkServiceClient.prototype.getGroupIdsJoined = function(callback) {
  this.send_getGroupIdsJoined(callback); 
  if (!callback) {
    return this.recv_getGroupIdsJoined();
  }
};

TalkServiceClient.prototype.send_getGroupIdsJoined = function(callback) {
  this.output.writeMessageBegin('getGroupIdsJoined', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getGroupIdsJoined_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getGroupIdsJoined();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getGroupIdsJoined = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getGroupIdsJoined_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getGroupIdsJoined failed: unknown result';
};
TalkServiceClient.prototype.getGroups = function(groupIds, callback) {
  this.send_getGroups(groupIds, callback); 
  if (!callback) {
    return this.recv_getGroups();
  }
};

TalkServiceClient.prototype.send_getGroups = function(groupIds, callback) {
  this.output.writeMessageBegin('getGroups', Thrift.MessageType.CALL, this.seqid);
  var params = {
    groupIds: groupIds
  };
  var args = new TalkService_getGroups_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getGroups();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getGroups = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getGroups_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getGroups failed: unknown result';
};
TalkServiceClient.prototype.getFavoriteMids = function(callback) {
  this.send_getFavoriteMids(callback); 
  if (!callback) {
    return this.recv_getFavoriteMids();
  }
};

TalkServiceClient.prototype.send_getFavoriteMids = function(callback) {
  this.output.writeMessageBegin('getFavoriteMids', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getFavoriteMids_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getFavoriteMids();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getFavoriteMids = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getFavoriteMids_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getFavoriteMids failed: unknown result';
};
TalkServiceClient.prototype.getHiddenContactMids = function(callback) {
  this.send_getHiddenContactMids(callback); 
  if (!callback) {
    return this.recv_getHiddenContactMids();
  }
};

TalkServiceClient.prototype.send_getHiddenContactMids = function(callback) {
  this.output.writeMessageBegin('getHiddenContactMids', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getHiddenContactMids_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getHiddenContactMids();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getHiddenContactMids = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getHiddenContactMids_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getHiddenContactMids failed: unknown result';
};
TalkServiceClient.prototype.getLastOpRevision = function(callback) {
  this.send_getLastOpRevision(callback); 
  if (!callback) {
    return this.recv_getLastOpRevision();
  }
};

TalkServiceClient.prototype.send_getLastOpRevision = function(callback) {
  this.output.writeMessageBegin('getLastOpRevision', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getLastOpRevision_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getLastOpRevision();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getLastOpRevision = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getLastOpRevision_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getLastOpRevision failed: unknown result';
};
TalkServiceClient.prototype.getRoom = function(roomId, callback) {
  this.send_getRoom(roomId, callback); 
  if (!callback) {
    return this.recv_getRoom();
  }
};

TalkServiceClient.prototype.send_getRoom = function(roomId, callback) {
  this.output.writeMessageBegin('getRoom', Thrift.MessageType.CALL, this.seqid);
  var params = {
    roomId: roomId
  };
  var args = new TalkService_getRoom_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getRoom();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getRoom = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getRoom_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getRoom failed: unknown result';
};
TalkServiceClient.prototype.getRSAKeyInfo = function(provider, callback) {
  this.send_getRSAKeyInfo(provider, callback); 
  if (!callback) {
    return this.recv_getRSAKeyInfo();
  }
};

TalkServiceClient.prototype.send_getRSAKeyInfo = function(provider, callback) {
  this.output.writeMessageBegin('getRSAKeyInfo', Thrift.MessageType.CALL, this.seqid);
  var params = {
    provider: provider
  };
  var args = new TalkService_getRSAKeyInfo_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getRSAKeyInfo();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getRSAKeyInfo = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getRSAKeyInfo_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getRSAKeyInfo failed: unknown result';
};
TalkServiceClient.prototype.getServerTime = function(callback) {
  this.send_getServerTime(callback); 
  if (!callback) {
    return this.recv_getServerTime();
  }
};

TalkServiceClient.prototype.send_getServerTime = function(callback) {
  this.output.writeMessageBegin('getServerTime', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getServerTime_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getServerTime();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getServerTime = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getServerTime_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getServerTime failed: unknown result';
};
TalkServiceClient.prototype.getSessions = function(callback) {
  this.send_getSessions(callback); 
  if (!callback) {
    return this.recv_getSessions();
  }
};

TalkServiceClient.prototype.send_getSessions = function(callback) {
  this.output.writeMessageBegin('getSessions', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_getSessions_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_getSessions();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_getSessions = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_getSessions_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'getSessions failed: unknown result';
};
TalkServiceClient.prototype.leaveGroup = function(reqSeq, groupId, callback) {
  this.send_leaveGroup(reqSeq, groupId, callback); 
  if (!callback) {
  this.recv_leaveGroup();
  }
};

TalkServiceClient.prototype.send_leaveGroup = function(reqSeq, groupId, callback) {
  this.output.writeMessageBegin('leaveGroup', Thrift.MessageType.CALL, this.seqid);
  var params = {
    reqSeq: reqSeq,
    groupId: groupId
  };
  var args = new TalkService_leaveGroup_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_leaveGroup();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_leaveGroup = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_leaveGroup_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  return;
};
TalkServiceClient.prototype.loginZ = function(LoginRequest, callback) {
  this.send_loginZ(LoginRequest, callback); 
  if (!callback) {
    return this.recv_loginZ();
  }
};

TalkServiceClient.prototype.send_loginZ = function(LoginRequest, callback) {
  this.output.writeMessageBegin('loginZ', Thrift.MessageType.CALL, this.seqid);
  var params = {
    LoginRequest: LoginRequest
  };
  var args = new TalkService_loginZ_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_loginZ();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_loginZ = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_loginZ_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'loginZ failed: unknown result';
};
TalkServiceClient.prototype.logout = function(callback) {
  this.send_logout(callback); 
  if (!callback) {
  this.recv_logout();
  }
};

TalkServiceClient.prototype.send_logout = function(callback) {
  this.output.writeMessageBegin('logout', Thrift.MessageType.CALL, this.seqid);
  var args = new TalkService_logout_args();
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_logout();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_logout = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_logout_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  return;
};
TalkServiceClient.prototype.logoutSession = function(tokenKey, callback) {
  this.send_logoutSession(tokenKey, callback); 
  if (!callback) {
  this.recv_logoutSession();
  }
};

TalkServiceClient.prototype.send_logoutSession = function(tokenKey, callback) {
  this.output.writeMessageBegin('logoutSession', Thrift.MessageType.CALL, this.seqid);
  var params = {
    tokenKey: tokenKey
  };
  var args = new TalkService_logoutSession_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_logoutSession();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_logoutSession = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_logoutSession_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  return;
};
TalkServiceClient.prototype.sendMessage = function(seq, message, callback) {
  this.send_sendMessage(seq, message, callback); 
  if (!callback) {
    return this.recv_sendMessage();
  }
};

TalkServiceClient.prototype.send_sendMessage = function(seq, message, callback) {
  this.output.writeMessageBegin('sendMessage', Thrift.MessageType.CALL, this.seqid);
  var params = {
    seq: seq,
    message: message
  };
  var args = new TalkService_sendMessage_args(params);
  args.write(this.output);
  this.output.writeMessageEnd();
  if (callback) {
    var self = this;
    this.output.getTransport().flush(true, function() {
      var result = null;
      try {
        result = self.recv_sendMessage();
      } catch (e) {
        result = e;
      }
      callback(result);
    });
  } else {
    return this.output.getTransport().flush();
  }
};

TalkServiceClient.prototype.recv_sendMessage = function() {
  var ret = this.input.readMessageBegin();
  var fname = ret.fname;
  var mtype = ret.mtype;
  var rseqid = ret.rseqid;
  if (mtype == Thrift.MessageType.EXCEPTION) {
    var x = new Thrift.TApplicationException();
    x.read(this.input);
    this.input.readMessageEnd();
    throw x;
  }
  var result = new TalkService_sendMessage_result();
  result.read(this.input);
  this.input.readMessageEnd();

  if (null !== result.e) {
    throw result.e;
  }
  if (null !== result.success) {
    return result.success;
  }
  throw 'sendMessage failed: unknown result';
};
