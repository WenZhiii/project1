name: C/C++ Build and Run

on: [push, pull_request]

jobs:
  build:
    runs-on: ubuntu-latest

    steps:
    - name: Check out repository
      uses: actions/checkout@v2

    - name: Install build essentials
      run: sudo apt-get install build-essential -y

    - name: Build
      run: g++ -o hello hello.cpp

    - name: Run
      run: ./hello
