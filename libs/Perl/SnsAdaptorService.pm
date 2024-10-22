#
# Autogenerated by Thrift Compiler (0.14.0)
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#
use 5.10.0;
use strict;
use warnings;
use Thrift::Exception;
use Thrift::MessageType;
use Thrift::Type;

use Types;


# HELPER FUNCTIONS AND STRUCTURES

package SnsAdaptorService_getSnsFriends_args;
use base qw(Class::Accessor);
SnsAdaptorService_getSnsFriends_args->mk_accessors( qw( snsIdType snsAccessToken startIdx limit ) );

sub new {
                  my $classname = shift;
                  my $self      = {};
                  my $vals      = shift || {};
                  $self->{snsIdType} = undef;
                  $self->{snsAccessToken} = undef;
                  $self->{startIdx} = undef;
                  $self->{limit} = undef;
                  if (UNIVERSAL::isa($vals,'HASH')) {
                    if (defined $vals->{snsIdType}) {
                      $self->{snsIdType} = $vals->{snsIdType};
                    }
                    if (defined $vals->{snsAccessToken}) {
                      $self->{snsAccessToken} = $vals->{snsAccessToken};
                    }
                    if (defined $vals->{startIdx}) {
                      $self->{startIdx} = $vals->{startIdx};
                    }
                    if (defined $vals->{limit}) {
                      $self->{limit} = $vals->{limit};
                    }
                  }
                  return bless ($self, $classname);
}

sub getName {
                  return 'SnsAdaptorService_getSnsFriends_args';
                }

sub read {
                  my ($self, $input) = @_;
                  my $xfer  = 0;
                  my $fname;
                  my $ftype = 0;
                  my $fid   = 0;
                  $xfer += $input->readStructBegin(\$fname);
                  while (1)
                  {
                    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
                    if ($ftype == Thrift::TType::STOP) {
                      last;
                    }
                    SWITCH: for($fid)
                    {
                      /^2$/ && do{                      if ($ftype == Thrift::TType::I32) {
                        $xfer += $input->readI32(\$self->{snsIdType});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^3$/ && do{                      if ($ftype == Thrift::TType::STRING) {
                        $xfer += $input->readString(\$self->{snsAccessToken});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^4$/ && do{                      if ($ftype == Thrift::TType::I32) {
                        $xfer += $input->readI32(\$self->{startIdx});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^5$/ && do{                      if ($ftype == Thrift::TType::I32) {
                        $xfer += $input->readI32(\$self->{limit});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                        $xfer += $input->skip($ftype);
                    }
                    $xfer += $input->readFieldEnd();
                  }
                  $xfer += $input->readStructEnd();
                  return $xfer;
                }

sub write {
                  my ($self, $output) = @_;
                  my $xfer   = 0;
                  $xfer += $output->writeStructBegin('SnsAdaptorService_getSnsFriends_args');
                  if (defined $self->{snsIdType}) {
                    $xfer += $output->writeFieldBegin('snsIdType', Thrift::TType::I32, 2);
                    $xfer += $output->writeI32($self->{snsIdType});
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{snsAccessToken}) {
                    $xfer += $output->writeFieldBegin('snsAccessToken', Thrift::TType::STRING, 3);
                    $xfer += $output->writeString($self->{snsAccessToken});
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{startIdx}) {
                    $xfer += $output->writeFieldBegin('startIdx', Thrift::TType::I32, 4);
                    $xfer += $output->writeI32($self->{startIdx});
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{limit}) {
                    $xfer += $output->writeFieldBegin('limit', Thrift::TType::I32, 5);
                    $xfer += $output->writeI32($self->{limit});
                    $xfer += $output->writeFieldEnd();
                  }
                  $xfer += $output->writeFieldStop();
                  $xfer += $output->writeStructEnd();
                  return $xfer;
                }

package SnsAdaptorService_getSnsFriends_result;
use base qw(Class::Accessor);
SnsAdaptorService_getSnsFriends_result->mk_accessors( qw( success ) );

sub new {
                  my $classname = shift;
                  my $self      = {};
                  my $vals      = shift || {};
                  $self->{success} = undef;
                  $self->{e} = undef;
                  if (UNIVERSAL::isa($vals,'HASH')) {
                    if (defined $vals->{success}) {
                      $self->{success} = $vals->{success};
                    }
                    if (defined $vals->{e}) {
                      $self->{e} = $vals->{e};
                    }
                  }
                  return bless ($self, $classname);
}

sub getName {
                  return 'SnsAdaptorService_getSnsFriends_result';
                }

sub read {
                  my ($self, $input) = @_;
                  my $xfer  = 0;
                  my $fname;
                  my $ftype = 0;
                  my $fid   = 0;
                  $xfer += $input->readStructBegin(\$fname);
                  while (1)
                  {
                    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
                    if ($ftype == Thrift::TType::STOP) {
                      last;
                    }
                    SWITCH: for($fid)
                    {
                      /^0$/ && do{                      if ($ftype == Thrift::TType::STRUCT) {
                        $self->{success} = SnsFriends->new();
                        $xfer += $self->{success}->read($input);
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^1$/ && do{                      if ($ftype == Thrift::TType::STRUCT) {
                        $self->{e} = TalkException->new();
                        $xfer += $self->{e}->read($input);
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                        $xfer += $input->skip($ftype);
                    }
                    $xfer += $input->readFieldEnd();
                  }
                  $xfer += $input->readStructEnd();
                  return $xfer;
                }

sub write {
                  my ($self, $output) = @_;
                  my $xfer   = 0;
                  $xfer += $output->writeStructBegin('SnsAdaptorService_getSnsFriends_result');
                  if (defined $self->{success}) {
                    $xfer += $output->writeFieldBegin('success', Thrift::TType::STRUCT, 0);
                    $xfer += $self->{success}->write($output);
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{e}) {
                    $xfer += $output->writeFieldBegin('e', Thrift::TType::STRUCT, 1);
                    $xfer += $self->{e}->write($output);
                    $xfer += $output->writeFieldEnd();
                  }
                  $xfer += $output->writeFieldStop();
                  $xfer += $output->writeStructEnd();
                  return $xfer;
                }

package SnsAdaptorService_getSnsMyProfile_args;
use base qw(Class::Accessor);
SnsAdaptorService_getSnsMyProfile_args->mk_accessors( qw( snsIdType snsAccessToken ) );

sub new {
                  my $classname = shift;
                  my $self      = {};
                  my $vals      = shift || {};
                  $self->{snsIdType} = undef;
                  $self->{snsAccessToken} = undef;
                  if (UNIVERSAL::isa($vals,'HASH')) {
                    if (defined $vals->{snsIdType}) {
                      $self->{snsIdType} = $vals->{snsIdType};
                    }
                    if (defined $vals->{snsAccessToken}) {
                      $self->{snsAccessToken} = $vals->{snsAccessToken};
                    }
                  }
                  return bless ($self, $classname);
}

sub getName {
                  return 'SnsAdaptorService_getSnsMyProfile_args';
                }

sub read {
                  my ($self, $input) = @_;
                  my $xfer  = 0;
                  my $fname;
                  my $ftype = 0;
                  my $fid   = 0;
                  $xfer += $input->readStructBegin(\$fname);
                  while (1)
                  {
                    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
                    if ($ftype == Thrift::TType::STOP) {
                      last;
                    }
                    SWITCH: for($fid)
                    {
                      /^2$/ && do{                      if ($ftype == Thrift::TType::I32) {
                        $xfer += $input->readI32(\$self->{snsIdType});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^3$/ && do{                      if ($ftype == Thrift::TType::STRING) {
                        $xfer += $input->readString(\$self->{snsAccessToken});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                        $xfer += $input->skip($ftype);
                    }
                    $xfer += $input->readFieldEnd();
                  }
                  $xfer += $input->readStructEnd();
                  return $xfer;
                }

sub write {
                  my ($self, $output) = @_;
                  my $xfer   = 0;
                  $xfer += $output->writeStructBegin('SnsAdaptorService_getSnsMyProfile_args');
                  if (defined $self->{snsIdType}) {
                    $xfer += $output->writeFieldBegin('snsIdType', Thrift::TType::I32, 2);
                    $xfer += $output->writeI32($self->{snsIdType});
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{snsAccessToken}) {
                    $xfer += $output->writeFieldBegin('snsAccessToken', Thrift::TType::STRING, 3);
                    $xfer += $output->writeString($self->{snsAccessToken});
                    $xfer += $output->writeFieldEnd();
                  }
                  $xfer += $output->writeFieldStop();
                  $xfer += $output->writeStructEnd();
                  return $xfer;
                }

package SnsAdaptorService_getSnsMyProfile_result;
use base qw(Class::Accessor);
SnsAdaptorService_getSnsMyProfile_result->mk_accessors( qw( success ) );

sub new {
                  my $classname = shift;
                  my $self      = {};
                  my $vals      = shift || {};
                  $self->{success} = undef;
                  $self->{e} = undef;
                  if (UNIVERSAL::isa($vals,'HASH')) {
                    if (defined $vals->{success}) {
                      $self->{success} = $vals->{success};
                    }
                    if (defined $vals->{e}) {
                      $self->{e} = $vals->{e};
                    }
                  }
                  return bless ($self, $classname);
}

sub getName {
                  return 'SnsAdaptorService_getSnsMyProfile_result';
                }

sub read {
                  my ($self, $input) = @_;
                  my $xfer  = 0;
                  my $fname;
                  my $ftype = 0;
                  my $fid   = 0;
                  $xfer += $input->readStructBegin(\$fname);
                  while (1)
                  {
                    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
                    if ($ftype == Thrift::TType::STOP) {
                      last;
                    }
                    SWITCH: for($fid)
                    {
                      /^0$/ && do{                      if ($ftype == Thrift::TType::STRUCT) {
                        $self->{success} = SnsProfile->new();
                        $xfer += $self->{success}->read($input);
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^1$/ && do{                      if ($ftype == Thrift::TType::STRUCT) {
                        $self->{e} = TalkException->new();
                        $xfer += $self->{e}->read($input);
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                        $xfer += $input->skip($ftype);
                    }
                    $xfer += $input->readFieldEnd();
                  }
                  $xfer += $input->readStructEnd();
                  return $xfer;
                }

sub write {
                  my ($self, $output) = @_;
                  my $xfer   = 0;
                  $xfer += $output->writeStructBegin('SnsAdaptorService_getSnsMyProfile_result');
                  if (defined $self->{success}) {
                    $xfer += $output->writeFieldBegin('success', Thrift::TType::STRUCT, 0);
                    $xfer += $self->{success}->write($output);
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{e}) {
                    $xfer += $output->writeFieldBegin('e', Thrift::TType::STRUCT, 1);
                    $xfer += $self->{e}->write($output);
                    $xfer += $output->writeFieldEnd();
                  }
                  $xfer += $output->writeFieldStop();
                  $xfer += $output->writeStructEnd();
                  return $xfer;
                }

package SnsAdaptorService_postSnsInvitationMessage_args;
use base qw(Class::Accessor);
SnsAdaptorService_postSnsInvitationMessage_args->mk_accessors( qw( snsIdType snsAccessToken toSnsUserId ) );

sub new {
                  my $classname = shift;
                  my $self      = {};
                  my $vals      = shift || {};
                  $self->{snsIdType} = undef;
                  $self->{snsAccessToken} = undef;
                  $self->{toSnsUserId} = undef;
                  if (UNIVERSAL::isa($vals,'HASH')) {
                    if (defined $vals->{snsIdType}) {
                      $self->{snsIdType} = $vals->{snsIdType};
                    }
                    if (defined $vals->{snsAccessToken}) {
                      $self->{snsAccessToken} = $vals->{snsAccessToken};
                    }
                    if (defined $vals->{toSnsUserId}) {
                      $self->{toSnsUserId} = $vals->{toSnsUserId};
                    }
                  }
                  return bless ($self, $classname);
}

sub getName {
                  return 'SnsAdaptorService_postSnsInvitationMessage_args';
                }

sub read {
                  my ($self, $input) = @_;
                  my $xfer  = 0;
                  my $fname;
                  my $ftype = 0;
                  my $fid   = 0;
                  $xfer += $input->readStructBegin(\$fname);
                  while (1)
                  {
                    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
                    if ($ftype == Thrift::TType::STOP) {
                      last;
                    }
                    SWITCH: for($fid)
                    {
                      /^2$/ && do{                      if ($ftype == Thrift::TType::I32) {
                        $xfer += $input->readI32(\$self->{snsIdType});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^3$/ && do{                      if ($ftype == Thrift::TType::STRING) {
                        $xfer += $input->readString(\$self->{snsAccessToken});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                      /^4$/ && do{                      if ($ftype == Thrift::TType::STRING) {
                        $xfer += $input->readString(\$self->{toSnsUserId});
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                        $xfer += $input->skip($ftype);
                    }
                    $xfer += $input->readFieldEnd();
                  }
                  $xfer += $input->readStructEnd();
                  return $xfer;
                }

sub write {
                  my ($self, $output) = @_;
                  my $xfer   = 0;
                  $xfer += $output->writeStructBegin('SnsAdaptorService_postSnsInvitationMessage_args');
                  if (defined $self->{snsIdType}) {
                    $xfer += $output->writeFieldBegin('snsIdType', Thrift::TType::I32, 2);
                    $xfer += $output->writeI32($self->{snsIdType});
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{snsAccessToken}) {
                    $xfer += $output->writeFieldBegin('snsAccessToken', Thrift::TType::STRING, 3);
                    $xfer += $output->writeString($self->{snsAccessToken});
                    $xfer += $output->writeFieldEnd();
                  }
                  if (defined $self->{toSnsUserId}) {
                    $xfer += $output->writeFieldBegin('toSnsUserId', Thrift::TType::STRING, 4);
                    $xfer += $output->writeString($self->{toSnsUserId});
                    $xfer += $output->writeFieldEnd();
                  }
                  $xfer += $output->writeFieldStop();
                  $xfer += $output->writeStructEnd();
                  return $xfer;
                }

package SnsAdaptorService_postSnsInvitationMessage_result;
use base qw(Class::Accessor);
SnsAdaptorService_postSnsInvitationMessage_result->mk_accessors( qw( ) );

sub new {
                  my $classname = shift;
                  my $self      = {};
                  my $vals      = shift || {};
                  $self->{e} = undef;
                  if (UNIVERSAL::isa($vals,'HASH')) {
                    if (defined $vals->{e}) {
                      $self->{e} = $vals->{e};
                    }
                  }
                  return bless ($self, $classname);
}

sub getName {
                  return 'SnsAdaptorService_postSnsInvitationMessage_result';
                }

sub read {
                  my ($self, $input) = @_;
                  my $xfer  = 0;
                  my $fname;
                  my $ftype = 0;
                  my $fid   = 0;
                  $xfer += $input->readStructBegin(\$fname);
                  while (1)
                  {
                    $xfer += $input->readFieldBegin(\$fname, \$ftype, \$fid);
                    if ($ftype == Thrift::TType::STOP) {
                      last;
                    }
                    SWITCH: for($fid)
                    {
                      /^1$/ && do{                      if ($ftype == Thrift::TType::STRUCT) {
                        $self->{e} = TalkException->new();
                        $xfer += $self->{e}->read($input);
                      } else {
                        $xfer += $input->skip($ftype);
                      }
                      last; };
                        $xfer += $input->skip($ftype);
                    }
                    $xfer += $input->readFieldEnd();
                  }
                  $xfer += $input->readStructEnd();
                  return $xfer;
                }

sub write {
                  my ($self, $output) = @_;
                  my $xfer   = 0;
                  $xfer += $output->writeStructBegin('SnsAdaptorService_postSnsInvitationMessage_result');
                  if (defined $self->{e}) {
                    $xfer += $output->writeFieldBegin('e', Thrift::TType::STRUCT, 1);
                    $xfer += $self->{e}->write($output);
                    $xfer += $output->writeFieldEnd();
                  }
                  $xfer += $output->writeFieldStop();
                  $xfer += $output->writeStructEnd();
                  return $xfer;
                }

package SnsAdaptorServiceIf;

use strict;


sub getSnsFriends{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;
  my $startIdx = shift;
  my $limit = shift;

  die 'implement interface';
}

sub getSnsMyProfile{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;

  die 'implement interface';
}

sub postSnsInvitationMessage{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;
  my $toSnsUserId = shift;

  die 'implement interface';
}

package SnsAdaptorServiceRest;

use strict;


sub new {
                  my ($classname, $impl) = @_;
                  my $self     ={ impl => $impl };

                  return bless($self,$classname);
}

sub getSnsFriends{
                  my ($self, $request) = @_;

                  my $snsIdType = ($request->{'snsIdType'}) ? $request->{'snsIdType'} : undef;
                  my $snsAccessToken = ($request->{'snsAccessToken'}) ? $request->{'snsAccessToken'} : undef;
                  my $startIdx = ($request->{'startIdx'}) ? $request->{'startIdx'} : undef;
                  my $limit = ($request->{'limit'}) ? $request->{'limit'} : undef;
                  return $self->{impl}->getSnsFriends($snsIdType, $snsAccessToken, $startIdx, $limit);
                }

sub getSnsMyProfile{
                  my ($self, $request) = @_;

                  my $snsIdType = ($request->{'snsIdType'}) ? $request->{'snsIdType'} : undef;
                  my $snsAccessToken = ($request->{'snsAccessToken'}) ? $request->{'snsAccessToken'} : undef;
                  return $self->{impl}->getSnsMyProfile($snsIdType, $snsAccessToken);
                }

sub postSnsInvitationMessage{
                  my ($self, $request) = @_;

                  my $snsIdType = ($request->{'snsIdType'}) ? $request->{'snsIdType'} : undef;
                  my $snsAccessToken = ($request->{'snsAccessToken'}) ? $request->{'snsAccessToken'} : undef;
                  my $toSnsUserId = ($request->{'toSnsUserId'}) ? $request->{'toSnsUserId'} : undef;
                  return $self->{impl}->postSnsInvitationMessage($snsIdType, $snsAccessToken, $toSnsUserId);
                }

package SnsAdaptorServiceClient;


use base qw(SnsAdaptorServiceIf);
sub new {
                  my ($classname, $input, $output) = @_;
                  my $self      = {};
                  $self->{input}  = $input;
                  $self->{output} = defined $output ? $output : $input;
                  $self->{seqid}  = 0;
                  return bless($self,$classname);
}

sub getSnsFriends{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;
  my $startIdx = shift;
  my $limit = shift;

                                    $self->send_getSnsFriends($snsIdType, $snsAccessToken, $startIdx, $limit);
                  return $self->recv_getSnsFriends();
}

sub send_getSnsFriends{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;
  my $startIdx = shift;
  my $limit = shift;

                  $self->{output}->writeMessageBegin('getSnsFriends', Thrift::TMessageType::CALL, $self->{seqid});
                  my $args = SnsAdaptorService_getSnsFriends_args->new();
                  $args->{snsIdType} = $snsIdType;
                  $args->{snsAccessToken} = $snsAccessToken;
                  $args->{startIdx} = $startIdx;
                  $args->{limit} = $limit;
                  $args->write($self->{output});
                  $self->{output}->writeMessageEnd();
                  $self->{output}->getTransport()->flush();
}

sub recv_getSnsFriends{
  my $self = shift;

                  my $rseqid = 0;
                  my $fname;
                  my $mtype = 0;

                  $self->{input}->readMessageBegin(\$fname, \$mtype, \$rseqid);
                  if ($mtype == Thrift::TMessageType::EXCEPTION) {
                    my $x = Thrift::TApplicationException->new();
                    $x->read($self->{input});
                    $self->{input}->readMessageEnd();
                    die $x;
                  }
                  my $result = SnsAdaptorService_getSnsFriends_result->new();
                  $result->read($self->{input});
                  $self->{input}->readMessageEnd();

                  if (defined $result->{success} ) {
                    return $result->{success};
                  }
                  if (defined $result->{e}) {
                    die $result->{e};
                  }
                  die "getSnsFriends failed: unknown result";
}
sub getSnsMyProfile{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;

                                    $self->send_getSnsMyProfile($snsIdType, $snsAccessToken);
                  return $self->recv_getSnsMyProfile();
}

sub send_getSnsMyProfile{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;

                  $self->{output}->writeMessageBegin('getSnsMyProfile', Thrift::TMessageType::CALL, $self->{seqid});
                  my $args = SnsAdaptorService_getSnsMyProfile_args->new();
                  $args->{snsIdType} = $snsIdType;
                  $args->{snsAccessToken} = $snsAccessToken;
                  $args->write($self->{output});
                  $self->{output}->writeMessageEnd();
                  $self->{output}->getTransport()->flush();
}

sub recv_getSnsMyProfile{
  my $self = shift;

                  my $rseqid = 0;
                  my $fname;
                  my $mtype = 0;

                  $self->{input}->readMessageBegin(\$fname, \$mtype, \$rseqid);
                  if ($mtype == Thrift::TMessageType::EXCEPTION) {
                    my $x = Thrift::TApplicationException->new();
                    $x->read($self->{input});
                    $self->{input}->readMessageEnd();
                    die $x;
                  }
                  my $result = SnsAdaptorService_getSnsMyProfile_result->new();
                  $result->read($self->{input});
                  $self->{input}->readMessageEnd();

                  if (defined $result->{success} ) {
                    return $result->{success};
                  }
                  if (defined $result->{e}) {
                    die $result->{e};
                  }
                  die "getSnsMyProfile failed: unknown result";
}
sub postSnsInvitationMessage{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;
  my $toSnsUserId = shift;

                                    $self->send_postSnsInvitationMessage($snsIdType, $snsAccessToken, $toSnsUserId);
                  $self->recv_postSnsInvitationMessage();
}

sub send_postSnsInvitationMessage{
  my $self = shift;
  my $snsIdType = shift;
  my $snsAccessToken = shift;
  my $toSnsUserId = shift;

                  $self->{output}->writeMessageBegin('postSnsInvitationMessage', Thrift::TMessageType::CALL, $self->{seqid});
                  my $args = SnsAdaptorService_postSnsInvitationMessage_args->new();
                  $args->{snsIdType} = $snsIdType;
                  $args->{snsAccessToken} = $snsAccessToken;
                  $args->{toSnsUserId} = $toSnsUserId;
                  $args->write($self->{output});
                  $self->{output}->writeMessageEnd();
                  $self->{output}->getTransport()->flush();
}

sub recv_postSnsInvitationMessage{
  my $self = shift;

                  my $rseqid = 0;
                  my $fname;
                  my $mtype = 0;

                  $self->{input}->readMessageBegin(\$fname, \$mtype, \$rseqid);
                  if ($mtype == Thrift::TMessageType::EXCEPTION) {
                    my $x = Thrift::TApplicationException->new();
                    $x->read($self->{input});
                    $self->{input}->readMessageEnd();
                    die $x;
                  }
                  my $result = SnsAdaptorService_postSnsInvitationMessage_result->new();
                  $result->read($self->{input});
                  $self->{input}->readMessageEnd();

                  if (defined $result->{e}) {
                    die $result->{e};
                  }
                  return;
}
package SnsAdaptorServiceProcessor;

use strict;


sub new {
                    my ($classname, $handler) = @_;
                    my $self      = {};
                    $self->{handler} = $handler;
                    return bless ($self, $classname);
}

sub process {
                    my ($self, $input, $output) = @_;
                    my $rseqid = 0;
                    my $fname  = undef;
                    my $mtype  = 0;

                    $input->readMessageBegin(\$fname, \$mtype, \$rseqid);
                    my $methodname = 'process_'.$fname;
                    if (!$self->can($methodname)) {
                      $input->skip(Thrift::TType::STRUCT);
                      $input->readMessageEnd();
                      my $x = Thrift::TApplicationException->new('Function '.$fname.' not implemented.', Thrift::TApplicationException::UNKNOWN_METHOD);
                      $output->writeMessageBegin($fname, Thrift::TMessageType::EXCEPTION, $rseqid);
                      $x->write($output);
                      $output->writeMessageEnd();
                      $output->getTransport()->flush();
                      return;
                    }
                    $self->$methodname($rseqid, $input, $output);
                    return 1;
}

sub process_getSnsFriends {
                    my ($self, $seqid, $input, $output) = @_;
                    my $args = SnsAdaptorService_getSnsFriends_args->new();
                    $args->read($input);
                    $input->readMessageEnd();
                    my $result = SnsAdaptorService_getSnsFriends_result->new();
                    eval {
                      $result->{success} = $self->{handler}->getSnsFriends($args->snsIdType, $args->snsAccessToken, $args->startIdx, $args->limit);
                    }; if( UNIVERSAL::isa($@,'TalkException') ){ 
                      $result->{e} = $@;
                      $@ = undef;
                    }
                    if ($@) {
                      $@ =~ s/^\s+|\s+$//g;
                      my $err = Thrift::TApplicationException->new("Unexpected Exception: " . $@, Thrift::TApplicationException::INTERNAL_ERROR);
                      $output->writeMessageBegin('getSnsFriends', Thrift::TMessageType::EXCEPTION, $seqid);
                      $err->write($output);
                      $output->writeMessageEnd();
                      $output->getTransport()->flush();
                      $@ = undef;
                      return;
                    }
                    $output->writeMessageBegin('getSnsFriends', Thrift::TMessageType::REPLY, $seqid);
                    $result->write($output);
                    $output->writeMessageEnd();
                    $output->getTransport()->flush();
}

sub process_getSnsMyProfile {
                    my ($self, $seqid, $input, $output) = @_;
                    my $args = SnsAdaptorService_getSnsMyProfile_args->new();
                    $args->read($input);
                    $input->readMessageEnd();
                    my $result = SnsAdaptorService_getSnsMyProfile_result->new();
                    eval {
                      $result->{success} = $self->{handler}->getSnsMyProfile($args->snsIdType, $args->snsAccessToken);
                    }; if( UNIVERSAL::isa($@,'TalkException') ){ 
                      $result->{e} = $@;
                      $@ = undef;
                    }
                    if ($@) {
                      $@ =~ s/^\s+|\s+$//g;
                      my $err = Thrift::TApplicationException->new("Unexpected Exception: " . $@, Thrift::TApplicationException::INTERNAL_ERROR);
                      $output->writeMessageBegin('getSnsMyProfile', Thrift::TMessageType::EXCEPTION, $seqid);
                      $err->write($output);
                      $output->writeMessageEnd();
                      $output->getTransport()->flush();
                      $@ = undef;
                      return;
                    }
                    $output->writeMessageBegin('getSnsMyProfile', Thrift::TMessageType::REPLY, $seqid);
                    $result->write($output);
                    $output->writeMessageEnd();
                    $output->getTransport()->flush();
}

sub process_postSnsInvitationMessage {
                    my ($self, $seqid, $input, $output) = @_;
                    my $args = SnsAdaptorService_postSnsInvitationMessage_args->new();
                    $args->read($input);
                    $input->readMessageEnd();
                    my $result = SnsAdaptorService_postSnsInvitationMessage_result->new();
                    eval {
                      $self->{handler}->postSnsInvitationMessage($args->snsIdType, $args->snsAccessToken, $args->toSnsUserId);
                    }; if( UNIVERSAL::isa($@,'TalkException') ){ 
                      $result->{e} = $@;
                      $@ = undef;
                    }
                    if ($@) {
                      $@ =~ s/^\s+|\s+$//g;
                      my $err = Thrift::TApplicationException->new("Unexpected Exception: " . $@, Thrift::TApplicationException::INTERNAL_ERROR);
                      $output->writeMessageBegin('postSnsInvitationMessage', Thrift::TMessageType::EXCEPTION, $seqid);
                      $err->write($output);
                      $output->writeMessageEnd();
                      $output->getTransport()->flush();
                      $@ = undef;
                      return;
                    }
                    $output->writeMessageBegin('postSnsInvitationMessage', Thrift::TMessageType::REPLY, $seqid);
                    $result->write($output);
                    $output->writeMessageEnd();
                    $output->getTransport()->flush();
}

1;
