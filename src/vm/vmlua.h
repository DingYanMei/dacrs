#ifndef VMLUA_H_
#define VMLUA_H_

#include <cstdio>

#include <vector>
#include <string>
#include <memory>



using namespace std;
class CVmRunEvn;




class CVmlua {
public:
	CVmlua(const vector<unsigned char> & vRom,const vector<unsigned char> &InputData);
	~CVmlua();
	int64_t run(uint64_t maxstep,CVmRunEvn *pVmScriptRun);
    static tuple<bool,string> syntaxcheck(bool bFile, const char* filePathOrContent, int len);
   
private:
	unsigned char m_ExRam[65536];  //存放的是合约交易的contact内容
	unsigned char m_ExeFile[65536];//可执行文件 IpboApp.lua

};


#endif
