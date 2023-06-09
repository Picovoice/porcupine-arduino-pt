
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = olá computador
static const uint8_t KEYWORD_ARRAY[] = {
        0xe5, 0x2b, 0xd9, 0x42, 0x17, 0x72, 0xbb, 0xf0, 0x38, 0x86, 0x9a, 0xd2, 0xfd, 0x6d, 0x37, 0x35, 0x21, 0xe8,
        0x38, 0xcd, 0xf2, 0xd4, 0x95, 0x62, 0x4f, 0x44, 0x0e, 0xcc, 0x42, 0x95, 0xd5, 0x89, 0x04, 0x32, 0x59, 0x25,
        0x09, 0x42, 0x87, 0x11, 0x6e, 0x45, 0xbf, 0x05, 0xf3, 0x41, 0x49, 0x24, 0xf6, 0xb5, 0x1f, 0x23, 0xd2, 0x4b,
        0xad, 0x3f, 0xb3, 0x4a, 0xd7, 0x02, 0xb5, 0x35, 0x08, 0xb2, 0x64, 0x80, 0x0f, 0x6a, 0x8f, 0xa0, 0xa4, 0x99,
        0x75, 0xcf, 0xcd, 0xcd, 0xda, 0x2d, 0x44, 0x40, 0x59, 0x36, 0x7b, 0x31, 0xc2, 0xee, 0xab, 0x61, 0x34, 0x1a,
        0x5b, 0xbb, 0x12, 0xa1, 0x30, 0xcd, 0x8f, 0xb5, 0xb9, 0x8f, 0x16, 0x71, 0xa7, 0x24, 0x15, 0x70, 0x7e, 0xb5,
        0x76, 0x55, 0xfd, 0x63, 0xf0, 0x48, 0x16, 0xe7, 0x9c, 0x73, 0xcd, 0xe6, 0xab, 0xf2, 0x6f, 0x06, 0xc5, 0x9c,
        0x4a, 0x68, 0x75, 0x7b, 0xe5, 0x45, 0x47, 0xd2, 0x1a, 0x0a, 0x41, 0x09, 0xd7, 0x37, 0x3a, 0xd4, 0x17, 0x02,
        0xe6, 0xe2, 0xa5, 0x0f, 0x3c, 0x57, 0x7d, 0xa8, 0xb7, 0x8d, 0xd0, 0x0e, 0x29, 0xda, 0x90, 0xda, 0x56, 0x1f,
        0x7d, 0xb3, 0xa4, 0x7d, 0x72, 0x88, 0xe0, 0x54, 0xad, 0x58, 0xf8, 0xc0, 0xbd, 0xef, 0xb4, 0xc9, 0x9b, 0x38,
        0x57, 0x2c, 0xdf, 0x4e, 0x09, 0x25, 0xb6, 0x5f, 0x00, 0x93, 0x8a, 0x58, 0xc3, 0xcf, 0x82, 0x7c, 0x18, 0xf1,
        0x47, 0x68, 0xc9, 0xc4, 0xcd, 0x7a, 0xed, 0x7d, 0x4f, 0x32, 0x7c, 0x59, 0x37, 0xac, 0x54, 0x18, 0x72, 0x57,
        0x4d, 0x1b, 0x8f, 0xdb, 0x5a, 0xfa, 0xda, 0xa1, 0x04, 0x3e, 0xea, 0x59, 0x95, 0xc1, 0x65, 0xee, 0xc3, 0xf3,
        0x96, 0x80, 0x68, 0x0f, 0x6b, 0x94, 0x51, 0x2e, 0xfe, 0x55, 0x94, 0x1f, 0x1f, 0x5b, 0x71, 0x21, 0xba, 0xa1,
        0x41, 0x21, 0xdb, 0x32, 0x26, 0xb6, 0x43, 0xe6, 0x96, 0x2c, 0xd7, 0x00, 0x35, 0x37, 0xfc, 0x44, 0x02, 0xb2,
        0xa9, 0x5d, 0x82, 0x0b, 0xb4, 0xcd, 0xc1, 0x3f, 0x9d, 0x95, 0x25, 0x5c, 0x04, 0x3f, 0x6f, 0x47, 0x21, 0x21,
        0xe8, 0xf8, 0x29, 0x34, 0x3d, 0x91, 0xbc, 0x20, 0x18, 0x21, 0x6d, 0x93, 0xac, 0x20, 0xe3, 0xc4, 0x25, 0xeb,
        0x09, 0x97, 0xa9, 0x71, 0xa3, 0x89, 0xc7, 0xfc, 0x38, 0x30, 0x15, 0x47, 0x18, 0x30, 0x5f, 0xd2, 0x87, 0x89,
        0x0a, 0x61, 0x84, 0x04, 0x23, 0x38, 0x26, 0xb0, 0x93, 0xa8, 0x74, 0x1e, 0x73, 0x38, 0xcb, 0x31, 0x88, 0xe4,
        0x6d, 0x67, 0x46, 0x5e, 0x17, 0x04, 0x74, 0x8f, 0xa8, 0xf9, 0x8a, 0x5b, 0x9b, 0x36, 0x64, 0x80, 0xc5, 0xb2,
        0x7f, 0xb3, 0xfa, 0xc9, 0xdb, 0x67, 0xc9, 0xa5, 0xdc, 0xf2, 0xc6, 0x86, 0xb9, 0x83, 0xb3, 0xb0, 0x18, 0x6e,
        0xb9, 0xe8, 0x95, 0x49, 0x8c, 0x1f, 0x67, 0xc7, 0xb4, 0x95, 0x44, 0x65, 0xd7, 0xde, 0xf0, 0x4f, 0xce, 0xe2,
        0x76, 0xf2, 0xc6, 0x7c, 0xc9, 0x3b, 0x29, 0x04, 0x73, 0x70, 0x4b, 0x91, 0x8e, 0x12, 0x61, 0x54, 0xf8, 0xe8,
        0x29, 0x2f, 0xd1, 0xac, 0xc1, 0xe4, 0xa1, 0x17, 0x34, 0x8d, 0x48, 0xdf, 0xa3, 0xb6, 0xfb, 0xf5, 0x98, 0xba,
        0xa1, 0x17, 0x74, 0xbe, 0x29, 0x50, 0xc2, 0xe3, 0xc9, 0x6f, 0xfe, 0xf0, 0xc1, 0x7d, 0x4d, 0x10, 0x66, 0x6c,
        0x4d, 0x83, 0x99, 0x5c, 0x8d, 0xa9, 0x8c, 0xeb, 0xbd, 0xf4, 0x19, 0x33, 0xc9, 0xfb, 0xb1, 0x74, 0xc2, 0xa9,
        0x75, 0x8f, 0x45, 0x0a, 0x4a, 0x39, 0xed, 0xaa, 0xac, 0x39, 0xc9, 0xef, 0x57, 0xe1, 0x8e, 0xf4, 0xe0, 0x01,
        0xde, 0x84, 0x7d, 0x54, 0x39, 0x43, 0x8e, 0x27, 0x5e, 0x56, 0x4a, 0xab, 0x46, 0xc9, 0xbc, 0x3a, 0x06, 0xf7,
        0x65, 0x74, 0x29, 0x2c, 0x4c, 0xac, 0xc7, 0xad, 0x66, 0x56, 0xbb, 0xa8, 0xcc, 0x2b, 0xaa, 0x87, 0x48, 0x93,
        0x7f, 0x3d, 0xdd, 0x9b, 0x38, 0xe4, 0xb0, 0x22, 0x43, 0xa8, 0x59, 0x31, 0x63, 0xb0, 0xb1, 0x01, 0xe0, 0xa4,
        0x20, 0x14, 0xe9, 0x1f, 0x59, 0x5f, 0x4a, 0x87, 0xfa, 0x81, 0x8f, 0x82, 0xd5, 0x5d, 0x96, 0xf5, 0xe7, 0x9d,
        0x38, 0x49, 0x80, 0x65, 0x51, 0x09, 0x59, 0x0e, 0x71, 0x5e, 0x77, 0xce, 0xd7, 0xa7, 0x8a, 0x19, 0x94, 0x5f,
        0xdc, 0x73, 0x9f, 0x31, 0xed, 0xf2, 0x29, 0x7c, 0xc6, 0xf2, 0xb4, 0x59, 0xf5, 0x16, 0x80, 0xef, 0x3d, 0x14,
        0xd6, 0xa9, 0x03, 0x62, 0xee, 0x91, 0x4b, 0x84, 0x0d, 0xe0
};



#endif // PARAMS_H
    