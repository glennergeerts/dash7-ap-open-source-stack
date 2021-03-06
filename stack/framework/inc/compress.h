/*! \file compress.h
 *

 *  \copyright (C) Copyright 2016 University of Antwerp and others (http://oss-7.cosys.be)
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \author philippe.nunes@cortus.com
 *
 */

/*!
 * \file compress.h
 * \addtogroup compress
 * \ingroup framework
 * @{
 * \brief Implements the compressed format
 *
 * The compressed format allows compressing a unit ranged from 0 to 507904 to 1 byte with variable resolution.
 *
 * It can be converted back to units using the formula T = (4^EXP)·(MANT).
 * \author philippe.nunes@cortus.com
 */

#ifndef COMPRESS_H_
#define COMPRESS_H_

#include <stdbool.h>
#include "math.h"

#define CT_DECOMPRESS(ct) (pow(4, ct >> 5) * (ct & 0b11111))

uint8_t compress_data(uint16_t value, bool ceil);

#endif /* COMPRESS_H_ */

/** @}*/
