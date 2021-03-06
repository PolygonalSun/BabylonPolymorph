﻿/********************************************************
*                                                       *
*   Copyright (C) Microsoft. All rights reserved.       *
*                                                       *
********************************************************/
#pragma once

#include <memory>
#include <string>
#include <vector>

namespace Babylon
{
    namespace Transcoder
    {
        typedef std::unique_ptr<std::vector<std::string>> LineTokensPtr;
    }
}
