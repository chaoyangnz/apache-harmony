#!/bin/sh
#
#!
# @file ./jvm/clean.sh
#
# @brief Remove build of main JVM development area
#
# @see @link jvm/build.sh jvm/build.sh@endlink
#
# @see @link jvm/common.sh jvm/common.sh@endlink
#
# @see @link ./build.sh ./build.sh@endlink
#
# @see @link ./clean.sh ./clean.sh@endlink
#
# @see @link ./common.sh ./common.sh@endlink
#
# @internal Notice that 'jvm/*.sh' have the relative path prefix './'
# attached to the front of the @@file directive.  This is to avoid an
# interesting sensitivity in Doxygen that got confused between
# 'jvm/filename.sh' and 'libjvm/filename.sh' and failed to produce
# the "File List" entry for each 'jvm/*.sh' build script.  By marking
# them './jvm/build.sh' et al, this behavior went away.  This same
# comment may be found in @link ./config.sh config.sh@endlink
#
#
# @todo  HARMONY-6-jvm-clean.sh-1 A Windows .BAT version of this
#        script needs to be written
#
#
# @section Control
#
# \$URL$
#
# \$Id$
#
# Copyright 2005 The Apache Software Foundation
# or its licensors, as applicable.
#
# Licensed under the Apache License, Version 2.0 ("the License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing,
# software distributed under the License is distributed on an
# "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
# either express or implied.
#
# See the License for the specific language governing permissions
# and limitations under the License.
#
# @version \$LastChangedRevision$
#
# @date \$LastChangedDate$
#
# @author \$LastChangedBy$
#
#         Original code contributed by Daniel Lydick on 09/28/2005.
#
# @section Reference
#
#/ /* 
# (Use  #! and #/ with dox_filter.sh to fool Doxygen into
# parsing this non-source text file for the documentation set.
# Use the above open comment to force termination of parsing
# since it is not a Doxygen-style 'C' comment.)
#
#
###################################################################
#
# Script setup
#
. common.sh

###################################################################
#
# Remove output area.
#
chmod -R +w $TARGET_DIRECTORY
rm -rf $TARGET_DIRECTORY
rc=$?


###################################################################
#
# Done.
#
exit $rc

#
# EOF
