#!/bin/sh
echo copy the libmemenv.a and libleveldb.a to leveldb/
echo copy autogen-dacrs-man.sh to topdir
cp -rf ./makefile_liblua ../src/
cp -rf ./liblua53.a ../src/
cp -rf ./libmemenv.a ../src/leveldb
cp -rf ./libleveldb.a ../src/leveldb
cp -rf ./autogen-dacrs-man.sh ../
cp -rf ./genbuild.sh ../share/
