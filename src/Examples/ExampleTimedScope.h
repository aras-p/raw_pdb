// Copyright 2011-2022, Molecular Matters GmbH <office@molecular-matters.com>
// See LICENSE.txt for licensing details (2-clause BSD License: https://opensource.org/licenses/BSD-2-Clause)

#include <chrono>


class TimedScope
{
public:
	explicit TimedScope(const char* scope);

	void Print(void) const;

private:
	const char* const m_scope;
	const std::chrono::high_resolution_clock::time_point m_begin;

	PDB_DISABLE_COPY_MOVE(TimedScope);
};