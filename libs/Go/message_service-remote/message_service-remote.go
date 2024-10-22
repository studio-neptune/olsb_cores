// Autogenerated by Thrift Compiler (0.14.0)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING

package main

import (
	"context"
	"flag"
	"fmt"
	"math"
	"net"
	"net/url"
	"os"
	"strconv"
	"strings"
	"github.com/apache/thrift/lib/go/thrift"
	"line"
)

var _ = line.GoUnusedProtection__

func Usage() {
  fmt.Fprintln(os.Stderr, "Usage of ", os.Args[0], " [-h host:port] [-u url] [-f[ramed]] function [arg1 [arg2...]]:")
  flag.PrintDefaults()
  fmt.Fprintln(os.Stderr, "\nFunctions:")
  fmt.Fprintln(os.Stderr, "  MessageOperations fetchMessageOperations(i64 localRevision, i64 lastOpTimestamp, i32 count)")
  fmt.Fprintln(os.Stderr, "  LastReadMessageIds getLastReadMessageIds(string chatId)")
  fmt.Fprintln(os.Stderr, "   multiGetLastReadMessageIds( chatIds)")
  fmt.Fprintln(os.Stderr)
  os.Exit(0)
}

type httpHeaders map[string]string

func (h httpHeaders) String() string {
  var m map[string]string = h
  return fmt.Sprintf("%s", m)
}

func (h httpHeaders) Set(value string) error {
  parts := strings.Split(value, ": ")
  if len(parts) != 2 {
    return fmt.Errorf("header should be of format 'Key: Value'")
  }
  h[parts[0]] = parts[1]
  return nil
}

func main() {
  flag.Usage = Usage
  var host string
  var port int
  var protocol string
  var urlString string
  var framed bool
  var useHttp bool
  headers := make(httpHeaders)
  var parsedUrl *url.URL
  var trans thrift.TTransport
  _ = strconv.Atoi
  _ = math.Abs
  flag.Usage = Usage
  flag.StringVar(&host, "h", "localhost", "Specify host and port")
  flag.IntVar(&port, "p", 9090, "Specify port")
  flag.StringVar(&protocol, "P", "binary", "Specify the protocol (binary, compact, simplejson, json)")
  flag.StringVar(&urlString, "u", "", "Specify the url")
  flag.BoolVar(&framed, "framed", false, "Use framed transport")
  flag.BoolVar(&useHttp, "http", false, "Use http")
  flag.Var(headers, "H", "Headers to set on the http(s) request (e.g. -H \"Key: Value\")")
  flag.Parse()
  
  if len(urlString) > 0 {
    var err error
    parsedUrl, err = url.Parse(urlString)
    if err != nil {
      fmt.Fprintln(os.Stderr, "Error parsing URL: ", err)
      flag.Usage()
    }
    host = parsedUrl.Host
    useHttp = len(parsedUrl.Scheme) <= 0 || parsedUrl.Scheme == "http" || parsedUrl.Scheme == "https"
  } else if useHttp {
    _, err := url.Parse(fmt.Sprint("http://", host, ":", port))
    if err != nil {
      fmt.Fprintln(os.Stderr, "Error parsing URL: ", err)
      flag.Usage()
    }
  }
  
  cmd := flag.Arg(0)
  var err error
  if useHttp {
    trans, err = thrift.NewTHttpClient(parsedUrl.String())
    if len(headers) > 0 {
      httptrans := trans.(*thrift.THttpClient)
      for key, value := range headers {
        httptrans.SetHeader(key, value)
      }
    }
  } else {
    portStr := fmt.Sprint(port)
    if strings.Contains(host, ":") {
           host, portStr, err = net.SplitHostPort(host)
           if err != nil {
                   fmt.Fprintln(os.Stderr, "error with host:", err)
                   os.Exit(1)
           }
    }
    trans, err = thrift.NewTSocket(net.JoinHostPort(host, portStr))
    if err != nil {
      fmt.Fprintln(os.Stderr, "error resolving address:", err)
      os.Exit(1)
    }
    if framed {
      trans = thrift.NewTFramedTransport(trans)
    }
  }
  if err != nil {
    fmt.Fprintln(os.Stderr, "Error creating transport", err)
    os.Exit(1)
  }
  defer trans.Close()
  var protocolFactory thrift.TProtocolFactory
  switch protocol {
  case "compact":
    protocolFactory = thrift.NewTCompactProtocolFactory()
    break
  case "simplejson":
    protocolFactory = thrift.NewTSimpleJSONProtocolFactory()
    break
  case "json":
    protocolFactory = thrift.NewTJSONProtocolFactory()
    break
  case "binary", "":
    protocolFactory = thrift.NewTBinaryProtocolFactoryDefault()
    break
  default:
    fmt.Fprintln(os.Stderr, "Invalid protocol specified: ", protocol)
    Usage()
    os.Exit(1)
  }
  iprot := protocolFactory.GetProtocol(trans)
  oprot := protocolFactory.GetProtocol(trans)
  client := line.NewMessageServiceClient(thrift.NewTStandardClient(iprot, oprot))
  if err := trans.Open(); err != nil {
    fmt.Fprintln(os.Stderr, "Error opening socket to ", host, ":", port, " ", err)
    os.Exit(1)
  }
  
  switch cmd {
  case "fetchMessageOperations":
    if flag.NArg() - 1 != 3 {
      fmt.Fprintln(os.Stderr, "FetchMessageOperations requires 3 args")
      flag.Usage()
    }
    argvalue0, err746 := (strconv.ParseInt(flag.Arg(1), 10, 64))
    if err746 != nil {
      Usage()
      return
    }
    value0 := argvalue0
    argvalue1, err747 := (strconv.ParseInt(flag.Arg(2), 10, 64))
    if err747 != nil {
      Usage()
      return
    }
    value1 := argvalue1
    tmp2, err748 := (strconv.Atoi(flag.Arg(3)))
    if err748 != nil {
      Usage()
      return
    }
    argvalue2 := int32(tmp2)
    value2 := argvalue2
    fmt.Print(client.FetchMessageOperations(context.Background(), value0, value1, value2))
    fmt.Print("\n")
    break
  case "getLastReadMessageIds":
    if flag.NArg() - 1 != 1 {
      fmt.Fprintln(os.Stderr, "GetLastReadMessageIds requires 1 args")
      flag.Usage()
    }
    argvalue0 := flag.Arg(1)
    value0 := argvalue0
    fmt.Print(client.GetLastReadMessageIds(context.Background(), value0))
    fmt.Print("\n")
    break
  case "multiGetLastReadMessageIds":
    if flag.NArg() - 1 != 1 {
      fmt.Fprintln(os.Stderr, "MultiGetLastReadMessageIds requires 1 args")
      flag.Usage()
    }
    arg750 := flag.Arg(1)
    mbTrans751 := thrift.NewTMemoryBufferLen(len(arg750))
    defer mbTrans751.Close()
    _, err752 := mbTrans751.WriteString(arg750)
    if err752 != nil { 
      Usage()
      return
    }
    factory753 := thrift.NewTJSONProtocolFactory()
    jsProt754 := factory753.GetProtocol(mbTrans751)
    containerStruct0 := line.NewMessageServiceMultiGetLastReadMessageIdsArgs()
    err755 := containerStruct0.ReadField1(jsProt754)
    if err755 != nil {
      Usage()
      return
    }
    argvalue0 := containerStruct0.ChatIds
    value0 := argvalue0
    fmt.Print(client.MultiGetLastReadMessageIds(context.Background(), value0))
    fmt.Print("\n")
    break
  case "":
    Usage()
    break
  default:
    fmt.Fprintln(os.Stderr, "Invalid function ", cmd)
  }
}
