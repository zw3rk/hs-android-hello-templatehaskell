{-# LANGUAGE TemplateHaskell #-}

module Lib where
import Development.GitRev (gitHash)
import Foreign.C (CString, newCString)
foreign export ccall "gitrev" cgitrev :: IO CString
-- | turn $gitHash into a c string.
cgitrev = newCString $gitHash
