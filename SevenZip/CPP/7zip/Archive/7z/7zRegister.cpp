﻿// 7zRegister.cpp

#include "StdAfx.h"

#include "../../Common/RegisterArc.h"

#include "7zHandler.h"

namespace NArchive {
namespace N7z {

static Byte k_Signature_Dec[kSignatureSize] = {'7' + 1, 'z', 0xBC, 0xAF, 0x27, 0x1C};

REGISTER_ARC_IO_DECREMENT_SIG(
  "7z", "7z", NULL, 7,
  k_Signature_Dec,
  0,
  NArcInfoFlags::kFindSignature,
  NULL);

}}
