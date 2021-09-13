Mat scr_gray;
cvtColor(img, src_gray, COLOR_RGB2GRAY);
blur(scr_gray, scr_gray, Size(3, 3));

double otsu_thresh_val = threshold(scr_gray, _img, 0, 255, THRESH_BINARY | THRESH_OTSU);
double high_thresh_val = otsu_thresh_val, lower_thresh_val = otsu_thresh_val * 0.5;
cout << otsu_thresh_val;
Canny(src_gray, canny_output, lower_thresh_val, high_thresh_val; 3);
char* sourse_gray_window = "Серое изображение";
namedWindow(sourse_gray_window, WINDOW_AUTOSIZE);
imshow(sourse_gray_window, canny_output);
imwrite("canny_output.jpg", canny_output)