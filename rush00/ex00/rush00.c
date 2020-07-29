/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcinthia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 20:55:19 by tcinthia          #+#    #+#             */
/*   Updated: 2020/07/21 21:05:03 by tcinthia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char param, int count);	//в этой строке мы объявляем прототив функции путчар, которая занимается тем что рисует те символы, которые мы попросим
void	put_begin(int x);					//тут мы объявляем три функции, которые будут использоваться в нашем алгоритме в рамках этого файла, см стр38
void	put_middle(int x);
void	put_end(int x);
											//само задание заключалось в том, чтобы при открытии ./a.out в терминале рисовался прямоугольник из тех символов, которые хочет школа21
void	rush(int x, int y)					//ну тут понятно, описывается сама функция раш из задания раш00, первый аргумент говорит какой ширины должен быть наш прямоугольник,																														 второй аргумент говорит какой высоты будет наш прямоугольник
{
	int height;								//объявляем переменную, которая будет характеризовать высоту нашего прямоугольника (количество строк между первой и последней)																 она нужна для того чтобы пространство внутри прямоугольника было правильной высоты

	if ((y > 0) && (x > 0))					//этим if мы проверяем существует ли вообще прямоугольник с такими параметрами, который надо нарисовать
	{
		put_begin(x);						//если прямоугольник действительно больше чем 0 символов в длину и ширину, то сработает первая функция нашего алгоритма																		 и нарисует всю первую линию символов (параметр х здесь сообщит функции какой ширины должна быть линия)
	}
	height = 1;								//с этого момента мы начинаем работать с тем, что рисуется между первой и последней линией прямоугольника - по сути рисуются																 вертикальные линии и пустое пространство между ними (при помощи второй функции нашего алгоритма)
	while ((height < y - 1) && (x > 0))		//пока наша переменна для высоты меньше чем высота требуемого прямоугольника (при условии что ширина строки составляет хотя бы																 1 символ) мы последовательно отрисовываем все линии между первой и последней линией прямоугольника
	{
		put_middle(x);						//это вторая функция нашего алгоритма, параметр х сообщает ей какой ширины наш прямоугольник (т.е. сколько символов в строке)
		height++;
	}
	if ((y > 1) && (x > 0))					//здесь задача для этого if заключается в том, чтобы проверить, существует ли вообще последняя строка в требуемом прямоугольнике 															по сути - если высота прямоугольника должна составлять больше чем 1 символ и по ширине он хотя бы 1 символ, то мы рисуем нижнюю линию
	{
		put_end(x);							//это третья функция нашего алгоритма, параметр х сообщает ей какой ширины наш прямоугольник
	}
}

void	put_begin(int x)					//а тут мы начинаем описывать функции из нашего алгоритма
{
	ft_putchar('o', 1);						//рисуем первый символ в линии
	ft_putchar('-', x - 2);					//рисуем символ '-' между первым и последним символом в линии
	if (x > 1)
		ft_putchar('o', 1);					//также если существует последний символ, рисуем его
	ft_putchar('\n', 1);					//переходим на следующую строку
}

void	put_middle(int x)					//вторая функция из нашего алгоритма
{
	ft_putchar('|', 1);						//логика такая же как в put_begin
	ft_putchar(' ', x - 2);
	if (x > 1)
		ft_putchar('|', 1);
	ft_putchar('\n', 1);
}

void	put_end(int x)						//третья функция нашего алгоритма
{
	ft_putchar('o', 1);						//логика такая же как в put_begin
	ft_putchar('-', x - 2);
	if (x > 1)
		ft_putchar('o', 1);
	ft_putchar('\n', 1);
}
