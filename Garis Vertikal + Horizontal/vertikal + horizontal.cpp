#include <GL/glut.h>

// Fungsi untuk menggambar garis vertikal dan horizontal
void drawLines() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set latar belakang putih
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.0f, 0.0f); // Set warna hitam

    glBegin(GL_LINES);
    // Garis horizontal
    glVertex2f(-0.6, 0.0); // Titik awal
    glVertex2f(0.6, 0.0);  // Titik akhir

    // Garis vertikal
    glVertex2f(0.0, -0.6); // Titik awal
    glVertex2f(0.0, 0.6);  // Titik akhir
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(450, 450); // Ukuran jendela
    glutCreateWindow("Garis Vertikal dan Horizontal");

    glutDisplayFunc(drawLines);

    glutMainLoop();

    return 0;
}

