// OpenCppCoverage is an open source code coverage for C++.
// Copyright (C) 2014 OpenCppCoverage
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "stdafx.h"
#include "IDebugEventsHandler.hpp"

namespace CppCoverage
{
	//-------------------------------------------------------------------------
	void IDebugEventsHandler::OnCreateProcess(const CREATE_PROCESS_DEBUG_INFO&) 
	{
	}

	//-------------------------------------------------------------------------
	void IDebugEventsHandler::OnExitProcess(HANDLE hProcess, HANDLE hThread, const EXIT_PROCESS_DEBUG_INFO&)
	{
	}

	//-------------------------------------------------------------------------
	void IDebugEventsHandler::OnLoadDll(HANDLE hProcess, HANDLE hThread, const LOAD_DLL_DEBUG_INFO&)
	{
	}

	//-------------------------------------------------------------------------
	DWORD IDebugEventsHandler::OnException(HANDLE hProcess, HANDLE hThread, const EXCEPTION_DEBUG_INFO&)
	{ 
		return DBG_EXCEPTION_NOT_HANDLED; 
	}
}
