//  Copyright (c) 2011-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under both the GPLv2 (found in the
//  COPYING file in the root directory) and Apache 2.0 License
//  (found in the LICENSE.Apache file in the root directory).

#include "rocksdb/utilities/blob_util.h"
#include "blob_index.h"

namespace ROCKSDB_NAMESPACE {

bool is_blob_expire(const Slice& value, const uint64_t current_time) {
    BlobIndex blob_index;
    Status s = blob_index.DecodeFrom(value);
    if (s.ok() && blob_index.HasTTL() &&
        blob_index.expiration() != 0 &&
        blob_index.expiration() < current_time) {
        return true;
    }
    return false;
}

}  // namespace ROCKSDB_NAMESPACE
