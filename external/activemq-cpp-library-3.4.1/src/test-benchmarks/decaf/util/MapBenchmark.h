/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _DECAF_UTIL_MAPBENCHMARK_H_
#define _DECAF_UTIL_MAPBENCHMARK_H_

#include <benchmark/BenchmarkBase.h>
#include <decaf/util/StlMap.h>

namespace decaf{
namespace util{

    class MapBenchmark :
        public benchmark::BenchmarkBase<
            decaf::util::MapBenchmark, Map<int, int> >
    {
    private:

        StlMap< std::string, std::string> stringMap;
        StlMap<int, int> intMap;

    public:

        MapBenchmark();
        virtual ~MapBenchmark() {}

        virtual void run();
    };

}}

#endif /*_DECAF_UTIL_MAPBENCHMARK_H_*/
