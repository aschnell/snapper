/*
 * Copyright (c) [2016-2021] SUSE LLC
 *
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, contact Novell, Inc.
 *
 * To contact Novell about this file by physical or electronic mail, you may
 * find current contact information at www.novell.com.
 */


#ifndef SNAPPER_RANGE_H
#define SNAPPER_RANGE_H


#include <string>
#include <ostream>


namespace snapper
{
    using namespace std;


    /*
     * Simple class to hold a range of two size_ts as min and max.
     */
    class Range
    {
    public:

	enum Value { MIN, MAX };

	Range(size_t value) : min(value), max(value) {}

	/**
	 * Uses the classic locale since the class is intended for config data.
	 */
	void parse(const string& s);

	size_t value(Value value) const { return value == MIN ? min : max; }

	bool is_degenerated() const { return min == max; }

	friend ostream& operator<<(ostream& s, const Range& range);

    private:

	size_t min;
	size_t max;

    };

}

#endif
