/*
 * CreateTx_tests.h
 *
 *  Created on: 2015-04-22
 *      Author: frank
 */

#ifndef CREATETX_TESTS_H_
#define CREATETX_TESTS_H_
#include "CycleTestBase.h"
#include "../test/systestbase.h"
#include "../rpc/rpcclient.h"
#include "tx.h"
#include <vector>
using namespace std;

class CCreateTxTest : public CycleTestBase{
public:
	CCreateTxTest();
	 ~CCreateTxTest(){};
	 bool  CreateTx(int nTxType);
	 static bool SelectAccounts();
	 bool SelectOneAccount(string &selectAddr);
	 bool WaitComfirms();
	 void Initialize();
	 int Str2Int(string &strValue);
	 TEST_STATE Run();
private:
	 static vector<string> vAccount;
	 static  int conter ;
	 int nTxType;
	 int nNum;
	 int nStep ;
	 string sendhash;
	 string newAddr;

};
#endif /* CDARKANDANONY_H_ */