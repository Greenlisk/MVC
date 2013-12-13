#ifndef DIRECTIONALPOINT_H
#define DIRECTIONALPOINT_H

//#ifndef GEO_Position_Type
//#typedef float GEO_Position_Type;
//#typedef float Angle_Type;
//#endif

class DirectionalPoint
{
private:
    float x;
    float y;
    float angle;
public:
    DirectionalPoint(int x, int y, int angle)
    {
        setX((float)x);
        setY((float)y);
        setAngle((float)angle);

    }

    void setX(float x)                  {   this->x = x;            }
    float getX()                        {   return this->x;         }

    void setY(float y)                  {   this->y = y;            }
    float getY()                        {   return this->y;         }

    void setAngle(float angle)          {   this->angle = angle;    }
    float getAngle()                    {   return this->angle;     }
};

#endif // DIRECTIONALPOINT_H

