
/**
	\file old_math.h Заголовочный файл содержит прототипы математических функций. 

	Данная библиотека представлена функциями для выполнения математических операций.
*/

#ifndef OSC_MATH_H_SENTRY 
#define OSC_MATH_H_SENTRY

/**
	\brief Вычисляет синус

	\param [in] a - угол в радианах

	\return Синус угла *a*.


	\code{c}
	float angle_in_rad = 13.43f;

	float sin_of_angle = osc_sinf(angle_in_rad);
	\endcode

	\warning Значение угла должно быть в радианах, а не градусах
*/

float osc_sinf(float a);

#endif /* OSC_MATH_H_SENTRY */
