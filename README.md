# travis_qmake_gcc_cpp11_memcheck

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp11_memcheck.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp11_memcheck)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp11_memcheck.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp11_memcheck)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++11`
 * Libraries: `STL` only
 * Code coverage: none
 * Added tools: `memcheck`
 * Source: one single file, `main.cpp`

More complex builds:
 * Use of C++14: [travis_qmake_gcc_cpp14_memcheck](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_memcheck)

Less complex builds:
 * C++98: [travis_qmake_gcc_cpp98_memcheck](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_memcheck)
 * No memcheck: [travis_qmake_gcc_cpp11](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11)
