// idle sound made by wav2c

const int BASE_RATE = 16000;
const int idle_length = 1520;

const unsigned char idle_data[] PROGMEM ={129, 
151, 169, 166, 171, 177, 189, 205, 218, 220, 213, 213, 213, 218, 227, 233, 236, 234, 234, 246, 250, 
250, 250, 248, 248, 248, 250, 250, 248, 247, 247, 247, 249, 249, 249, 249, 247, 248, 246, 238, 228, 
225, 229, 223, 224, 236, 243, 248, 248, 247, 247, 249, 247, 250, 235, 205, 192, 170, 142, 113, 90, 
83, 90, 85, 63, 32, 12, 19, 42, 65, 78, 75, 66, 72, 74, 71, 60, 34, 17, 9, 6, 
4, 6, 6, 6, 5, 6, 5, 6, 7, 6, 8, 7, 7, 7, 12, 14, 11, 7, 7, 7, 
7, 6, 6, 5, 9, 25, 31, 31, 50, 74, 103, 136, 168, 194, 205, 212, 219, 228, 219, 201, 
187, 175, 168, 160, 150, 151, 153, 159, 171, 186, 204, 231, 250, 248, 248, 249, 249, 249, 249, 247, 
247, 248, 249, 248, 247, 240, 230, 224, 228, 233, 236, 239, 242, 250, 251, 250, 250, 249, 249, 250, 
250, 249, 232, 204, 179, 170, 162, 154, 146, 128, 126, 141, 162, 169, 171, 175, 184, 195, 197, 182, 
153, 121, 95, 78, 46, 16, 12, 17, 21, 21, 10, 3, 7, 5, 12, 13, 4, 6, 6, 6, 
3, 4, 5, 5, 5, 5, 6, 7, 7, 6, 7, 7, 6, 5, 7, 7, 5, 5, 6, 25, 
43, 53, 66, 65, 57, 60, 83, 88, 69, 74, 98, 108, 115, 130, 154, 170, 177, 189, 198, 213, 
224, 224, 239, 249, 247, 246, 241, 240, 240, 239, 244, 250, 238, 225, 222, 230, 238, 239, 246, 250, 
248, 248, 248, 250, 250, 248, 249, 249, 249, 246, 245, 242, 232, 230, 241, 250, 249, 243, 238, 234, 
222, 208, 197, 189, 180, 186, 208, 216, 211, 211, 200, 192, 190, 175, 160, 136, 117, 103, 90, 85, 
85, 76, 67, 68, 81, 102, 102, 83, 66, 52, 38, 33, 20, 6, 7, 5, 5, 5, 5, 4, 
4, 5, 5, 6, 6, 6, 7, 6, 6, 5, 5, 5, 5, 5, 5, 5, 6, 7, 7, 7, 
6, 9, 23, 34, 38, 43, 60, 92, 108, 115, 132, 150, 155, 163, 185, 196, 202, 214, 221, 221, 
225, 231, 234, 244, 249, 248, 249, 249, 249, 249, 249, 250, 250, 250, 250, 249, 248, 248, 248, 249, 
249, 248, 249, 248, 248, 247, 249, 249, 249, 248, 249, 248, 249, 249, 246, 237, 224, 212, 199, 181, 
175, 176, 167, 163, 156, 164, 161, 159, 163, 165, 167, 164, 145, 124, 106, 84, 81, 82, 89, 81, 
60, 47, 38, 11, 4, 5, 4, 4, 4, 6, 5, 7, 6, 8, 6, 7, 6, 6, 6, 6, 
6, 7, 7, 7, 6, 5, 5, 6, 6, 6, 5, 6, 6, 9, 24, 39, 49, 32, 21, 17, 
15, 23, 32, 46, 51, 74, 103, 116, 125, 127, 139, 154, 181, 193, 190, 194, 197, 202, 212, 239, 
248, 248, 250, 250, 250, 249, 248, 248, 249, 249, 249, 248, 249, 249, 248, 248, 250, 249, 249, 249, 
249, 249, 248, 249, 249, 248, 250, 249, 249, 250, 249, 250, 247, 235, 209, 196, 200, 209, 204, 194, 
202, 223, 230, 208, 190, 166, 141, 140, 141, 136, 120, 101, 106, 106, 96, 99, 93, 82, 60, 41, 
38, 37, 22, 16, 16, 7, 8, 18, 25, 12, 6, 6, 4, 6, 6, 6, 6, 7, 6, 7, 
6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 5, 8, 17, 22, 30, 36, 45, 52, 44, 32, 
29, 42, 61, 82, 101, 123, 136, 147, 164, 179, 190, 189, 186, 190, 199, 217, 236, 242, 241, 240, 
245, 249, 249, 250, 249, 248, 248, 248, 247, 248, 248, 248, 249, 249, 248, 248, 249, 249, 249, 249, 
249, 248, 248, 250, 249, 249, 249, 249, 249, 232, 220, 222, 223, 217, 195, 174, 168, 171, 186, 192, 
170, 156, 154, 169, 178, 166, 137, 111, 108, 118, 140, 140, 120, 105, 97, 82, 73, 37, 5, 7, 
5, 6, 6, 6, 4, 6, 6, 7, 7, 6, 6, 7, 7, 6, 6, 6, 6, 6, 6, 5, 
6, 6, 5, 6, 6, 5, 5, 6, 6, 7, 19, 31, 49, 52, 44, 49, 50, 49, 52, 54, 
53, 57, 69, 90, 112, 125, 138, 155, 172, 189, 204, 212, 220, 225, 224, 236, 250, 249, 249, 249, 
248, 249, 250, 249, 249, 248, 243, 247, 250, 249, 250, 250, 249, 248, 249, 249, 249, 249, 251, 250, 
248, 248, 247, 247, 248, 249, 247, 251, 242, 234, 233, 218, 206, 203, 203, 199, 199, 207, 205, 203, 
211, 225, 222, 193, 157, 117, 83, 73, 62, 52, 60, 67, 72, 72, 68, 65, 55, 58, 67, 75, 
60, 17, 4, 6, 4, 5, 5, 6, 5, 6, 6, 7, 7, 6, 5, 7, 7, 8, 8, 6, 
6, 7, 6, 5, 18, 16, 4, 5, 5, 6, 5, 9, 17, 31, 51, 70, 86, 98, 107, 114, 
118, 125, 141, 164, 179, 192, 207, 213, 211, 214, 220, 220, 225, 229, 233, 236, 235, 233, 237, 247, 
252, 250, 249, 249, 248, 248, 249, 248, 247, 248, 248, 249, 248, 249, 249, 250, 251, 251, 249, 248, 
249, 248, 248, 249, 245, 243, 236, 226, 215, 203, 196, 198, 193, 175, 153, 131, 119, 118, 124, 132, 
148, 154, 156, 157, 148, 138, 135, 138, 126, 92, 48, 13, 6, 6, 6, 11, 21, 19, 6, 13, 
24, 18, 7, 4, 7, 8, 5, 5, 6, 6, 6, 6, 6, 5, 6, 6, 6, 5, 5, 6, 
6, 7, 7, 7, 6, 8, 22, 33, 35, 32, 36, 45, 46, 51, 55, 57, 66, 64, 57, 61, 
71, 94, 124, 154, 173, 172, 180, 206, 234, 249, 250, 250, 250, 249, 249, 249, 248, 247, 247, 247, 
248, 248, 248, 248, 247, 248, 249, 250, 249, 249, 249, 249, 249, 248, 249, 249, 248, 249, 249, 248, 
249, 233, 214, 212, 221, 226, 225, 216, 208, 211, 221, 229, 223, 209, 188, 165, 151, 139, 126, 110, 
87, 61, 44, 29, 22, 13, 7, 6, 9, 28, 40, 37, 38, 46, 54, 53, 49, 46, 21, 6, 
7, 6, 8, 8, 7, 6, 6, 6, 5, 7, 7, 6, 6, 6, 6, 6, 9, 16, 21, 21, 
22, 19, 20, 29, 21, 13, 25, 32, 33, 47, 66, 83, 100, 115, 142, 170, 182, 185, 184, 180, 
176, 172, 174, 179, 183, 185, 184, 186, 196, 202, 207, 227, 244, 247, 249, 250, 249, 249, 250, 249, 
249, 249, 249, 248, 249, 248, 248, 248, 248, 249, 249, 249, 249, 248, 249, 249, 247, 249, 249, 249, 
248, 250, 235, 208, 183, 160, 157, 156, 148, 146, 160, 169, 178, 182, 162, 130, 117, 123, 124, 109, 
107, 104, 78, 62, 62, 38, 6, 6, 5, 6, 5, 6, 6, 6, 7, 8, 7, 6, 6, 7, 
8, 7, 7, 8, 10, 6, 7, 6, 5, 4, 6, 7, 7, 7, 12, 27, 34, 44, 49, 48, 
61, 62, 58, 74, 74, 67, 76, 86, 89, 89, 99, 113, 122, 134, 150, 160, 169, 185, 196, 204, 
222, 234, 238, 247, 249, 251, 245, 236, 233, 219, 206, 192, 176, 182, 198, 213, 230, 242, 249, 250, 
249, 249, 249, 248, 249, 250, 249, 249, 249, 249, 247, 235, 227, 229, 222, 206, 200, 220, 233, 239, 
247, 248, 248, 247, 246, 247, 229, 209, 182, 146, 132, 123, 113, 93, 71, 81, 81, 77, 87, 87, 
90, 86, 78, 84, 88, 79, 64, 45, 33, 19, 6, 6, 4, 6, 6, 6, 5, 5, 6, 5, 
4, 6, 8, 8, 6, 5, 6, 6, 9, 8, 6, 4, 5, 6, 5, 5, 5, 7, 7, 20, 
47, 73, 95, 115, 127, 137, 146, 153, 161, 168, 168, 167, 163, 158, 167, 172, 175, 184, 185, 189, 
203, 214, 221, 224, 231, 242, 249, 248, 248, 249, 250, 249, 249, 248, 248, 249, 243, 237, 230, 225, 
230, 238, 245, 250, 250, 250, 252, 252, 250, 250, 250, 251, 250, 249, 249, 246, 236, 221, 202, 185, 
188, 194, 186, 187, 188, 181, 172, 160, 155, 163, 171, 181, 185, 165, 146, 121, 96, 73, 52, 35, 
27, 18, 7, 8, 7, 8, 6, 6, 6, 5, 4, 4, 5, 7, 8, 7, 7, 7, 6, 6, 
7, 6, 6, 5, 5, 5, 6, 5, 3, 4, 5, 7, 13, 20, 37, 48, 57, 63, 67, 65, 
69, 80, 78, 79, 88, 94, 105, 116, 131, 148, 163, 175, 191, 212, 219, 234, 247, 249, 248, 249, 
247, 239, 239, 234, 228, 223, 230, 242, 248, 249, 248, 248, 248, 249, 249, 250, 250, 250, 250, 250, 
249, 249, 249, 248, 246, 237, 230, 230, 223, 218, 226, 233, 239, 249, 249, 250, 249, 251, 250, 251, 
242, 215, 203, 201, 184, 155, 130, 112, 106, 112, 122, 107, 83, 77, 74, 78, 69, 48, 27, 14, 
20, 30, 38, 25, 7, 6, 6, 5, 5, 5, 5, 5, 6, 7, 6, 5, 6, 6, 5, 6, 
6, 6, 6, 5, 6, 5, 7, 6, 7, 6, 6, 5, 9, 23, 38, 47, 59, 89, 111, };