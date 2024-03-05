// Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).

// This file contains utility functions for RocksDB Options.
#pragma once

#include "rocksdb/slice.h"

namespace ROCKSDB_NAMESPACE {

bool is_blob_expire(const Slice& value, const uint64_t current_time);

}  // namespace ROCKSDB_NAMESPACE
