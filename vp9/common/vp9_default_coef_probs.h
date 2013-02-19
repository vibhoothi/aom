/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
*/


/*Generated file, included by vp9_entropy.c*/

static const vp9_coeff_probs default_coef_probs_4x4[BLOCK_TYPES] = {
  { /* block Type 0 */
    { /* Intra */
      { /* Coeff Band 0 */
        { 208,  26, 124, 168, 135, 159, 164, 134, 213, 172, 169 },
        { 112,  36, 114, 171, 139, 161, 165, 138, 208, 167, 168 },
        {  21,  27,  55, 109, 115, 147, 126, 121, 190, 151, 167 }
      }, { /* Coeff Band 1 */
        {   1,  94, 156, 203, 156, 169, 200, 154, 230, 184, 206 },
        {  85,  91, 161, 202, 155, 170, 198, 151, 233, 184, 214 },
        {  57,  78, 131, 203, 157, 169, 198, 152, 231, 184, 214 },
        {  36,  68, 104, 191, 135, 164, 199, 153, 231, 183, 208 },
        {  16,  51,  68, 154, 115, 150, 192, 140, 231, 184, 210 },
        {   5,  31,  32,  83, 100, 140, 121, 115, 192, 153, 182 }
      }, { /* Coeff Band 2 */
        {   1,  72, 146, 177, 149, 168, 157, 135, 200, 159, 184 },
        {  68,  72, 148, 180, 153, 166, 157, 139, 198, 156, 187 },
        {  29,  68, 112, 178, 150, 162, 159, 144, 191, 153, 183 },
        {  12,  57,  83, 164, 125, 157, 162, 141, 186, 156, 178 },
        {   4,  42,  52, 125, 108, 145, 161, 130, 190, 166, 170 },
        {   1,  28,  25,  67,  98, 138,  99, 110, 175, 143, 167 }
      }, { /* Coeff Band 3 */
        {   1, 113, 176, 199, 161, 171, 167, 146, 188, 154, 194 },
        {  75,  97, 166, 206, 161, 172, 188, 156, 203, 164, 208 },
        {  31,  83, 131, 200, 152, 168, 191, 157, 200, 169, 206 },
        {  18,  70,  99, 185, 131, 162, 194, 153, 202, 177, 201 },
        {   8,  55,  70, 146, 115, 150, 187, 136, 215, 188, 191 },
        {   2,  46,  42,  87, 109, 144, 111, 117, 185, 148, 182 }
      }, { /* Coeff Band 4 */
        {   1, 128, 191, 217, 169, 174, 203, 163, 201, 178, 196 },
        {  73, 105, 177, 220, 168, 175, 212, 167, 222, 185, 212 },
        {  22,  82, 135, 212, 157, 172, 212, 165, 220, 187, 213 },
        {  10,  65,  95, 194, 133, 162, 210, 160, 223, 194, 208 },
        {   5,  45,  59, 145, 108, 147, 196, 142, 230, 196, 197 },
        {   2,  30,  29,  76,  98, 140, 119, 112, 205, 158, 185 }
      }, { /* Coeff Band 5 */
        {   1, 101, 208, 232, 179, 179, 236, 181, 243, 216, 210 },
        { 110,  84, 194, 231, 177, 180, 233, 177, 246, 213, 224 },
        {  50,  68, 148, 224, 166, 177, 229, 173, 245, 209, 215 },
        {  29,  55, 105, 207, 139, 168, 224, 167, 244, 207, 225 },
        {  17,  38,  65, 157, 111, 148, 206, 148, 242, 202, 215 },
        {   7,  18,  28,  76,  96, 138, 125, 111, 219, 162, 206 }
      }
    }, { /* Inter */
      { /* Coeff Band 0 */
        { 221, 105, 211, 220, 170, 171, 233, 173, 241, 200, 201 },
        { 144, 102, 184, 206, 160, 167, 209, 163, 227, 186, 193 },
        {  51,  84, 132, 174, 146, 161, 165, 144, 190, 163, 175 }
      }, { /* Coeff Band 1 */
        {   1, 167, 216, 217, 170, 171, 217, 178, 213, 176, 216 },
        {  89, 146, 210, 227, 185, 182, 198, 165, 203, 166, 216 },
        {  37, 117, 171, 232, 185, 185, 197, 175, 191, 159, 212 },
        {  30,  99, 128, 224, 150, 177, 210, 179, 183, 162, 211 },
        {  25,  84,  92, 173, 121, 150, 222, 161, 201, 199, 201 },
        {   8,  56,  65, 121, 119, 148, 150, 124, 198, 170, 191 }
      }, { /* Coeff Band 2 */
        {   1, 133, 198, 206, 166, 172, 188, 157, 211, 167, 206 },
        {  62, 122, 178, 203, 170, 174, 160, 151, 193, 148, 203 },
        {  19,  94, 126, 195, 156, 172, 156, 159, 172, 135, 199 },
        {  15,  78,  89, 173, 122, 158, 163, 155, 153, 138, 191 },
        {  13,  63,  61, 120, 109, 141, 167, 138, 159, 174, 174 },
        {   1,  39,  44,  77, 113, 145,  92, 116, 162, 144, 166 }
      }, { /* Coeff Band 3 */
        {   1, 157, 214, 222, 176, 176, 208, 168, 213, 174, 219 },
        {  80, 134, 199, 223, 180, 181, 191, 162, 200, 161, 218 },
        {  27, 104, 155, 219, 168, 177, 192, 168, 186, 154, 214 },
        {  23,  87, 114, 203, 138, 166, 199, 165, 178, 163, 210 },
        {  16,  74,  84, 153, 118, 150, 198, 144, 194, 189, 198 },
        {   1,  50,  64, 110, 121, 149, 118, 125, 177, 149, 194 }
      }, { /* Coeff Band 4 */
        {   1, 164, 216, 229, 181, 178, 223, 172, 228, 197, 221 },
        {  86, 140, 196, 225, 176, 179, 215, 169, 220, 189, 222 },
        {  30, 107, 149, 217, 160, 175, 216, 169, 212, 187, 219 },
        {  24,  85, 109, 197, 133, 161, 215, 162, 211, 195, 214 },
        {  17,  67,  76, 150, 114, 148, 202, 144, 222, 203, 204 },
        {   3,  46,  55, 100, 111, 144, 140, 117, 215, 173, 197 }
      }, { /* Coeff Band 5 */
        {   1, 120, 224, 237, 184, 181, 241, 188, 249, 228, 231 },
        { 139,  95, 209, 236, 184, 184, 237, 182, 247, 224, 230 },
        {  67,  79, 160, 232, 172, 181, 236, 182, 246, 219, 233 },
        {  48,  65, 120, 216, 141, 168, 234, 177, 245, 219, 229 },
        {  32,  52,  85, 171, 119, 151, 222, 156, 246, 216, 224 },
        {  13,  39,  58, 112, 111, 144, 157, 121, 229, 182, 211 }
      }
    }
  }, { /* block Type 1 */
    { /* Intra */
      { /* Coeff Band 0 */
        { 220,  21, 181, 217, 157, 178, 234, 145, 248, 236, 173 },
        { 125,  26, 143, 206, 148, 172, 213, 151, 240, 207, 199 },
        {  44,  28,  84, 150, 125, 154, 171, 133, 225, 179, 192 }
      }, { /* Coeff Band 1 */
        {   1, 137, 209, 231, 181, 181, 223, 173, 245, 202, 236 },
        { 147, 130, 214, 232, 181, 183, 224, 172, 245, 204, 220 },
        { 111, 112, 183, 234, 188, 186, 223, 175, 246, 202, 237 },
        {  89, 100, 159, 227, 163, 178, 222, 173, 246, 203, 220 },
        {  55,  80, 124, 201, 142, 166, 219, 163, 246, 205, 223 },
        {  23,  45,  70, 130, 119, 151, 157, 128, 224, 170, 207 }
      }, { /* Coeff Band 2 */
        {   1,  62, 195, 228, 177, 179, 220, 170, 244, 201, 226 },
        {  87,  84, 172, 218, 165, 176, 212, 163, 242, 199, 228 },
        {  28,  87, 124, 206, 154, 168, 209, 159, 241, 195, 227 },
        {  10,  72,  94, 181, 127, 159, 200, 150, 240, 193, 226 },
        {   4,  47,  58, 129, 109, 145, 176, 132, 237, 183, 222 },
        {   1,  24,  26,  65,  95, 137, 109, 104, 210, 151, 197 }
      }, { /* Coeff Band 3 */
        {   1, 127, 206, 236, 183, 183, 230, 180, 247, 211, 234 },
        { 113, 118, 195, 228, 174, 180, 225, 172, 248, 208, 231 },
        {  43, 109, 162, 221, 166, 175, 220, 168, 248, 207, 232 },
        {  17,  88, 126, 208, 152, 171, 214, 161, 247, 203, 236 },
        {   5,  60,  84, 172, 125, 154, 199, 149, 244, 194, 237 },
        {   1,  29,  41,  99, 104, 147, 146, 116, 227, 170, 223 }
      }, { /* Coeff Band 4 */
        {   1, 151, 222, 239, 193, 188, 231, 177, 250, 218, 241 },
        { 114, 126, 203, 230, 180, 181, 226, 171, 249, 212, 246 },
        {  51,  97, 175, 218, 166, 176, 220, 165, 250, 211, 231 },
        {  23,  77, 136, 204, 155, 169, 213, 157, 248, 205, 241 },
        {   6,  50,  85, 169, 126, 158, 197, 146, 245, 197, 243 },
        {   1,  21,  37,  97, 101, 146, 146, 119, 232, 169, 232 }
      }, { /* Coeff Band 5 */
        {   1, 117, 230, 239, 194, 187, 233, 179, 252, 222, 248 },
        { 148, 109, 210, 232, 184, 182, 227, 173, 252, 211, 244 },
        {  80,  84, 162, 222, 168, 178, 225, 167, 252, 207, 244 },
        {  43,  64, 122, 201, 142, 169, 218, 162, 251, 208, 254 },
        {  17,  41,  76, 155, 120, 154, 200, 141, 249, 204, 248 },
        {   5,  19,  35,  89,  99, 151, 140, 115, 241, 174, 244 }
      }
    }, { /* Inter */
      { /* Coeff Band 0 */
        { 240,  71, 232, 234, 178, 179, 246, 180, 251, 225, 232 },
        { 168,  71, 198, 225, 167, 173, 229, 173, 247, 211, 218 },
        {  75,  63, 144, 195, 150, 164, 192, 147, 245, 202, 213 }
      }, { /* Coeff Band 1 */
        {   1, 165, 237, 243, 186, 184, 247, 206, 255, 238, 255 },
        { 159, 149, 229, 241, 192, 183, 244, 194, 255, 237, 239 },
        { 110, 126, 195, 243, 196, 196, 239, 187, 255, 237, 242 },
        {  89, 114, 170, 237, 168, 181, 239, 192, 254, 232, 241 },
        {  54,  96, 145, 210, 151, 166, 237, 173, 253, 234, 249 },
        {  17,  65, 108, 187, 140, 165, 194, 148, 244, 199, 227 }
      }, { /* Coeff Band 2 */
        {   1, 124, 227, 239, 183, 184, 240, 195, 249, 224, 240 },
        { 112, 132, 206, 235, 183, 184, 232, 180, 246, 220, 234 },
        {  36, 116, 161, 228, 170, 180, 229, 176, 244, 218, 239 },
        {  22, 107, 126, 210, 139, 167, 225, 169, 244, 218, 229 },
        {   9,  82,  90, 163, 122, 151, 210, 149, 246, 212, 227 },
        {   1,  43,  51, 102, 105, 144, 152, 117, 234, 182, 213 }
      }, { /* Coeff Band 3 */
        {   1, 160, 234, 244, 195, 188, 244, 197, 251, 231, 250 },
        { 119, 142, 220, 241, 192, 189, 241, 188, 251, 229, 243 },
        {  38, 110, 180, 238, 183, 185, 238, 185, 251, 227, 246 },
        {  27,  95, 130, 229, 164, 181, 234, 178, 251, 223, 233 },
        {  13,  79,  97, 185, 125, 153, 223, 164, 250, 217, 238 },
        {   1,  45,  57, 110, 111, 143, 164, 119, 235, 183, 220 }
      }, { /* Coeff Band 4 */
        {   1, 166, 239, 247, 207, 196, 244, 198, 251, 225, 245 },
        { 119, 146, 224, 244, 199, 192, 240, 192, 251, 223, 240 },
        {  46, 108, 189, 237, 180, 191, 236, 186, 249, 218, 248 },
        {  29,  89, 154, 223, 165, 177, 228, 173, 250, 213, 224 },
        {   8,  63, 104, 189, 139, 163, 207, 154, 246, 200, 241 },
        {   1,  27,  40, 103, 102, 144, 146, 118, 230, 165, 223 }
      }, { /* Coeff Band 5 */
        {   1, 131, 242, 247, 207, 193, 244, 199, 251, 225, 248 },
        { 150, 118, 231, 244, 202, 191, 239, 191, 252, 214, 241 },
        {  79,  98, 188, 236, 185, 186, 232, 182, 251, 212, 249 },
        {  55,  80, 145, 217, 154, 174, 222, 172, 250, 204, 253 },
        {  27,  56,  94, 162, 128, 153, 198, 143, 248, 199, 240 },
        {   4,  19,  33,  77,  98, 144, 129, 110, 237, 167, 241 }
      }
    }
  }
};
static const vp9_coeff_probs default_coef_probs_8x8[BLOCK_TYPES] = {
  { /* block Type 0 */
    { /* Intra */
      { /* Coeff Band 0 */
        { 158,  29, 127, 187, 147, 164, 183, 146, 227, 188, 162 },
        {  74,  36, 101, 162, 138, 162, 154, 134, 206, 165, 167 },
        {  15,  28,  56, 109, 119, 151, 122, 120, 190, 151, 164 }
      }, { /* Coeff Band 1 */
        {   1, 129, 178, 205, 163, 170, 200, 152, 236, 185, 215 },
        {  61, 129, 178, 205, 162, 170, 201, 152, 237, 189, 212 },
        {  42, 113, 161, 203, 159, 168, 200, 153, 237, 188, 212 },
        {  30,  91, 129, 196, 149, 166, 201, 152, 236, 186, 213 },
        {  12,  63,  86, 169, 126, 155, 195, 145, 236, 187, 213 },
        {   6,  34,  33,  89, 100, 139, 132, 115, 206, 157, 183 }
      }, { /* Coeff Band 2 */
        {   1,  75, 147, 182, 152, 162, 189, 141, 223, 179, 198 },
        {  36,  71, 125, 184, 141, 161, 204, 147, 241, 200, 202 },
        {  10,  56,  83, 163, 129, 153, 194, 140, 241, 194, 215 },
        {   6,  44,  59, 139, 110, 146, 178, 131, 237, 186, 219 },
        {   5,  35,  35,  96, 101, 140, 152, 117, 227, 170, 210 },
        {   2,  25,  14,  46,  88, 129,  90,  99, 186, 138, 173 }
      }, { /* Coeff Band 3 */
        {   1, 135, 179, 191, 161, 166, 198, 136, 234, 184, 215 },
        {  55, 116, 171, 216, 163, 174, 214, 163, 232, 196, 201 },
        {  17,  89, 134, 205, 153, 166, 214, 159, 241, 200, 209 },
        {   9,  69,  98, 187, 132, 159, 206, 149, 243, 198, 215 },
        {   9,  53,  58, 142, 113, 151, 189, 135, 240, 187, 219 },
        {   3,  36,  23,  69,  90, 133, 121, 109, 206, 155, 183 }
      }, { /* Coeff Band 4 */
        {   1, 163, 194, 208, 171, 171, 214, 140, 240, 191, 227 },
        {  45, 129, 180, 226, 172, 180, 216, 169, 229, 186, 224 },
        {  13,  94, 138, 216, 160, 171, 219, 167, 238, 198, 217 },
        {  13,  72,  99, 196, 131, 160, 213, 156, 243, 201, 213 },
        {  18,  62,  54, 136, 109, 149, 197, 132, 242, 193, 212 },
        {   5,  40,  25,  60,  92, 133, 111, 105, 200, 150, 179 }
      }, { /* Coeff Band 5 */
        {   1, 187, 223, 230, 197, 185, 216, 139, 241, 174, 241 },
        {  58, 144, 205, 236, 189, 188, 209, 168, 231, 172, 234 },
        {  18, 104, 160, 226, 171, 180, 211, 170, 234, 180, 230 },
        {  11,  76, 115, 205, 143, 166, 205, 161, 234, 182, 218 },
        {  14,  66,  66, 138, 116, 150, 192, 128, 231, 180, 204 },
        {   1,  35,  32,  61, 104, 140,  89, 105, 187, 138, 171 }
      }
    }, { /* Inter */
      { /* Coeff Band 0 */
        { 177, 107, 211, 210, 163, 167, 237, 156, 238, 209, 204 },
        { 119, 101, 183, 200, 161, 168, 215, 148, 234, 191, 204 },
        {  39,  81, 127, 173, 144, 162, 182, 137, 226, 176, 202 }
      }, { /* Coeff Band 1 */
        {   1, 175, 199, 199, 161, 158, 242, 141, 254, 226, 249 },
        {  89, 154, 205, 213, 178, 172, 235, 138, 254, 221, 245 },
        {  32, 123, 180, 231, 183, 185, 229, 158, 253, 216, 237 },
        {  23, 102, 134, 226, 155, 177, 231, 175, 253, 215, 244 },
        {  20,  88,  95, 176, 119, 151, 228, 154, 253, 218, 240 },
        {   7,  54,  64, 120, 115, 146, 168, 119, 238, 186, 212 }
      }, { /* Coeff Band 2 */
        {   1, 151, 196, 204, 163, 163, 238, 144, 252, 219, 235 },
        {  43, 128, 179, 218, 171, 175, 227, 152, 251, 214, 231 },
        {  15,  94, 126, 216, 158, 174, 223, 165, 250, 211, 231 },
        {  17,  82,  90, 190, 120, 157, 219, 160, 249, 209, 228 },
        {  15,  87,  66, 123, 104, 139, 201, 130, 247, 202, 228 },
        {   1,  43,  35,  70,  98, 134, 134, 105, 226, 168, 203 }
      }, { /* Coeff Band 3 */
        {   1, 172, 203, 207, 167, 163, 242, 146, 254, 225, 243 },
        {  52, 139, 194, 224, 179, 179, 232, 153, 253, 219, 237 },
        {  19, 102, 148, 225, 166, 180, 227, 170, 252, 217, 236 },
        {  24,  87, 105, 205, 132, 161, 225, 167, 252, 215, 235 },
        {  23,  90,  76, 140, 108, 144, 213, 138, 251, 211, 235 },
        {   2,  42,  39,  80,  97, 134, 151, 109, 236, 180, 216 }
      }, { /* Coeff Band 4 */
        {   1, 183, 216, 216, 178, 168, 245, 145, 255, 226, 245 },
        {  48, 149, 203, 231, 186, 185, 233, 155, 254, 220, 243 },
        {  20, 108, 154, 227, 170, 181, 227, 169, 253, 219, 240 },
        {  32,  87, 109, 205, 136, 163, 223, 166, 253, 217, 241 },
        {  33,  91,  76, 139, 110, 144, 212, 135, 252, 212, 241 },
        {   2,  39,  39,  83,  99, 136, 150, 108, 239, 181, 226 }
      }, { /* Coeff Band 5 */
        {   1, 196, 231, 239, 202, 187, 244, 160, 254, 222, 242 },
        {  60, 151, 213, 240, 193, 191, 236, 175, 254, 220, 242 },
        {  13, 107, 164, 231, 173, 181, 232, 177, 253, 219, 240 },
        {   9,  78, 118, 210, 145, 169, 227, 169, 253, 218, 242 },
        {  18,  65,  76, 160, 117, 151, 210, 144, 251, 210, 239 },
        {   1,  28,  38,  92, 101, 140, 148, 113, 237, 177, 227 }
      }
    }
  }, { /* block Type 1 */
    { /* Intra */
      { /* Coeff Band 0 */
        { 202,  29, 181, 221, 168, 177, 217, 162, 235, 202, 157 },
        { 117,  39, 146, 207, 155, 172, 203, 155, 236, 192, 208 },
        {  46,  40,  99, 171, 136, 161, 176, 140, 229, 177, 208 }
      }, { /* Coeff Band 1 */
        {   1, 138, 204, 227, 179, 181, 224, 161, 249, 203, 237 },
        { 116, 138, 209, 227, 179, 180, 222, 165, 248, 204, 241 },
        {  63, 112, 184, 227, 183, 178, 223, 167, 248, 206, 237 },
        {  47,  84, 140, 219, 163, 177, 223, 160, 249, 207, 241 },
        {  25,  53,  76, 179, 120, 156, 217, 152, 248, 205, 232 },
        {  10,  23,  29,  76,  91, 132, 145, 109, 228, 169, 214 }
      }, { /* Coeff Band 2 */
        {   1,  69, 198, 223, 179, 177, 225, 154, 251, 208, 227 },
        {  78,  78, 170, 223, 170, 179, 218, 162, 248, 203, 245 },
        {  26,  69, 117, 209, 154, 170, 215, 160, 249, 205, 239 },
        {  16,  54,  79, 180, 119, 156, 208, 151, 248, 201, 238 },
        {  12,  43,  45, 119, 102, 142, 186, 126, 245, 193, 236 },
        {   1,  24,  22,  60,  92, 133, 114,  99, 221, 154, 210 }
      }, { /* Coeff Band 3 */
        {   1, 135, 214, 222, 183, 178, 230, 144, 252, 208, 241 },
        { 107, 122, 201, 229, 181, 182, 221, 165, 250, 202, 243 },
        {  38, 100, 168, 221, 168, 176, 220, 166, 250, 208, 240 },
        {  21,  83, 125, 206, 149, 167, 217, 160, 250, 209, 238 },
        {  16,  65,  80, 164, 122, 156, 208, 139, 250, 206, 246 },
        {   3,  37,  43, 104, 103, 143, 156, 118, 237, 173, 227 }
      }, { /* Coeff Band 4 */
        {   1, 169, 223, 233, 193, 184, 234, 150, 254, 206, 243 },
        {  83, 140, 201, 233, 184, 185, 228, 168, 252, 203, 223 },
        {  19, 104, 158, 225, 168, 179, 228, 169, 253, 207, 248 },
        {  10,  76, 117, 209, 145, 168, 223, 166, 252, 210, 243 },
        {   8,  59,  79, 163, 119, 153, 213, 142, 250, 205, 230 },
        {   1,  31,  43, 100, 103, 144, 149, 116, 240, 171, 221 }
      }, { /* Coeff Band 5 */
        {   1, 190, 234, 247, 211, 197, 239, 172, 255, 208, 236 },
        {  65, 152, 218, 244, 199, 194, 236, 184, 252, 199, 249 },
        {  17, 109, 173, 237, 179, 186, 235, 183, 250, 205, 255 },
        {   6,  78, 127, 219, 153, 173, 231, 177, 251, 210, 249 },
        {   3,  56,  77, 172, 121, 157, 215, 152, 249, 209, 247 },
        {   1,  29,  38,  96,  97, 144, 152, 114, 239, 169, 243 }
      }
    }, { /* Inter */
      { /* Coeff Band 0 */
        { 223,  71, 225, 221, 176, 169, 242, 165, 248, 216, 201 },
        { 147,  79, 197, 215, 175, 172, 230, 154, 243, 203, 184 },
        {  69,  75, 152, 197, 158, 168, 203, 144, 231, 187, 177 }
      }, { /* Coeff Band 1 */
        {   1, 168, 219, 195, 168, 151, 249, 131, 255, 221, 255 },
        { 152, 156, 226, 210, 189, 173, 240, 121, 255, 215, 238 },
        {  82, 128, 198, 239, 201, 194, 220, 151, 254, 202, 251 },
        {  74, 107, 150, 236, 163, 187, 222, 177, 255, 204, 255 },
        {  59, 103, 120, 181, 125, 148, 232, 157, 255, 219, 245 },
        {  21,  63,  84, 129, 122, 150, 171, 118, 246, 196, 226 }
      }, { /* Coeff Band 2 */
        {   1, 133, 219, 202, 174, 158, 244, 133, 255, 214, 237 },
        { 101, 132, 204, 221, 187, 183, 225, 131, 253, 201, 247 },
        {  41, 107, 147, 228, 174, 187, 211, 162, 252, 201, 246 },
        {  40, 107, 107, 205, 129, 162, 213, 164, 252, 206, 232 },
        {  24, 140,  90, 122, 111, 141, 210, 127, 251, 208, 239 },
        {   1,  59,  55,  91, 111, 141, 144, 109, 241, 180, 226 }
      }, { /* Coeff Band 3 */
        {   1, 170, 226, 200, 179, 153, 245, 138, 255, 214, 241 },
        { 111, 149, 217, 226, 194, 186, 223, 137, 255, 211, 253 },
        {  40, 113, 174, 228, 180, 183, 211, 165, 255, 212, 247 },
        {  44, 101, 126, 210, 151, 167, 212, 161, 255, 217, 241 },
        {  43, 131, 103, 146, 119, 148, 211, 136, 254, 216, 250 },
        {   1,  57,  63, 112, 116, 145, 158, 115, 249, 193, 236 }
      }, { /* Coeff Band 4 */
        {   1, 186, 233, 216, 191, 163, 241, 143, 255, 210, 255 },
        {  91, 161, 214, 225, 190, 181, 224, 150, 255, 212, 253 },
        {  26, 117, 163, 220, 172, 180, 218, 148, 255, 215, 252 },
        {  27,  90, 122, 203, 143, 167, 212, 159, 255, 213, 255 },
        {  21,  98, 113, 163, 130, 153, 208, 141, 255, 215, 248 },
        {   1,  47,  66, 130, 118, 151, 167, 123, 252, 199, 235 }
      }, { /* Coeff Band 5 */
        {   1, 195, 236, 245, 211, 195, 238, 171, 255, 209, 248 },
        {  65, 156, 218, 245, 200, 196, 230, 185, 255, 212, 248 },
        {  13, 112, 172, 238, 180, 189, 231, 185, 255, 213, 250 },
        {   6,  83, 130, 224, 155, 177, 227, 180, 255, 214, 244 },
        {   5,  71,  91, 185, 133, 160, 214, 154, 254, 212, 248 },
        {   1,  45,  63, 128, 112, 147, 169, 129, 248, 190, 236 }
      }
    }
  }
};
static const vp9_coeff_probs default_coef_probs_16x16[BLOCK_TYPES] = {
  { /* block Type 0 */
    { /* Intra */
      { /* Coeff Band 0 */
        {  22,  27,  75, 145, 125, 152, 158, 133, 203, 164, 150 },
        {   6,  27,  63, 124, 120, 150, 135, 127, 190, 154, 152 },
        {   1,  19,  36,  82, 107, 143, 101, 114, 176, 140, 152 }
      }, { /* Coeff Band 1 */
        {   1, 104, 143, 189, 150, 164, 194, 146, 239, 191, 205 },
        {  49, 105, 143, 188, 149, 164, 194, 146, 238, 191, 204 },
        {  29,  96, 133, 186, 147, 163, 194, 146, 238, 192, 202 },
        {  14,  79, 112, 178, 139, 160, 193, 144, 237, 191, 205 },
        {   5,  50,  74, 151, 119, 150, 187, 137, 237, 190, 205 },
        {   1,  20,  29,  76,  98, 138, 116, 111, 197, 153, 168 }
      }, { /* Coeff Band 2 */
        {   1,  61, 124, 173, 145, 162, 176, 137, 234, 179, 218 },
        {  22,  56,  98, 158, 134, 157, 171, 133, 234, 178, 216 },
        {   7,  44,  70, 137, 122, 151, 162, 128, 232, 175, 214 },
        {   2,  33,  50, 114, 110, 146, 149, 121, 229, 169, 213 },
        {   1,  21,  32,  84, 100, 139, 127, 112, 220, 158, 207 },
        {   1,  11,  16,  46,  91, 133,  79, 100, 175, 133, 163 }
      }, { /* Coeff Band 3 */
        {   1, 121, 166, 205, 160, 170, 204, 153, 240, 195, 210 },
        {  34, 101, 146, 198, 153, 167, 202, 152, 239, 193, 213 },
        {   9,  78, 118, 187, 142, 163, 198, 148, 238, 192, 211 },
        {   3,  60,  90, 170, 130, 157, 192, 143, 237, 190, 210 },
        {   1,  39,  59, 138, 112, 148, 177, 132, 233, 183, 207 },
        {   1,  18,  28,  75,  96, 137, 117, 110, 199, 153, 173 }
      }, { /* Coeff Band 4 */
        {   1, 148, 183, 220, 169, 175, 217, 164, 244, 203, 216 },
        {  24, 115, 157, 211, 159, 171, 214, 160, 243, 201, 217 },
        {   3,  81, 120, 197, 145, 166, 209, 155, 243, 200, 216 },
        {   1,  56,  88, 176, 129, 158, 200, 147, 241, 196, 216 },
        {   1,  33,  53, 134, 108, 147, 178, 132, 236, 184, 213 },
        {   1,  13,  20,  62,  91, 135, 107, 106, 197, 148, 179 }
      }, { /* Coeff Band 5 */
        {   1, 195, 212, 238, 191, 187, 229, 176, 247, 210, 222 },
        {  22, 136, 185, 230, 176, 182, 226, 173, 247, 208, 219 },
        {   3,  88, 137, 215, 156, 173, 222, 167, 246, 207, 220 },
        {   1,  57,  94, 190, 133, 162, 213, 157, 245, 204, 217 },
        {   1,  30,  52, 138, 107, 147, 188, 135, 241, 193, 215 },
        {   1,  11,  19,  61,  89, 136, 110, 104, 203, 153, 175 }
      }
    }, { /* Inter */
      { /* Coeff Band 0 */
        {  27,  72, 214, 225, 182, 183, 188, 159, 196, 172, 138 },
        {  13,  69, 175, 209, 167, 173, 188, 152, 216, 174, 171 },
        {   5,  52, 103, 162, 138, 160, 159, 137, 202, 164, 167 }
      }, { /* Coeff Band 1 */
        {   1, 174, 218, 237, 187, 186, 229, 176, 247, 212, 225 },
        { 122, 158, 210, 236, 185, 185, 228, 174, 247, 210, 217 },
        {  48, 133, 188, 234, 182, 184, 228, 173, 247, 210, 229 },
        {  24, 109, 157, 227, 165, 179, 227, 172, 248, 211, 226 },
        {  12,  82, 114, 198, 137, 162, 223, 162, 247, 209, 220 },
        {   6,  49,  66, 127, 116, 148, 159, 125, 221, 175, 178 }
      }, { /* Coeff Band 2 */
        {   1, 151, 207, 229, 180, 181, 223, 168, 247, 210, 211 },
        {  40, 122, 175, 222, 170, 177, 220, 164, 245, 207, 209 },
        {   4,  84, 125, 207, 151, 169, 215, 159, 244, 205, 209 },
        {   1,  58,  89, 180, 129, 159, 206, 150, 243, 202, 204 },
        {   1,  35,  53, 131, 108, 145, 181, 130, 238, 192, 198 },
        {   1,  16,  24,  67,  95, 137, 109, 106, 192, 153, 155 }
      }, { /* Coeff Band 3 */
        {   1, 172, 215, 238, 189, 187, 231, 178, 248, 213, 210 },
        {  44, 136, 190, 233, 179, 183, 229, 175, 248, 212, 212 },
        {   4,  94, 144, 222, 161, 176, 226, 170, 247, 211, 212 },
        {   1,  66, 103, 201, 139, 165, 219, 161, 247, 208, 212 },
        {   1,  39,  61, 153, 111, 149, 199, 142, 243, 200, 210 },
        {   1,  16,  25,  74,  93, 136, 124, 109, 204, 160, 171 }
      }, { /* Coeff Band 4 */
        {   1, 185, 218, 241, 192, 190, 231, 180, 248, 213, 213 },
        {  32, 143, 191, 235, 181, 185, 229, 176, 248, 211, 215 },
        {   2,  97, 144, 223, 162, 177, 226, 171, 248, 210, 222 },
        {   1,  65, 102, 199, 138, 165, 218, 160, 247, 208, 214 },
        {   1,  35,  56, 145, 109, 147, 193, 137, 243, 198, 213 },
        {   1,  13,  21,  65,  91, 135, 115, 105, 205, 157, 179 }
      }, { /* Coeff Band 5 */
        {   1, 209, 222, 243, 199, 192, 233, 181, 249, 215, 228 },
        {  23, 147, 197, 237, 185, 187, 231, 177, 249, 214, 227 },
        {   1,  94, 146, 224, 163, 178, 228, 172, 249, 213, 229 },
        {   1,  60,  99, 197, 136, 164, 220, 161, 248, 210, 227 },
        {   1,  31,  54, 141, 107, 147, 194, 136, 246, 201, 226 },
        {   1,  12,  21,  65,  90, 135, 119, 104, 217, 159, 201 }
      }
    }
  }, { /* block Type 1 */
    { /* Intra */
      { /* Coeff Band 0 */
        { 198,  28, 192, 217, 170, 174, 201, 162, 219, 179, 159 },
        {  96,  36, 145, 198, 153, 167, 193, 153, 222, 180, 177 },
        {  31,  35,  89, 156, 131, 157, 166, 136, 214, 170, 178 }
      }, { /* Coeff Band 1 */
        {   1, 138, 202, 225, 174, 178, 218, 164, 243, 200, 201 },
        { 147, 134, 202, 223, 174, 177, 215, 162, 243, 204, 220 },
        {  65, 115, 179, 224, 176, 177, 215, 162, 243, 202, 227 },
        {  25,  86, 141, 217, 163, 177, 216, 159, 243, 201, 225 },
        {   6,  48,  79, 181, 125, 157, 209, 151, 244, 201, 212 },
        {   1,  16,  25,  77,  91, 134, 132, 112, 210, 162, 180 }
      }, { /* Coeff Band 2 */
        {   1,  78, 195, 222, 172, 177, 219, 162, 245, 205, 227 },
        {  67,  79, 154, 211, 158, 171, 212, 159, 243, 201, 222 },
        {  18,  63, 108, 192, 140, 163, 205, 152, 242, 197, 214 },
        {   6,  49,  77, 163, 121, 154, 192, 142, 239, 191, 216 },
        {   1,  34,  49, 112, 106, 143, 160, 122, 233, 178, 213 },
        {   1,  14,  20,  56,  93, 135,  94, 102, 189, 141, 170 }
      }, { /* Coeff Band 3 */
        {   1, 137, 210, 229, 182, 181, 223, 164, 247, 214, 201 },
        {  89, 123, 189, 226, 176, 180, 217, 165, 245, 207, 216 },
        {  24, 100, 155, 217, 162, 176, 215, 163, 242, 198, 215 },
        {   8,  78, 121, 199, 147, 167, 206, 155, 241, 198, 212 },
        {   2,  52,  81, 161, 125, 156, 185, 139, 236, 186, 207 },
        {   1,  22,  35,  88, 102, 141, 121, 116, 199, 153, 179 }
      }, { /* Coeff Band 4 */
        {   1, 169, 220, 239, 196, 191, 220, 173, 242, 201, 226 },
        {  64, 139, 195, 231, 183, 184, 215, 169, 240, 196, 211 },
        {  12, 103, 153, 217, 162, 174, 212, 163, 236, 195, 211 },
        {   3,  71, 109, 190, 141, 164, 202, 152, 240, 192, 220 },
        {   1,  38,  61, 139, 114, 149, 175, 133, 233, 183, 211 },
        {   1,  13,  22,  61,  93, 134, 101, 106, 194, 145, 185 }
      }, { /* Coeff Band 5 */
        {   1, 204, 220, 234, 193, 185, 220, 166, 247, 207, 237 },
        {  42, 139, 187, 221, 174, 177, 215, 161, 246, 201, 242 },
        {   5,  83, 132, 204, 152, 168, 212, 158, 246, 203, 225 },
        {   1,  48,  84, 175, 126, 157, 203, 148, 245, 199, 233 },
        {   1,  24,  46, 123, 103, 142, 178, 128, 243, 189, 235 },
        {   1,  10,  19,  58,  88, 134, 109, 101, 216, 151, 216 }
      }
    }, { /* Inter */
      { /* Coeff Band 0 */
        { 227,  36, 243, 237, 206, 186, 210, 157, 245, 195, 200 },
        { 144,  41, 214, 226, 190, 182, 207, 155, 238, 193, 177 },
        {  63,  37, 153, 199, 162, 169, 193, 145, 227, 187, 152 }
      }, { /* Coeff Band 1 */
        {   1, 170, 247, 248, 213, 201, 239, 188, 238, 203, 255 },
        { 214, 166, 242, 248, 212, 198, 236, 191, 221, 219, 199 },
        { 139, 148, 224, 247, 207, 197, 236, 189, 249, 241, 128 },
        { 102, 127, 195, 244, 190, 198, 235, 189, 239, 202, 228 },
        {  76, 106, 154, 227, 159, 176, 234, 182, 243, 216, 229 },
        {  52,  69,  93, 158, 125, 155, 173, 139, 225, 170, 209 }
      }, { /* Coeff Band 2 */
        {   1, 139, 241, 245, 205, 193, 230, 177, 239, 198, 183 },
        { 131, 139, 214, 240, 191, 189, 224, 181, 236, 203, 194 },
        {  32, 102, 157, 228, 167, 177, 221, 174, 235, 191, 194 },
        {  12,  75, 112, 201, 142, 163, 208, 161, 227, 180, 200 },
        {   2,  45,  66, 142, 119, 154, 178, 141, 220, 171, 213 },
        {   1,  15,  20,  56, 102, 151,  87, 104, 182, 136, 175 }
      }, { /* Coeff Band 3 */
        {   1, 174, 243, 248, 212, 201, 237, 194, 249, 207, 255 },
        { 134, 155, 223, 244, 200, 195, 230, 184, 248, 189, 233 },
        {  26, 115, 177, 235, 180, 185, 225, 176, 245, 198, 255 },
        {   8,  82, 129, 217, 156, 175, 220, 168, 243, 204, 228 },
        {   3,  48,  75, 165, 122, 155, 193, 145, 245, 189, 199 },
        {   1,  15,  27,  73, 101, 139, 117, 112, 212, 157, 209 }
      }, { /* Coeff Band 4 */
        {   1, 191, 244, 248, 214, 200, 229, 185, 249, 207, 255 },
        { 106, 167, 221, 242, 198, 192, 223, 178, 245, 202, 246 },
        {  13, 117, 169, 229, 175, 182, 220, 170, 244, 202, 226 },
        {   2,  74, 114, 203, 143, 170, 211, 160, 248, 199, 232 },
        {   1,  35,  58, 141, 111, 144, 184, 132, 244, 196, 239 },
        {   1,  12,  22,  66,  91, 138, 114, 102, 225, 156, 214 }
      }, { /* Coeff Band 5 */
        {   1, 220, 231, 246, 203, 196, 239, 188, 255, 212, 255 },
        {  42, 155, 203, 241, 189, 191, 235, 184, 253, 220, 255 },
        {   4,  95, 151, 230, 167, 182, 234, 178, 252, 217, 243 },
        {   1,  61, 105, 206, 140, 168, 226, 167, 250, 215, 242 },
        {   1,  31,  60, 151, 109, 148, 204, 142, 250, 208, 230 },
        {   1,  13,  26,  76,  93, 132, 139, 106, 236, 171, 237 }
      }
    }
  }
};
static const vp9_coeff_probs default_coef_probs_32x32[BLOCK_TYPES_32X32] = {
  { /* block Type 0 */
    { /* Intra */
      { /* Coeff Band 0 */
        {  38,  32, 115, 163, 140, 164, 143, 139, 167, 157, 105 },
        {  11,  27,  73, 131, 126, 154, 131, 129, 178, 151, 138 },
        {   2,  19,  36,  83, 107, 144, 102, 116, 169, 140, 149 }
      }, { /* Coeff Band 1 */
        {   1, 116, 150, 184, 149, 164, 180, 140, 230, 178, 199 },
        {  71, 114, 149, 183, 150, 164, 181, 141, 229, 179, 203 },
        {  39, 102, 139, 182, 148, 164, 181, 142, 229, 179, 197 },
        {  16,  82, 117, 176, 143, 161, 180, 141, 230, 180, 200 },
        {   3,  49,  72, 148, 120, 152, 175, 134, 230, 178, 200 },
        {   1,  14,  21,  56,  94, 135,  92, 103, 179, 141, 158 }
      }, { /* Coeff Band 2 */
        {   1,  56, 140, 180, 151, 164, 175, 140, 224, 175, 194 },
        {  28,  51, 101, 162, 135, 158, 170, 136, 222, 175, 193 },
        {   9,  38,  68, 137, 120, 151, 160, 129, 221, 172, 193 },
        {   3,  28,  47, 111, 108, 145, 145, 121, 216, 165, 192 },
        {   1,  17,  28,  76,  97, 137, 117, 110, 206, 152, 189 },
        {   1,   7,  11,  34,  89, 131,  62,  96, 154, 123, 148 }
      }, { /* Coeff Band 3 */
        {   1, 129, 170, 198, 160, 169, 186, 147, 231, 181, 201 },
        {  45, 106, 147, 191, 152, 166, 186, 145, 228, 182, 197 },
        {  14,  81, 117, 178, 141, 161, 183, 143, 227, 184, 187 },
        {   4,  61,  89, 159, 129, 156, 178, 137, 226, 182, 174 },
        {   1,  39,  59, 126, 113, 146, 161, 126, 227, 176, 186 },
        {   1,  18,  26,  67,  98, 137, 103, 107, 190, 146, 166 }
      }, { /* Coeff Band 4 */
        {   1, 152, 180, 211, 166, 173, 206, 154, 243, 197, 216 },
        {  24, 112, 150, 202, 155, 169, 204, 152, 242, 196, 212 },
        {   3,  76, 112, 186, 141, 163, 199, 148, 241, 195, 212 },
        {   1,  51,  80, 164, 124, 155, 191, 141, 240, 192, 212 },
        {   1,  30,  48, 123, 106, 144, 170, 127, 235, 182, 210 },
        {   1,  13,  20,  60,  92, 134, 102, 105, 189, 146, 160 }
      }, { /* Coeff Band 5 */
        {   1, 212, 207, 235, 190, 187, 220, 170, 240, 200, 207 },
        {  11, 134, 179, 226, 175, 181, 214, 166, 236, 195, 201 },
        {   1,  86, 133, 210, 155, 172, 210, 161, 236, 194, 201 },
        {   1,  54,  88, 180, 129, 159, 200, 150, 235, 191, 200 },
        {   1,  27,  46, 122, 104, 143, 170, 128, 230, 181, 198 },
        {   1,   8,  15,  45,  88, 132,  81,  99, 171, 135, 154 }
      }
    }, { /* Inter */
      { /* Coeff Band 0 */
        {  50,  51, 216, 230, 193, 186, 193, 156, 219, 181, 168 },
        {  36,  44, 174, 210, 175, 174, 186, 149, 218, 179, 172 },
        {  12,  32, 100, 161, 140, 159, 162, 135, 209, 168, 172 }
      }, { /* Coeff Band 1 */
        {   1, 179, 230, 238, 191, 185, 229, 171, 250, 213, 200 },
        { 167, 173, 225, 237, 190, 186, 231, 171, 245, 209, 223 },
        { 115, 153, 208, 237, 187, 186, 229, 174, 247, 215, 216 },
        {  71, 131, 182, 233, 176, 184, 228, 172, 247, 210, 238 },
        {  41, 108, 145, 214, 151, 169, 228, 169, 246, 208, 210 },
        {  19,  78,  95, 151, 128, 155, 168, 134, 218, 173, 175 }
      }, { /* Coeff Band 2 */
        {   1, 147, 215, 231, 181, 181, 227, 171, 249, 212, 218 },
        {  65, 122, 179, 222, 168, 175, 223, 166, 248, 213, 216 },
        {  11,  85, 126, 204, 148, 167, 218, 159, 247, 208, 222 },
        {   4,  61,  89, 177, 128, 158, 206, 147, 246, 204, 208 },
        {   1,  38,  54, 130, 109, 145, 179, 128, 241, 191, 203 },
        {   1,  18,  24,  68,  96, 137, 110, 107, 196, 153, 145 }
      }, { /* Coeff Band 3 */
        {   1, 182, 227, 239, 193, 187, 231, 177, 250, 214, 189 },
        {  73, 147, 202, 234, 182, 183, 230, 174, 248, 213, 219 },
        {  12, 104, 154, 223, 164, 176, 228, 171, 248, 210, 225 },
        {   3,  74, 113, 205, 143, 167, 222, 163, 246, 211, 214 },
        {   1,  45,  69, 163, 116, 151, 205, 144, 244, 202, 205 },
        {   1,  19,  30,  87,  96, 138, 134, 115, 199, 165, 133 }
      }, { /* Coeff Band 4 */
        {   1, 198, 229, 242, 196, 190, 235, 182, 248, 216, 224 },
        {  55, 154, 201, 236, 183, 185, 233, 179, 247, 214, 190 },
        {   5, 101, 150, 225, 163, 177, 229, 172, 245, 210, 205 },
        {   1,  68, 106, 203, 140, 165, 223, 165, 246, 209, 194 },
        {   1,  38,  62, 154, 112, 149, 199, 143, 241, 198, 191 },
        {   1,  14,  22,  66,  94, 133, 109, 107, 178, 154, 122 }
      }, { /* Coeff Band 5 */
        {   1, 237, 226, 244, 205, 196, 225, 177, 243, 203, 210 },
        {  24, 154, 200, 238, 189, 189, 221, 173, 240, 199, 210 },
        {   2,  98, 150, 224, 167, 179, 217, 168, 240, 199, 207 },
        {   1,  61,  99, 193, 137, 164, 207, 155, 239, 197, 208 },
        {   1,  28,  49, 128, 105, 145, 177, 130, 234, 185, 206 },
        {   1,   9,  16,  48,  89, 134,  89,  99, 183, 140, 169 }
      }
    }
  }
};
