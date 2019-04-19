// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Bytecoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Bytecoin.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
struct CheckpointData {
  uint32_t index;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {  
  {       100, "0645a3e9cf7d6ea80d13236c57a923e399f3808556550cd16dc2d27fee4a63d8"},
  {      1000, "0964053481e81873294d64ead94cf641f47ddd7285304b250f6e422970ef2e33"},
  {      2000, "818a4bab551c7cd548be51d151393096bb0e908c96976d2e741bd4452ebb9ba4"},
  {      3000, "4623f4fee60eacd9b1a87e1d340777f332818b1922d9ca9ab932a3401accf55d"},
  {      5000, "43a341a0035eabf6c9f7c5e0788acb6f7fc2fd19832fc84f886208743c208de8"},
  {      7000, "bfb02d4d5e81181feb5cb17c2f2abaf3b0e1e562cd9f685c2302105a33cdae4a"},
  {     20000, "818a4bab551c7cd548be51d151393096bb0e908c96976d2e741bd4452ebb9ba4"},
  {     30000, "7d45d07ce7d6b3681c4f090b4f815eb08310d9e421b69d7c3c863b63c49cb9e4"},
  {     40000, "275a9f53cce2a38ccb24ab781ea791260e99ab3dfe8a82d789b379713b7635db"},
};
}
