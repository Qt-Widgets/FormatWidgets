// copyright (c) 2019 hors<horsicq@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
#ifndef MSDOS_DEFS_H
#define MSDOS_DEFS_H

#include "../formatwidget.h"
#include "qmsdos.h"

namespace SMSDOS
{
    enum TYPE
    {
        TYPE_DOS_HEADER=0,
        __TYPE_size
    };
}

namespace N_DOS_HEADER
{
    enum DATA
    {
        e_magic=0,
        e_cblp,
        e_cp,
        e_crlc,
        e_cparhdr,
        e_minalloc,
        e_maxalloc,
        e_ss,
        e_sp,
        e_csum,
        e_ip,
        e_cs,
        e_lfarlc,
        e_ovno,
        e_res_0,
        e_res_1,
        e_res_2,
        e_res_3,
        e_oemid,
        e_oeminfo,
        e_res2_0,
        e_res2_1,
        e_res2_2,
        e_res2_3,
        e_res2_4,
        e_res2_5,
        e_res2_6,
        e_res2_7,
        e_res2_8,
        e_res2_9,
        e_lfanew,
        __data_size
    };

    extern const FormatWidget::HEADER_RECORD records[__data_size];
}

#endif // MSDOS_DEFS_H
