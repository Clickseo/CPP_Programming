#pragma once
// 좌표(Point) 클래스 정의
class  Point {
public:
    Point(int x = 0, int y = 0);
    Point(const Point& p);

    int		getX(void) const;
    int		getY(void) const;
    void	setX(int x = 0);
    void	setY(int y = 0);
    void	showPoint(void);

private:
    int	x_;
    int	y_;
};

// 사각형(Rectangle) 클래스 정의
class  Rectangle {
public:
    Rectangle(int left = 0, int top = 0, int right = 0, int bottom = 0);
    Rectangle(const Point& topLeft, const Point& bottomRight);

    Point	getTopLeft(void) const;
    Point	getBottomRight(void) const;
    void	getRectangle(int& left, int& top, int& right, int& bottom);
    void	setTopLeft(const Point& topLeft);
    void	setBottomRight(const Point& bottomRight);
    void	setRectangle(int left, int top, int right, int bottom);

    int		getWidth(void);
    int		getHeight(void);
    int		getArea(void);
    void	showRectangle(void);

private:
    Point	topLeft_;
    Point	bottomRight_;
};
