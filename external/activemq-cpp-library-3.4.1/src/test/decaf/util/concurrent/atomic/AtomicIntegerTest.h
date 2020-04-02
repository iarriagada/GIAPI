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

#ifndef _DECAF_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERTEST_H_
#define _DECAF_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERTEST_H_

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>

namespace decaf {
namespace util {
namespace concurrent {
namespace atomic {

    class AtomicIntegerTest : public CppUnit::TestFixture {

        CPPUNIT_TEST_SUITE( AtomicIntegerTest );
        CPPUNIT_TEST( testConstructor );
        CPPUNIT_TEST( testConstructor2 );
        CPPUNIT_TEST( testGetSet );
        CPPUNIT_TEST( testCompareAndSet );
        CPPUNIT_TEST( testCompareAndSetInMultipleThreads );
        CPPUNIT_TEST( testGetAndSet );
        CPPUNIT_TEST( testToString );
        CPPUNIT_TEST( testDoubleValue );
        CPPUNIT_TEST( testFloatValue );
        CPPUNIT_TEST( testLongValue );
        CPPUNIT_TEST( testIntValue );
        CPPUNIT_TEST( testIncrementAndGet );
        CPPUNIT_TEST( testDecrementAndGet );
        CPPUNIT_TEST( testAddAndGet );
        CPPUNIT_TEST( testGetAndIncrement );
        CPPUNIT_TEST( testGetAndDecrement );
        CPPUNIT_TEST( testGetAndAdd );
        CPPUNIT_TEST_SUITE_END();

    public:

        AtomicIntegerTest() {}
        virtual ~AtomicIntegerTest() {}

        void testConstructor();
        void testConstructor2();
        void testGetSet();
        void testCompareAndSet();
        void testCompareAndSetInMultipleThreads();
        void testGetAndSet();
        void testToString();
        void testDoubleValue();
        void testFloatValue();
        void testLongValue();
        void testIntValue();
        void testIncrementAndGet();
        void testDecrementAndGet();
        void testAddAndGet();
        void testGetAndIncrement();
        void testGetAndDecrement();
        void testGetAndAdd();

    };

}}}}

#endif /*_DECAF_UTIL_CONCURRENT_ATOMIC_ATOMICINTEGERTEST_H_*/
