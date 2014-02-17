#ifndef CPPCOVERAGE_PROCESS_HEADER_GARD
#define CPPCOVERAGE_PROCESS_HEADER_GARD

#include <Windows.h>
#include <boost/optional.hpp>

#include "Export.hpp"
#include "StartInfo.hpp"

namespace CppCoverage
{
	class CPPCOVERAGE_DLL Process
	{
	public:
		Process(const StartInfo& startInfo);
		~Process();
		
		void Start(DWORD creationFlags);

	private:
		Process(const Process&) = delete;
		Process& operator=(const Process&) = delete;

	private:
		boost::optional<PROCESS_INFORMATION> processInformation_;
		const StartInfo startInfo_;
	};
}

#endif