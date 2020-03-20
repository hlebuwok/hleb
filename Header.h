#pragma once
#include "Lvl1.h"
//-----------------------------------------------------------------------------------
// методы для определения положения стены слева/справа/снзу/сверху

System::Boolean CheckBorderRight(System::Windows::Forms::PictureBox^  moving, System::Windows::Forms::PictureBox^ border)
{
	// есть ли ОДНА КОНКРЕТНАЯ стена срава
	if (moving->Location.X + moving->Size.Width == border->Location.X)
	{
		if ((border->Location.Y <= moving->Location.Y)&(border->Location.Y + border->Size.Height >= moving->Location.Y + moving->Size.Height))
			return false;
		else return true;
	}
	else return true;
}
System::Boolean CheckBorderLeft(System::Windows::Forms::PictureBox^  moving, System::Windows::Forms::PictureBox^ border)
{
	// есть ли ОДНА КОНКРЕТНАЯ стена слева
	if (moving->Location.X == border->Location.X + border->Size.Width)
	{
		if ((border->Location.Y <= moving->Location.Y)&(border->Location.Y + border->Size.Height >= moving->Location.Y + moving->Size.Height))
			return false;
		else return true;
	}
	else return true;
}
System::Boolean CheckBorderDown(System::Windows::Forms::PictureBox^  moving, System::Windows::Forms::PictureBox^ border)
{
	// есть ли ОДНА КОНКРЕТНАЯ стена снизу
	if (moving->Location.Y + moving->Size.Height == border->Location.Y)
	{
		if ((border->Location.X <= moving->Location.X)&(border->Location.X + border->Size.Width >= moving->Location.X + moving->Size.Width))
			return false;
		else return true;
	}
	else return true;
}
System::Boolean CheckBorderUp(System::Windows::Forms::PictureBox^  moving, System::Windows::Forms::PictureBox^ border)
{
	// есть ли ОДНА КОНКРЕТНАЯ стена снизу
	if (moving->Location.Y == border->Location.Y + border->Size.Height)
	{
		if ((border->Location.X <= moving->Location.X)&(border->Location.X + border->Size.Width >= moving->Location.X + moving->Size.Width))
			return false;
		else return true;
	}
	else return true;
}
//-----------------------------------------------------------------------------------
System::Boolean CheckOnMark(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
{
	// первое на месте второго
	if ((first->Location.X == second->Location.X)& (first->Location.Y == second->Location.Y))
		return true;
	else return false;
}
//-----------------------------------------------------------------------------------
// ВСПОМОГАТЕЬЛНЫЕ методы для опредеения местопоожения второго относитеьно первого
System::Boolean IsOnRight(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
{
	// ВТОРОЕ справа от первого 
	if (first->Location.X + first->Size.Width == second->Location.X)
	{
		if (first->Location.Y == second->Location.Y)
		{
			return true;
		}
		else return false;
	}
	else return false;
}
System::Boolean IsOnLeft(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
{
	// ВТОРОЕ слева от первого
	if (first->Location.X == second->Location.X + second->Size.Width)
	{
		if (first->Location.Y == second->Location.Y)
		{
			return true;
		}
		else return false;
	}
	else return false;
}
System::Boolean IsOnDown(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
{
	// ВТОРОЕ снизу первого
	if (first->Location.Y + first->Size.Height == second->Location.Y)
	{
		if (first->Location.X == second->Location.X)
		{
			return true;
		}
		else return false;
	}
	else return false;
}
System::Boolean IsOnUp(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
{
	// ВТОРОЕ сверху первого
	if (first->Location.Y == second->Location.Y + second->Size.Height)
	{
		if (first->Location.X == second->Location.X)
		{
			return true;
		}
		else return false;
	}
	else return false;
}
//-----------------------------------------------------------------------------------
// МЕТОДЫ дя опредеения местопоожения второго относитеьно первого (применимо к человеку и коробке)
//System::Boolean CheckOnRight(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
//{
//	// ВТОРОЕ справа от первого 
//	if (IsOnRight0(first, second))
//	{
//		if (!IsOnDown0(first, second))
//		{
//			if (!IsOnUp0(first, second))
//				return true;
//			else return false;
//		}
//		else return false;
//	}
//	else return false;
//}
//System::Boolean CheckOnLeft(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
//{
//	// ВТОРОЕ слева от первого 
//	if (IsOnLeft0(first, second))
//	{
//		if (!IsOnDown0(first, second))
//		{
//			if (!IsOnUp0(first, second))
//				return true;
//			else return false;
//		}
//		else return false;
//	}
//	else return false;
//}
//System::Boolean CheckOnDown(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
//{
//	// ВТОРОЕ снизу от первого 
//	if (IsOnDown0(first, second))
//	{
//		if (!IsOnRight0(first, second))
//		{
//			if (!IsOnLeft0(first, second))
//				return true;
//			else return false;
//		}
//		else return false;
//	}
//	else return false;
//}
//System::Boolean CheckOnUp(System::Windows::Forms::PictureBox^  first, System::Windows::Forms::PictureBox^ second)
//{
//	// ВТОРОЕ сверху от первого 
//	if (IsOnUp0(first, second))
//	{
//		if (!IsOnRight0(first, second))
//		{
//			if (!IsOnLeft0(first, second))
//			{
//				return true;
//			}
//			else return false;
//		}
//		else return false;
//	}
//	else return false;
//}
//-----------------------------------------------------------------------------------
			 // Движение объекта (без проверок)
System::Drawing::Point Move1(System::Windows::Forms::PictureBox^  moving, char c)
{
	System::Drawing::Point Point;
	switch (c)
	{
	case 'r':
	{
		Point = System::Drawing::Point(moving->Location.X + moving->Size.Width, moving->Location.Y);
		return Point;
	}
	case 'l':
	{
		Point = System::Drawing::Point(moving->Location.X - moving->Size.Width, moving->Location.Y);
		return Point;
	}
	case 'u':
	{
		Point = System::Drawing::Point(moving->Location.X, moving->Location.Y - moving->Size.Height);
		return Point;
	}
	case 'd':
	{
		Point = System::Drawing::Point(moving->Location.X, moving->Location.Y + moving->Size.Height);
		return Point;
	}
	}

}