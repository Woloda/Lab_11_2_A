#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_11.2(A)/Lab_11.2(A).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab112A
{
	TEST_CLASS(UnitTestLab112A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			student s;

			fstream file_s("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(A)\\Lab_11.2(A)\\test", ios::binary);

			s.prizv = "sdasd";
			s.kurs = 3;
			s.specialization = (Special)2;
			s.phisuka = 4;
			s.matematic = 5;
			s.informatic = 4;

				file_s.write((char*)&s, sizeof(student));
			file_s.close();

			file_s.open("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(A)\\Lab_11.2(A)\\test", ios::binary);

			s.prizv = "www";
			s.kurs = 2;
			s.specialization = (Special)3;
			s.phisuka = 2;
			s.matematic = 3;
			s.informatic = 4;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();


			file_s,open("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(A)\\Lab_11.2(A)\\test", ios::binary);

			s.prizv = "sfgdf";
			s.kurs = 1;
			s.specialization = (Special)4;
			s.phisuka = 4;
			s.matematic = 4;
			s.informatic = 4;

			file_s.write((char*)&s, sizeof(student));
			file_s.close();
			
			ifstream file_ll("E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_11.2(A)\\Lab_11.2(A)\\test", ios::binary);
			double l = find_prozent(s, 3, file_ll);
			file_ll.close();

			Assert::AreEqual(l, 67.0);
		}
	};
}
