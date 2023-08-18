#include <GL/glut.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int posx = 0;
int m;
int i;
void drawShapes();
int flag = 0;
bool isDay = true;

// Menu option IDs
constexpr int MENU_DAY = 1;
constexpr int MENU_NIGHT = 2;
constexpr int MENU_EXIT = 3;
char s[20] = "PRESS S TO START";
char s1[100] = "Maximize window for better view----->>";
char s2[100] = "JSS Academy Of Technical Education";
char s3[150] = "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
char s4[20] = "A Mini Project On:-";
char s5[50] = "PORT VIEW";
char s6[200] = "Created By- Aman Singh(1JS20CS022) & Badal Kumar(1JS20CS041)";
char s7[200] = "Prepared Under The Guidance of: Ms kv Shanthala";
char s8[50] = "";
char s9[200] = "";

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);	// Set display window colour to white

    glMatrixMode(GL_PROJECTION);		// Set projection parameters
    gluOrtho2D(0.0, 85.0, 0.0, 82.0);

}

void keys(unsigned char key, int x, int y)
{

    if (key == 's')
        flag = 1;
    else if (key == 'q')
        flag = 0;
    else {
        drawShapes();
    };
}

void line_drawing(float a, float b, float c, float d)
{
    // Draw an outlined triangle
    glBegin(GL_LINES);

    glVertex2f(a, b);
    glVertex2f(c, d);


    glEnd();
}

void quads(float a, float b, float c, float d, float e, float f, float g, float h) {

    glBegin(GL_QUADS); //Begin quadrilateral coordinates

    //Trapezoid
    glVertex2f(a, b);
    glVertex2f(c, d);
    glVertex2f(e, f);
    glVertex2f(g, h);

    glEnd(); //End quadrilateral coordinates


}

void triangle(float a, float b, float c, float d, float e, float f) {
    glBegin(GL_TRIANGLES);
    //Triangle
    glVertex2f(a, b);
    glVertex2f(c, d);
    glVertex2f(e, f);

    glEnd();//End triangle coordinates

}

void pentagon(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r)
{
    glBegin(GL_TRIANGLES); //Begin triangle coordinates

    //Pentagon
    glVertex2i(a, b);
    glVertex2i(c, d);
    glVertex2i(e, f);

    glVertex2i(g, h);
    glVertex2i(i, j);
    glVertex2i(k, l);

    glVertex2i(m, n);
    glVertex2i(o, p);
    glVertex2i(q, r);

    glEnd();//End triangle coordinates
}

void river()
{
    glColor3f(0.04, 0.5, 0.95);
    glBegin(GL_POLYGON);

    glVertex3i(14, 0, 0);
    glVertex3i(12, 13, 0);
    glVertex3i(50, 13, 0);
    glVertex3i(49, 0, 0);
    glEnd();
}

void boat()
{
    quads(18.0, 20.0, 18.0, 24.0, 20.0, 24.0, 20.0, 20.0);
    quads(16.4, 16.0, 16.4, 24.0, 18.0, 24.0, 18.0, 16.0);
    glColor3f(0, 0, 0);
    quads(17.5, 24.0, 17.5, 28.0, 19.0, 28.0, 19.0, 24.0);
    glColor3f(1, 0.02, 0.25);
    quads(20.5, 20.0, 20.5, 22.0, 26.0, 22.0, 26.0, 20.0);


    glColor3f(0.05, 0.02, 0.01);
    glBegin(GL_POLYGON);


    glVertex3i(19, 12, 0);
    glVertex3i(16, 16, 0);
    glVertex3i(30, 16, 0);
    glVertex3i(26, 12, 0);
    glEnd();
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);


    glVertex3i(18, 16, 0);
    glVertex3i(18, 20, 0);
    glVertex3i(28, 20, 0);
    glVertex3i(28, 16, 0);
    glEnd();
    glColor3f(1, 0.7, 0.25);
    glBegin(GL_TRIANGLES);

    glVertex3i(28, 16, 0);
    glVertex3i(28, 20, 0);
    glVertex3i(30, 16, 0);

    glEnd();
}

void update(int value) {

    if (posx >= 22)
    {
        posx = 0;
    }
    else {
        posx++;
    }
    glutPostRedisplay();
    glutTimerFunc(250, update, 0);
}

void processMenu(int option) {
    switch (option) {
    case MENU_DAY:
        isDay = true;
        break;
    case MENU_NIGHT:
        isDay = false;
        break;
    case MENU_EXIT:
        exit(0);
        break;
    }

    // Redraw the scene
    glutPostRedisplay();
}

void tree()
{
    ///tree1
    glColor3f(0.6, 0.08, 0.12);

    glBegin(GL_POLYGON);

    glVertex3i(5, 12, 0);
    glVertex3i(7, 12, 0);


    glVertex3i(7, 30, 0);
    glVertex3i(5, 30, 0);

    glEnd();

    glColor3f(0.0, 0.5, 0.0);

    glBegin(GL_POLYGON);

    glVertex3i(1, 30, 0);
    glVertex3i(11, 30, 0);


    glVertex3i(6, 40, 0);

    glEnd();
    glBegin(GL_POLYGON);


    glVertex3i(1, 35, 0);
    glVertex3i(10, 35, 0);


    glVertex3i(6, 45, 0);



    glEnd();

}

void drawShapes(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    if (flag == 0)
    {

        glRasterPos3f(20, 70, 0);
        for (i = 0;s[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s[i]);
        glRasterPos3f(20, 60, 0);
        for (i = 0;s1[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s1[i]);
        glRasterPos3f(20, 50, 0);
        for (i = 0;s2[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s2[i]);
        glRasterPos3f(20, 45, 0);
        for (i = 0;s3[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s3[i]);
        glRasterPos3f(20, 35, 0);
        for (i = 0;s4[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s4[i]);
        glRasterPos3f(20, 30, 0);
        for (i = 0;s5[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s5[i]);
        glRasterPos3f(20, 25, 0);
        for (i = 0;s6[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s6[i]);
        glColor3f(0.0, 0.0, 0.0);
        glRasterPos3f(20, 20, 0);
        for (i = 0;s7[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s7[i]);
        glRasterPos3f(250, 100, 0);
        for (i = 0;s8[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s8[i]);
        glRasterPos3f(29, 40, 0);
        for (i = 0;s9[i] != '\0';i++)
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, s9[i]);




    }
    else {


        // glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
        glColor3f(0.0f, 1.0f, 0.0f);//Green



        quads(0.0, 0.0, 0.0, 13.0, 90.0, 13.0, 90.0, 0.0); //


        //glColor3f(0.0f, 0.4f, 1.0f);
        //sky
        glColor3f(0.2, 0.2, 0.2);


        //glColor3f(0.0f, 1.0f, 0.0f);//Green
        //quads(4,11.0,4.0,32.0,6.0,32.0,6.0,11.0);

         //Set colour to black
        glColor3f(0.0, 0.0, 0.0);
        //Adjust the point size
        glPointSize(5.0);

        //Set colour to red
        glColor3f(0.0, 0.0, 0.0);

        line_drawing(69.0, 6.0, 69.0, 16.0);
        line_drawing(69.0, 16.0, 77.0, 16.0);
        line_drawing(77.0, 16.0, 77.0, 6.0);
        line_drawing(69.0, 6.0, 77.0, 6.0);
        quads(70.5, 10.0, 70.5, 12.0, 71.5, 12.0, 71.5, 10.0);
        glColor3f(0.8, 0.4, 1.0);
        quads(71.5, 10.0, 71.5, 12.0, 72.0, 12.0, 72.0, 10.0);
        glColor3f(0.6, 0.8, 1.0);
        quads(72.0, 10.0, 72.0, 12.0, 73.0, 12.0, 73.0, 10.0);
        line_drawing(75.0, 6.0, 75.0, 10.0);
        line_drawing(75.0, 10.0, 76.7, 10.0);
        line_drawing(76.7, 10.0, 76.7, 6.0);
        quads(75.5, 9.7, 76.5, 9.7, 76.5, 6.5, 75.5, 6.5);

        line_drawing(69.0, 16.0, 69.0, 28.0);
        line_drawing(69.0, 28.0, 77.0, 28.0);
        line_drawing(77.0, 28.0, 77.0, 16.0);
        quads(70.0, 20.0, 70.0, 22.0, 72.0, 22.0, 72.0, 20.0);
        quads(73.0, 20.0, 73.0, 22.0, 75.0, 22.0, 75.0, 20.0);
        glColor3f(1.0, 0.50, 0.4);
        quads(77.0, 6.0, 77.0, 38.0, 82.0, 38.0, 82.0, 6.0);
        glColor3f(0.50, 1.0, 0.0);
        triangle(77.0, 38.0, 79.0, 48.0, 82.0, 38.0);
        glColor3f(1.0, 0.60, 0.0);
        //tr

       // glColor3f(0.0, 0.60, 1.0);
        glColor4f(1.0f, 0.2f, 0.1f, 0.0f);//red


        //moi
        line_drawing(63.0, 6.0, 68.0, 28.0);
        line_drawing(64.0, 6.0, 69.0, 28.0);



        line_drawing(63.3, 8.0, 64.6, 8.0);
        line_drawing(64.0, 10.0, 64.9, 10.0);
        line_drawing(64.3, 12.0, 65.3, 12.0);
        line_drawing(64.9, 14.0, 65.9, 14.0);
        line_drawing(65.2, 16.0, 66.2, 16.0);
        line_drawing(65.8, 18.0, 66.8, 18.0);
        line_drawing(66.1, 20.0, 67.2, 20.0);
        line_drawing(66.4, 22.0, 67.6, 22.0);
        line_drawing(67.0, 24.0, 68.0, 24.0);
        line_drawing(67.4, 26.0, 68.5, 26.0);
        line_drawing(48.0, 6.0, 49.3, 7.9);

        glColor3f(1.0f, 0.0f, 1.0f);
        triangle(55.0, 25.0, 58.0, 35.0, 61.0, 25.0);
        glColor3f(0.05, 0.5, 0.5);

        quads(55.0, 12.0, 55.0, 25.0, 61.0, 25.0, 61.0, 12.0);

        tree();
        river();
        glPushMatrix();
        glTranslatef(20.0, 60.0, 0.0f);
        glRotatef(1.8, 0.0f, 0.0f, 1.0f);
        glScalef(16.0f, 16.0f, 1.0f);
        if (isDay) {
            glClearColor(0.5f, 0.7f, 1.0f, 1.0f); // Light blue color for day sky
            glColor3f(1.0f, 1.0f, 1.0f); // White color for day objects
            // Draw day objects
            quads(0.0, 12.0, 0.0, 85.0, 85.0, 85.0, 85.0, 12.0);

            // Draw the sun
            glColor3f(1.0f, 1.0f, 0.0f);
            glBegin(GL_POLYGON);
            for (int i = 0; i < 360; i++) {
                float degInRad = i * 3.14159 / 180;
                glVertex2f(cos(degInRad) * 0.2f, sin(degInRad) * 0.2f);
            }
            glEnd();
        }
        else {
            glClearColor(0.0f, 0.0f, 0.2f, 1.0f); // Dark blue color for night sky
            glColor3f(1.0f, 1.0f, 1.0f); // White color for night objects
            // Draw night objects
            quads(0.0, 12.0, 0.0, 85.0, 85.0, 85.0, 85.0, 12.0);

            // Draw the moon
            glColor3f(1.0f, 1.0f, 1.0f);
            glBegin(GL_POLYGON);
            for (int i = 0; i < 360; i++) {
                float degInRad = i * 3.14159 / 180;
                glVertex2f(cos(degInRad) * 0.2f, sin(degInRad) * 0.2f);
            }
            glEnd();
        }

        glutSwapBuffers();


        glutSwapBuffers();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(0.2f, -0.02f, -5.0f);
        glBegin(GL_POLYGON);
        glColor3f(0.0f, 0.5f, 0.5f);
        glVertex3f(1.0f, 0.7f, -5.0f);
        glVertex3f(1.5f, 1.0f, -5.0f);
        glVertex3f(0.7f, 1.5f, -5.0f);
        glVertex3f(0.0f, 2.0f, -5.0f);
        glVertex3f(-0.7f, 1.5f, -5.0f);
        glVertex3f(-1.4f, 1.6f, -5.0f);
        glVertex3f(-1.7f, 1.0f, -5.0f);
        glVertex3f(-1.5f, 0.7f, -5.0f);
        glVertex3f(-1.0f, 0.5f, -5.0f);

        glEnd();

        glPopMatrix();


        glPushMatrix();
        glTranslatef(posx, -1, -1);
        boat();
        glPopMatrix();
    }

    glFlush();	// Process all OpenGL routines
}

void createMenu() {
    int menuId = glutCreateMenu(processMenu);
    glutAddMenuEntry("Day", MENU_DAY);
    glutAddMenuEntry("Night", MENU_NIGHT);
    glutAddMenuEntry("Exit", MENU_EXIT);

    glutAttachMenu(GLUT_RIGHT_BUTTON);
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);						     // Initalise GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);	     // Set display mode
    glutInitWindowPosition(50, 100);				// Set window position
    glutInitWindowSize(600, 600);					// Set window size
    glutCreateWindow("Port View");
    init();		// Create display window
    glutAttachMenu(GLUT_RIGHT_BUTTON);
    glutDisplayFunc(drawShapes);
    glutTimerFunc(0, update, 0);
    glutKeyboardFunc(keys);
    createMenu();	// Send graphics to display window
    glutMainLoop();					// Display everything and wait

    return 0;
}
