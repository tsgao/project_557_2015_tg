//
//  main.cpp
//  OpenGL4Test
//
//  Created by Rafael Radkowski on 5/28/15.
//  Copyright (c) 2015 -. All rights reserved.
//

// stl include
#include <iostream>
#include <string>

// GLEW include
#include <GL/glew.h>

// GLM include files
#define GLM_FORCE_INLINE
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


// glfw includes
#include <GLFW/glfw3.h>


// include local files
#include "controls.h"
#include "HCI557Common.h"


using namespace std;

static const string vs_string =
"#version 410 core                                                 \n"
"                                                                   \n"
"uniform mat4 projectionMatrix;                                    \n"
"uniform mat4 viewMatrix;                                           \n"
"uniform mat4 modelMatrix;                                          \n"
"in vec3 in_Position;                                               \n"
"                                                                   \n"
"in vec3 in_Color;                                                  \n"
"out vec3 pass_Color;                                               \n"
"                                                                  \n"
"void main(void)                                                   \n"
"{                                                                 \n"
"    gl_Position = projectionMatrix * viewMatrix * modelMatrix * vec4(in_Position, 1.0);  \n"
"    pass_Color = in_Color;                                         \n"
"}                                                                 \n";

// Fragment shader source code. This determines the colors in the fragment generated in the shader pipeline. In this case, it colors the inside of our triangle specified by our vertex shader.
static const string fs_string  =
"#version 410 core                                                 \n"
"                                                                  \n"
"in vec3 pass_Color;                                                 \n"
"out vec4 color;                                                    \n"
"void main(void)                                                   \n"
"{                                                                 \n"
"    color = vec4(pass_Color, 1.0);                               \n"
"}                                                                 \n";




/// Camera control matrices
glm::mat4 projectionMatrix; // Store the projection matrix
glm::mat4 viewMatrix; // Store the view matrix
glm::mat4 modelMatrix; // Store the model matrix




// The handle to the window object
GLFWwindow*         window;


// Define some of the global variables we're using for this sample
GLuint program;







///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//// Fill this functions with your model code.

// USE THESE vertex array objects to define your objects
unsigned int vaoID[2];
unsigned int vboID[2];



/*!
 ADD YOUR CODE TO CREATE THE TRIANGLE STRIP MODEL TO THIS FUNCTION
 */
unsigned int createTriangleStripModel(void)
{
    // use the vertex array object vaoID[0] for this model representation
    
    float* vertices = new float[150];  // Vertices for our square
    float *colors = new float[150]; // Colors for our vertices
    //A
    vertices[0] = 0; vertices[1] = 0; vertices[2] = 2;
    colors[0] = 0.0; colors[1] = 0.0; colors[2] = 1.0;
    //B
    vertices[3] = 0; vertices[4] = 1; vertices[5] = 2;
    colors[3] = 0.0; colors[4] = 0.0; colors[5] = 1.0;
    //C
    vertices[6] = 1; vertices[7] = 0; vertices[8] = 2;
    colors[6] = 0.0; colors[7] = 0.0; colors[8] = 1.0;
    //D
    vertices[9] = 1; vertices[10] = 1; vertices[11] = 2;
    colors[9] = 0.0; colors[10] = 0.0; colors[11] = 1.0;
    //E
    vertices[12] = 1; vertices[13] = 1; vertices[14] = 0;
    colors[12] = 0.0; colors[13] = 0.0; colors[14] = 1.0;
    //F
    vertices[15] = 0; vertices[16] = 1; vertices[17] = 2;
    colors[15] = 0.0; colors[16] = 0.0; colors[17] = 1.0;
    //G
    vertices[18] = 0; vertices[19] = 1; vertices[20] = 0;
    colors[18] = 0.0; colors[19] = 0.0; colors[20] = 1.0;
    //H
    vertices[21] = 0; vertices[22] = 0; vertices[23] = 2;
    colors[21] = 0.0; colors[22] = 0.0; colors[23] = 1.0;
    //I
    vertices[24] = 0; vertices[25] = 0; vertices[26] = 0;
    colors[24] = 0.0; colors[25] = 0.0; colors[26] = 1.0;
    //J
    vertices[27] = 1; vertices[28] = 0; vertices[29] = 2;
    colors[27] = 0.0; colors[28] = 0.0; colors[29] = 1.0;
    //K
    vertices[30] = 1; vertices[31] = 0; vertices[32] = 0;
    colors[30] = 0.0; colors[31] = 0.0; colors[32] = 1.0;
    //L
    vertices[33] = 1; vertices[34] = 1; vertices[35] = 0;
    colors[33] = 0.0; colors[34] = 0.0; colors[35] = 1.0;
    //M
    vertices[36] = 1; vertices[37] = 0; vertices[38] = 0;
    colors[36] = 0.0; colors[37] = 0.0; colors[38] = 1.0;
    //N
    vertices[39] = 3; vertices[40] = 0; vertices[41] = 0;
    colors[39] = 0.0; colors[40] = 0.0; colors[41] = 1.0;
    //O
    vertices[42] = 1; vertices[43] = 2; vertices[44] = 0;
    colors[42] = 0.0; colors[43] = 0.0; colors[44] = 1.0;
    //P
    vertices[45] = 3; vertices[46] = 1; vertices[47] = 0;
    colors[45] = 0.0; colors[46] = 0.0; colors[47] = 1.0;
    //Q
    vertices[48] = 3; vertices[49] = 0; vertices[50] = 0;
    colors[48] = 0.0; colors[49] = 0.0; colors[50] = 1.0;
    //R
    vertices[51] = 3; vertices[52] = 0; vertices[53] = -1;
    colors[51] = 0.0; colors[52] = 0.0; colors[53] = 1.0;
    //S
    vertices[54] = 3; vertices[55] = 1; vertices[56] = -1;
    colors[54] = 0.0; colors[55] = 0.0; colors[56] = 1.0;
    //T
    vertices[57] = 3; vertices[58] = 1; vertices[59] = 0;
    colors[57] = 0.0; colors[58] = 0.0; colors[59] = 1.0;
    //U
    vertices[60] = 1; vertices[61] = 2; vertices[62] = 0;
    colors[60] = 0.0; colors[61] = 0.0; colors[62] = 1.0;
    //V
    vertices[63] = 3; vertices[64] = 1; vertices[65] = -1;
    colors[63] = 0.0; colors[64] = 0.0; colors[65] = 1.0;
    //W
    vertices[66] = 1; vertices[67] = 2; vertices[68] = -1;
    colors[66] = 0.0; colors[67] = 0.0; colors[68] = 1.0;
    //X
    vertices[69] = 3; vertices[70] = 0; vertices[71] = -1;
    colors[69] = 0.0; colors[70] = 0.0; colors[71] = 1.0;
    //Y
    vertices[72] = 1; vertices[73] = 0; vertices[74] = -1;
    colors[72] = 0.0; colors[73] = 0.0; colors[74] = 1.0;
    //Z
    vertices[75] = 3; vertices[76] = 0; vertices[77] = 0;
    colors[75] = 0.0; colors[76] = 0.0; colors[77] = 1.0;
    //0
    vertices[78] = 0; vertices[79] = 0; vertices[80] = 0;
    colors[78] = 0.0; colors[79] = 0.0; colors[80] = 1.0;
    //1
    vertices[81] = 0; vertices[82] = 0; vertices[83] = -1;
    colors[81] = 0.0; colors[82] = 0.0; colors[83] = 1.0;
    //2
    vertices[84] = 1; vertices[85] = 0; vertices[86] = -1;
    colors[84] = 0.0; colors[85] = 0.0; colors[86] = 1.0;
    //3
    vertices[87] = 0; vertices[88] = 2; vertices[89] = -1;
    colors[87] = 0.0; colors[88] = 0.0; colors[89] = 1.0;
    //4
    vertices[90] = 1; vertices[91] = 2; vertices[92] = -1;
    colors[90] = 0.0; colors[91] = 0.0; colors[92] = 1.0;
    //5
    vertices[93] = 0; vertices[94] = 2; vertices[95] = 0;
    colors[93] = 0.0; colors[94] = 0.0; colors[95] = 1.0;
    //6
    vertices[96] = 1; vertices[97] = 2; vertices[98] = 0;
    colors[96] = 0.0; colors[97] = 0.0; colors[98] = 1.0;
    //7
    vertices[99] = 1; vertices[100] = 1; vertices[101] = 0;
    colors[99] = 0.0; colors[100] = 0.0; colors[101] = 1.0;
    //8
    vertices[102] = 0; vertices[103] = 1; vertices[104] = 0;
    colors[102] = 0.0; colors[103] = 0.0; colors[104] = 1.0;
    //9
    vertices[105] = 0; vertices[106] = 2; vertices[107] = 0;
    colors[105] = 0.0; colors[106] = 0.0; colors[107] = 1.0;
    //10
    vertices[108] = 0; vertices[109] = 2; vertices[110] = -1;
    colors[108] = 0.0; colors[109] = 0.0; colors[110] = 1.0;
    //11
    vertices[111] = 0; vertices[112] = 0; vertices[113] = 0;
    colors[111] = 0.0; colors[112] = 0.0; colors[113] = 1.0;
    //12
    vertices[114] = 0; vertices[115] = 0; vertices[116] = -1;
    colors[114] = 0.0; colors[115] = 0.0; colors[116] = 1.0;

    


    
    glGenVertexArrays(2, &vaoID[0]); // Create our Vertex Array Object
    glBindVertexArray(vaoID[0]); // Bind our Vertex Array Object so we can use it
    
    
    glGenBuffers(2, vboID); // Generate our Vertex Buffer Object
    
    // vertices
    glBindBuffer(GL_ARRAY_BUFFER, vboID[0]); // Bind our Vertex Buffer Object
    glBufferData(GL_ARRAY_BUFFER, 150 * sizeof(GLfloat), vertices, GL_STATIC_DRAW); // Set the size and data of our VBO and set it to STATIC_DRAW
    
    glVertexAttribPointer((GLuint)0, 3, GL_FLOAT, GL_FALSE, 0, 0); // Set up our vertex attributes pointer
    glEnableVertexAttribArray(0); // Disable our Vertex Array Object
    
    
    //Color
    glBindBuffer(GL_ARRAY_BUFFER, vboID[1]); // Bind our second Vertex Buffer Object
    glBufferData(GL_ARRAY_BUFFER, 150 * sizeof(GLfloat), colors, GL_STATIC_DRAW); // Set the size and data of our VBO and set it to STATIC_DRAW
    
    glVertexAttribPointer((GLuint)1, 3, GL_FLOAT, GL_FALSE, 0, 0); // Set up our vertex attributes pointer
    glEnableVertexAttribArray(1); // Enable the second vertex attribute array
    
    glBindVertexArray(0); // Disable our Vertex Buffer Object
    
    
    delete [] vertices; // Delete our vertices from memory
    delete [] colors;
    
    return 1;
}

/*!
 ADD YOUR CODE TO CREATE A MODEL USING PRIMITIVES OF YOUR CHOISE TO THIS FUNCTION
 */
unsigned int createMyModel(void)
{
    // use the vertex array object vaoID[1] for this model representation
    
    //TODO:
    float* vertices = new float[250];  // Vertices for our square
    float *colors = new float[250]; // Colors for our vertices
    //A
    vertices[0] = 0; vertices[1] = 0; vertices[2] = 2;
    colors[0] = 0.0; colors[1] = 0.0; colors[2] = 1.0;
    //B
    vertices[3] = 0; vertices[4] = 1; vertices[5] = 2;
    colors[3] = 0.0; colors[4] = 0.0; colors[5] = 1.0;
    //C
    vertices[6] = 1; vertices[7] = 0; vertices[8] = 2;
    colors[6] = 0.0; colors[7] = 0.0; colors[8] = 1.0;
    
    //B
    vertices[9] = 0; vertices[10] = 1; vertices[11] = 2;
    colors[9] = 0.0; colors[10] = 0.0; colors[11] = 1.0;
    //C
    vertices[12] = 1; vertices[13] = 0; vertices[14] = 2;
    colors[12] = 0.0; colors[13] = 0.0; colors[14] = 1.0;
    //D
    vertices[15] = 1; vertices[16] = 1; vertices[17] = 2;
    colors[15] = 0.0; colors[16] = 0.0; colors[17] = 1.0;
    
    //C
    vertices[18] = 1; vertices[19] = 0; vertices[20] = 2;
    colors[18] = 0.0; colors[19] = 0.0; colors[20] = 1.0;
    //D
    vertices[21] = 1; vertices[22] = 1; vertices[23] = 2;
    colors[21] = 0.0; colors[22] = 0.0; colors[23] = 1.0;
    //E
    vertices[24] = 1; vertices[25] = 1; vertices[26] = 0;
    colors[24] = 0.0; colors[25] = 0.0; colors[26] = 1.0;
    
    //C
    vertices[27] = 1; vertices[28] = 0; vertices[29] = 2;
    colors[27] = 0.0; colors[28] = 0.0; colors[29] = 1.0;
    //K
    vertices[30] = 1; vertices[31] = 0; vertices[32] = 0;
    colors[30] = 0.0; colors[31] = 0.0; colors[32] = 1.0;
    //E
    vertices[33] = 1; vertices[34] = 1; vertices[35] = 0;
    colors[33] = 0.0; colors[34] = 0.0; colors[35] = 1.0;
    
    //B
    vertices[36] = 0; vertices[37] = 1; vertices[38] = 2;
    colors[36] = 0.0; colors[37] = 0.0; colors[38] = 1.0;
    //D
    vertices[39] = 1; vertices[40] = 1; vertices[41] = 2;
    colors[39] = 0.0; colors[40] = 0.0; colors[42] = 1.0;
    //E
    vertices[42] = 1; vertices[43] = 1; vertices[44] = 0;
    colors[42] = 0.0; colors[43] = 0.0; colors[44] = 1.0;
    
    //B
    vertices[45] = 0; vertices[46] = 1; vertices[47] = 2;
    colors[45] = 0.0; colors[46] = 0.0; colors[47] = 1.0;
    //E
    vertices[48] = 1; vertices[49] = 1; vertices[50] = 0;
    colors[48] = 0.0; colors[49] = 0.0; colors[50] = 1.0;
    //G
    vertices[51] = 0; vertices[52] = 1; vertices[53] = 0;
    colors[51] = 0.0; colors[52] = 0.0; colors[53] = 1.0;
    
    //B
    vertices[54] = 0; vertices[55] = 1; vertices[56] = 2;
    colors[54] = 0.0; colors[55] = 0.0; colors[56] = 1.0;
    //G
    vertices[57] = 0; vertices[58] = 1; vertices[59] = 0;
    colors[57] = 0.0; colors[58] = 0.0; colors[59] = 1.0;
    //A
    vertices[60] = 0; vertices[61] = 0; vertices[62] = 2;
    colors[60] = 0.0; colors[61] = 0.0; colors[62] = 1.0;
    
    //A
    vertices[63] = 0; vertices[64] = 0; vertices[65] = 2;
    colors[63] = 0.0; colors[64] = 0.0; colors[65] = 1.0;
    //G
    vertices[66] = 0; vertices[67] = 1; vertices[68] = 0;
    colors[66] = 0.0; colors[67] = 0.0; colors[68] = 1.0;
    //I
    vertices[69] = 0; vertices[70] = 0; vertices[71] = 0;
    colors[69] = 0.0; colors[70] = 0.0; colors[71] = 1.0;
    
    
    //A
    vertices[72] = 0; vertices[73] = 0; vertices[74] = 2;
    colors[72] = 0.0; colors[73] = 0.0; colors[74] = 1.0;
    //I
    vertices[75] = 0; vertices[76] = 0; vertices[77] = 0;
    colors[75] = 0.0; colors[76] = 0.0; colors[77] = 1.0;
    //C
    vertices[78] = 1; vertices[79] = 0; vertices[80] = 2;
    colors[78] = 0.0; colors[79] = 0.0; colors[80] = 1.0;
    
    
    //C
    vertices[81] = 1; vertices[82] = 0; vertices[83] = 2;
    colors[81] = 0.0; colors[82] = 0.0; colors[83] = 1.0;
    //I
    vertices[84] = 0; vertices[85] = 0; vertices[86] = 0;
    colors[84] = 0.0; colors[85] = 0.0; colors[86] = 1.0;
    //K
    vertices[87] = 1; vertices[88] = 0; vertices[89] = 0;
    colors[87] = 0.0; colors[88] = 0.0; colors[89] = 1.0;
    
    //3
    vertices[90] = 0; vertices[91] = 2; vertices[92] = -1;
    colors[90] = 0.0; colors[91] = 0.0; colors[92] = 1.0;
    //4
    vertices[93] = 1; vertices[94] = 2; vertices[95] = -1;
    colors[93] = 0.0; colors[94] = 0.0; colors[95] = 1.0;
    //5
    vertices[96] = 0; vertices[97] = 2; vertices[98] = 0;
    colors[96] = 0.0; colors[97] = 0.0; colors[98] = 1.0;
    
    
    //O
    vertices[99] = 1; vertices[100] = 2; vertices[101] = 0;
    colors[99] = 0.0; colors[100] = 0.0; colors[101] = 1.0;
    //S
    vertices[102] = 3; vertices[103] = 1; vertices[104] = -1;
    colors[102] = 0.0; colors[103] = 0.0; colors[104] = 1.0;
    //P
    vertices[105] = 3; vertices[106] = 1; vertices[107] = 0;
    colors[105] = 0.0; colors[106] = 0.0; colors[107] = 1.0;
    
    
    //P
    vertices[108] = 3; vertices[109] = 1; vertices[110] = 0;
    colors[108] = 0.0; colors[109] = 0.0; colors[110] = 1.0;
    //N
    vertices[111] = 3; vertices[112] = 0; vertices[113] = 0;
    colors[111] = 0.0; colors[112] = 0.0; colors[113] = 1.0;
    //R
    vertices[114] = 3; vertices[115] = 0; vertices[116] = -1;
    colors[114] = 0.0; colors[115] = 0.0; colors[116] = 1.0;
    
    //W
    vertices[117] = 1; vertices[118] = 2; vertices[119] = -1;
    colors[117] = 0.0; colors[118] = 0.0; colors[119] = 1.0;
    //S
    vertices[120] = 3; vertices[121] = 1; vertices[122] = -1;
    colors[120] = 0.0; colors[121] = 0.0; colors[122] = 1.0;
    //R
    vertices[123] = 3; vertices[124] = 0; vertices[125] = -1;
    colors[123] = 0.0; colors[124] = 0.0; colors[125] = 1.0;
    
    //W
    vertices[126] = 1; vertices[127] = 2; vertices[128] = -1;
    colors[126] = 0.0; colors[127] = 0.0; colors[128] = 1.0;
    //1
    vertices[129] = 0; vertices[130] = 0; vertices[131] = -1;
    colors[129] = 0.0; colors[130] = 0.0; colors[131] = 1.0;
    //R
    vertices[132] = 3; vertices[133] = 0; vertices[134] = -1;
    colors[132] = 0.0; colors[133] = 0.0; colors[134] = 1.0;
    
    //W
    vertices[135] = 1; vertices[136] = 2; vertices[137] = -1;
    colors[135] = 0.0; colors[136] = 0.0; colors[137] = 1.0;
    //1
    vertices[138] = 0; vertices[139] = 0; vertices[140] = -1;
    colors[138] = 0.0; colors[139] = 0.0; colors[140] = 1.0;
    //3
    vertices[141] = 0; vertices[142] = 2; vertices[143] = -1;
    colors[141] = 0.0; colors[142] = 0.0; colors[143] = 1.0;
    
    //P
    vertices[144] = 3; vertices[145] = 1; vertices[146] = 0;
    colors[144] = 0.0; colors[145] = 0.0; colors[146] = 1.0;
    //S
    vertices[147] = 3; vertices[148] = 1; vertices[149] = -1;
    colors[147] = 0.0; colors[148] = 0.0; colors[149] = 1.0;
    //R
    vertices[150] = 3; vertices[151] = 0; vertices[152] = -1;
    colors[150] = 0.0; colors[151] = 0.0; colors[152] = 1.0;
    
    
    //W
    vertices[153] = 1; vertices[154] = 2; vertices[155] = -1;
    colors[153] = 0.0; colors[154] = 0.0; colors[155] = 1.0;
    //S
    vertices[156] = 3; vertices[157] = 1; vertices[158] = -1;
    colors[156] = 0.0; colors[157] = 0.0; colors[158] = 1.0;
    //O
    vertices[159] = 1; vertices[160] = 2; vertices[161] = 0;
    colors[159] = 0.0; colors[160] = 0.0; colors[161] = 1.0;
    
    //5
    vertices[162] = 0; vertices[163] = 2; vertices[164] = 0;
    colors[162] = 0.0; colors[163] = 0.0; colors[164] = 1.0;
    //4
    vertices[165] = 1; vertices[166] = 2; vertices[167] = -1;
    colors[165] = 0.0; colors[166] = 0.0; colors[167] = 1.0;
    //O
    vertices[168] = 1; vertices[169] = 2; vertices[170] = 0;
    colors[168] = 0.0; colors[169] = 0.0; colors[170] = 1.0;
    
    //5
    vertices[171] = 0; vertices[172] = 2; vertices[173] = 0;
    colors[171] = 0.0; colors[172] = 0.0; colors[173] = 1.0;
    //3
    vertices[174] = 0; vertices[175] = 2; vertices[176] = -1;
    colors[174] = 0.0; colors[175] = 0.0; colors[176] = 1.0;
    //0
    vertices[177] = 0; vertices[178] = 0; vertices[179] = 0;
    colors[177] = 0.0; colors[178] = 0.0; colors[179] = 1.0;
    
    //3
    vertices[180] = 0; vertices[181] = 2; vertices[182] = -1;
    colors[180] = 0.0; colors[181] = 0.0; colors[182] = 1.0;
    //0
    vertices[183] = 0; vertices[184] = 0; vertices[185] = 0;
    colors[183] = 0.0; colors[184] = 0.0; colors[185] = 1.0;
    //1
    vertices[186] = 0; vertices[187] = 0; vertices[188] = -1;
    colors[186] = 0.0; colors[187] = 0.0; colors[188] = 1.0;
    
    //R
    vertices[189] = 3; vertices[190] = 0; vertices[191] = -1;
    colors[189] = 0.0; colors[190] = 0.0; colors[191] = 1.0;
    //1
    vertices[192] = 0; vertices[193] = 0; vertices[194] = -1;
    colors[192] = 0.0; colors[193] = 0.0; colors[194] = 1.0;
    //N
    vertices[195] = 3; vertices[196] = 0; vertices[197] = 0;
    colors[195] = 0.0; colors[196] = 0.0; colors[197] = 1.0;
    
    //1
    vertices[198] = 0; vertices[199] = 0; vertices[200] = -1;
    colors[198] = 0.0; colors[199] = 0.0; colors[200] = 1.0;
    //N
    vertices[201] = 3; vertices[202] = 0; vertices[203] = 0;
    colors[201] = 0.0; colors[202] = 0.0; colors[203] = 1.0;
    //0
    vertices[204] = 0; vertices[205] = 0; vertices[206] = 0;
    colors[204] = 0.0; colors[205] = 0.0; colors[206] = 1.0;
    
    
    //5
    vertices[207] = 0; vertices[208] = 2; vertices[209] = 0;
    colors[207] = 0.0; colors[208] = 0.0; colors[209] = 1.0;
    //o
    vertices[210] = 1; vertices[211] = 2; vertices[212] = 0;
    colors[210] = 0.0; colors[211] = 0.0; colors[212] = 1.0;
    //E
    vertices[213] = 1; vertices[214] = 1; vertices[215] = 0;
    colors[213] = 0.0; colors[214] = 0.0; colors[215] = 1.0;
    
    
    //5
    vertices[216] = 0; vertices[217] = 2; vertices[218] = 0;
    colors[216] = 0.0; colors[217] = 0.0; colors[218] = 1.0;
    //E
    vertices[219] = 1; vertices[220] = 1; vertices[221] = 0;
    colors[219] = 0.0; colors[220] = 0.0; colors[221] = 1.0;
    //G
    vertices[222] = 0; vertices[223] = 1; vertices[224] = 0;
    colors[222] = 0.0; colors[223] = 0.0; colors[224] = 1.0;
    
    
    //O
    vertices[225] = 1; vertices[226] = 2; vertices[227] = 0;
    colors[225] = 0.0; colors[226] = 0.0; colors[227] = 1.0;
    //k
    vertices[228] = 1; vertices[229] = 0; vertices[230] = 0;
    colors[228] = 0.0; colors[229] = 0.0; colors[230] = 1.0;
    //N
    vertices[231] = 3; vertices[232] = 0; vertices[233] = 0;
    colors[231] = 0.0; colors[232] = 0.0; colors[233] = 1.0;
    
    //O
    vertices[234] = 1; vertices[235] = 2; vertices[236] = 0;
    colors[234] = 0.0; colors[235] = 0.0; colors[236] = 1.0;
    //P
    vertices[237] = 3; vertices[238] = 1; vertices[239] = 0;
    colors[237] = 0.0; colors[238] = 0.0; colors[239] = 1.0;
    //N
    vertices[240] = 3; vertices[241] = 0; vertices[242] = 0;
    colors[240] = 0.0; colors[241] = 0.0; colors[242] = 1.0;
    
    
    for(int i=0;i<243;i=i+3){
        colors[i]=0.0;
        colors[i+1]=0.0;
        colors[i+2]=1.0;
    }
    
    
    
    glGenVertexArrays(2, &vaoID[1]); // Create our Vertex Array Object
    glBindVertexArray(vaoID[1]); // Bind our Vertex Array Object so we can use it
    
    
    glGenBuffers(2, vboID); // Generate our Vertex Buffer Object
    
    // vertices
    glBindBuffer(GL_ARRAY_BUFFER, vboID[0]); // Bind our Vertex Buffer Object
    glBufferData(GL_ARRAY_BUFFER, 250 * sizeof(GLfloat), vertices, GL_STATIC_DRAW); // Set the size and data of our VBO and set it to STATIC_DRAW
    
    glVertexAttribPointer((GLuint)0, 3, GL_FLOAT, GL_FALSE, 0, 0); // Set up our vertex attributes pointer
    glEnableVertexAttribArray(0); // Disable our Vertex Array Object
    
    
    //Color
    glBindBuffer(GL_ARRAY_BUFFER, vboID[1]); // Bind our second Vertex Buffer Object
    glBufferData(GL_ARRAY_BUFFER, 250 * sizeof(GLfloat), colors, GL_STATIC_DRAW); // Set the size and data of our VBO and set it to STATIC_DRAW
    
    glVertexAttribPointer((GLuint)1, 3, GL_FLOAT, GL_FALSE, 0, 0); // Set up our vertex attributes pointer
    glEnableVertexAttribArray(1); // Enable the second vertex attribute array
    
    glBindVertexArray(0); // Disable our Vertex Buffer Object
    
    
    delete [] vertices; // Delete our vertices from memory
    delete [] colors;
    
    return 1;
    return 1;
}



/*!
 ADD YOUR CODE TO RENDER THE TRIANGLE STRIP MODEL TO THIS FUNCTION
 */
void renderTriangleStripModel(void)
{
    glBindVertexArray(vaoID[0]); // Bind our Vertex Array Object
    
    glDrawArrays(GL_TRIANGLE_STRIP, 0, 39); // Draw our triangle strips
    
    glBindVertexArray(0); // Unbind our Vertex Array Object
    
}

/*!
 ADD YOUR CODE TO RENDER YOUR MODEL TO THIS FUNCTION
 */
void renderMyModel(void)
{
    glBindVertexArray(vaoID[1]); // Bind our Vertex Array Object
    
    glDrawArrays(GL_TRIANGLES, 0, 81); // Draw our trangles
    
    glBindVertexArray(0); // Unbind our Vertex Array Object

    
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*!
 This function creates the two models
 */
void setupScene(void) {
    
    createTriangleStripModel();
    createMyModel();
    
}


/*!
 This function updates the virtual camera
 */
bool updateCamera()
{
    // Compute the MVP matrix from keyboard and mouse input
    computeMatricesFromInputs();
    viewMatrix =  getViewMatrix(); // get the current view matrix
    
    return true;
}





int main(int argc, const char * argv[])
{
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //// Init glfw, create a window, and init glew
    
    // Init the GLFW Window
    window = initWindow();
    
    
    // Init the glew api
    initGlew();
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //// The Shader Program starts here
    
    // Vertex shader source code. This draws the vertices in our window. We have 3 vertices since we're drawing an triangle.
    // Each vertex is represented by a vector of size 4 (x, y, z, w) coordinates.
    static const string vertex_code = vs_string;
    static const char * vs_source = vertex_code.c_str();
    
    // Fragment shader source code. This determines the colors in the fragment generated in the shader pipeline. In this case, it colors the inside of our triangle specified by our vertex shader.
    static const string fragment_code = fs_string;
    static const char * fs_source = fragment_code.c_str();
    
    // This next section we'll generate the OpenGL program and attach the shaders to it so that we can render our triangle.
    program = glCreateProgram();
    
    // We create a shader with our fragment shader source code and compile it.
    GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fs, 1, &fs_source, NULL);
    glCompileShader(fs);
    
    // We create a shader with our vertex shader source code and compile it.
    GLuint vs = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vs, 1, &vs_source, NULL);
    glCompileShader(vs);
    
    // We'll attach our two compiled shaders to the OpenGL program.
    glAttachShader(program, vs);
    glAttachShader(program, fs);
    
    glLinkProgram(program);
    
    // We'll specify that we want to use this program that we've attached the shaders to.
    glUseProgram(program);
    
    //// The Shader Program ends here
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
    /// IGNORE THE NEXT PART OF THIS CODE
    /// IGNORE THE NEXT PART OF THIS CODE
    /// IGNORE THE NEXT PART OF THIS CODE
    // It controls the virtual camera
    
    // Set up our green background color
    static const GLfloat clear_color[] = { 0.6f, 0.7f, 1.0f, 1.0f };
    static const GLfloat clear_depth[] = { 1.0f, 1.0f, 1.0f, 1.0f };
    
    
    projectionMatrix = glm::perspective(1.1f, (float)800 / (float)600, 0.1f, 100.f);
    modelMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(0.0f, 0.0f, 0.0f)); // Create our model matrix which will halve the size of our model
    viewMatrix = glm::lookAt(glm::vec3(1.0f, 0.0f, 5.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
    
    int projectionMatrixLocation = glGetUniformLocation(program, "projectionMatrix"); // Get the location of our projection matrix in the shader
    int viewMatrixLocation = glGetUniformLocation(program, "viewMatrix"); // Get the location of our view matrix in the shader
    int modelMatrixLocation = glGetUniformLocation(program, "modelMatrix"); // Get the location of our model matrix in the shader
    
    
    glUniformMatrix4fv(projectionMatrixLocation, 1, GL_FALSE, &projectionMatrix[0][0]); // Send our projection matrix to the shader
    glUniformMatrix4fv(viewMatrixLocation, 1, GL_FALSE, &viewMatrix[0][0]); // Send our view matrix to the shader
    glUniformMatrix4fv(modelMatrixLocation, 1, GL_FALSE, &modelMatrix[0][0]); // Send our model matrix to the shader
    
    
    glBindAttribLocation(program, 0, "in_Position");
    glBindAttribLocation(program, 1, "in_Color");
    
    //// The Shader Program ends here
    //// START TO READ AGAIN
    //// START TO READ AGAIN
    //// START TO READ AGAIN
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    
    // this creates the scene
    setupScene();
    
    

    // Enable depth test
    // ignore this line, it allows us to keep the distance value after we proejct each object to a 2d canvas.
    glEnable(GL_DEPTH_TEST);
    
    // This is our render loop. As long as our window remains open (ESC is not pressed), we'll continue to render things.
    while(!glfwWindowShouldClose(window))
    {
        
        // Clear the entire buffer with our green color (sets the background to be green).
        glClearBufferfv(GL_COLOR , 0, clear_color);
        glClearBufferfv(GL_DEPTH , 0, clear_depth);
        
        
        // update the virtual camera
        // ignore this line since we did not introduced cameras.
        updateCamera();
        
        
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //// This generate the object
        // Enable the shader program
        glUseProgram(program);
        
        // this changes the camera location
        glUniformMatrix4fv(viewMatrixLocation, 1, GL_FALSE, &viewMatrix[0][0]); // send the view matrix to our shader
        
        // This moves the model to the right
        modelMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(2.0f, 0.0f, 0.0f));
        glUniformMatrix4fv(modelMatrixLocation, 1, GL_FALSE, &modelMatrix[0][0]); // Send our model matrix to the shader
        
        renderTriangleStripModel();
        
        // This moves the model to the left
        modelMatrix = glm::translate(glm::mat4(1.0f), glm::vec3(-2.0f, -0.0f, 0.0f));
        glUniformMatrix4fv(modelMatrixLocation, 1, GL_FALSE, &modelMatrix[0][0]); // Send our model matrix to the shader
        
        renderMyModel();
        
        
        glUseProgram(0);
        //// This generate the object
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        
        
        // Swap the buffers so that what we drew will appear on the screen.
        glfwSwapBuffers(window);
        glfwPollEvents();
        
    }
    
    // Program clean up when the window gets closed.
    glDeleteVertexArrays(2, vaoID);
    glDeleteProgram(program);
}

