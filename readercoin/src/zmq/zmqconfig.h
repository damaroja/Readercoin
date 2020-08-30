// Copyright (c) 2014-2019 The Readercoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef READERCOIN_ZMQ_ZMQCONFIG_H
#define READERCOIN_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
#include <config/readercoin-config.h>
#endif

#include <stdarg.h>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include <primitives/transaction.h>

void zmqError(const char *str);

#endif // READERCOIN_ZMQ_ZMQCONFIG_H
