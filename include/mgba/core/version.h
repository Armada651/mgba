/* Copyright (c) 2013-2016 Jeffrey Pfau
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef VERSION_H
#define VERSION_H

#include <mgba-util/common.h>

CXX_GUARD_START

M_API const char* const gitCommit;
M_API const char* const gitCommitShort;
M_API const char* const gitBranch;
M_API const int gitRevision;
M_API const char* const binaryName;
M_API const char* const projectName;
M_API const char* const projectVersion;

CXX_GUARD_END

#endif
