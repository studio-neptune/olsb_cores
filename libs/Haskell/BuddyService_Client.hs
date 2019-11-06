{-# LANGUAGE DeriveDataTypeable #-}
{-# LANGUAGE DeriveGeneric #-}
{-# LANGUAGE OverloadedStrings #-}
{-# OPTIONS_GHC -fno-warn-missing-fields #-}
{-# OPTIONS_GHC -fno-warn-missing-signatures #-}
{-# OPTIONS_GHC -fno-warn-name-shadowing #-}
{-# OPTIONS_GHC -fno-warn-unused-imports #-}
{-# OPTIONS_GHC -fno-warn-unused-matches #-}

-----------------------------------------------------------------
-- Autogenerated by Thrift Compiler (0.14.0)                      --
--                                                             --
-- DO NOT EDIT UNLESS YOU ARE SURE YOU KNOW WHAT YOU ARE DOING --
-----------------------------------------------------------------

module BuddyService_Client(findBuddyContactsByQuery,getBuddyContacts,getBuddyDetail,getBuddyOnAir,getCountriesHavingBuddy,getNewlyReleasedBuddyIds,getPopularBuddyBanner,getPopularBuddyLists,getPromotedBuddyContacts) where
import qualified Data.IORef as R
import Prelude (($), (.), (>>=), (==), (++))
import qualified Prelude as P
import qualified Control.Exception as X
import qualified Control.Monad as M ( liftM, ap, when )
import Data.Functor ( (<$>) )
import qualified Data.ByteString.Lazy as LBS
import qualified Data.Hashable as H
import qualified Data.Int as I
import qualified Data.Maybe as M (catMaybes)
import qualified Data.Text.Lazy.Encoding as E ( decodeUtf8, encodeUtf8 )
import qualified Data.Text.Lazy as LT
import qualified GHC.Generics as G (Generic)
import qualified Data.Typeable as TY ( Typeable )
import qualified Data.HashMap.Strict as Map
import qualified Data.HashSet as Set
import qualified Data.Vector as Vector
import qualified Test.QuickCheck.Arbitrary as QC ( Arbitrary(..) )
import qualified Test.QuickCheck as QC ( elements )

import qualified Thrift as T
import qualified Thrift.Types as T
import qualified Thrift.Arbitraries as T


import Line_Types
import BuddyService
seqid = R.newIORef 0
findBuddyContactsByQuery (ip,op) arg_language arg_country arg_query arg_fromIndex arg_count arg_requestSource = do
  send_findBuddyContactsByQuery op arg_language arg_country arg_query arg_fromIndex arg_count arg_requestSource
  recv_findBuddyContactsByQuery ip
send_findBuddyContactsByQuery op arg_language arg_country arg_query arg_fromIndex arg_count arg_requestSource = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("findBuddyContactsByQuery", T.M_CALL, seqn) $
    write_FindBuddyContactsByQuery_args op (FindBuddyContactsByQuery_args{findBuddyContactsByQuery_args_language=arg_language,findBuddyContactsByQuery_args_country=arg_country,findBuddyContactsByQuery_args_query=arg_query,findBuddyContactsByQuery_args_fromIndex=arg_fromIndex,findBuddyContactsByQuery_args_count=arg_count,findBuddyContactsByQuery_args_requestSource=arg_requestSource})
recv_findBuddyContactsByQuery ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_FindBuddyContactsByQuery_result ip
    P.maybe (P.return ()) X.throw (findBuddyContactsByQuery_result_e res)
    P.return $ findBuddyContactsByQuery_result_success res
getBuddyContacts (ip,op) arg_language arg_country arg_classification arg_fromIndex arg_count = do
  send_getBuddyContacts op arg_language arg_country arg_classification arg_fromIndex arg_count
  recv_getBuddyContacts ip
send_getBuddyContacts op arg_language arg_country arg_classification arg_fromIndex arg_count = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getBuddyContacts", T.M_CALL, seqn) $
    write_GetBuddyContacts_args op (GetBuddyContacts_args{getBuddyContacts_args_language=arg_language,getBuddyContacts_args_country=arg_country,getBuddyContacts_args_classification=arg_classification,getBuddyContacts_args_fromIndex=arg_fromIndex,getBuddyContacts_args_count=arg_count})
recv_getBuddyContacts ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetBuddyContacts_result ip
    P.maybe (P.return ()) X.throw (getBuddyContacts_result_e res)
    P.return $ getBuddyContacts_result_success res
getBuddyDetail (ip,op) arg_buddyMid = do
  send_getBuddyDetail op arg_buddyMid
  recv_getBuddyDetail ip
send_getBuddyDetail op arg_buddyMid = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getBuddyDetail", T.M_CALL, seqn) $
    write_GetBuddyDetail_args op (GetBuddyDetail_args{getBuddyDetail_args_buddyMid=arg_buddyMid})
recv_getBuddyDetail ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetBuddyDetail_result ip
    P.maybe (P.return ()) X.throw (getBuddyDetail_result_e res)
    P.return $ getBuddyDetail_result_success res
getBuddyOnAir (ip,op) arg_buddyMid = do
  send_getBuddyOnAir op arg_buddyMid
  recv_getBuddyOnAir ip
send_getBuddyOnAir op arg_buddyMid = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getBuddyOnAir", T.M_CALL, seqn) $
    write_GetBuddyOnAir_args op (GetBuddyOnAir_args{getBuddyOnAir_args_buddyMid=arg_buddyMid})
recv_getBuddyOnAir ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetBuddyOnAir_result ip
    P.maybe (P.return ()) X.throw (getBuddyOnAir_result_e res)
    P.return $ getBuddyOnAir_result_success res
getCountriesHavingBuddy (ip,op) = do
  send_getCountriesHavingBuddy op
  recv_getCountriesHavingBuddy ip
send_getCountriesHavingBuddy op = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getCountriesHavingBuddy", T.M_CALL, seqn) $
    write_GetCountriesHavingBuddy_args op (GetCountriesHavingBuddy_args{})
recv_getCountriesHavingBuddy ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetCountriesHavingBuddy_result ip
    P.maybe (P.return ()) X.throw (getCountriesHavingBuddy_result_e res)
    P.return $ getCountriesHavingBuddy_result_success res
getNewlyReleasedBuddyIds (ip,op) arg_country = do
  send_getNewlyReleasedBuddyIds op arg_country
  recv_getNewlyReleasedBuddyIds ip
send_getNewlyReleasedBuddyIds op arg_country = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getNewlyReleasedBuddyIds", T.M_CALL, seqn) $
    write_GetNewlyReleasedBuddyIds_args op (GetNewlyReleasedBuddyIds_args{getNewlyReleasedBuddyIds_args_country=arg_country})
recv_getNewlyReleasedBuddyIds ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetNewlyReleasedBuddyIds_result ip
    P.maybe (P.return ()) X.throw (getNewlyReleasedBuddyIds_result_e res)
    P.return $ getNewlyReleasedBuddyIds_result_success res
getPopularBuddyBanner (ip,op) arg_language arg_country arg_applicationType arg_resourceSpecification = do
  send_getPopularBuddyBanner op arg_language arg_country arg_applicationType arg_resourceSpecification
  recv_getPopularBuddyBanner ip
send_getPopularBuddyBanner op arg_language arg_country arg_applicationType arg_resourceSpecification = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getPopularBuddyBanner", T.M_CALL, seqn) $
    write_GetPopularBuddyBanner_args op (GetPopularBuddyBanner_args{getPopularBuddyBanner_args_language=arg_language,getPopularBuddyBanner_args_country=arg_country,getPopularBuddyBanner_args_applicationType=arg_applicationType,getPopularBuddyBanner_args_resourceSpecification=arg_resourceSpecification})
recv_getPopularBuddyBanner ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetPopularBuddyBanner_result ip
    P.maybe (P.return ()) X.throw (getPopularBuddyBanner_result_e res)
    P.return $ getPopularBuddyBanner_result_success res
getPopularBuddyLists (ip,op) arg_language arg_country = do
  send_getPopularBuddyLists op arg_language arg_country
  recv_getPopularBuddyLists ip
send_getPopularBuddyLists op arg_language arg_country = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getPopularBuddyLists", T.M_CALL, seqn) $
    write_GetPopularBuddyLists_args op (GetPopularBuddyLists_args{getPopularBuddyLists_args_language=arg_language,getPopularBuddyLists_args_country=arg_country})
recv_getPopularBuddyLists ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetPopularBuddyLists_result ip
    P.maybe (P.return ()) X.throw (getPopularBuddyLists_result_e res)
    P.return $ getPopularBuddyLists_result_success res
getPromotedBuddyContacts (ip,op) arg_language arg_country = do
  send_getPromotedBuddyContacts op arg_language arg_country
  recv_getPromotedBuddyContacts ip
send_getPromotedBuddyContacts op arg_language arg_country = do
  seq <- seqid
  seqn <- R.readIORef seq
  T.writeMessage op ("getPromotedBuddyContacts", T.M_CALL, seqn) $
    write_GetPromotedBuddyContacts_args op (GetPromotedBuddyContacts_args{getPromotedBuddyContacts_args_language=arg_language,getPromotedBuddyContacts_args_country=arg_country})
recv_getPromotedBuddyContacts ip = do
  T.readMessage ip $ \(fname, mtype, rseqid) -> do
    M.when (mtype == T.M_EXCEPTION) $ do { exn <- T.readAppExn ip ; X.throw exn }
    res <- read_GetPromotedBuddyContacts_result ip
    P.maybe (P.return ()) X.throw (getPromotedBuddyContacts_result_e res)
    P.return $ getPromotedBuddyContacts_result_success res