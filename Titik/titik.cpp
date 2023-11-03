#include <GL/glut.h>

// Fungsi untuk menggambar titik
void drawPoint() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set latar belakang putih
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4);
    glColor3f(0.0f, 0.0f, 0.0f); // Set warna hitam

    glBegin(GL_POINTS);
    glVertex2f(0.0, 0.0); // Koordinat titik
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(450, 450); // Ukuran jendela
    glutCreateWindow("Titik Hitam");

    glutDisplayFunc(drawPoint);

    glutMainLoop();

    return 0;
}

